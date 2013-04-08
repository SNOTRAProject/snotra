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
#include "Charger.h"

#define q2c(string) string.toStdString()

DataBaseManager::DataBaseManager() {
}

/**
 * creer une sauvegarde 
 */
void DataBaseManager::create(QLabel *item) {
    qDebug() << tableName;

    int ID = 0;
    ID = setLastID() + 1;
    QSqlQuery query("INSERT INTO " + tableName + " (ID, name, positionX, "
            "positionY) VALUES(?,?,?,?)");
    query.bindValue(0, ID);
    query.bindValue(1, item->objectName());
    query.bindValue(2, item->pos().x());
    query.bindValue(3, item->pos().y());
    query.exec();

}

int DataBaseManager::setLastID() {
    int lastID = 0;
    QSqlQuery query;
    query.exec("SELECT MAX(ID) FROM " + tableName);

    if (query.isSelect()) {
        while (query.next()) {

            lastID = query.value(0).toInt();
        }
    }
    return lastID;
}

QList<QLabel*> DataBaseManager::load() {

    QList<QLabel*> qLabelList;
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    QString path(QDir::home().path());
    path = QDir::toNativeSeparators(path);
    path.append(QDir::separator()).append("sauvegarde.db");
    db.setDatabaseName(path);
    if (db.open()) {

        QString table = QString("");
        QStringList list = db.tables();
        //        QStringList::Iterator it = list.begin();

        Charger *charger = new Charger();
        charger->widget.comboBox->addItems(list);
        charger->exec();
        resetGame = charger->getResetGame();
        
        tableNameChoose = charger->getResultLineString();
        charger->setResetGame(false);
        //        while (it != list.end()) {
        //            // we save the name of the first table for later
        //            if (table.isEmpty()) table = *it;
        //            qDebug() << "Table: " << *it;
        //            ++it;
        //        }
        QSqlQuery query("SELECT * FROM " + tableNameChoose);
        if (query.isSelect()) {
            while (query.next()) {
                QLabel *labelExtracted = new QLabel();
                labelExtracted->setObjectName(query.value(1).toString());
                labelExtracted->move(query.value(2).toInt(),
                        query.value(3).toInt());

                qLabelList.append(labelExtracted);
            }
        }
        return qLabelList;
    } else {
        qDebug() << "echec de connection";
    }
     closeDb();
}

void DataBaseManager::closeDb() {
    if (db.isValid()) {
        db.close();
        QSqlDatabase::removeDatabase("sauvegarde");
    }
}

void DataBaseManager::showTable() {
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    QString path(QDir::home().path());
    path = QDir::toNativeSeparators(path);
    path.append(QDir::separator()).append("sauvegarde.db");
    db.setDatabaseName(path);
    if (db.open()) {
        QString table = QString("");
        QStringList list = db.tables();
        QStringList::Iterator it = list.begin();
        while (it != list.end()) {
            // we save the name of the first table for later
            if (table.isEmpty()) table = *it;
            qDebug() << "Table: " << *it;
            ++it;
        }
    } else {
        std::cout << "La connexion a échouée, désolé :(" << std::endl <<
                q2c(db.lastError().text()) << std::endl;
    }
     closeDb();

}

void DataBaseManager::launchSave() {
    Sauvegarder *save = new Sauvegarder();
    save->exec();
    tableName = save->getResultLineString();
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    QString path(QDir::home().path());
    path = QDir::toNativeSeparators(path);
    path.append(QDir::separator()).append("sauvegarde.db");
    db.setDatabaseName(path);


    if (db.open()) {
        qDebug("vous etes connecté");

        if (checkExistence()) {
            confirmation = new Confirmation();
            confirmation->exec();
            qDebug() << "attention la table porte déjà ce nom";
            if (confirmation->getReplyOK()) {
                QSqlQuery dropTableQuerry;
                dropTableQuerry.exec("DROP TABLE '" + tableName + "'");
            } else {
                tableName = "";
            }
        }
        QSqlQuery createTableQuerry;

        createTableQuerry.exec("CREATE TABLE " + tableName + " (ID INTEGER, "
                "name TEXT, positionX INTEGER, positionY INTEGER)");

    } else {
        qDebug("connecttion echoue");
        std::cout << "La connexion a échouée, désolé :(" << std::endl <<
                q2c(db.lastError().text()) << std::endl;
    }
    closeDb();
    showTable();
}

bool DataBaseManager::checkExistence() {
    QList<QLabel*> qLabelList;
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    QString path(QDir::home().path());
    path = QDir::toNativeSeparators(path);
    path.append(QDir::separator()).append("sauvegarde.db");
    db.setDatabaseName(path);
    if (db.open()) {
        QStringList list;
        list = db.tables();
        qDebug("%d", list.size());
        QStringList::Iterator it = list.begin();
        while (it != list.end()) {
            // we save the name of the first table for later
            if (tableName == *it) {
                return true;
                 closeDb();
            }
            ++it;
        }
    }
    return false;
     closeDb();
}

DataBaseManager::DataBaseManager(const DataBaseManager & orig) {
}

DataBaseManager::~DataBaseManager() {
}

void DataBaseManager::setResetGame(bool choice) {
    resetGame = choice;
}

bool DataBaseManager::getResetGame() {
    return resetGame;
}
