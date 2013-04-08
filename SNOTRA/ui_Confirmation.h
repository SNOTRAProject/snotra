/********************************************************************************
** Form generated from reading UI file 'Confirmation.ui'
**
** Created: Mon Apr 8 18:21:44 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIRMATION_H
#define UI_CONFIRMATION_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QTextBrowser>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Confirmation
{
public:
    QVBoxLayout *verticalLayout;
    QTextBrowser *textBrowser;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButtonAnnuler;
    QPushButton *pushButtonOK;

    void setupUi(QDialog *Confirmation)
    {
        if (Confirmation->objectName().isEmpty())
            Confirmation->setObjectName(QString::fromUtf8("Confirmation"));
        Confirmation->resize(400, 300);
        verticalLayout = new QVBoxLayout(Confirmation);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        textBrowser = new QTextBrowser(Confirmation);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));

        verticalLayout->addWidget(textBrowser);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButtonAnnuler = new QPushButton(Confirmation);
        pushButtonAnnuler->setObjectName(QString::fromUtf8("pushButtonAnnuler"));

        horizontalLayout->addWidget(pushButtonAnnuler);

        pushButtonOK = new QPushButton(Confirmation);
        pushButtonOK->setObjectName(QString::fromUtf8("pushButtonOK"));

        horizontalLayout->addWidget(pushButtonOK);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(Confirmation);
        QObject::connect(pushButtonAnnuler, SIGNAL(pressed()), Confirmation, SLOT(close()));
        QObject::connect(pushButtonOK, SIGNAL(pressed()), Confirmation, SLOT(close()));

        QMetaObject::connectSlotsByName(Confirmation);
    } // setupUi

    void retranslateUi(QDialog *Confirmation)
    {
        Confirmation->setWindowTitle(QApplication::translate("Confirmation", "Confirmation", 0, QApplication::UnicodeUTF8));
        textBrowser->setHtml(QApplication::translate("Confirmation", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt; font-weight:600;\">Une sauvegarde porte d\303\251j\303\240 ce nom, souhaitez-vous la remplacer ?</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        pushButtonAnnuler->setText(QApplication::translate("Confirmation", "Annuler", 0, QApplication::UnicodeUTF8));
        pushButtonOK->setText(QApplication::translate("Confirmation", "OK", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Confirmation: public Ui_Confirmation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIRMATION_H
