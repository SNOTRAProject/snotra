/********************************************************************************
** Form generated from reading UI file 'Charger.ui'
**
** Created: Thu Apr 11 10:58:58 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHARGER_H
#define UI_CHARGER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Charger
{
public:
    QVBoxLayout *verticalLayout_2;
    QComboBox *comboBox;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButtonAnnuler;
    QPushButton *pushButtonOK;

    void setupUi(QDialog *Charger)
    {
        if (Charger->objectName().isEmpty())
            Charger->setObjectName(QString::fromUtf8("Charger"));
        Charger->resize(795, 80);
        verticalLayout_2 = new QVBoxLayout(Charger);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        comboBox = new QComboBox(Charger);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        verticalLayout_2->addWidget(comboBox);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButtonAnnuler = new QPushButton(Charger);
        pushButtonAnnuler->setObjectName(QString::fromUtf8("pushButtonAnnuler"));

        horizontalLayout->addWidget(pushButtonAnnuler);

        pushButtonOK = new QPushButton(Charger);
        pushButtonOK->setObjectName(QString::fromUtf8("pushButtonOK"));

        horizontalLayout->addWidget(pushButtonOK);


        verticalLayout_2->addLayout(horizontalLayout);


        retranslateUi(Charger);
        QObject::connect(pushButtonOK, SIGNAL(pressed()), Charger, SLOT(close()));
        QObject::connect(pushButtonAnnuler, SIGNAL(pressed()), Charger, SLOT(close()));

        QMetaObject::connectSlotsByName(Charger);
    } // setupUi

    void retranslateUi(QDialog *Charger)
    {
        Charger->setWindowTitle(QApplication::translate("Charger", "Charger", 0, QApplication::UnicodeUTF8));
        pushButtonAnnuler->setText(QApplication::translate("Charger", "Annuler", 0, QApplication::UnicodeUTF8));
        pushButtonOK->setText(QApplication::translate("Charger", "OK", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Charger: public Ui_Charger {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHARGER_H
