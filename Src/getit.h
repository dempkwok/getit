#ifndef GETIT_H
#define GETIT_H

#include <QMainWindow>
#include <QQueue>
#include "task.h"
#include "QTimer"
#include <QProgressBar>
#include "QTableWidgetItem"
#include "QLabel"
#include <QClipboard>

namespace Ui {
    class getit;
}

class getit : public QMainWindow {
    Q_OBJECT
public:
    getit(QWidget *parent = 0);
    ~getit();

protected:
    void changeEvent(QEvent *e);

private:
    QTimer *timer;
    QQueue<task *> taskList;
    QClipboard *clipboard;
    struct taskInfo{
        QTableWidgetItem *name;
        QLabel *fileSize;
        QProgressBar *pro;
        QLabel *downLoadedSize;
        QTableWidgetItem *host ;
        QLabel *taskSpeed;
        QLabel *timeUsed;
        QLabel *timeRemaining;
        QTableWidgetItem *fileStyle;
    };
    QList<taskInfo *> taskInfoList;
    Ui::getit *ui;
    void showTaskInfo(short index);
private slots:
    void updateTaskInfo();
    void on_newBTTask_clicked();
    void on_New_clicked();
    void on_About_triggered();
    void on_Close_triggered();
    void on_NewTask_triggered();
};

#endif // GETIT_H
