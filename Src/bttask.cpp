#include "bttask.h"
#include "torrentclient.h"
#include <QMessageBox>

BTTask::BTTask(QDir d):task(d)
{
}
void BTTask::run()
{
    TorrentClient *client = new TorrentClient(this);
    client->setDestinationFolder(this->saveDir.absolutePath());
    //client->setDumpedState(resumeState);
    client->start();
    this->exec();
}

void BTTask::downloadProgress(int done,int total)
{
    return;
}
void BTTask::downloadFinished(bool error)
{
    return;
}
bool BTTask::startTask()
{
    return true;
}
bool BTTask::pauseTask()
{
    return true;
}
