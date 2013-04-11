/********************************************************************************
** Form generated from reading UI file 'NetworkGameArea.ui'
**
<<<<<<< HEAD
** Created: Thu Apr 11 10:34:09 2013
**      by: Qt User Interface Compiler version 4.8.1
=======
** Created: Wed Apr 10 00:54:07 2013
**      by: Qt User Interface Compiler version 4.8.2
>>>>>>> 377a68d9ec1753ca5978a946f2d0a552659ca2db
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NETWORKGAMEAREA_H
#define UI_NETWORKGAMEAREA_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NetworkGameArea
{
public:
    QHBoxLayout *horizontalLayout;

    void setupUi(QWidget *NetworkGameArea)
    {
        if (NetworkGameArea->objectName().isEmpty())
            NetworkGameArea->setObjectName(QString::fromUtf8("NetworkGameArea"));
        NetworkGameArea->resize(866, 556);
        horizontalLayout = new QHBoxLayout(NetworkGameArea);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));

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
