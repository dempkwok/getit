/********************************************************************************
** Form generated from reading UI file 'new.ui'
**
** Created: Mon May 17 15:15:25 2010
**      by: Qt User Interface Compiler version 4.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEW_H
#define UI_NEW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_NewTaskDialog
{
public:
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLabel *label;
    QLabel *label_2;
    QComboBox *comboBox;
    QPushButton *Browse;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *ok;
    QPushButton *cancel;
    QCheckBox *isnowBox;

    void setupUi(QDialog *NewTaskDialog)
    {
        if (NewTaskDialog->objectName().isEmpty())
            NewTaskDialog->setObjectName(QString::fromUtf8("NewTaskDialog"));
        NewTaskDialog->resize(400, 246);
        lineEdit = new QLineEdit(NewTaskDialog);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(110, 50, 271, 20));
        lineEdit_2 = new QLineEdit(NewTaskDialog);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(110, 150, 271, 20));
        label = new QLabel(NewTaskDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(100, 10, 201, 31));
        QFont font;
        font.setPointSize(18);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label_2 = new QLabel(NewTaskDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 50, 54, 12));
        comboBox = new QComboBox(NewTaskDialog);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setEnabled(true);
        comboBox->setGeometry(QRect(110, 100, 171, 22));
        comboBox->setEditable(true);
        Browse = new QPushButton(NewTaskDialog);
        Browse->setObjectName(QString::fromUtf8("Browse"));
        Browse->setGeometry(QRect(310, 100, 75, 23));
        label_3 = new QLabel(NewTaskDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 110, 54, 12));
        label_4 = new QLabel(NewTaskDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 150, 91, 16));
        ok = new QPushButton(NewTaskDialog);
        ok->setObjectName(QString::fromUtf8("ok"));
        ok->setGeometry(QRect(220, 200, 75, 23));
        cancel = new QPushButton(NewTaskDialog);
        cancel->setObjectName(QString::fromUtf8("cancel"));
        cancel->setGeometry(QRect(310, 200, 75, 23));
        isnowBox = new QCheckBox(NewTaskDialog);
        isnowBox->setObjectName(QString::fromUtf8("isnowBox"));
        isnowBox->setGeometry(QRect(20, 200, 121, 17));
        isnowBox->setChecked(true);
        QWidget::setTabOrder(lineEdit, comboBox);
        QWidget::setTabOrder(comboBox, Browse);
        QWidget::setTabOrder(Browse, lineEdit_2);

        retranslateUi(NewTaskDialog);

        QMetaObject::connectSlotsByName(NewTaskDialog);
    } // setupUi

    void retranslateUi(QDialog *NewTaskDialog)
    {
        NewTaskDialog->setWindowTitle(QApplication::translate("NewTaskDialog", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("NewTaskDialog", "\346\226\260\345\273\272\344\270\200\344\270\252\344\270\213\350\275\275\344\273\273\345\212\241", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("NewTaskDialog", "\345\234\260\345\235\200(url)", 0, QApplication::UnicodeUTF8));
        Browse->setText(QApplication::translate("NewTaskDialog", "\346\265\217\350\247\210...", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("NewTaskDialog", "\345\255\230\345\202\250\347\233\256\345\275\225", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("NewTaskDialog", "\345\255\230\345\202\250\346\226\207\344\273\266\345\220\215\347\247\260", 0, QApplication::UnicodeUTF8));
        ok->setText(QApplication::translate("NewTaskDialog", "ok", 0, QApplication::UnicodeUTF8));
        cancel->setText(QApplication::translate("NewTaskDialog", "cancel", 0, QApplication::UnicodeUTF8));
        isnowBox->setText(QApplication::translate("NewTaskDialog", "\346\230\257\345\220\246\347\253\213\345\215\263\345\274\200\345\247\213\344\270\213\350\275\275", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class NewTaskDialog: public Ui_NewTaskDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEW_H
