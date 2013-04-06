/*
 * File:   main.cpp
 * Author: antoine
 *
 * Created on 12 février 2013, 22:17
 */
/*
#include <QtGui/QApplication>
#include <qt4/QtGui/qwidget.h>
 */

#include "Game.h"
#include "NetworkGameArea.h"
#include "WireShark.h"
#include "Frame.h"
#include "PortConnecterChoice.h"
#include "DataBaseManager.h"
#include "Sauvegarder.h"
#include "RelevantActions.h"


int main(int argc, char *argv[]) {
    // initialize resources, if needed
    // Q_INIT_RESOURCE(resfile)

    QApplication app(argc, argv);

    // create and show your widgets here
    Game *game = new Game();
    game->show();
    WireShark *wireShark = new WireShark();
    wireShark->show();
//
//    
//    RelevantActions *r = new RelevantActions();
//    r->show();
    
    return app.exec();

}
