#ifndef ED2KTASK_H
#define ED2KTASK_H
#include "task.h"
#include <QUrl>

class ED2KTask : public task
{
    Q_OBJECT
public:
    ED2KTask(QUrl u,QDir d,bool isnow);
private:
    QUrl url;
public slots:
    virtual void downloadProgress(int done,int total);
    virtual bool startTask();
    virtual bool pauseTask();
    virtual void downloadFinished(bool error);
};

#endif // ED2KTASK_H
