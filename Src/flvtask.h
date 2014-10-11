#ifndef FLVTASK_H
#define FLVTASK_H
#include "httptask.h"
#include <QUrl>
#include <QHttp>

class FLVTask : public HttpTask
{
    Q_OBJECT
public:
    FLVTask(QUrl u,QDir d,bool isnow);
private:
    QUrl url;
public slots:
    virtual void downloadProgress(int done,int total);
    virtual bool startTask();
    virtual bool pauseTask();
    virtual void downloadFinished(bool error);
};

#endif // FLVTASK_H
