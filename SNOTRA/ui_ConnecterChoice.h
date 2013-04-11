/********************************************************************************
** Form generated from reading UI file 'ConnecterChoice.ui'
**
** Created: Thu Apr 11 10:58:58 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONNECTERCHOICE_H
#define UI_CONNECTERCHOICE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QSpinBox>
#include <QtGui/QTextBrowser>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ConnecterChoice
{
public:
    QVBoxLayout *verticalLayout;
    QTextBrowser *textBrowserDevice1Interface;
    QComboBox *comboBoxChoiceInterfaceDevice1;
    QTextBrowser *textBrowserDevice1Port;
    QSpinBox *spinBoxDevide1Port;
    QTextBrowser *textBrowserDevice2Interface;
    QComboBox *comboBoxChoiceInterfaceDevice2;
    QTextBrowser *textBrowserDevice2Port;
    QSpinBox *spinBoxDevice2Port;
    QPushButton *pushButton;

    void setupUi(QDialog *ConnecterChoice)
    {
        if (ConnecterChoice->objectName().isEmpty())
            ConnecterChoice->setObjectName(QString::fromUtf8("ConnecterChoice"));
        ConnecterChoice->resize(680, 740);
        verticalLayout = new QVBoxLayout(ConnecterChoice);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        textBrowserDevice1Interface = new QTextBrowser(ConnecterChoice);
        textBrowserDevice1Interface->setObjectName(QString::fromUtf8("textBrowserDevice1Interface"));

        verticalLayout->addWidget(textBrowserDevice1Interface);

        comboBoxChoiceInterfaceDevice1 = new QComboBox(ConnecterChoice);
        comboBoxChoiceInterfaceDevice1->setObjectName(QString::fromUtf8("comboBoxChoiceInterfaceDevice1"));

        verticalLayout->addWidget(comboBoxChoiceInterfaceDevice1);

        textBrowserDevice1Port = new QTextBrowser(ConnecterChoice);
        textBrowserDevice1Port->setObjectName(QString::fromUtf8("textBrowserDevice1Port"));

        verticalLayout->addWidget(textBrowserDevice1Port);

        spinBoxDevide1Port = new QSpinBox(ConnecterChoice);
        spinBoxDevide1Port->setObjectName(QString::fromUtf8("spinBoxDevide1Port"));

        verticalLayout->addWidget(spinBoxDevide1Port);

        textBrowserDevice2Interface = new QTextBrowser(ConnecterChoice);
        textBrowserDevice2Interface->setObjectName(QString::fromUtf8("textBrowserDevice2Interface"));

        verticalLayout->addWidget(textBrowserDevice2Interface);

        comboBoxChoiceInterfaceDevice2 = new QComboBox(ConnecterChoice);
        comboBoxChoiceInterfaceDevice2->setObjectName(QString::fromUtf8("comboBoxChoiceInterfaceDevice2"));

        verticalLayout->addWidget(comboBoxChoiceInterfaceDevice2);

        textBrowserDevice2Port = new QTextBrowser(ConnecterChoice);
        textBrowserDevice2Port->setObjectName(QString::fromUtf8("textBrowserDevice2Port"));

        verticalLayout->addWidget(textBrowserDevice2Port);

        spinBoxDevice2Port = new QSpinBox(ConnecterChoice);
        spinBoxDevice2Port->setObjectName(QString::fromUtf8("spinBoxDevice2Port"));

        verticalLayout->addWidget(spinBoxDevice2Port);

        pushButton = new QPushButton(ConnecterChoice);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);


        retranslateUi(ConnecterChoice);

        QMetaObject::connectSlotsByName(ConnecterChoice);
    } // setupUi

    void retranslateUi(QDialog *ConnecterChoice)
    {
        ConnecterChoice->setWindowTitle(QApplication::translate("ConnecterChoice", "ConnecterChoice", 0, QApplication::UnicodeUTF8));
        textBrowserDevice1Port->setHtml(QApplication::translate("ConnecterChoice", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Sur quel port souhaitez vous le connecter ?</p></body></html>", 0, QApplication::UnicodeUTF8));
        textBrowserDevice2Port->setHtml(QApplication::translate("ConnecterChoice", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Sur quel port souhaitez vous le connecter ?</p></body></html>", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("ConnecterChoice", "OK", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ConnecterChoice: public Ui_ConnecterChoice {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONNECTERCHOICE_H
