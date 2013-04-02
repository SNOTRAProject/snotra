/********************************************************************************
** Form generated from reading UI file 'RelevantActions.ui'
**
** Created: Wed Apr 3 00:37:34 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RELEVANTACTIONS_H
#define UI_RELEVANTACTIONS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpacerItem>
#include <QtGui/QTextBrowser>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_RelevantActions
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *ajouterRouteur;
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
    QLabel *labelListeActions;
    QTextBrowser *textBrowserListeActions;
    QLabel *labelActionsPertinantes;
    QTextBrowser *textBrowserActionsPertinantes;
    QLabel *labelActionsNonPertinantes;
    QTextBrowser *textBrowserActionsNonPertinantes;

    void setupUi(QDialog *RelevantActions)
    {
        if (RelevantActions->objectName().isEmpty())
            RelevantActions->setObjectName(QString::fromUtf8("RelevantActions"));
        RelevantActions->resize(1099, 652);
        horizontalLayout = new QHBoxLayout(RelevantActions);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        ajouterRouteur = new QCheckBox(RelevantActions);
        ajouterRouteur->setObjectName(QString::fromUtf8("ajouterRouteur"));

        verticalLayout_2->addWidget(ajouterRouteur);

        checkBox_2 = new QCheckBox(RelevantActions);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));

        verticalLayout_2->addWidget(checkBox_2);

        checkBox_3 = new QCheckBox(RelevantActions);
        checkBox_3->setObjectName(QString::fromUtf8("checkBox_3"));

        verticalLayout_2->addWidget(checkBox_3);

        checkBox_4 = new QCheckBox(RelevantActions);
        checkBox_4->setObjectName(QString::fromUtf8("checkBox_4"));

        verticalLayout_2->addWidget(checkBox_4);

        checkBox_5 = new QCheckBox(RelevantActions);
        checkBox_5->setObjectName(QString::fromUtf8("checkBox_5"));

        verticalLayout_2->addWidget(checkBox_5);

        checkBox_6 = new QCheckBox(RelevantActions);
        checkBox_6->setObjectName(QString::fromUtf8("checkBox_6"));

        verticalLayout_2->addWidget(checkBox_6);

        checkBox_7 = new QCheckBox(RelevantActions);
        checkBox_7->setObjectName(QString::fromUtf8("checkBox_7"));

        verticalLayout_2->addWidget(checkBox_7);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_2->addItem(horizontalSpacer);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        labelContexte = new QLabel(RelevantActions);
        labelContexte->setObjectName(QString::fromUtf8("labelContexte"));

        verticalLayout->addWidget(labelContexte);

        textBrowserContext = new QTextBrowser(RelevantActions);
        textBrowserContext->setObjectName(QString::fromUtf8("textBrowserContext"));

        verticalLayout->addWidget(textBrowserContext);

        labelObjectif = new QLabel(RelevantActions);
        labelObjectif->setObjectName(QString::fromUtf8("labelObjectif"));

        verticalLayout->addWidget(labelObjectif);

        textBrowserObjectif = new QTextBrowser(RelevantActions);
        textBrowserObjectif->setObjectName(QString::fromUtf8("textBrowserObjectif"));

        verticalLayout->addWidget(textBrowserObjectif);

        labelListeActions = new QLabel(RelevantActions);
        labelListeActions->setObjectName(QString::fromUtf8("labelListeActions"));

        verticalLayout->addWidget(labelListeActions);

        textBrowserListeActions = new QTextBrowser(RelevantActions);
        textBrowserListeActions->setObjectName(QString::fromUtf8("textBrowserListeActions"));

        verticalLayout->addWidget(textBrowserListeActions);

        labelActionsPertinantes = new QLabel(RelevantActions);
        labelActionsPertinantes->setObjectName(QString::fromUtf8("labelActionsPertinantes"));

        verticalLayout->addWidget(labelActionsPertinantes);

        textBrowserActionsPertinantes = new QTextBrowser(RelevantActions);
        textBrowserActionsPertinantes->setObjectName(QString::fromUtf8("textBrowserActionsPertinantes"));

        verticalLayout->addWidget(textBrowserActionsPertinantes);

        labelActionsNonPertinantes = new QLabel(RelevantActions);
        labelActionsNonPertinantes->setObjectName(QString::fromUtf8("labelActionsNonPertinantes"));

        verticalLayout->addWidget(labelActionsNonPertinantes);

        textBrowserActionsNonPertinantes = new QTextBrowser(RelevantActions);
        textBrowserActionsNonPertinantes->setObjectName(QString::fromUtf8("textBrowserActionsNonPertinantes"));

        verticalLayout->addWidget(textBrowserActionsNonPertinantes);


        horizontalLayout->addLayout(verticalLayout);


        retranslateUi(RelevantActions);

        QMetaObject::connectSlotsByName(RelevantActions);
    } // setupUi

    void retranslateUi(QDialog *RelevantActions)
    {
        RelevantActions->setWindowTitle(QApplication::translate("RelevantActions", "RelevantActions", 0, QApplication::UnicodeUTF8));
        ajouterRouteur->setText(QApplication::translate("RelevantActions", "Ajouter un routeur (pour l'exemple cochez ce checkBox)", 0, QApplication::UnicodeUTF8));
        checkBox_2->setText(QApplication::translate("RelevantActions", "CheckBox", 0, QApplication::UnicodeUTF8));
        checkBox_3->setText(QApplication::translate("RelevantActions", "CheckBox", 0, QApplication::UnicodeUTF8));
        checkBox_4->setText(QApplication::translate("RelevantActions", "CheckBox", 0, QApplication::UnicodeUTF8));
        checkBox_5->setText(QApplication::translate("RelevantActions", "CheckBox", 0, QApplication::UnicodeUTF8));
        checkBox_6->setText(QApplication::translate("RelevantActions", "CheckBox", 0, QApplication::UnicodeUTF8));
        checkBox_7->setText(QApplication::translate("RelevantActions", "CheckBox", 0, QApplication::UnicodeUTF8));
        labelContexte->setText(QApplication::translate("RelevantActions", "Contexte", 0, QApplication::UnicodeUTF8));
        labelObjectif->setText(QApplication::translate("RelevantActions", "Objectifs", 0, QApplication::UnicodeUTF8));
        labelListeActions->setText(QApplication::translate("RelevantActions", "Liste d'actions", 0, QApplication::UnicodeUTF8));
        labelActionsPertinantes->setText(QApplication::translate("RelevantActions", "Actions Pertinantes", 0, QApplication::UnicodeUTF8));
        labelActionsNonPertinantes->setText(QApplication::translate("RelevantActions", "Actions non pertinantes", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class RelevantActions: public Ui_RelevantActions {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RELEVANTACTIONS_H
