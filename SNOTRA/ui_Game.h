/********************************************************************************
** Form generated from reading UI file 'Game.ui'
**
** Created: Thu Mar 21 16:52:31 2013
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
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QProgressBar>
#include <QtGui/QStatusBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Game
{
public:
    QAction *actionNouvelle;
    QAction *actionRecommencer;
    QAction *actionCharger;
    QAction *actionQuitter;
    QAction *actionPause;
    QAction *actionDifficult;
    QAction *actionObtenir_un_indice;
    QAction *actionCr_dit;
    QAction *actionAide;
    QAction *actionTool_Box;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QGridLayout *scoreGridLayout;
    QLabel *timeLabel;
    QLabel *lapsCounterLabel;
    QLCDNumber *lapsCounterLcdNumber;
    QLabel *globalPercentLabel;
    QProgressBar *globalProgressBar;
    QLabel *scoreLabel;
    QLCDNumber *scoreLcdNumber;
    QLCDNumber *lcdNumber;
    QGridLayout *networkViewGridLayout;
    QMdiArea *mdiArea;
    QMenuBar *menubar;
    QMenu *menuPartie;
    QMenu *menuJeu;
    QMenu *menuOption;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Game)
    {
        if (Game->objectName().isEmpty())
            Game->setObjectName(QString::fromUtf8("Game"));
        Game->resize(1700, 900);
        actionNouvelle = new QAction(Game);
        actionNouvelle->setObjectName(QString::fromUtf8("actionNouvelle"));
        actionRecommencer = new QAction(Game);
        actionRecommencer->setObjectName(QString::fromUtf8("actionRecommencer"));
        actionCharger = new QAction(Game);
        actionCharger->setObjectName(QString::fromUtf8("actionCharger"));
        actionQuitter = new QAction(Game);
        actionQuitter->setObjectName(QString::fromUtf8("actionQuitter"));
        actionPause = new QAction(Game);
        actionPause->setObjectName(QString::fromUtf8("actionPause"));
        actionDifficult = new QAction(Game);
        actionDifficult->setObjectName(QString::fromUtf8("actionDifficult"));
        actionObtenir_un_indice = new QAction(Game);
        actionObtenir_un_indice->setObjectName(QString::fromUtf8("actionObtenir_un_indice"));
        actionCr_dit = new QAction(Game);
        actionCr_dit->setObjectName(QString::fromUtf8("actionCr_dit"));
        actionAide = new QAction(Game);
        actionAide->setObjectName(QString::fromUtf8("actionAide"));
        actionTool_Box = new QAction(Game);
        actionTool_Box->setObjectName(QString::fromUtf8("actionTool_Box"));
        centralwidget = new QWidget(Game);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        scoreGridLayout = new QGridLayout();
        scoreGridLayout->setSpacing(5);
        scoreGridLayout->setObjectName(QString::fromUtf8("scoreGridLayout"));
        scoreGridLayout->setSizeConstraint(QLayout::SetMinAndMaxSize);
        timeLabel = new QLabel(centralwidget);
        timeLabel->setObjectName(QString::fromUtf8("timeLabel"));

        scoreGridLayout->addWidget(timeLabel, 0, 3, 1, 1);

        lapsCounterLabel = new QLabel(centralwidget);
        lapsCounterLabel->setObjectName(QString::fromUtf8("lapsCounterLabel"));

        scoreGridLayout->addWidget(lapsCounterLabel, 1, 1, 1, 1);

        lapsCounterLcdNumber = new QLCDNumber(centralwidget);
        lapsCounterLcdNumber->setObjectName(QString::fromUtf8("lapsCounterLcdNumber"));

        scoreGridLayout->addWidget(lapsCounterLcdNumber, 1, 2, 1, 1);

        globalPercentLabel = new QLabel(centralwidget);
        globalPercentLabel->setObjectName(QString::fromUtf8("globalPercentLabel"));

        scoreGridLayout->addWidget(globalPercentLabel, 0, 0, 1, 1);

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
        mdiArea->setViewMode(QMdiArea::SubWindowView);
        mdiArea->setDocumentMode(false);
        mdiArea->setTabsClosable(false);
        mdiArea->setTabsMovable(false);

        networkViewGridLayout->addWidget(mdiArea, 0, 0, 1, 1);


        verticalLayout->addLayout(networkViewGridLayout);

        Game->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Game);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1700, 25));
        menuPartie = new QMenu(menubar);
        menuPartie->setObjectName(QString::fromUtf8("menuPartie"));
        menuJeu = new QMenu(menubar);
        menuJeu->setObjectName(QString::fromUtf8("menuJeu"));
        menuOption = new QMenu(menubar);
        menuOption->setObjectName(QString::fromUtf8("menuOption"));
        Game->setMenuBar(menubar);
        statusbar = new QStatusBar(Game);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Game->setStatusBar(statusbar);

        menubar->addAction(menuPartie->menuAction());
        menubar->addAction(menuJeu->menuAction());
        menubar->addAction(menuOption->menuAction());
        menuPartie->addAction(actionNouvelle);
        menuPartie->addAction(actionRecommencer);
        menuPartie->addAction(actionCharger);
        menuPartie->addAction(actionQuitter);
        menuJeu->addAction(actionPause);
        menuJeu->addAction(actionDifficult);
        menuJeu->addAction(actionObtenir_un_indice);
        menuJeu->addAction(actionTool_Box);
        menuOption->addAction(actionCr_dit);
        menuOption->addAction(actionAide);

        retranslateUi(Game);
        QObject::connect(actionQuitter, SIGNAL(activated()), Game, SLOT(close()));

        QMetaObject::connectSlotsByName(Game);
    } // setupUi

    void retranslateUi(QMainWindow *Game)
    {
        Game->setWindowTitle(QApplication::translate("Game", "Game", 0, QApplication::UnicodeUTF8));
        actionNouvelle->setText(QApplication::translate("Game", "Nouvelle", 0, QApplication::UnicodeUTF8));
        actionRecommencer->setText(QApplication::translate("Game", "Recommencer", 0, QApplication::UnicodeUTF8));
        actionCharger->setText(QApplication::translate("Game", "Charger", 0, QApplication::UnicodeUTF8));
        actionQuitter->setText(QApplication::translate("Game", "Quitter", 0, QApplication::UnicodeUTF8));
        actionPause->setText(QApplication::translate("Game", "Pause", 0, QApplication::UnicodeUTF8));
        actionDifficult->setText(QApplication::translate("Game", "Difficult\303\251", 0, QApplication::UnicodeUTF8));
        actionObtenir_un_indice->setText(QApplication::translate("Game", "Obtenir un indice", 0, QApplication::UnicodeUTF8));
        actionCr_dit->setText(QApplication::translate("Game", "Cr\303\251dit", 0, QApplication::UnicodeUTF8));
        actionAide->setText(QApplication::translate("Game", "Aide", 0, QApplication::UnicodeUTF8));
        actionTool_Box->setText(QApplication::translate("Game", "Tool Box", 0, QApplication::UnicodeUTF8));
        timeLabel->setText(QApplication::translate("Game", "Time", 0, QApplication::UnicodeUTF8));
        lapsCounterLabel->setText(QApplication::translate("Game", "Nombre de coups", 0, QApplication::UnicodeUTF8));
        globalPercentLabel->setText(QApplication::translate("Game", "Pourcentage global r\303\251alis\303\251", 0, QApplication::UnicodeUTF8));
        scoreLabel->setText(QApplication::translate("Game", "Score", 0, QApplication::UnicodeUTF8));
        menuPartie->setTitle(QApplication::translate("Game", "Partie", 0, QApplication::UnicodeUTF8));
        menuJeu->setTitle(QApplication::translate("Game", "Jeu", 0, QApplication::UnicodeUTF8));
        menuOption->setTitle(QApplication::translate("Game", "Option", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Game: public Ui_Game {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAME_H
