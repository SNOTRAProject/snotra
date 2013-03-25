/* 
 * File:   WireShark.h
 * Author: marc
 *
 * Created on 13 mars 2013, 15:41
 */

#ifndef _WIRESHARK_H
#define	_WIRESHARK_H
#include <QtGui>
#include <QWidget>
#include <QTableView>
#include <QStandardItemModel>
#include <QStandardItem>
#include <QString>
#include "ui_WireShark.h"

class WireShark : public QWidget {
    Q_OBJECT
public:
    WireShark(QWidget *parent = 0);
    virtual ~WireShark();
private:
    QTableView * mainWireSharkView;
    QLabel *lab1 , *lab2;
    QPushButton *btnApply;
    int nrow, ncol;
    Ui::WireShark widget;
    
};

#endif	/* _WIRESHARK_H */
