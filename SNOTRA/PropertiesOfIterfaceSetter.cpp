/*
 * File:   PropertiesOfIterfaceSetter.cpp
 * Author: antoine
 *
 * Created on 8 avril 2013, 18:18
 */

#include <qt4/QtCore/qdebug.h>

#include "PropertiesOfIterfaceSetter.h"

PropertiesOfIterfaceSetter::PropertiesOfIterfaceSetter() {
    widget.setupUi(this);
    connect(this->widget.pushButton, SIGNAL(pressed()), this,
            SLOT(slotSetProperties()));
}

PropertiesOfIterfaceSetter::~PropertiesOfIterfaceSetter() {
}

void PropertiesOfIterfaceSetter::setText(QString textName) {
    this->widget.textBrowserName->setText(textName);
}

void PropertiesOfIterfaceSetter::slotSetProperties() {
    setName(this->widget.lineEditSetName->text());
    setIP(this->widget.lineEditSetIP->text());
}

void PropertiesOfIterfaceSetter::setName(QString name) {
    this->name = name;
}

void PropertiesOfIterfaceSetter::setIP(QString IP) {
    this->IP = IP;
}
