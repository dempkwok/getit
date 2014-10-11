#include "flvtask.h"

FLVTask::FLVTask(QUrl u,QDir d,bool isnow):HttpTask(u,d,isnow)
{
}
void FLVTask::downloadProgress(int done,int total)
{
    return;
}
void FLVTask::downloadFinished(bool error)
{
    return;
}
bool FLVTask::startTask()
{
    return true;
}
bool FLVTask::pauseTask()
{
    return true;
}
