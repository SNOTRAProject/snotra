/********************************************************************************
** Form generated from reading UI file 'Game.ui'
**
** Created: Wed Feb 13 19:43:47 2013
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
        toolBox = new QWidget();
        toolBox->setObjectName(QString::fromUtf8("toolBox"));
        toolBox->setMinimumSize(QSize(200, 600));
        toolBox->setLayoutDirection(Qt::LeftToRight);
        toolBox->setAutoFillBackground(false);
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
        toolBox->setWindowTitle(QApplication::translate("Game", "Sous fen\303\252tre", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Game: public Ui_Game {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAME_H
