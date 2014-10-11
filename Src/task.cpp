#include "task.h"

task::task(QDir dir)
{
    saveDir=dir;
    this->downloaded=0;
    this->total=1;
    taskTime=new QTime(QTime::currentTime());
}

void task::run()
{
    return;
}
void task::doDownload()
{
    return;
}
void task::downloadProgress(int done, int total)
{

}
void task::downloadFinished(bool error)
{

}
bool task::startTask()
{

}

bool task::pauseTask()
{

}


