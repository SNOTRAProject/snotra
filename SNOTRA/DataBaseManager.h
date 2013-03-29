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

class DataBase {
public:
    bool openDB();
    void createTable();
    DataBase();
    DataBase(const DataBase & orig);
    virtual ~DataBase();
private:
    QSqlDatabase db;

};

#endif	/* DATABASE_H */

