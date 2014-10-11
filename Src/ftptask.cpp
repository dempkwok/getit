#include "ftptask.h"
#include "QMessageBox"

FtpTask::FtpTask(QUrl u,QDir d,short threadCount): task(d)
{
    this->threadCount=threadCount;
    this->url=u;
    QString path = url.path();
    QString name = QFileInfo(path).fileName();
    this->state=READY;
    this->taskName=name;
    QDir::setCurrent(saveDir.path());
    file=new QFile(name);
    file->open(QIODevice::ReadWrite);
}
void FtpTask::run()
{
    taskTime->start();
    this->doDownload();
    this->exec();
}

void FtpTask::doDownload()
{
    ftp = new QFtp(this);
    connect(ftp, SIGNAL(rawCommandReply(int, const QString &)), this, SLOT(ftpRawCommandReply(int,QString)));
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
        ftp->rawCommand(QString("SIZE %1").arg(url.path()));                 //获得文件大小
    }
}

void FtpTask::progressChanged(long done)
{
    mutex.lock();
    downloaded+=done;
    mutex.unlock();
}

bool FtpTask::startTask()
{
    return true;
}
bool FtpTask::pauseTask()
{
    return true;
}
void FtpTask::ftpRawCommandReply(int replyCode, QString detail)
{
    this->total=detail.toLong();
    QMessageBox m;
    m.setText(detail+"   "+QString::number(replyCode));
    m.exec();
    long begin = 0;
    long step =0;
    if(0==total/threadCount)
        step=this->total/threadCount;
    else
        step = (long)(total / (threadCount-1));
    begin=-step;
    for (short ThreadIndex = 1; ThreadIndex <= threadCount; ThreadIndex++)
    {
          begin +=step;
          if (total<(begin+step))
            step=total-begin;
          FtpThread *thread=new FtpThread(ThreadIndex,begin,step,url,file);
          ThreadList.append(thread);
          connect(thread,SIGNAL(progressChanged(long)),this,SLOT(progressChanged(long)));
          connect(thread,SIGNAL(finish(bool)),this,SLOT(threadFinished(bool)));
          ThreadList.at(ThreadIndex-1)->start();
    }
    /*QMessageBox m;
    m.setText(detail+"    "+QString::number(this->total));
    m.exec();*/
}
void FtpTask::downloadFinished(bool error)
{
    file->close();
    this->quit();
}
void FtpTask::threadFinished(bool error)
{
    if(error==false)
        this->threaddonecount++;
    if(this->threadCount==this->threaddonecount)
    {
        this->downloadFinished(error);
    }
}
