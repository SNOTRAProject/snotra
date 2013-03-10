/*
 * File:   NetworkGameArea.cpp
 * Author: antoine
 *
 * Created on 10 mars 2013, 16:01
 */

#include "NetworkGameArea.h"

NetworkGameArea::NetworkGameArea() {
    widget.setupUi(this);
    QPushButton *bouton = new QPushButton("Mon bouton entre en scène !");
    QGraphicsScene* scene = new QGraphicsScene();

    QGraphicsProxyWidget *proxy = new QGraphicsProxyWidget();
    proxy->setWidget(bouton);
    scene->addItem(proxy);

    widget.graphicsView->setScene(scene);
    /*QGraphicsView view(&scene);
    view.show();*/

}

NetworkGameArea::~NetworkGameArea() {
}
