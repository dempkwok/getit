#ifndef HTTPTASK_H
#define HTTPTASK_H
#include "task.h"
#include <QUrl>
#include <QHttp>
#include <QFile>
#include "httpthread.h"
#include "QMutex"
#include "QList"

class HttpTask : public task
{
    Q_OBJECT
public:
    HttpTask(QUrl u,QDir d,short threadCount);
    void getUrl();
    virtual void run();
    virtual void doDownload();
private:
    QHttp *http;
    short threadCount;
    short threaddonecount;
    QList<HttpThread *> ThreadList;
    QMutex mutex;
public slots:
    virtual void progressChanged(long done);
    virtual bool startTask();
    virtual bool pauseTask();
    virtual void downloadFinished(bool error);
    void threadfinished(bool error);
    void getheader(QHttpResponseHeader fileHeader);
};

#endif // HTTPTASK_H
