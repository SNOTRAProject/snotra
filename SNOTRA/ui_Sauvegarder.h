/********************************************************************************
** Form generated from reading UI file 'Sauvegarder.ui'
**
** Created: Wed Apr 10 00:54:07 2013
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SAUVEGARDER_H
#define UI_SAUVEGARDER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTextBrowser>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Sauvegarder
{
public:
    QVBoxLayout *verticalLayout;
    QTextBrowser *textBrowser;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButtonAnnuler;
    QPushButton *pushButtonOK;

    void setupUi(QDialog *Sauvegarder)
    {
        if (Sauvegarder->objectName().isEmpty())
            Sauvegarder->setObjectName(QString::fromUtf8("Sauvegarder"));
        Sauvegarder->resize(849, 305);
        Sauvegarder->setFocusPolicy(Qt::StrongFocus);
        Sauvegarder->setSizeGripEnabled(false);
        Sauvegarder->setModal(true);
        verticalLayout = new QVBoxLayout(Sauvegarder);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        textBrowser = new QTextBrowser(Sauvegarder);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));

        verticalLayout->addWidget(textBrowser);

        lineEdit = new QLineEdit(Sauvegarder);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        verticalLayout->addWidget(lineEdit);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButtonAnnuler = new QPushButton(Sauvegarder);
        pushButtonAnnuler->setObjectName(QString::fromUtf8("pushButtonAnnuler"));

        horizontalLayout->addWidget(pushButtonAnnuler);

        pushButtonOK = new QPushButton(Sauvegarder);
        pushButtonOK->setObjectName(QString::fromUtf8("pushButtonOK"));

        horizontalLayout->addWidget(pushButtonOK);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(Sauvegarder);
        QObject::connect(pushButtonOK, SIGNAL(pressed()), Sauvegarder, SLOT(close()));
        QObject::connect(pushButtonAnnuler, SIGNAL(pressed()), Sauvegarder, SLOT(close()));

        QMetaObject::connectSlotsByName(Sauvegarder);
    } // setupUi

    void retranslateUi(QDialog *Sauvegarder)
    {
        Sauvegarder->setWindowTitle(QApplication::translate("Sauvegarder", "Sauvegarder", 0, QApplication::UnicodeUTF8));
        textBrowser->setHtml(QApplication::translate("Sauvegarder", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt; font-weight:600;\">Veuillez donner un nom  votre sauvegarde</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        pushButtonAnnuler->setText(QApplication::translate("Sauvegarder", "Annuler", 0, QApplication::UnicodeUTF8));
        pushButtonOK->setText(QApplication::translate("Sauvegarder", "OK", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Sauvegarder: public Ui_Sauvegarder {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SAUVEGARDER_H
