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

    virtual ~DataBaseManager();
private:
    QSqlDatabase db;
    
    int setLastID();


};

#endif	/* DATABASE_H */

