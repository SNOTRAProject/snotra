/********************************************************************************
** Form generated from reading UI file 'NumberOfInterfaceSetter.ui'
**
** Created: Thu Apr 11 10:08:57 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NUMBEROFINTERFACESETTER_H
#define UI_NUMBEROFINTERFACESETTER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QSpinBox>
#include <QtGui/QTextBrowser>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_NumberOfInterfaceSetter
{
public:
    QVBoxLayout *verticalLayout;
    QTextBrowser *textBrowser;
    QSpinBox *spinBox;
    QPushButton *pushButton;

    void setupUi(QDialog *NumberOfInterfaceSetter)
    {
        if (NumberOfInterfaceSetter->objectName().isEmpty())
            NumberOfInterfaceSetter->setObjectName(QString::fromUtf8("NumberOfInterfaceSetter"));
        NumberOfInterfaceSetter->resize(513, 259);
        verticalLayout = new QVBoxLayout(NumberOfInterfaceSetter);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        textBrowser = new QTextBrowser(NumberOfInterfaceSetter);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));

        verticalLayout->addWidget(textBrowser);

        spinBox = new QSpinBox(NumberOfInterfaceSetter);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));

        verticalLayout->addWidget(spinBox);

        pushButton = new QPushButton(NumberOfInterfaceSetter);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);


        retranslateUi(NumberOfInterfaceSetter);
        QObject::connect(pushButton, SIGNAL(pressed()), NumberOfInterfaceSetter, SLOT(close()));

        QMetaObject::connectSlotsByName(NumberOfInterfaceSetter);
    } // setupUi

    void retranslateUi(QDialog *NumberOfInterfaceSetter)
    {
        NumberOfInterfaceSetter->setWindowTitle(QApplication::translate("NumberOfInterfaceSetter", "NumberOfInterfaceSetter", 0, QApplication::UnicodeUTF8));
        textBrowser->setHtml(QApplication::translate("NumberOfInterfaceSetter", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:24pt; font-weight:600;\">Veuillez choisir le nombre d'interfaces de l'appareil</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("NumberOfInterfaceSetter", "OK", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class NumberOfInterfaceSetter: public Ui_NumberOfInterfaceSetter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NUMBEROFINTERFACESETTER_H
