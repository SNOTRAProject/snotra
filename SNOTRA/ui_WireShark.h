/********************************************************************************
** Form generated from reading UI file 'WireShark.ui'
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

#ifndef UI_WIRESHARK_H
#define UI_WIRESHARK_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_WireShark
{
public:
    QVBoxLayout *verticalLayout_2;

    void setupUi(QDialog *WireShark)
    {
        if (WireShark->objectName().isEmpty())
            WireShark->setObjectName(QString::fromUtf8("WireShark"));
        WireShark->resize(1115, 482);
        verticalLayout_2 = new QVBoxLayout(WireShark);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));

        retranslateUi(WireShark);

        QMetaObject::connectSlotsByName(WireShark);
    } // setupUi

    void retranslateUi(QDialog *WireShark)
    {
        WireShark->setWindowTitle(QApplication::translate("WireShark", "WireShark", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class WireShark: public Ui_WireShark {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIRESHARK_H
