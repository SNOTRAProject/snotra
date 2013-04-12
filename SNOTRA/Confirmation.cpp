/*
 * File:   Confirmation.cpp
 * Author: antoine
 *
 * Created on 5 avril 2013, 20:06
 */

#include "Confirmation.h"
#include "LoadManager.h"
#include <QDebug>

Confirmation::Confirmation() {
    replyOK = false;
    widget.setupUi(this);
    connect(this->widget.pushButtonOK, SIGNAL(pressed()), this,
            SLOT(slotReplyOK()));
}

Confirmation::~Confirmation() {
}

void Confirmation::slotReplyOK(){
    setReplyOK();
}

void Confirmation::setReplyOK(){
    replyOK=true;
}
bool Confirmation::getReplyOK(){
    return this->replyOK;
}