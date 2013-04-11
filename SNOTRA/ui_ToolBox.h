/********************************************************************************
** Form generated from reading UI file 'ToolBox.ui'
**
<<<<<<< HEAD
** Created: Thu Apr 11 10:34:08 2013
**      by: Qt User Interface Compiler version 4.8.1
=======
** Created: Wed Apr 10 00:54:07 2013
**      by: Qt User Interface Compiler version 4.8.2
>>>>>>> 377a68d9ec1753ca5978a946f2d0a552659ca2db
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TOOLBOX_H
#define UI_TOOLBOX_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ToolBox
{
public:
    QGridLayout *gridLayout;
    QLabel *switc;
    QLabel *labelRouterToolBox;
    QLabel *labelRouterNatToolBox;
    QLabel *labelSwitchToolBox;
    QLabel *labelHUBToolBox;
    QLabel *router;
    QLabel *routerNat;
    QLabel *hub;
    QLabel *labelPCToolBox;
    QLabel *pc;
    QLabel *labelWire;
    QPushButton *pushButtonFil;

    void setupUi(QWidget *ToolBox)
    {
        if (ToolBox->objectName().isEmpty())
            ToolBox->setObjectName(QString::fromUtf8("ToolBox"));
        ToolBox->resize(300, 800);
        ToolBox->setMinimumSize(QSize(300, 800));
        gridLayout = new QGridLayout(ToolBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        switc = new QLabel(ToolBox);
        switc->setObjectName(QString::fromUtf8("switc"));
        switc->setMaximumSize(QSize(100, 100));
        switc->setPixmap(QPixmap(QString::fromUtf8("IconeItemNetwork/Switch.png")));
        switc->setScaledContents(true);

        gridLayout->addWidget(switc, 2, 1, 1, 1);

        labelRouterToolBox = new QLabel(ToolBox);
        labelRouterToolBox->setObjectName(QString::fromUtf8("labelRouterToolBox"));

        gridLayout->addWidget(labelRouterToolBox, 1, 0, 1, 1);

        labelRouterNatToolBox = new QLabel(ToolBox);
        labelRouterNatToolBox->setObjectName(QString::fromUtf8("labelRouterNatToolBox"));

        gridLayout->addWidget(labelRouterNatToolBox, 3, 0, 1, 1);

        labelSwitchToolBox = new QLabel(ToolBox);
        labelSwitchToolBox->setObjectName(QString::fromUtf8("labelSwitchToolBox"));

        gridLayout->addWidget(labelSwitchToolBox, 2, 0, 1, 1);

        labelHUBToolBox = new QLabel(ToolBox);
        labelHUBToolBox->setObjectName(QString::fromUtf8("labelHUBToolBox"));
        labelHUBToolBox->setEnabled(true);
        labelHUBToolBox->setMaximumSize(QSize(16777215, 16777215));
        labelHUBToolBox->setText(QString::fromUtf8("HUB"));
        labelHUBToolBox->setTextFormat(Qt::AutoText);
        labelHUBToolBox->setScaledContents(false);

        gridLayout->addWidget(labelHUBToolBox, 0, 0, 1, 1);

        router = new QLabel(ToolBox);
        router->setObjectName(QString::fromUtf8("router"));
        router->setMaximumSize(QSize(100, 100));
        router->setPixmap(QPixmap(QString::fromUtf8("IconeItemNetwork/Routeur.png")));
        router->setScaledContents(true);

        gridLayout->addWidget(router, 1, 1, 1, 1);

        routerNat = new QLabel(ToolBox);
        routerNat->setObjectName(QString::fromUtf8("routerNat"));
        routerNat->setMaximumSize(QSize(100, 100));
        routerNat->setPixmap(QPixmap(QString::fromUtf8("IconeItemNetwork/RouteurNat.png")));
        routerNat->setScaledContents(true);

        gridLayout->addWidget(routerNat, 3, 1, 1, 1);

        hub = new QLabel(ToolBox);
        hub->setObjectName(QString::fromUtf8("hub"));
        hub->setMaximumSize(QSize(100, 100));
        hub->setPixmap(QPixmap(QString::fromUtf8("IconeItemNetwork/HUB.png")));
        hub->setScaledContents(true);

        gridLayout->addWidget(hub, 0, 1, 1, 1);

        labelPCToolBox = new QLabel(ToolBox);
        labelPCToolBox->setObjectName(QString::fromUtf8("labelPCToolBox"));

        gridLayout->addWidget(labelPCToolBox, 4, 0, 1, 1);

        pc = new QLabel(ToolBox);
        pc->setObjectName(QString::fromUtf8("pc"));
        pc->setMaximumSize(QSize(100, 100));
        pc->setPixmap(QPixmap(QString::fromUtf8("IconeItemNetwork/Ordi.png")));
        pc->setScaledContents(true);

        gridLayout->addWidget(pc, 4, 1, 1, 1);

        labelWire = new QLabel(ToolBox);
        labelWire->setObjectName(QString::fromUtf8("labelWire"));

        gridLayout->addWidget(labelWire, 5, 0, 1, 1);

        pushButtonFil = new QPushButton(ToolBox);
        pushButtonFil->setObjectName(QString::fromUtf8("pushButtonFil"));

        gridLayout->addWidget(pushButtonFil, 5, 1, 1, 1);


        retranslateUi(ToolBox);

        QMetaObject::connectSlotsByName(ToolBox);
    } // setupUi

    void retranslateUi(QWidget *ToolBox)
    {
        ToolBox->setWindowTitle(QApplication::translate("ToolBox", "ToolBox", 0, QApplication::UnicodeUTF8));
        switc->setText(QString());
        labelRouterToolBox->setText(QApplication::translate("ToolBox", "Routeur", 0, QApplication::UnicodeUTF8));
        labelRouterNatToolBox->setText(QApplication::translate("ToolBox", "Routeur NAT", 0, QApplication::UnicodeUTF8));
        labelSwitchToolBox->setText(QApplication::translate("ToolBox", "Switch", 0, QApplication::UnicodeUTF8));
        router->setText(QString());
        routerNat->setText(QString());
        hub->setText(QString());
        labelPCToolBox->setText(QApplication::translate("ToolBox", "Ordi", 0, QApplication::UnicodeUTF8));
        pc->setText(QString());
        labelWire->setText(QApplication::translate("ToolBox", "Fil", 0, QApplication::UnicodeUTF8));
        pushButtonFil->setText(QApplication::translate("ToolBox", "Tracer un fil", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ToolBox: public Ui_ToolBox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOOLBOX_H
