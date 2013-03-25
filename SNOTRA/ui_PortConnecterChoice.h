/********************************************************************************
** Form generated from reading UI file 'PortConnecterChoice.ui'
**
** Created: Mon Mar 25 14:43:01 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PORTCONNECTERCHOICE_H
#define UI_PORTCONNECTERCHOICE_H

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

class Ui_PortConnecterChoice
{
public:
    QVBoxLayout *verticalLayout;
    QTextBrowser *textBrowser;
    QSpinBox *spinBox;
    QPushButton *pushButton;

    void setupUi(QDialog *PortConnecterChoice)
    {
        if (PortConnecterChoice->objectName().isEmpty())
            PortConnecterChoice->setObjectName(QString::fromUtf8("PortConnecterChoice"));
        PortConnecterChoice->resize(400, 300);
        verticalLayout = new QVBoxLayout(PortConnecterChoice);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        textBrowser = new QTextBrowser(PortConnecterChoice);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));

        verticalLayout->addWidget(textBrowser);

        spinBox = new QSpinBox(PortConnecterChoice);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));

        verticalLayout->addWidget(spinBox);

        pushButton = new QPushButton(PortConnecterChoice);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);


        retranslateUi(PortConnecterChoice);

        QMetaObject::connectSlotsByName(PortConnecterChoice);
    } // setupUi

    void retranslateUi(QDialog *PortConnecterChoice)
    {
        PortConnecterChoice->setWindowTitle(QApplication::translate("PortConnecterChoice", "PortConnecterChoice", 0, QApplication::UnicodeUTF8));
        textBrowser->setHtml(QApplication::translate("PortConnecterChoice", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Sur quel interface souhaitez vous brancher ?</p></body></html>", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("PortConnecterChoice", "OK", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class PortConnecterChoice: public Ui_PortConnecterChoice {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PORTCONNECTERCHOICE_H
