/********************************************************************************
** Form generated from reading UI file 'addtorrentform.ui'
**
** Created: Tue Dec 7 10:10:21 2010
**      by: Qt User Interface Compiler version 4.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDTORRENTFORM_H
#define UI_ADDTORRENTFORM_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddTorrentFile
{
public:
    QVBoxLayout *vboxLayout;
    QGroupBox *groupBox;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *label_4;
    QLineEdit *torrentFile;
    QLabel *label_2;
    QPushButton *browseTorrents;
    QLabel *label_5;
    QLabel *label_3;
    QLabel *label_6;
    QTextEdit *torrentContents;
    QLineEdit *destinationFolder;
    QLabel *announceUrl;
    QLabel *label;
    QPushButton *browseDestination;
    QLabel *label_7;
    QLabel *commentLabel;
    QLabel *creatorLabel;
    QLabel *sizeLabel;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QPushButton *okButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *AddTorrentFile)
    {
        if (AddTorrentFile->objectName().isEmpty())
            AddTorrentFile->setObjectName(QString::fromUtf8("AddTorrentFile"));
        AddTorrentFile->resize(464, 385);
        AddTorrentFile->setSizeGripEnabled(false);
        AddTorrentFile->setModal(true);
        vboxLayout = new QVBoxLayout(AddTorrentFile);
#ifndef Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
        vboxLayout->setContentsMargins(8, 8, 8, 8);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        groupBox = new QGroupBox(AddTorrentFile);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        widget = new QWidget(groupBox);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 40, 364, 33));
        gridLayout = new QGridLayout(groupBox);
#ifndef Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
        gridLayout->setContentsMargins(8, 8, 8, 8);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 6, 0, 1, 1);

        torrentFile = new QLineEdit(groupBox);
        torrentFile->setObjectName(QString::fromUtf8("torrentFile"));

        gridLayout->addWidget(torrentFile, 0, 1, 1, 2);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        browseTorrents = new QPushButton(groupBox);
        browseTorrents->setObjectName(QString::fromUtf8("browseTorrents"));
        browseTorrents->setDefault(true);

        gridLayout->addWidget(browseTorrents, 0, 3, 1, 1);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout->addWidget(label_5, 5, 0, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 4, 0, 1, 1);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 2, 0, 1, 1);

        torrentContents = new QTextEdit(groupBox);
        torrentContents->setObjectName(QString::fromUtf8("torrentContents"));
        torrentContents->setFocusPolicy(Qt::NoFocus);
        torrentContents->setTabChangesFocus(true);
        torrentContents->setLineWrapMode(QTextEdit::NoWrap);
        torrentContents->setReadOnly(true);

        gridLayout->addWidget(torrentContents, 5, 1, 1, 3);

        destinationFolder = new QLineEdit(groupBox);
        destinationFolder->setObjectName(QString::fromUtf8("destinationFolder"));
        destinationFolder->setFocusPolicy(Qt::StrongFocus);

        gridLayout->addWidget(destinationFolder, 6, 1, 1, 2);

        announceUrl = new QLabel(groupBox);
        announceUrl->setObjectName(QString::fromUtf8("announceUrl"));

        gridLayout->addWidget(announceUrl, 1, 1, 1, 3);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        browseDestination = new QPushButton(groupBox);
        browseDestination->setObjectName(QString::fromUtf8("browseDestination"));

        gridLayout->addWidget(browseDestination, 6, 3, 1, 1);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 3, 0, 1, 1);

        commentLabel = new QLabel(groupBox);
        commentLabel->setObjectName(QString::fromUtf8("commentLabel"));

        gridLayout->addWidget(commentLabel, 3, 1, 1, 3);

        creatorLabel = new QLabel(groupBox);
        creatorLabel->setObjectName(QString::fromUtf8("creatorLabel"));

        gridLayout->addWidget(creatorLabel, 2, 1, 1, 3);

        sizeLabel = new QLabel(groupBox);
        sizeLabel->setObjectName(QString::fromUtf8("sizeLabel"));

        gridLayout->addWidget(sizeLabel, 4, 1, 1, 3);


        vboxLayout->addWidget(groupBox);

        hboxLayout = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        spacerItem = new QSpacerItem(131, 31, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        okButton = new QPushButton(AddTorrentFile);
        okButton->setObjectName(QString::fromUtf8("okButton"));
        okButton->setEnabled(false);

        hboxLayout->addWidget(okButton);

        cancelButton = new QPushButton(AddTorrentFile);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        hboxLayout->addWidget(cancelButton);


        vboxLayout->addLayout(hboxLayout);

        QWidget::setTabOrder(torrentFile, browseTorrents);
        QWidget::setTabOrder(browseTorrents, torrentContents);
        QWidget::setTabOrder(torrentContents, destinationFolder);
        QWidget::setTabOrder(destinationFolder, browseDestination);
        QWidget::setTabOrder(browseDestination, okButton);
        QWidget::setTabOrder(okButton, cancelButton);

        retranslateUi(AddTorrentFile);
        QObject::connect(okButton, SIGNAL(clicked()), AddTorrentFile, SLOT(accept()));
        QObject::connect(cancelButton, SIGNAL(clicked()), AddTorrentFile, SLOT(reject()));

        QMetaObject::connectSlotsByName(AddTorrentFile);
    } // setupUi

    void retranslateUi(QDialog *AddTorrentFile)
    {
        AddTorrentFile->setWindowTitle(QApplication::translate("AddTorrentFile", "Add a torrent", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("AddTorrentFile", "Select a torrent source", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("AddTorrentFile", "Destination:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("AddTorrentFile", "Tracker URL:", 0, QApplication::UnicodeUTF8));
        browseTorrents->setText(QApplication::translate("AddTorrentFile", "Browse", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("AddTorrentFile", "File(s):", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("AddTorrentFile", "Size:", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("AddTorrentFile", "Creator:", 0, QApplication::UnicodeUTF8));
        announceUrl->setText(QApplication::translate("AddTorrentFile", "<none>", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("AddTorrentFile", "Torrent file:", 0, QApplication::UnicodeUTF8));
        browseDestination->setText(QApplication::translate("AddTorrentFile", "Browse", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("AddTorrentFile", "Comment:", 0, QApplication::UnicodeUTF8));
        commentLabel->setText(QApplication::translate("AddTorrentFile", "<none>", 0, QApplication::UnicodeUTF8));
        creatorLabel->setText(QApplication::translate("AddTorrentFile", "<none>", 0, QApplication::UnicodeUTF8));
        sizeLabel->setText(QApplication::translate("AddTorrentFile", "0", 0, QApplication::UnicodeUTF8));
        okButton->setText(QApplication::translate("AddTorrentFile", "&OK", 0, QApplication::UnicodeUTF8));
        cancelButton->setText(QApplication::translate("AddTorrentFile", "&Cancel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class AddTorrentFile: public Ui_AddTorrentFile {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDTORRENTFORM_H
