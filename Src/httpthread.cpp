#include "httpthread.h"
#include "QHttpRequestHeader"
#include "QMessageBox"
#include "QFileInfo"
#include "QByteArray"

HttpThread::HttpThread(short ThreadIndex,long startByte,long endByte,QUrl url,QFile *file)
{
    this->ThreadIndex=ThreadIndex;
    this->startByte=startByte;
    this->endByte=endByte;
    this->url=url;
    this->file=file;
    this->doneBytes=0;
}
void HttpThread::run()
{
    QHttpRequestHeader header;
    header.setRequest("GET",url.path());
    header.setValue("Range","bytes="+QString::number(startByte)+"-"+QString::number(endByte));
    QString userAgent = "getit/0.1";
    header.setValue("Host", url.host());
    header.setValue("Accept", "*/*");
    header.setValue("User-Agent", userAgent);
    http.setHost(url.host());
    http.request(header);
    connect(&http,SIGNAL(readyRead(QHttpResponseHeader)),this,SLOT(writeToFile(QHttpResponseHeader)));
    connect(&http,SIGNAL(done(bool)),this,SLOT(finished(bool)));
    this->exec();
}
void HttpThread::writeToFile(QHttpResponseHeader header)
{
    /*QMessageBox m;
    m.setText(header.toString());
    m.exec();*/
    this->totalBytes=header.contentLength();
    QByteArray tempBytes(http.readAll());
    lock.lockForWrite();
    file->seek(this->startByte+this->doneBytes);
    file->write(tempBytes);
    lock.unlock();
    this->doneBytes += tempBytes.size();
    emit this->progressChanged(tempBytes.size());
    /*if (downloadThread->threadTaskInfomation.httpRequestFinished)
    {
        http->abort();
        return;
    }
    if (downloadThread->threadTaskInfomation.httpRequestAborted)
    {
        http->abort();
        return;
    }*/
}
/*void HttpThread::downloadProgress(int done, int total)
{
    doneBytes=done;
    totalBytes=total;
    emit progressChanged(done,total);
}*/
void HttpThread::finished(bool error)
{
    //partFile->close();
    emit finish(error);
    /*if(this->ThreadIndex==5)
    {
        QFile *file=new QFile(QFileInfo(url.path()).fileName());
        QFile file1(QFileInfo(url.path()).fileName()+"part"+"1");
        QFile file2(QFileInfo(url.path()).fileName()+"part"+"2");
        QFile file3(QFileInfo(url.path()).fileName()+"part"+"3");
        QFile file4(QFileInfo(url.path()).fileName()+"part"+"4");
        QFile file5(partFile->fileName());
        file->open(QIODevice::WriteOnly);
        file1.open(QIODevice::ReadOnly);
        file2.open(QIODevice::ReadOnly);
        file3.open(QIODevice::ReadOnly);
        file4.open(QIODevice::ReadOnly);
        file5.open(QIODevice::ReadOnly);
        file->write(file1.read(file1.size()));
        QMessageBox mm;
        mm.setText(file3.read(file3.size()));
        mm.exec();
        file->write(file2.read(file2.size()));
        file->write(file3.read(file3.size()));
        file->write(file4.read(file4.size()));
        file->write(file5.read(file5.size()));
        file->close();
        file1.close();
        file2.close();
        file3.close();
        file4.close();
        file5.close();
        QFile::remove(QFileInfo(url.path()).fileName()+".part"+"1");
        QFile::remove(QFileInfo(url.path()).fileName()+".part"+"2");
        QFile::remove(QFileInfo(url.path()).fileName()+".part"+"3");
        QFile::remove(QFileInfo(url.path()).fileName()+".part"+"4");
        QFile::remove(QFileInfo(url.path()).fileName()+".part"+"5");
    }*/
    this->quit();
}
