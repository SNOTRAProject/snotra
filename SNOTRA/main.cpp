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
#include "DataBaseManager.h"
#include "BackupManager.h"
#include "RelevantActions.h"
#include "LoadManager.h"
#include "SendPing.h"

int main(int argc, char *argv[]) {
    // initialize resources, if needed
    Q_INIT_RESOURCE(IconeItemNetwork);

    QApplication app(argc, argv);

    // create and show your widgets here
    Game *game = new Game();
    game->show();

    return app.exec();
}
