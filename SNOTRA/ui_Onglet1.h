/********************************************************************************
** Form generated from reading UI file 'Onglet1.ui'
**
** Created: Tue Apr 2 23:40:10 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACTIONSPERTINANTES_H
#define UI_ACTIONSPERTINANTES_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpacerItem>
#include <QtGui/QTextBrowser>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ActionsPertinantes
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox_4;
    QCheckBox *checkBox_5;
    QCheckBox *checkBox_6;
    QCheckBox *checkBox_7;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout;
    QLabel *labelContexte;
    QTextBrowser *textBrowserContext;
    QLabel *labelObjectif;
    QTextBrowser *textBrowserObjectif;
    QLabel *labelListeAction;
    QTextBrowser *textBrowserListeAction;
    QLabel *label;
    QTextBrowser *textBrowser;
    QLabel *label_2;
    QTextBrowser *textBrowser_2;

    void setupUi(QWidget *ActionsPertinantes)
    {
        if (ActionsPertinantes->objectName().isEmpty())
            ActionsPertinantes->setObjectName(QString::fromUtf8("Actions Pertinantes"));
        ActionsPertinantes->resize(1077, 549);
        horizontalLayout = new QHBoxLayout(ActionsPertinantes);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        checkBox = new QCheckBox(ActionsPertinantes);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        verticalLayout_2->addWidget(checkBox);

        checkBox_2 = new QCheckBox(ActionsPertinantes);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));

        verticalLayout_2->addWidget(checkBox_2);

        checkBox_3 = new QCheckBox(ActionsPertinantes);
        checkBox_3->setObjectName(QString::fromUtf8("checkBox_3"));

        verticalLayout_2->addWidget(checkBox_3);

        checkBox_4 = new QCheckBox(ActionsPertinantes);
        checkBox_4->setObjectName(QString::fromUtf8("checkBox_4"));

        verticalLayout_2->addWidget(checkBox_4);

        checkBox_5 = new QCheckBox(ActionsPertinantes);
        checkBox_5->setObjectName(QString::fromUtf8("checkBox_5"));

        verticalLayout_2->addWidget(checkBox_5);

        checkBox_6 = new QCheckBox(ActionsPertinantes);
        checkBox_6->setObjectName(QString::fromUtf8("checkBox_6"));

        verticalLayout_2->addWidget(checkBox_6);

        checkBox_7 = new QCheckBox(ActionsPertinantes);
        checkBox_7->setObjectName(QString::fromUtf8("checkBox_7"));

        verticalLayout_2->addWidget(checkBox_7);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_2->addItem(horizontalSpacer);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        labelContexte = new QLabel(ActionsPertinantes);
        labelContexte->setObjectName(QString::fromUtf8("labelContexte"));

        verticalLayout->addWidget(labelContexte);

        textBrowserContext = new QTextBrowser(ActionsPertinantes);
        textBrowserContext->setObjectName(QString::fromUtf8("textBrowserContext"));

        verticalLayout->addWidget(textBrowserContext);

        labelObjectif = new QLabel(ActionsPertinantes);
        labelObjectif->setObjectName(QString::fromUtf8("labelObjectif"));

        verticalLayout->addWidget(labelObjectif);

        textBrowserObjectif = new QTextBrowser(ActionsPertinantes);
        textBrowserObjectif->setObjectName(QString::fromUtf8("textBrowserObjectif"));

        verticalLayout->addWidget(textBrowserObjectif);

        labelListeAction = new QLabel(ActionsPertinantes);
        labelListeAction->setObjectName(QString::fromUtf8("labelListeAction"));

        verticalLayout->addWidget(labelListeAction);

        textBrowserListeAction = new QTextBrowser(ActionsPertinantes);
        textBrowserListeAction->setObjectName(QString::fromUtf8("textBrowserListeAction"));

        verticalLayout->addWidget(textBrowserListeAction);

        label = new QLabel(ActionsPertinantes);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        textBrowser = new QTextBrowser(ActionsPertinantes);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));

        verticalLayout->addWidget(textBrowser);

        label_2 = new QLabel(ActionsPertinantes);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        textBrowser_2 = new QTextBrowser(ActionsPertinantes);
        textBrowser_2->setObjectName(QString::fromUtf8("textBrowser_2"));

        verticalLayout->addWidget(textBrowser_2);


        horizontalLayout->addLayout(verticalLayout);


        retranslateUi(ActionsPertinantes);

        QMetaObject::connectSlotsByName(ActionsPertinantes);
    } // setupUi

    void retranslateUi(QWidget *ActionsPertinantes)
    {
        ActionsPertinantes->setWindowTitle(QApplication::translate("ActionsPertinantes", "ActionsPertinantes", 0, QApplication::UnicodeUTF8));
        checkBox->setText(QApplication::translate("ActionsPertinantes", "CheckBox", 0, QApplication::UnicodeUTF8));
        checkBox_2->setText(QApplication::translate("ActionsPertinantes", "CheckBox", 0, QApplication::UnicodeUTF8));
        checkBox_3->setText(QApplication::translate("ActionsPertinantes", "CheckBox", 0, QApplication::UnicodeUTF8));
        checkBox_4->setText(QApplication::translate("ActionsPertinantes", "CheckBox", 0, QApplication::UnicodeUTF8));
        checkBox_5->setText(QApplication::translate("ActionsPertinantes", "CheckBox", 0, QApplication::UnicodeUTF8));
        checkBox_6->setText(QApplication::translate("ActionsPertinantes", "CheckBox", 0, QApplication::UnicodeUTF8));
        checkBox_7->setText(QApplication::translate("ActionsPertinantes", "CheckBox", 0, QApplication::UnicodeUTF8));
        labelContexte->setText(QApplication::translate("ActionsPertinantes", "Contexte", 0, QApplication::UnicodeUTF8));
        labelObjectif->setText(QApplication::translate("ActionsPertinantes", "Objectifs", 0, QApplication::UnicodeUTF8));
        labelListeAction->setText(QApplication::translate("ActionsPertinantes", "Liste d'actions", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ActionsPertinantes", "Actions Pertinantes", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("ActionsPertinantes", "Actions non pertinantes", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ActionsPertinantes: public Ui_ActionsPertinantes {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACTIONSPERTINANTES_H