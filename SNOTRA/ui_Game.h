/********************************************************************************
** Form generated from reading UI file 'Game.ui'
**
** Created: Sat Feb 16 20:42:01 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAME_H
#define UI_GAME_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLCDNumber>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMdiArea>
#include <QtGui/QMenuBar>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Game
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QGridLayout *scoreGridLayout;
    QLabel *timeLabel;
    QLabel *lapsCounterLabel;
    QPushButton *changeModepushButton;
    QLCDNumber *lapsCounterLcdNumber;
    QLabel *globalPercentNlabel;
    QProgressBar *globalProgressBar;
    QLabel *scoreLabel;
    QLCDNumber *scoreLcdNumber;
    QPushButton *breakPushButton;
    QPushButton *getCluedPushButton;
    QLCDNumber *lcdNumber;
    QGridLayout *networkViewGridLayout;
    QMdiArea *mdiArea;
    QWidget *toolBox;
    QLabel *HUB;
    QLabel *Routeur;
    QLabel *Ordi;
    QLabel *RouteurNat;
    QLabel *Switch;
    QLabel *labelHUBToolBox;
    QLabel *labelRouteurToolBox;
    QLabel *labelOrdiToolBox;
    QLabel *labelRouteurNatToolBox;
    QLabel *labelSwitchToolBox;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Game)
    {
        if (Game->objectName().isEmpty())
            Game->setObjectName(QString::fromUtf8("Game"));
        Game->resize(1280, 800);
        centralwidget = new QWidget(Game);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        scoreGridLayout = new QGridLayout();
        scoreGridLayout->setSpacing(0);
        scoreGridLayout->setObjectName(QString::fromUtf8("scoreGridLayout"));
        scoreGridLayout->setSizeConstraint(QLayout::SetMinAndMaxSize);
        timeLabel = new QLabel(centralwidget);
        timeLabel->setObjectName(QString::fromUtf8("timeLabel"));

        scoreGridLayout->addWidget(timeLabel, 0, 3, 1, 1);

        lapsCounterLabel = new QLabel(centralwidget);
        lapsCounterLabel->setObjectName(QString::fromUtf8("lapsCounterLabel"));

        scoreGridLayout->addWidget(lapsCounterLabel, 1, 1, 1, 1);

        changeModepushButton = new QPushButton(centralwidget);
        changeModepushButton->setObjectName(QString::fromUtf8("changeModepushButton"));

        scoreGridLayout->addWidget(changeModepushButton, 1, 5, 1, 1);

        lapsCounterLcdNumber = new QLCDNumber(centralwidget);
        lapsCounterLcdNumber->setObjectName(QString::fromUtf8("lapsCounterLcdNumber"));

        scoreGridLayout->addWidget(lapsCounterLcdNumber, 1, 2, 1, 1);

        globalPercentNlabel = new QLabel(centralwidget);
        globalPercentNlabel->setObjectName(QString::fromUtf8("globalPercentNlabel"));

        scoreGridLayout->addWidget(globalPercentNlabel, 0, 0, 1, 1);

        globalProgressBar = new QProgressBar(centralwidget);
        globalProgressBar->setObjectName(QString::fromUtf8("globalProgressBar"));
        globalProgressBar->setValue(0);

        scoreGridLayout->addWidget(globalProgressBar, 1, 0, 1, 1);

        scoreLabel = new QLabel(centralwidget);
        scoreLabel->setObjectName(QString::fromUtf8("scoreLabel"));

        scoreGridLayout->addWidget(scoreLabel, 0, 1, 1, 1);

        scoreLcdNumber = new QLCDNumber(centralwidget);
        scoreLcdNumber->setObjectName(QString::fromUtf8("scoreLcdNumber"));

        scoreGridLayout->addWidget(scoreLcdNumber, 0, 2, 1, 1);

        breakPushButton = new QPushButton(centralwidget);
        breakPushButton->setObjectName(QString::fromUtf8("breakPushButton"));

        scoreGridLayout->addWidget(breakPushButton, 1, 3, 1, 1);

        getCluedPushButton = new QPushButton(centralwidget);
        getCluedPushButton->setObjectName(QString::fromUtf8("getCluedPushButton"));

        scoreGridLayout->addWidget(getCluedPushButton, 0, 5, 1, 1);

        lcdNumber = new QLCDNumber(centralwidget);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));

        scoreGridLayout->addWidget(lcdNumber, 0, 4, 1, 1);


        verticalLayout->addLayout(scoreGridLayout);

        networkViewGridLayout = new QGridLayout();
        networkViewGridLayout->setObjectName(QString::fromUtf8("networkViewGridLayout"));
        mdiArea = new QMdiArea(centralwidget);
        mdiArea->setObjectName(QString::fromUtf8("mdiArea"));
        mdiArea->setAutoFillBackground(true);
        mdiArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        mdiArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        toolBox = new QWidget();
        toolBox->setObjectName(QString::fromUtf8("toolBox"));
        toolBox->setMinimumSize(QSize(200, 600));
        toolBox->setMaximumSize(QSize(16777215, 16777215));
        toolBox->setBaseSize(QSize(0, 0));
        toolBox->setLayoutDirection(Qt::LeftToRight);
        toolBox->setAutoFillBackground(false);
        HUB = new QLabel(toolBox);
        HUB->setObjectName(QString::fromUtf8("HUB"));
        HUB->setGeometry(QRect(0, 0, 130, 90));
        HUB->setMinimumSize(QSize(130, 90));
        HUB->setMaximumSize(QSize(130, 90));
        HUB->setPixmap(QPixmap(QString::fromUtf8(":/HUB.png")));
        HUB->setScaledContents(true);
        Routeur = new QLabel(toolBox);
        Routeur->setObjectName(QString::fromUtf8("Routeur"));
        Routeur->setGeometry(QRect(20, 100, 130, 90));
        Routeur->setMinimumSize(QSize(130, 90));
        Routeur->setMaximumSize(QSize(130, 90));
        Routeur->setPixmap(QPixmap(QString::fromUtf8(":/Routeur.png")));
        Routeur->setScaledContents(true);
        Ordi = new QLabel(toolBox);
        Ordi->setObjectName(QString::fromUtf8("Ordi"));
        Ordi->setGeometry(QRect(20, 200, 130, 90));
        Ordi->setMinimumSize(QSize(130, 90));
        Ordi->setMaximumSize(QSize(130, 90));
        Ordi->setPixmap(QPixmap(QString::fromUtf8(":/Ordi.png")));
        Ordi->setScaledContents(true);
        RouteurNat = new QLabel(toolBox);
        RouteurNat->setObjectName(QString::fromUtf8("RouteurNat"));
        RouteurNat->setGeometry(QRect(20, 290, 130, 90));
        RouteurNat->setMinimumSize(QSize(130, 90));
        RouteurNat->setMaximumSize(QSize(130, 90));
        RouteurNat->setPixmap(QPixmap(QString::fromUtf8(":/RouteurNat.png")));
        RouteurNat->setScaledContents(true);
        Switch = new QLabel(toolBox);
        Switch->setObjectName(QString::fromUtf8("Switch"));
        Switch->setGeometry(QRect(30, 440, 130, 90));
        Switch->setMinimumSize(QSize(130, 90));
        Switch->setMaximumSize(QSize(130, 90));
        Switch->setPixmap(QPixmap(QString::fromUtf8(":/Switch.png")));
        Switch->setScaledContents(true);
        labelHUBToolBox = new QLabel(toolBox);
        labelHUBToolBox->setObjectName(QString::fromUtf8("labelHUBToolBox"));
        labelHUBToolBox->setGeometry(QRect(110, 20, 66, 17));
        labelRouteurToolBox = new QLabel(toolBox);
        labelRouteurToolBox->setObjectName(QString::fromUtf8("labelRouteurToolBox"));
        labelRouteurToolBox->setGeometry(QRect(120, 120, 66, 17));
        labelOrdiToolBox = new QLabel(toolBox);
        labelOrdiToolBox->setObjectName(QString::fromUtf8("labelOrdiToolBox"));
        labelOrdiToolBox->setGeometry(QRect(130, 230, 66, 17));
        labelRouteurNatToolBox = new QLabel(toolBox);
        labelRouteurNatToolBox->setObjectName(QString::fromUtf8("labelRouteurNatToolBox"));
        labelRouteurNatToolBox->setGeometry(QRect(120, 310, 66, 17));
        labelSwitchToolBox = new QLabel(toolBox);
        labelSwitchToolBox->setObjectName(QString::fromUtf8("labelSwitchToolBox"));
        labelSwitchToolBox->setGeometry(QRect(110, 460, 66, 17));
        mdiArea->addSubWindow(toolBox);

        networkViewGridLayout->addWidget(mdiArea, 0, 0, 1, 1);


        verticalLayout->addLayout(networkViewGridLayout);

        Game->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Game);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1280, 25));
        Game->setMenuBar(menubar);
        statusbar = new QStatusBar(Game);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Game->setStatusBar(statusbar);

        retranslateUi(Game);

        QMetaObject::connectSlotsByName(Game);
    } // setupUi

    void retranslateUi(QMainWindow *Game)
    {
        Game->setWindowTitle(QApplication::translate("Game", "Game", 0, QApplication::UnicodeUTF8));
        timeLabel->setText(QApplication::translate("Game", "Time", 0, QApplication::UnicodeUTF8));
        lapsCounterLabel->setText(QApplication::translate("Game", "Nombre de coups", 0, QApplication::UnicodeUTF8));
        changeModepushButton->setText(QApplication::translate("Game", "Mode", 0, QApplication::UnicodeUTF8));
        globalPercentNlabel->setText(QApplication::translate("Game", "Pourcentage global r\303\251alis\303\251", 0, QApplication::UnicodeUTF8));
        scoreLabel->setText(QApplication::translate("Game", "Score", 0, QApplication::UnicodeUTF8));
        breakPushButton->setText(QApplication::translate("Game", "Pause", 0, QApplication::UnicodeUTF8));
        getCluedPushButton->setText(QApplication::translate("Game", "Obtenir un indice", 0, QApplication::UnicodeUTF8));
        toolBox->setWindowTitle(QApplication::translate("Game", "Tool Box", 0, QApplication::UnicodeUTF8));
        HUB->setText(QString());
        Routeur->setText(QString());
        Ordi->setText(QString());
        RouteurNat->setText(QString());
        Switch->setText(QString());
        labelHUBToolBox->setText(QApplication::translate("Game", "HUB", 0, QApplication::UnicodeUTF8));
        labelRouteurToolBox->setText(QApplication::translate("Game", "Routeur", 0, QApplication::UnicodeUTF8));
        labelOrdiToolBox->setText(QApplication::translate("Game", "Ordi", 0, QApplication::UnicodeUTF8));
        labelRouteurNatToolBox->setText(QApplication::translate("Game", "Routeur NAT", 0, QApplication::UnicodeUTF8));
        labelSwitchToolBox->setText(QApplication::translate("Game", "Switch", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Game: public Ui_Game {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAME_H
