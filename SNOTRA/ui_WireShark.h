/********************************************************************************
** Form generated from reading UI file 'WireShark.ui'
**
** Created: Wed Mar 13 16:19:14 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIRESHARK_H
#define UI_WIRESHARK_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QTextBrowser>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_WireShark
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QLabel *label_2;
    QLabel *label;
    QTextBrowser *detailFrameView;

    void setupUi(QDialog *WireShark)
    {
        if (WireShark->objectName().isEmpty())
            WireShark->setObjectName(QString::fromUtf8("WireShark"));
        WireShark->resize(1194, 716);
        verticalLayout_2 = new QVBoxLayout(WireShark);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_3 = new QLabel(WireShark);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout->addWidget(label_3);

        label_2 = new QLabel(WireShark);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        label = new QLabel(WireShark);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);


        verticalLayout_4->addLayout(horizontalLayout);


        verticalLayout->addLayout(verticalLayout_4);

        detailFrameView = new QTextBrowser(WireShark);
        detailFrameView->setObjectName(QString::fromUtf8("detailFrameView"));

        verticalLayout->addWidget(detailFrameView);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(WireShark);

        QMetaObject::connectSlotsByName(WireShark);
    } // setupUi

    void retranslateUi(QDialog *WireShark)
    {
        WireShark->setWindowTitle(QApplication::translate("WireShark", "WireShark", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("WireShark", "TextLabel", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("WireShark", "TextLabel", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("WireShark", "TextLabel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class WireShark: public Ui_WireShark {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIRESHARK_H
