/********************************************************************************
** Form generated from reading UI file 'PropertiesOfIterfaceSetter.ui'
**
** Created: Thu Apr 11 10:58:58 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROPERTIESOFITERFACESETTER_H
#define UI_PROPERTIESOFITERFACESETTER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTextBrowser>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_PropertiesOfIterfaceSetter
{
public:
    QVBoxLayout *verticalLayout;
    QTextBrowser *textBrowserName;
    QLineEdit *lineEditSetName;
    QTextBrowser *textBrowserIP;
    QLineEdit *lineEditSetIP;
    QPushButton *pushButton;

    void setupUi(QDialog *PropertiesOfIterfaceSetter)
    {
        if (PropertiesOfIterfaceSetter->objectName().isEmpty())
            PropertiesOfIterfaceSetter->setObjectName(QString::fromUtf8("PropertiesOfIterfaceSetter"));
        PropertiesOfIterfaceSetter->resize(702, 347);
        verticalLayout = new QVBoxLayout(PropertiesOfIterfaceSetter);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        textBrowserName = new QTextBrowser(PropertiesOfIterfaceSetter);
        textBrowserName->setObjectName(QString::fromUtf8("textBrowserName"));

        verticalLayout->addWidget(textBrowserName);

        lineEditSetName = new QLineEdit(PropertiesOfIterfaceSetter);
        lineEditSetName->setObjectName(QString::fromUtf8("lineEditSetName"));

        verticalLayout->addWidget(lineEditSetName);

        textBrowserIP = new QTextBrowser(PropertiesOfIterfaceSetter);
        textBrowserIP->setObjectName(QString::fromUtf8("textBrowserIP"));

        verticalLayout->addWidget(textBrowserIP);

        lineEditSetIP = new QLineEdit(PropertiesOfIterfaceSetter);
        lineEditSetIP->setObjectName(QString::fromUtf8("lineEditSetIP"));

        verticalLayout->addWidget(lineEditSetIP);

        pushButton = new QPushButton(PropertiesOfIterfaceSetter);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);


        retranslateUi(PropertiesOfIterfaceSetter);
        QObject::connect(pushButton, SIGNAL(pressed()), PropertiesOfIterfaceSetter, SLOT(close()));

        QMetaObject::connectSlotsByName(PropertiesOfIterfaceSetter);
    } // setupUi

    void retranslateUi(QDialog *PropertiesOfIterfaceSetter)
    {
        PropertiesOfIterfaceSetter->setWindowTitle(QApplication::translate("PropertiesOfIterfaceSetter", "PropertiesOfIterfaceSetter", 0, QApplication::UnicodeUTF8));
        textBrowserName->setHtml(QApplication::translate("PropertiesOfIterfaceSetter", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:20pt; font-weight:600;\">Name</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        textBrowserIP->setHtml(QApplication::translate("PropertiesOfIterfaceSetter", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:20pt; font-weight:600;\">IP</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("PropertiesOfIterfaceSetter", "OK", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class PropertiesOfIterfaceSetter: public Ui_PropertiesOfIterfaceSetter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROPERTIESOFITERFACESETTER_H
