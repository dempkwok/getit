#ifndef FTPTHREAD_H
#define FTPTHREAD_H

#include <QThread>
#include <QUrl>
#include <QFile>
#include <QReadWriteLock>
#include <QFtp>
#include <QMutex>
#include <QTimer>

class FtpThread : public QThread
{
    Q_OBJECT
public:
    FtpThread(short ThreadIndex,long startByte,long size,QUrl url,QFile *file);
    QUrl url;
    QFtp *ftp;
    QFile *file;
    QReadWriteLock lock;
    short ThreadIndex;
    long startByte;
    long size;
    long doneBytes;
    QMutex mutex;
    QTimer *timer;
    virtual void run();
signals:
    void progressChanged(long);
    void finish(bool);
public slots:
    void isDone();
    void writeData();
    void downloadFinished(bool error);
};

#endif // FTPTHREAD_H
