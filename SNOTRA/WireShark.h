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
#include <list>
#include "ui_WireShark.h"
#include "ObjectToCommunicate.h"

class WireShark : public QWidget {
    Q_OBJECT
public:
    /**
     * constructor of WireShark
     * @param parent
     */
    WireShark(ObjectToCommunicate, QWidget* = 0);
    /**
     * Add frame from the model
     *@param ObjectToCommunicate device who want to show his frames
     */
    void addFrames(ObjectToCommunicate);
    /**
     * create only the head of the table
     */
    void createHeaderTable();
    /**
     * create the table
     */
    void createTable();
    /**
     * create  the head of the table
     * and the table
     */
    void createTableComplete();
    /**
     * create a table line
     * @param int the line number 
     */
    void createLine(int);
    /**
     * filtre the texte filtre
     * @param int the line number 
     */
    void filterLine(int);
    /**
     * filtre the wireshark table by IP
     * @param int the line of the row
     */
    void filtreLineIp(int);
    /**
     * filtre the wireshark table by Mac
     * @param int the line of the row
     */
    void filtreLineMac(int);
   /**
     * filtre the wireshark table by Port
     * @param int the line of the row
     */ 
    void filtreLinePort(int);
    /**
     * filtre the wireshark table by Protocol
     * @param int the line of the row
     */
    void filtreLineProtocl(int);
    
    virtual ~WireShark();
private:
    QTableView * mainWireSharkView;
    QLabel *lab1 , *lab2;
    QPushButton *btnFiltre;
    int nrow, ncol;
    Ui::WireShark widget;
    QLineEdit *filtre;
    QStringList strExtractedSplited , filtreExtractedSplited;
    QStringList filtreExtracted;
    QStringList listOfstringFrame;
    QString content;
    std::list<QStringList> tableLine,filtreTableLine;
    QStandardItemModel *model , *refreshedModel; 
    
public slots :
    void btnFiltre_clicked();

};

#endif	/* _WIRESHARK_H */
