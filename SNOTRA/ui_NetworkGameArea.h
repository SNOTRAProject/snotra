/********************************************************************************
** Form generated from reading UI file 'NetworkGameArea.ui'
**
** Created: Thu Mar 21 16:52:31 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NETWORKGAMEAREA_H
#define UI_NETWORKGAMEAREA_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NetworkGameArea
{
public:
    QHBoxLayout *horizontalLayout;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_2;

    void setupUi(QWidget *NetworkGameArea)
    {
        if (NetworkGameArea->objectName().isEmpty())
            NetworkGameArea->setObjectName(QString::fromUtf8("NetworkGameArea"));
        NetworkGameArea->resize(866, 556);
        horizontalLayout = new QHBoxLayout(NetworkGameArea);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        frame = new QFrame(NetworkGameArea);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setMouseTracking(false);
        frame->setAcceptDrops(true);
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));

        horizontalLayout->addWidget(frame);


        retranslateUi(NetworkGameArea);

        QMetaObject::connectSlotsByName(NetworkGameArea);
    } // setupUi

    void retranslateUi(QWidget *NetworkGameArea)
    {
        NetworkGameArea->setWindowTitle(QApplication::translate("NetworkGameArea", "NetworkGameArea", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class NetworkGameArea: public Ui_NetworkGameArea {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NETWORKGAMEAREA_H
