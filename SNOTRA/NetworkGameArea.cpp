/*
 * File:   NetworkGameArea.cpp
 * Author: antoine
 *
 * Created on 10 mars 2013, 16:01
 */

#include "NetworkGameArea.h"
using namespace std;

NetworkGameArea::NetworkGameArea() {
    widget.setupUi(this);
    buttonTest = new QPushButton("button");
    QGraphicsScene* scene = new QGraphicsScene();

    QGraphicsProxyWidget *proxy = new QGraphicsProxyWidget();
    proxy->setWidget(buttonTest);
    scene->addItem(proxy);

    widget.graphicsView->setScene(scene);
    scene->setSceneRect(-150, -200, 300, 300);
    mouseEvent = new QMouseEvent(QEvent::MouseButtonPress, point, Qt::NoButton, Qt::NoButton, Qt::NoModifier);

}

NetworkGameArea::~NetworkGameArea() {
}

void NetworkGameArea::setX() {
    this->x = mouseEvent->globalX();
    
    std::cout << this->x << std::endl;

}
