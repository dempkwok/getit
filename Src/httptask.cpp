#include "httptask.h"
#include "QMessageBox"
#include "QHttpResponseHeader"

HttpTask::HttpTask(QUrl u,QDir d,short threadCount):task(d)
{
    this->url=u;
    QString path = url.path();
    QString name = QFileInfo(path).fileName();
    this->threadCount=threadCount;
    this->state=READY;
    this->taskName=name;
    this->threaddonecount=0;
    QDir::setCurrent(saveDir.path());
    file = new QFile(QFileInfo(url.path()).fileName());
    file->open(QIODevice::ReadWrite);
}
void HttpTask::run()
{
    taskTime->start();
    this->doDownload();
    exec();
}
void HttpTask::doDownload()
{
    http =new QHttp(url.host());
    http->head(url.path());
    connect(http,SIGNAL(responseHeaderReceived(QHttpResponseHeader)),this,SLOT(getheader(QHttpResponseHeader)));
}
void HttpTask::downloadFinished(bool error)
{
    file->close();
    QMessageBox m;
    m.setText(this->file->fileName()+"   finished£¡");
    m.exec();
    this->quit();
}
bool HttpTask::startTask()
{
    return true;
}
bool HttpTask::pauseTask()
{
    return true;
}
void HttpTask::getheader(QHttpResponseHeader fileHeader)
{
    total=fileHeader.value("Content-Length").toLong();
    long begin = 0;
    long step =0;
    if(0==total/threadCount)
        step=this->total/threadCount;
    else
        step = (long)(total / (threadCount-1));
    begin=-step;
    long end = 0;
    for (short ThreadIndex = 1; ThreadIndex <= threadCount; ThreadIndex++)
    {
          end += step;
          begin +=step;
          if (end >= total)
                end = total;
          HttpThread *thread=new HttpThread(ThreadIndex,begin,end-1,url,file);
          ThreadList.append(thread);
          connect(thread,SIGNAL(progressChanged(long)),this,SLOT(progressChanged(long)));
          connect(thread,SIGNAL(finish(bool)),this,SLOT(threadfinished(bool)));
          ThreadList.at(ThreadIndex-1)->start();
    }
}

void HttpTask::progressChanged(long done)
{
    mutex.lock();
    downloaded+=done;
    mutex.unlock();
}
void HttpTask::threadfinished(bool error)
{
    if(error==false)
        this->threaddonecount++;
    if(this->threadCount==this->threaddonecount)
    {
        this->downloadFinished(error);
    }
}
