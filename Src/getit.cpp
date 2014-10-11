#include "getit.h"
#include "ui_getit.h"
#include "newdialog.h"
#include "base64.h"
#include "httptask.h"
#include "ftptask.h"
#include "flvtask.h"
#include "ed2ktask.h"
#include "bttask.h"
#include <QMessageBox>
#include "aboutdialog.h"
#include <QFileDialog>
#include "addtorrentdialog.h"

getit::getit(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::getit)
{
    ui->setupUi(this);
    this->ui->taskTable->setSelectionBehavior(QAbstractItemView::SelectRows);
    this->ui->taskTable->setAutoFillBackground(true);
    timer =new QTimer(this);
    connect( timer, SIGNAL(timeout()),this,SLOT(updateTaskInfo()) );
    timer->start(1000);
    for(int i=0;i<=15;i++)
    {
        this->ui->taskTable->setRowHeight(i,25);
    }
    this->clipboard=QApplication::clipboard();
    connect(this->clipboard,SIGNAL(changed(QClipboard::Mode)),this,SLOT(on_New_clicked()));
}

getit::~getit()
{
    delete ui;
}

void getit::changeEvent(QEvent *e)
{
    QMainWindow::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

void getit::on_NewTask_triggered()
{
    on_New_clicked();
}

void getit::on_Close_triggered()
{
    this->close();
}

void getit::on_About_triggered()
{
    AboutDialog n(this);
    n.exec();
}

void getit::on_New_clicked()
{
    newDialog n(this);
    if(!this->clipboard->text().isEmpty())
    {
        if(this->clipboard->text().contains("://"))
            n.urlLine->setText(this->clipboard->text());
    }
    n.exec();
    QString url=n.urlLine->text();
    QString aa=url.split("://").first();
    if(n.reply==OK)
    {
        if(aa=="thunder" || aa=="Thunder")
            url=base64::thunderURL(url);
        if(aa=="flashget")
            url=base64::flashgetURL(url);
        if(aa=="qqdl")
            url=base64::qqdlURL(url);
    }
    if(n.reply==OK)
    {
        if(url.split("://").first()=="http")
        {
            HttpTask t(QUrl(url),QDir(n.savePathBox->currentText()),n.threadCountBox->value());
            if(t.state!=ERROR)
            {
                taskList.append(&t);
                struct taskInfo info={
                                  new QTableWidgetItem(t.taskName,0),
                                  new QLabel(""),
                                  new QProgressBar(0),
                                  new QLabel(""),
                                  new QTableWidgetItem(t.url.host(),0),
                                  new QLabel(""),
                                  new QLabel(""),
                                  new QLabel(""),
                                  new QTableWidgetItem(t.taskName.right(t.taskName.length()-t.taskName.lastIndexOf('.'))+1+"   file",0)
                                  };
                taskInfoList.append(&info);
                this->showTaskInfo(taskInfoList.size()-1);
                taskList.last()->run();
            }
        }
        else if(url.split("://").first()=="ftp")
        {
            FtpTask t(QUrl(url),QDir(n.savePathBox->currentText()),n.threadCountBox->value());
            if(t.state!=ERROR)
            {
                taskList.append(&t);
                struct taskInfo info={
                                  new QTableWidgetItem(t.taskName,0),
                                  new QLabel(""),
                                  new QProgressBar(0),
                                  new QLabel(""),
                                  new QTableWidgetItem(t.url.host(),0),
                                  new QLabel(""),
                                  new QLabel(""),
                                  new QLabel(""),
                                  new QTableWidgetItem(t.taskName.right(t.taskName.length()-t.taskName.lastIndexOf('.'))+1+"   file",0)
                                  };
                taskInfoList.append(&info);
                this->showTaskInfo(taskInfoList.size()-1);
                taskList.last()->run();
            }
        }
        else if(url.split("://").first()=="ed2k" || url.split("://").first()=="ED2K")
        {
            ED2KTask t(QUrl(url),QDir(n.savePathBox->currentText()),true);
            if(t.state!=ERROR)
            {
                taskList.append(&t);
                //this->showTaskInfo(&t);
                    taskList.last()->run();
            }
        }
        else
        {
            QMessageBox m;
            m.setText("sorry,getit can not download this file by now.");
            m.exec();
        }
    }
}

void getit::on_newBTTask_clicked()
{
    // Show the "Add Torrent" dialog.
    AddTorrentDialog *addTorrentDialog = new AddTorrentDialog(this);
    addTorrentDialog->deleteLater();
    if (!addTorrentDialog->exec())
        return;
    BTTask bttask(QDir::current());
    bttask.run();
}

void getit::showTaskInfo(short index)
{
    this->ui->taskTable->setItem(taskList.size()-1,0,this->taskInfoList.at(index)->name);
    this->ui->taskTable->setCellWidget(taskList.size()-1,1,this->taskInfoList.at(index)->fileSize);
    this->ui->taskTable->setCellWidget(taskList.size()-1,2,this->taskInfoList.at(index)->pro);
    this->ui->taskTable->setCellWidget(taskList.size()-1,3,this->taskInfoList.at(index)->downLoadedSize);
    this->ui->taskTable->setItem(taskList.size()-1,4,this->taskInfoList.at(index)->host);
    this->ui->taskTable->setCellWidget(taskList.size()-1,5,this->taskInfoList.at(index)->taskSpeed);
    this->ui->taskTable->setCellWidget(taskList.size()-1,6,this->taskInfoList.at(index)->timeUsed);
    this->ui->taskTable->setCellWidget(taskList.size()-1,7,this->taskInfoList.at(index)->timeRemaining);
    this->ui->taskTable->setItem(taskList.size()-1,8,this->taskInfoList.at(index)->fileStyle);
    this->ui->taskTable->resizeColumnsToContents();
    this->ui->taskTable->setColumnWidth(2,300);
}
void getit::updateTaskInfo()
{
    for(short taskIndex=0;taskIndex<taskList.size();taskIndex++)
    {
        if(taskList.at(taskIndex)->downloaded>=taskList.at(taskIndex)->total)
        {
            this->taskInfoList.at(taskIndex)->pro->setValue(100);
            this->taskInfoList.at(taskIndex)->downLoadedSize->setText(QString::number(taskList.at(taskIndex)->total)+"Bytes");
            this->taskInfoList.at(taskIndex)->timeRemaining->setText("0s");
            continue;
        }
        this->taskInfoList.at(taskIndex)->fileSize->setText(QString::number(taskList.at(taskIndex)->total)+"Bytes");
        this->taskInfoList.at(taskIndex)->pro->setValue((int)(100*(double)taskList.at(taskIndex)->downloaded/(double)taskList.at(taskIndex)->total));
        this->taskInfoList.at(taskIndex)->downLoadedSize->setText(QString::number(taskList.at(taskIndex)->downloaded)+"Bytes");
        double speed=(double)taskList.at(taskIndex)->downloaded/((double)(taskList.at(taskIndex)->taskTime->elapsed()));
        this->taskInfoList.at(taskIndex)->taskSpeed->setText(QString::number(speed)+"kb/second");
        this->taskInfoList.at(taskIndex)->timeUsed->setText(QString::number(taskList.at(taskIndex)->taskTime->elapsed()/1000)+"seconds");
        this->taskInfoList.at(taskIndex)->timeRemaining->setText(QString::number((double)(taskList.at(taskIndex)->total-taskList.at(taskIndex)->downloaded)/speed)+"seconds");
    }
}
