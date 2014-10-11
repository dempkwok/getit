/********************************************************************************
** Form generated from reading UI file 'getit.ui'
**
** Created: Tue Dec 7 10:10:21 2010
**      by: Qt User Interface Compiler version 4.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GETIT_H
#define UI_GETIT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QStatusBar>
#include <QtGui/QTableWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_getit
{
public:
    QAction *NewTask;
    QAction *Open;
    QAction *Close;
    QAction *About;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QTableWidget *taskTable;
    QVBoxLayout *verticalLayout;
    QPushButton *New;
    QPushButton *newBTTask;
    QPushButton *Start;
    QPushButton *Pause;
    QPushButton *Delete;
    QSpacerItem *verticalSpacer;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_2;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *getit)
    {
        if (getit->objectName().isEmpty())
            getit->setObjectName(QString::fromUtf8("getit"));
        getit->resize(822, 457);
        NewTask = new QAction(getit);
        NewTask->setObjectName(QString::fromUtf8("NewTask"));
        Open = new QAction(getit);
        Open->setObjectName(QString::fromUtf8("Open"));
        Close = new QAction(getit);
        Close->setObjectName(QString::fromUtf8("Close"));
        About = new QAction(getit);
        About->setObjectName(QString::fromUtf8("About"));
        centralWidget = new QWidget(getit);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        taskTable = new QTableWidget(centralWidget);
        if (taskTable->columnCount() < 9)
            taskTable->setColumnCount(9);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        taskTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        taskTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        taskTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        taskTable->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        taskTable->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        taskTable->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        taskTable->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        taskTable->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        taskTable->setHorizontalHeaderItem(8, __qtablewidgetitem8);
        if (taskTable->rowCount() < 15)
            taskTable->setRowCount(15);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        taskTable->setVerticalHeaderItem(0, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        taskTable->setVerticalHeaderItem(1, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        taskTable->setVerticalHeaderItem(2, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        taskTable->setVerticalHeaderItem(3, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        taskTable->setVerticalHeaderItem(4, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        taskTable->setVerticalHeaderItem(5, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        taskTable->setVerticalHeaderItem(6, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        taskTable->setVerticalHeaderItem(7, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        taskTable->setVerticalHeaderItem(8, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        taskTable->setVerticalHeaderItem(9, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        taskTable->setVerticalHeaderItem(10, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        taskTable->setVerticalHeaderItem(11, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        taskTable->setVerticalHeaderItem(12, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        taskTable->setVerticalHeaderItem(13, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        taskTable->setVerticalHeaderItem(14, __qtablewidgetitem23);
        taskTable->setObjectName(QString::fromUtf8("taskTable"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(taskTable->sizePolicy().hasHeightForWidth());
        taskTable->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(taskTable);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        New = new QPushButton(centralWidget);
        New->setObjectName(QString::fromUtf8("New"));
        New->setDefault(true);

        verticalLayout->addWidget(New);

        newBTTask = new QPushButton(centralWidget);
        newBTTask->setObjectName(QString::fromUtf8("newBTTask"));

        verticalLayout->addWidget(newBTTask);

        Start = new QPushButton(centralWidget);
        Start->setObjectName(QString::fromUtf8("Start"));

        verticalLayout->addWidget(Start);

        Pause = new QPushButton(centralWidget);
        Pause->setObjectName(QString::fromUtf8("Pause"));

        verticalLayout->addWidget(Pause);

        Delete = new QPushButton(centralWidget);
        Delete->setObjectName(QString::fromUtf8("Delete"));

        verticalLayout->addWidget(Delete);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout);

        getit->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(getit);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 822, 25));
        menu = new QMenu(menuBar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName(QString::fromUtf8("menu_2"));
        getit->setMenuBar(menuBar);
        statusBar = new QStatusBar(getit);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        getit->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_2->menuAction());
        menu->addAction(NewTask);
        menu->addAction(Open);
        menu->addAction(Close);
        menu_2->addAction(About);

        retranslateUi(getit);

        QMetaObject::connectSlotsByName(getit);
    } // setupUi

    void retranslateUi(QMainWindow *getit)
    {
        getit->setWindowTitle(QApplication::translate("getit", "getit", 0, QApplication::UnicodeUTF8));
        NewTask->setText(QApplication::translate("getit", "\346\226\260\345\273\272", 0, QApplication::UnicodeUTF8));
        Open->setText(QApplication::translate("getit", "\346\211\223\345\274\200", 0, QApplication::UnicodeUTF8));
        Close->setText(QApplication::translate("getit", "\345\205\263\351\227\255", 0, QApplication::UnicodeUTF8));
        About->setText(QApplication::translate("getit", "\345\205\263\344\272\216", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = taskTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("getit", "\346\226\207\344\273\266\345\220\215\347\247\260", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = taskTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("getit", "\346\226\207\344\273\266\345\244\247\345\260\217", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = taskTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("getit", "\344\270\213\350\275\275\350\277\233\345\272\246", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = taskTable->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("getit", "\345\267\262\344\270\213\350\275\275", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = taskTable->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("getit", "\346\235\245\346\272\220", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem5 = taskTable->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("getit", "\344\270\213\350\275\275\351\200\237\345\272\246", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem6 = taskTable->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("getit", "\345\267\262\347\224\250\346\227\266\351\227\264", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem7 = taskTable->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QApplication::translate("getit", "\345\211\251\344\275\231\346\227\266\351\227\264", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem8 = taskTable->horizontalHeaderItem(8);
        ___qtablewidgetitem8->setText(QApplication::translate("getit", "\346\226\207\344\273\266\347\261\273\345\236\213", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem9 = taskTable->verticalHeaderItem(0);
        ___qtablewidgetitem9->setText(QApplication::translate("getit", "1", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem10 = taskTable->verticalHeaderItem(1);
        ___qtablewidgetitem10->setText(QApplication::translate("getit", "2", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem11 = taskTable->verticalHeaderItem(2);
        ___qtablewidgetitem11->setText(QApplication::translate("getit", "3", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem12 = taskTable->verticalHeaderItem(3);
        ___qtablewidgetitem12->setText(QApplication::translate("getit", "4", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem13 = taskTable->verticalHeaderItem(4);
        ___qtablewidgetitem13->setText(QApplication::translate("getit", "5", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem14 = taskTable->verticalHeaderItem(5);
        ___qtablewidgetitem14->setText(QApplication::translate("getit", "6", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem15 = taskTable->verticalHeaderItem(6);
        ___qtablewidgetitem15->setText(QApplication::translate("getit", "7", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem16 = taskTable->verticalHeaderItem(7);
        ___qtablewidgetitem16->setText(QApplication::translate("getit", "8", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem17 = taskTable->verticalHeaderItem(8);
        ___qtablewidgetitem17->setText(QApplication::translate("getit", "10", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem18 = taskTable->verticalHeaderItem(9);
        ___qtablewidgetitem18->setText(QApplication::translate("getit", "11", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem19 = taskTable->verticalHeaderItem(10);
        ___qtablewidgetitem19->setText(QApplication::translate("getit", "12", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem20 = taskTable->verticalHeaderItem(11);
        ___qtablewidgetitem20->setText(QApplication::translate("getit", "13", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem21 = taskTable->verticalHeaderItem(12);
        ___qtablewidgetitem21->setText(QApplication::translate("getit", "14", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem22 = taskTable->verticalHeaderItem(13);
        ___qtablewidgetitem22->setText(QApplication::translate("getit", "15", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem23 = taskTable->verticalHeaderItem(14);
        ___qtablewidgetitem23->setText(QApplication::translate("getit", "16", 0, QApplication::UnicodeUTF8));
        New->setText(QApplication::translate("getit", "&New", 0, QApplication::UnicodeUTF8));
        newBTTask->setText(QApplication::translate("getit", "new BT task", 0, QApplication::UnicodeUTF8));
        Start->setText(QApplication::translate("getit", "&Start", 0, QApplication::UnicodeUTF8));
        Pause->setText(QApplication::translate("getit", "&Pause", 0, QApplication::UnicodeUTF8));
        Delete->setText(QApplication::translate("getit", "&Delete", 0, QApplication::UnicodeUTF8));
        menu->setTitle(QApplication::translate("getit", "\346\226\207\344\273\266", 0, QApplication::UnicodeUTF8));
        menu_2->setTitle(QApplication::translate("getit", "\345\270\256\345\212\251", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class getit: public Ui_getit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GETIT_H
