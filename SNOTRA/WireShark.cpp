/*
 * File:   WireShark.cpp
 * Author: marc
 *
 * Created on 13 mars 2013, 15:41
 */

#include "WireShark.h"
#include "modele/Frame.h"

WireShark::WireShark(QWidget *parent) : QWidget(parent) {
    //widget.setupUi(this);
    QVBoxLayout *mainLayout = new QVBoxLayout;
    mainWireSharkView = new QTableView();

    //mainWireSharkView->setSelectionBehavior(QAbstractItemView::SelectItems );
    //mainWireSharkView->setSelectionMode( QAbstractItemView::ExtendedSelection);
    btnFiltre = new QPushButton(tr("Apply Filtre"));
    filtre = new QLineEdit("");
    mainLayout->addWidget(filtre);
    mainLayout->addWidget(btnFiltre);
    connect(btnFiltre, SIGNAL(clicked()), this, SLOT(btnFiltre_clicked()));
    
    mainLayout->addWidget(mainWireSharkView);
    setLayout(mainLayout);
    QStandardItemModel *model = new QStandardItemModel(1, 1, this);
    for (int colum = 0; colum < 5; colum++) {

        switch (colum) {
            case 0:
            {
                model->setHorizontalHeaderItem(colum,
                        new QStandardItem(QString("Number")));
                break;
            }
            case 1:
            {
                model->setHorizontalHeaderItem(colum,
                        new QStandardItem(QString("Protocol")));
                break;
            }
            case 2:
            {
                model->setHorizontalHeaderItem(colum,
                        new QStandardItem(QString("IP Source")));
                break;
            }
            case 3:
            {
                model->setHorizontalHeaderItem(colum,
                        new QStandardItem(QString("IP destination")));
                break;
            }
            case 4:
            {
                model->setHorizontalHeaderItem(colum,
                        new QStandardItem(QString("information")));
                break;
            }
        }
    }
    
    

    //cette partie est à modifier je doit recupere les element que je recupere!!

    for (int row = 0; row < 5; row++) {
        for (int colum = 0; colum < 5; colum++) {
            QString sstr = "[ " + QString::number(row) + " , "
                    + QString::number(colum) + " ]";
            QStandardItem *item = new QStandardItem(QString("Idx ") + sstr);
            item->setEditable(false);
            model->setItem(row, colum, item);
        }
    }
    mainWireSharkView->setModel(model);
    
}
void WireShark::btnFiltre_clicked()
{
    
    QStandardItemModel *model = new QStandardItemModel( 1, 1, this );
    //cette partie est à modifier je doit recupere les element que je recupere!!
    
    for( int row=0; row<5; row++ ){
        for( int colum=0; colum<5; colum++){
            /*QString sstr = "[ debug " + QString::number(row) + " , " + QString::number(colum) + " ]";
            QStandardItem *item = new QStandardItem(QString("Idx ") + sstr);
            item->setEditable(false);
            model->setItem(row, colum, item);*/
            if(filtre->text() == " "){
                if(filtre->text().split(" ")[0].compare("ip")){
                    if(filtre->text().split(" ")[1].compare("=")){
                        if(filtre->text().split(" ")[2].compare("192.168.0.54")){
                        }
                    }
                }
            }
        }
    }
    mainWireSharkView->setModel(model);
}

WireShark::~WireShark() {
}
