/********************************************************************************
** Form generated from reading UI file 'ToolBox.ui'
**
** Created: Thu Mar 21 16:52:31 2013
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
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ToolBox
{
public:
    QGridLayout *gridLayout;
    QLabel *labelPixmapSwitch;
    QLabel *labelRouteurToolBox;
    QLabel *labelRouteurNatToolBox;
    QLabel *labelSwitchToolBox;
    QLabel *labelHUBToolBox;
    QLabel *labelPixmapRouteur;
    QLabel *labelPixmapRouteurNat;
    QLabel *labelPixmapHUB;
    QLabel *labelOrdiToolBox;
    QLabel *labelPixmapOrdi;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QWidget *ToolBox)
    {
        if (ToolBox->objectName().isEmpty())
            ToolBox->setObjectName(QString::fromUtf8("ToolBox"));
        ToolBox->resize(300, 800);
        ToolBox->setMinimumSize(QSize(300, 800));
        gridLayout = new QGridLayout(ToolBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        labelPixmapSwitch = new QLabel(ToolBox);
        labelPixmapSwitch->setObjectName(QString::fromUtf8("labelPixmapSwitch"));
        labelPixmapSwitch->setMaximumSize(QSize(100, 100));
        labelPixmapSwitch->setPixmap(QPixmap(QString::fromUtf8("IconeItemNetwork/Switch.png")));
        labelPixmapSwitch->setScaledContents(true);

        gridLayout->addWidget(labelPixmapSwitch, 2, 1, 1, 1);

        labelRouteurToolBox = new QLabel(ToolBox);
        labelRouteurToolBox->setObjectName(QString::fromUtf8("labelRouteurToolBox"));

        gridLayout->addWidget(labelRouteurToolBox, 1, 0, 1, 1);

        labelRouteurNatToolBox = new QLabel(ToolBox);
        labelRouteurNatToolBox->setObjectName(QString::fromUtf8("labelRouteurNatToolBox"));

        gridLayout->addWidget(labelRouteurNatToolBox, 3, 0, 1, 1);

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

        labelPixmapRouteur = new QLabel(ToolBox);
        labelPixmapRouteur->setObjectName(QString::fromUtf8("labelPixmapRouteur"));
        labelPixmapRouteur->setMaximumSize(QSize(100, 100));
        labelPixmapRouteur->setPixmap(QPixmap(QString::fromUtf8("IconeItemNetwork/Routeur.png")));
        labelPixmapRouteur->setScaledContents(true);

        gridLayout->addWidget(labelPixmapRouteur, 1, 1, 1, 1);

        labelPixmapRouteurNat = new QLabel(ToolBox);
        labelPixmapRouteurNat->setObjectName(QString::fromUtf8("labelPixmapRouteurNat"));
        labelPixmapRouteurNat->setMaximumSize(QSize(100, 100));
        labelPixmapRouteurNat->setPixmap(QPixmap(QString::fromUtf8("IconeItemNetwork/RouteurNat.png")));
        labelPixmapRouteurNat->setScaledContents(true);

        gridLayout->addWidget(labelPixmapRouteurNat, 3, 1, 1, 1);

        labelPixmapHUB = new QLabel(ToolBox);
        labelPixmapHUB->setObjectName(QString::fromUtf8("labelPixmapHUB"));
        labelPixmapHUB->setMaximumSize(QSize(100, 100));
        labelPixmapHUB->setPixmap(QPixmap(QString::fromUtf8("IconeItemNetwork/HUB.png")));
        labelPixmapHUB->setScaledContents(true);

        gridLayout->addWidget(labelPixmapHUB, 0, 1, 1, 1);

        labelOrdiToolBox = new QLabel(ToolBox);
        labelOrdiToolBox->setObjectName(QString::fromUtf8("labelOrdiToolBox"));

        gridLayout->addWidget(labelOrdiToolBox, 4, 0, 1, 1);

        labelPixmapOrdi = new QLabel(ToolBox);
        labelPixmapOrdi->setObjectName(QString::fromUtf8("labelPixmapOrdi"));
        labelPixmapOrdi->setMaximumSize(QSize(100, 100));
        labelPixmapOrdi->setPixmap(QPixmap(QString::fromUtf8("IconeItemNetwork/Ordi.png")));
        labelPixmapOrdi->setScaledContents(true);

        gridLayout->addWidget(labelPixmapOrdi, 4, 1, 1, 1);

        label = new QLabel(ToolBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 5, 0, 1, 1);

        label_2 = new QLabel(ToolBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 5, 1, 1, 1);


        retranslateUi(ToolBox);

        QMetaObject::connectSlotsByName(ToolBox);
    } // setupUi

    void retranslateUi(QWidget *ToolBox)
    {
        ToolBox->setWindowTitle(QApplication::translate("ToolBox", "ToolBox", 0, QApplication::UnicodeUTF8));
        labelPixmapSwitch->setText(QString());
        labelRouteurToolBox->setText(QApplication::translate("ToolBox", "Routeur", 0, QApplication::UnicodeUTF8));
        labelRouteurNatToolBox->setText(QApplication::translate("ToolBox", "Routeur NAT", 0, QApplication::UnicodeUTF8));
        labelSwitchToolBox->setText(QApplication::translate("ToolBox", "Switch", 0, QApplication::UnicodeUTF8));
        labelPixmapRouteur->setText(QString());
        labelPixmapRouteurNat->setText(QString());
        labelPixmapHUB->setText(QString());
        labelOrdiToolBox->setText(QApplication::translate("ToolBox", "Ordi", 0, QApplication::UnicodeUTF8));
        labelPixmapOrdi->setText(QString());
        label->setText(QApplication::translate("ToolBox", "Fil", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("ToolBox", "Ceci est un fil", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ToolBox: public Ui_ToolBox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOOLBOX_H
