/* 
 * File:   DataBase.cpp
 * Author: antoine
 * 
 * Created on 29 mars 2013, 11:09
 */

#include "DataBaseManager.h"
#include <QDir>
#include <iostream>
#include <qt4/QtCore/qdebug.h>
#define q2c(string) string.toStdString()

DataBase::DataBase() {


    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");

    //db.setHostName();
    //    db.setUserName("root");
    //    db.setPassword("");

    QString path(QDir::home().path());
    path = QDir::toNativeSeparators(path);
    path.append(QDir::separator()).append("sauvegarde.db");

    db.setDatabaseName(path);

    if (db.open()) {
        qDebug("vous etes connecté");
    } else {
        qDebug("connecttion echoue");
        std::cout << "La connexion a échouée, désolé :(" << std::endl << q2c(db.lastError().text()) << std::endl;
    }

}

void DataBase::createTable() {

}

bool DataBase::openDB() {

    if (!db.open()) {
        qDebug("erreur");
    }

    return db.open();
}

DataBase::DataBase(const DataBase& orig) {
}

DataBase::~DataBase() {
}

