/********************************************************************************
** Form generated from reading UI file 'WireShark2.ui'
**
** Created: Mon Mar 25 22:03:11 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIRESHARK2_H
#define UI_WIRESHARK2_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QTableView>
#include <QtGui/QTextBrowser>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_WireShark2
{
public:
    QVBoxLayout *verticalLayout;
    QTableView *MainWireView;
    QTextBrowser *MaiFrameView;

    void setupUi(QDialog *WireShark2)
    {
        if (WireShark2->objectName().isEmpty())
            WireShark2->setObjectName(QString::fromUtf8("WireShark2"));
        WireShark2->resize(438, 326);
        verticalLayout = new QVBoxLayout(WireShark2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        MainWireView = new QTableView(WireShark2);
        MainWireView->setObjectName(QString::fromUtf8("MainWireView"));

        verticalLayout->addWidget(MainWireView);

        MaiFrameView = new QTextBrowser(WireShark2);
        MaiFrameView->setObjectName(QString::fromUtf8("MaiFrameView"));

        verticalLayout->addWidget(MaiFrameView);


        retranslateUi(WireShark2);

        QMetaObject::connectSlotsByName(WireShark2);
    } // setupUi

    void retranslateUi(QDialog *WireShark2)
    {
        WireShark2->setWindowTitle(QApplication::translate("WireShark2", "WireShark2", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class WireShark2: public Ui_WireShark2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIRESHARK2_H
