#include "ed2ktask.h"

ED2KTask::ED2KTask(QUrl u,QDir d,bool isnow):task(d)
{
}
void ED2KTask::downloadProgress(int done,int total)
{
    return;
}
void ED2KTask::downloadFinished(bool error)
{
    return;
}
bool ED2KTask::startTask()
{
    return true;
}
bool ED2KTask::pauseTask()
{
    return true;
}
