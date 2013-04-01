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

class DataBaseManager {
public:
    DataBaseManager();
    DataBaseManager(const DataBaseManager & orig);
    void create(QLabel *item);
    void closeDb();
    QList<QLabel*> load();
    virtual ~DataBaseManager();
//    void setTableName(QString tableName);
private:
    QSqlDatabase db;
    int setLastID();
    QString tableName;
    
public slots : 
};

#endif	/* DATABASE_H */

