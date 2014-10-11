#ifndef FTPTASK_H
#define FTPTASK_H
#include "task.h"
#include <QUrl>
#include <QFtp>
#include <QList>
#include "ftpthread.h"
#include "QMutex"

class FtpTask : public task
{
    Q_OBJECT
public:
    FtpTask(QUrl u,QDir d,short threadCount);
    virtual void run();
    virtual void doDownload();
    short threadCount;
    short threaddonecount;
    QList<FtpThread *> ThreadList;
    QMutex mutex;
private:
    QFtp *ftp;
public slots:
    void ftpRawCommandReply(int replyCode,QString detail);
    virtual void progressChanged(long done);
    virtual bool startTask();
    virtual bool pauseTask();
    virtual void downloadFinished(bool error);
    void threadFinished(bool error);
};

#endif // FTPTASK_H
