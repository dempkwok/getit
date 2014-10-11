#include "ftpthread.h"
#include <QMessageBox>

FtpThread::FtpThread(short ThreadIndex, long startByte, long size, QUrl url, QFile *file)
{
    this->ThreadIndex=ThreadIndex;
    this->startByte=startByte;
    this->size=size;
    this->url=url;
    this->file=file;
    this->doneBytes=0;
    ftp = new QFtp(this);
    connect(ftp,SIGNAL(readyRead()),this,SLOT(writeData()));
    timer =new QTimer(this);
    connect( timer, SIGNAL(timeout()),this,SLOT(isDone()) );
    timer->start(1000);
}

void FtpThread::run()
{
    if (!url.isValid() || url.scheme().toLower() != QLatin1String("ftp"))
    {
        ftp->connectToHost(url.host(), 21);
        ftp->login();
    }
    else
    {
        ftp->connectToHost(url.host(), url.port(21));
        if (!url.userName().isEmpty())
            ftp->login(QUrl::fromPercentEncoding(url.userName().toLatin1()), url.password());
        else
        {
            ftp->login();
        }
        ftp->rawCommand(QString("TYPE I"));
        ftp->rawCommand(QString("REST ")+QString::number(startByte));
        ftp->get(url.path());
    }
    this->exec();
}
void FtpThread::writeData()
{
    QByteArray tempBytes(ftp->readAll());
    lock.lockForWrite();
    file->seek(this->startByte+this->doneBytes);
    file->write(tempBytes);
    lock.unlock();
    this->doneBytes += tempBytes.size();
    emit progressChanged(tempBytes.size());
}
void FtpThread::downloadFinished(bool error)
{
    ftp->close();
    ftp->abort();
    emit finish(error);
    this->quit();
}
void FtpThread::isDone()
{
    if(doneBytes>=this->size)
    {
        downloadFinished(false);
    }
}
