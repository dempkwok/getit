#ifndef HTTPTHREAD_H
#define HTTPTHREAD_H

#include <QThread>
#include <QHttp>
#include <QUrl>
#include <QFile>
#include "QReadWriteLock"


class HttpThread : public QThread
{
    Q_OBJECT
public:
    HttpThread(short ThreadIndex,long startByte,long endByte,QUrl url,QFile *file);
    QUrl url;
    QHttp http;
    QFile *file;
    QReadWriteLock lock;
    short ThreadIndex;
    long startByte;
    long endByte;
    long doneBytes;
    long totalBytes;
    virtual void run();
signals:
    void progressChanged(long);
    void finish(bool);
public slots:
    void writeToFile(QHttpResponseHeader header);
    void finished(bool error);
};

#endif // HTTPTHREAD_H
