/*
 * File:   Game.cpp
 * Author: antoine
 *
 * Created on 12 février 2013, 22:17
 */

#include "Game.h"
#include "SubWindowWidget.h"

Game::Game() {

    gridLayoutToolBox = new QGridLayout;
    gameWindow.setupUi(this);

    setPictureItemNetwork();
    setGridLayout();
    
    gameWindow.toolBox->setLayout(gridLayoutToolBox);
    //QTextEdit *text = new QTextEdit();
    connect(gameWindow.actionTool_Box, SIGNAL(activated()), this, SLOT(addSubWindowToolBox()));

}

void Game::addSubWindowToolBox() {
    
    gridLayoutToolBox = new QGridLayout;

    setPictureItemNetwork();
    setGridLayout();
    
    SubWindowWidget *toolBox = new SubWindowWidget;
    toolBox->setMinimumSize(250,600);
    gameWindow.mdiArea->addSubWindow(toolBox);
    toolBox->setLayout(gridLayoutToolBox);
    toolBox->show();
}

void Game::setPictureItemNetwork() {
    HUB = new QLabel;
    QPixmap pixmapHUB(":/HUB.png");
    HUB->setPixmap(pixmapHUB.scaled(130,90,Qt::KeepAspectRatio));

    Ordi = new QLabel;
    QPixmap pixmapOrdi(":/Ordi.png");
    Ordi->setPixmap(pixmapOrdi.scaled(130,90,Qt::KeepAspectRatio));

    Switch = new QLabel;
    QPixmap pixmapSwitch(":/Switch.png");
    Switch->setPixmap(pixmapSwitch.scaled(130,90,Qt::KeepAspectRatio));

    RouteurNat = new QLabel;
    QPixmap pixmapRouteurNat(":/RouteurNat.png");
    RouteurNat->setPixmap(pixmapRouteurNat.scaled(130,90,Qt::KeepAspectRatio));


    Routeur = new QLabel;
    QPixmap pixmapRouteur(":/Routeur.png");
    Routeur->setPixmap(pixmapRouteur.scaled(130,90,Qt::KeepAspectRatio));
}

void Game::setGridLayout(){
    gridLayoutToolBox->addWidget(HUB, 0, 0);
    gridLayoutToolBox->addWidget(gameWindow.labelHUBToolBox, 0, 1);

    gridLayoutToolBox->addWidget(Ordi, 1, 0);
    gridLayoutToolBox->addWidget(gameWindow.labelOrdiToolBox, 1, 1);

    gridLayoutToolBox->addWidget(Switch, 2, 0);
    gridLayoutToolBox->addWidget(gameWindow.labelSwitchToolBox, 2, 1);

    gridLayoutToolBox->addWidget(RouteurNat, 3, 0);
    gridLayoutToolBox->addWidget(gameWindow.labelRouteurNatToolBox, 3, 1);

    gridLayoutToolBox->addWidget(Routeur, 4, 0);
    gridLayoutToolBox->addWidget(gameWindow.labelRouteurToolBox, 4, 1);
}

Game::~Game() {
}
