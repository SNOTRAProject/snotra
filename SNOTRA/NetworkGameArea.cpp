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
    scene->setSceneRect(0, 0, 1000, 1000);
    //mouseEvent = new QMouseEvent(QEvent::MouseButtonPress, point, Qt::NoButton, Qt::NoButton, Qt::NoModifier);

}

NetworkGameArea::~NetworkGameArea() {
}

void NetworkGameArea::setX() {
    QMouseEvent* mouseEvent = new QMouseEvent(QEvent::MouseButtonPress, point,
            Qt::NoButton, Qt::NoButton, Qt::NoModifier);
    this->x = mouseEvent->globalX();
    this->y = mouseEvent->globalY();
    delete mouseEvent;

    std::cout << this->x << std::endl;
    std::cout << this->y << std::endl;
}
