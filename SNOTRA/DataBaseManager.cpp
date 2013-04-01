/* 
 * File:   DataBase.cpp
 * Author: antoine
 * 
 * Created on 29 mars 2013, 11:09
 */

#include "DataBaseManager.h"
#include "NetworkGameArea.h"
#include <QDir>
#include <iostream>
#include <qt4/QtCore/qdebug.h>
#include <qt4/QtGui/qlabel.h>
#define q2c(string) string.toStdString()

DataBaseManager::DataBaseManager() {
    Sauvegarder *save = new Sauvegarder();
    save->exec();
    tableName = save->getResultLineString();
    qDebug()<<tableName;
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
        createTableQuerry.exec("CREATE TABLE "+tableName+" (ID INTEGER, name TEXT,"
                "positionX INTEGER, positionY INTEGER)");
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
    QSqlQuery query("INSERT INTO "+tableName+" (ID, name, positionX, positionY)"
            " VALUES(?,?,?,?)");
    query.bindValue(0, ID);
    query.bindValue(1, item->objectName());
    query.bindValue(2, item->pos().x());
    query.bindValue(3, item->pos().y());
    query.exec();

}

int DataBaseManager::setLastID() {
    int lastID = 0;
    QSqlQuery query;
    /*revoi un bool*/
    query.exec("SELECT MAX(ID) FROM "+tableName);

    if (query.isSelect()) {
        while (query.next()) {

            lastID = query.value(0).toInt();
        }
    }
    return lastID;
}

QList<QLabel*> DataBaseManager::load() {
    QList<QLabel*> qLabelList;

    QSqlQuery query("SELECT * FROM sauvegarde");
    if (query.isSelect()) {
        while (query.next()) {
            QLabel *labelExtracted = new QLabel();
            labelExtracted->setObjectName(query.value(1).toString());
            labelExtracted->move(query.value(2).toInt(),query.value(3).toInt());
            
            qLabelList.append(labelExtracted);
        }
    }
    return qLabelList;
}

void DataBaseManager::closeDb() {
    db.close();
}

DataBaseManager::DataBaseManager(const DataBaseManager& orig) {
}

DataBaseManager::~DataBaseManager() {
}

//void DataBaseManager::setTableName(QString tableName){
//    this->tableName=tableName;
//}
