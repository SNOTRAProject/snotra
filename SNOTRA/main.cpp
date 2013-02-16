/*
 * File:   main.cpp
 * Author: antoine
 *
 * Created on 12 février 2013, 22:17
 */

#include <QtGui/QApplication>
#include <qt4/QtGui/qwidget.h>

#include "Game.h"

int main(int argc, char *argv[]) {
    // initialize resources, if needed
    // Q_INIT_RESOURCE(resfile);

    QApplication app(argc, argv);

    // create and show your widgets here
    Game *game = new Game();
    game->show();
    return app.exec();
}