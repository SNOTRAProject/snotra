/*
 * File:   WireShark.cpp
 * Author: marc
 *
 * Created on 13 mars 2013, 15:41
 */

#include "WireShark.h"
#include "Frame.h"

WireShark::WireShark(QWidget *parent) : QWidget(parent) {
    //widget.setupUi(this);
    QVBoxLayout *mainLayout = new QVBoxLayout;
   
    mainWireSharkView = new QTableView();
    
    //mainWireSharkView->setSelectionBehavior(QAbstractItemView::SelectItems );
    //mainWireSharkView->setSelectionMode( QAbstractItemView::ExtendedSelection );
    
    mainLayout->addWidget(mainWireSharkView);
    setLayout(mainLayout);
    QStandardItemModel *model = new QStandardItemModel( 1, 1, this );
    for (int colum=0; colum<5; colum++){
        
        switch (colum)
        {
            case 0 :{
                model->setHorizontalHeaderItem( colum, new QStandardItem( QString("Number" )) );
                break;
            }
            case 1 :{
                model->setHorizontalHeaderItem( colum, new QStandardItem( QString("Protocol" )) );
                break;
            }
            case 2 :{
                model->setHorizontalHeaderItem( colum, new QStandardItem( QString("IP Source" )) );
                break;
            }            
            case 3 :{
                model->setHorizontalHeaderItem( colum, new QStandardItem( QString("IP destination" )) );
                break;
            }
            case 4 :{
                model->setHorizontalHeaderItem( colum, new QStandardItem( QString("information" )) );
                break;
            }
        }
    }
    
    //cette partie est à modifier je doit recupere les element que je recupere!!
    
    for( int row=0; row<5; row++ )
   { for( int colum=0; colum<5; colum++)
        {
            QString sstr = "[ " + QString::number(row) + " , " + QString::number(colum) + " ]";
            QStandardItem *item = new QStandardItem(QString("Idx ") + sstr);
            item->setEditable(false);
            model->setItem(row, colum, item);
        }
    }
    mainWireSharkView->setModel(model);
}
WireShark::~WireShark() {
}
