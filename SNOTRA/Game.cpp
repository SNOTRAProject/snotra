/*
 * File:   Game.cpp
 * Author: antoine
 *
 * Created on 12 février 2013, 22:17
 */

#include "Game.h"
//#include "SubWindowWidget.h"

Game::Game() {
    /*
        gridLayoutToolBox = new QGridLayout;
        gameWindow.setupUi(this);*/

    /*setPictureItemNetwork();
    setGridLayout();*/

    QMdiSubWindow * toolBox = new QMdiSubWindow;

    toolBox->setWidget(new ToolBox());
    toolBox->setAttribute(Qt::WA_DeleteOnClose);

    gameWindow.setupUi(this);
    gameWindow.mdiArea->addSubWindow(toolBox);


    //gameWindow.toolBox->setLayout(gridLayoutToolBox);
    //QTextEdit *text = new QTextEdit();
    connect(gameWindow.actionTool_Box, SIGNAL(activated()), this, SLOT(addSubWindowToolBox()));

}

void Game::addSubWindowToolBox() {
    //setPictureItemNetwork();
    
    QMdiSubWindow * toolBox = new QMdiSubWindow;
    gameWindow.mdiArea->addSubWindow(toolBox);
    toolBox->setWidget(new ToolBox());
    gameWindow.mdiArea->addSubWindow(toolBox);

    toolBox->setAttribute(Qt::WA_DeleteOnClose);

    toolBox->resize(300,800);
    toolBox->show();




}
/*
void Game::setPictureItemNetwork() {
    HUB = new QLabel;
    QPixmap pixmapHUB(":/HUB.png");
    HUB->setPixmap(pixmapHUB.scaled(130, 90, Qt::KeepAspectRatio));

    Ordi = new QLabel;
    QPixmap pixmapOrdi(":/Ordi.png");
    Ordi->setPixmap(pixmapOrdi.scaled(130, 90, Qt::KeepAspectRatio));

    Switch = new QLabel;
    QPixmap pixmapSwitch(":/Switch.png");
    Switch->setPixmap(pixmapSwitch.scaled(130, 90, Qt::KeepAspectRatio));

    RouteurNat = new QLabel;
    QPixmap pixmapRouteurNat(":/RouteurNat.png");
    RouteurNat->setPixmap(pixmapRouteurNat.scaled(130, 90, Qt::KeepAspectRatio));


    Routeur = new QLabel;
    QPixmap pixmapRouteur(":/Routeur.png");
    Routeur->setPixmap(pixmapRouteur.scaled(130, 90, Qt::KeepAspectRatio));
}
*/
Game::~Game() {
}
