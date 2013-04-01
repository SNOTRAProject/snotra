/********************************************************************************
** Form generated from reading UI file 'Frame.ui'
**
** Created: Mon Apr 1 22:44:53 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRAME_H
#define UI_FRAME_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_Frame
{
public:
    QGridLayout *gridLayout;
    QTextBrowser *sourceView;
    QLabel *temps;
    QLabel *destination;
    QLabel *number;
    QTextBrowser *tempsView;
    QTextBrowser *NumberView;
    QLabel *source;
    QTextBrowser *destanationView;

    void setupUi(QDialog *Frame)
    {
        if (Frame->objectName().isEmpty())
            Frame->setObjectName(QString::fromUtf8("Frame"));
        Frame->resize(1238, 119);
        gridLayout = new QGridLayout(Frame);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        sourceView = new QTextBrowser(Frame);
        sourceView->setObjectName(QString::fromUtf8("sourceView"));

        gridLayout->addWidget(sourceView, 1, 2, 1, 1);

        temps = new QLabel(Frame);
        temps->setObjectName(QString::fromUtf8("temps"));
        temps->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(temps, 0, 1, 1, 1);

        destination = new QLabel(Frame);
        destination->setObjectName(QString::fromUtf8("destination"));
        destination->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(destination, 0, 3, 1, 1);

        number = new QLabel(Frame);
        number->setObjectName(QString::fromUtf8("number"));
        number->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(number, 0, 0, 1, 1);

        tempsView = new QTextBrowser(Frame);
        tempsView->setObjectName(QString::fromUtf8("tempsView"));

        gridLayout->addWidget(tempsView, 1, 1, 1, 1);

        NumberView = new QTextBrowser(Frame);
        NumberView->setObjectName(QString::fromUtf8("NumberView"));

        gridLayout->addWidget(NumberView, 1, 0, 1, 1);

        source = new QLabel(Frame);
        source->setObjectName(QString::fromUtf8("source"));
        source->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(source, 0, 2, 1, 1);

        destanationView = new QTextBrowser(Frame);
        destanationView->setObjectName(QString::fromUtf8("destanationView"));

        gridLayout->addWidget(destanationView, 1, 3, 1, 1);


        retranslateUi(Frame);

        QMetaObject::connectSlotsByName(Frame);
    } // setupUi

    void retranslateUi(QDialog *Frame)
    {
        Frame->setWindowTitle(QApplication::translate("Frame", "Frame", 0, QApplication::UnicodeUTF8));
        temps->setText(QApplication::translate("Frame", "TEMPS", 0, QApplication::UnicodeUTF8));
        destination->setText(QApplication::translate("Frame", "DESTINATION", 0, QApplication::UnicodeUTF8));
        number->setText(QApplication::translate("Frame", "NUMBER", 0, QApplication::UnicodeUTF8));
        source->setText(QApplication::translate("Frame", "SOURCE", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Frame: public Ui_Frame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRAME_H
