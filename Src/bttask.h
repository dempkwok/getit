#ifndef BTTASK_H
#define BTTASK_H
#include "task.h"
#include <QUrl>
#include <QDir>

class BTTask : public task
{
    Q_OBJECT
public:
    BTTask(QDir d);
    QString btFileName;
    virtual void run();
public slots:
    virtual void downloadProgress(int done,int total);
    virtual bool startTask();
    virtual bool pauseTask();
    virtual void downloadFinished(bool error);
};

#endif // BTTASK_H
