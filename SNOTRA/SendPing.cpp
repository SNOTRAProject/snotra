/*
 * File:   SendPing.cpp
 * Author: marc
 *
 * Created on 17 avril 2013, 11:00
 */

#include "SendPing.h"
#include <QDebug>

SendPing::SendPing() {
    widget.setupUi(this);
    connect(this->widget.pushButton, SIGNAL(pressed()), this,
            SLOT(slotSetDestinationIp()));
}

SendPing::~SendPing() {
}

void SendPing::slotSetDestinationIp() {
    setIp();
}

void SendPing::setIp() {
    destinationIP = this->widget.lineEdit->text();
}

QString SendPing::getDestinationIP() {
    return destinationIP;
}