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
#include <qt4/QtGui/qlabel.h>
#define q2c(string) string.toStdString()

DataBaseManager::DataBaseManager() {


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
        QSqlQuery createTableQuerry;
        createTableQuerry.exec("CREATE TABLE sauvegarde (ID INTEGER, name TEXT,"
                "image INTEGER, position TEXT)");
    } else {
        qDebug("connecttion echoue");
        std::cout << "La connexion a échouée, désolé :(" << std::endl << q2c(db.lastError().text()) << std::endl;
    }

}
/**
 * creer une sauvegarde 
 */
void DataBaseManager::create(QLabel *item) {
    
     
    
    int ID = 0;
    ID = setLastID() + 1;
    QSqlQuery query("INSERT INTO sauvegarde (ID, name,image, position) VALUES("
            "?,?,1,'COUCOU')");
    query.bindValue(0,ID);
    query.bindValue(1,item->objectName());
    query.exec();
    
  }

int DataBaseManager::setLastID() {
    int lastID = 0;
    QSqlQuery query;
    /*revoi un bool*/
    query.exec("SELECT MAX(ID) FROM sauvegarde");

    if (query.isSelect()) {
        while (query.next()) {

            lastID = query.value(0).toInt();
        }
    }
    return lastID;
}

DataBaseManager::DataBaseManager(const DataBaseManager& orig) {
}

DataBaseManager::~DataBaseManager() {
}

