/*
 * File:   Sauvegarder.cpp
 * Author: antoine
 *
 * Created on 1 avril 2013, 21:15
 */

#include <qt4/QtCore/qobject.h>
#include <QDebug>

#include "BackupManager.h"

BackupManager::BackupManager() {
    widget.setupUi(this);
    connect(this->widget.pushButtonOK, SIGNAL(pressed()), this,
            SLOT(slotGetLineString()));
}

BackupManager::~BackupManager() {
}

void BackupManager::slotGetLineString() {
    setResultLineString();
}

void BackupManager::setResultLineString() {
    resultLineString = this->widget.lineEdit->text();
    qDebug()<<this->widget.lineEdit->text();
}

QString BackupManager::getResultLineString(){
    return resultLineString;
}