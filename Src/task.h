#ifndef TASK_H
#define TASK_H

#include <QThread>
#include <QDir>
#include <QUrl>
#include <QTime>
#include <QFile>

#define READY 0
#define RUNNING 1
#define STOPPED 2
#define FINISHED 3
#define ERROR 4

class task : public QThread
{
    Q_OBJECT
public:
    task(QDir dir);
    QString getName();
    int getState();
    virtual void run();
    virtual void doDownload();
    QDir saveDir;
    int state;
    QString taskName;
    QUrl url;
    long total;
    QFile *file;
    long downloaded;
    QTime *taskTime;
private:
    int index;
signals:
    void progressChanged(int);
    void downloadedChanged(QString);
    void speedChanged(QString);
    void finished();
    void timeUsedChanged(QString);
    void timeRemainingChanged(QString);
public slots:
    virtual void downloadProgress(int done,int total);
    virtual bool startTask();
    virtual bool pauseTask();
    virtual void downloadFinished(bool error);
};

#endif // TASK_H
