#ifndef NEWDIALOG_H
#define NEWDIALOG_H

#include <QDialog>
#include <QLabel>
#include <QLineEdit>
#include <QComboBox>
#include <QPushButton>
#include <QStringList>
#include <QSpinBox>

#define OK true
#define CANCEL false

class newDialog : public QDialog
{
    Q_OBJECT
public:
    newDialog(QWidget *parent);
    QLabel *urlPath;
    QLabel *threadCount;
    QSpinBox *threadCountBox;
    QLineEdit *urlLine;
    QLabel *savePath;
    QComboBox *savePathBox;
    QPushButton *browse;
    QPushButton *ok;
    QPushButton *cancel;
    QStringList saveDir;
    bool reply;
private slots:
    void on_Browse_clicked();
    void on_ok_clicked();
    void on_cancel_clicked();
};

#endif // NEWDIALOG_H
