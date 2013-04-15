/*
 * File:   PropertiesOfIterfaceSetter.cpp
 * Author: antoine
 *
 * Created on 8 avril 2013, 18:18
 */

#include <qt4/QtCore/qdebug.h>

#include "PropertiesOfIterfaceSetter.h"

PropertiesOfInterfaceSetter::PropertiesOfInterfaceSetter() {
    widget.setupUi(this);
    connect(this->widget.pushButton, SIGNAL(pressed()), this,
            SLOT(slotSetProperties()));
}

PropertiesOfInterfaceSetter::~PropertiesOfInterfaceSetter() {
}

void PropertiesOfInterfaceSetter::setText(QString textName) {
    this->widget.textBrowserName->setText(textName);
}

void PropertiesOfInterfaceSetter::slotSetProperties() {
    setName(this->widget.lineEditSetName->text());
    setIP(this->widget.lineEditSetIP->text());
}

void PropertiesOfInterfaceSetter::setName(QString name) {
    this->name = name;
}

void PropertiesOfInterfaceSetter::setIP(QString IP) {
    this->IP = IP;
}
