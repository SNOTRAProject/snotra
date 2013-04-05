/* 
 * File:   DataBase.h
 * Author: antoine
 *
 * Created on 29 mars 2013, 11:09
 */

#ifndef DATABASE_H
#define	DATABASE_H

#include <QSqlDatabase>
#include <QtSql>



#include <QApplication>
#include <QtGui>
#include <QMouseEvent>
#include <iostream>

#include "Confirmation.h"

class DataBaseManager {
public:
    DataBaseManager();
    DataBaseManager(const DataBaseManager & orig);
    void create(QLabel *item);
    void closeDb();
    QList<QLabel*> load();
    virtual ~DataBaseManager();
    void showTable();
    void launchSave();
    void setResetGame(bool choice);
    bool getResetGame();
private:
    QSqlDatabase db;
    int setLastID();
    QString tableName;
    QString tableNameChoose;
    bool checkExistence();
    Confirmation *confirmation;
    bool resetGame;
    
    public 
slots:
};

#endif	/* DATABASE_H */

