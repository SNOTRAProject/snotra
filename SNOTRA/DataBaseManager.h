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
    /**
     * Create a line in the database manager to save the item
     */
    void create(QLabel *item);
    void closeDb();
    /**
     * load the label that are in the database
     * @return a list of the labels
     */
    QList<QLabel*> load();
    virtual ~DataBaseManager();
    /**
     * show the table (just for debug)
     */
    void showTable();
    /**
     * make a new table in the database to records the backups
     */
    void launchSave();
    void setResetGame(bool choice);
    bool getResetGame();
private:
    QSqlDatabase db;
    int setLastID();
    QString tableName;
    QString tableNameChoose;
    /**
     * check if the table's name exist. 
     * If it exist, call the confirmation object
     * 
     * @return true if it exist, false else.
     */
    bool checkExistence();
    Confirmation *confirmation;
    bool resetGame;

    public
slots:
};

#endif	/* DATABASE_H */

