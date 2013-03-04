/********************************************************************************
** Form generated from reading UI file 'toolbox.ui'
**
** Created: Mon Mar 4 17:32:35 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TOOLBOX_H
#define UI_TOOLBOX_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *labelHUBToolBox;
    QLabel *labelRouteurNatToolBox;
    QLabel *labelRouteurToolBox;
    QLabel *labelOrdiToolBox;
    QLabel *labelSwitchToolBox;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QString::fromUtf8("Form"));
        Form->resize(192, 640);
        verticalLayout = new QVBoxLayout(Form);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        labelHUBToolBox = new QLabel(Form);
        labelHUBToolBox->setObjectName(QString::fromUtf8("labelHUBToolBox"));
        labelHUBToolBox->setPixmap(QPixmap(QString::fromUtf8("../../../../../usr/share/icons/skype.png")));
        labelHUBToolBox->setScaledContents(false);

        verticalLayout->addWidget(labelHUBToolBox);

        labelRouteurNatToolBox = new QLabel(Form);
        labelRouteurNatToolBox->setObjectName(QString::fromUtf8("labelRouteurNatToolBox"));

        verticalLayout->addWidget(labelRouteurNatToolBox);

        labelRouteurToolBox = new QLabel(Form);
        labelRouteurToolBox->setObjectName(QString::fromUtf8("labelRouteurToolBox"));

        verticalLayout->addWidget(labelRouteurToolBox);

        labelOrdiToolBox = new QLabel(Form);
        labelOrdiToolBox->setObjectName(QString::fromUtf8("labelOrdiToolBox"));

        verticalLayout->addWidget(labelOrdiToolBox);

        labelSwitchToolBox = new QLabel(Form);
        labelSwitchToolBox->setObjectName(QString::fromUtf8("labelSwitchToolBox"));

        verticalLayout->addWidget(labelSwitchToolBox);


        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QApplication::translate("Form", "Form", 0, QApplication::UnicodeUTF8));
        labelHUBToolBox->setText(QString());
        labelRouteurNatToolBox->setText(QApplication::translate("Form", "Routeur NAT", 0, QApplication::UnicodeUTF8));
        labelRouteurToolBox->setText(QApplication::translate("Form", "Routeur", 0, QApplication::UnicodeUTF8));
        labelOrdiToolBox->setText(QApplication::translate("Form", "Ordi", 0, QApplication::UnicodeUTF8));
        labelSwitchToolBox->setText(QApplication::translate("Form", "Switch", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOOLBOX_H
