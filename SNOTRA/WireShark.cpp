/*
 * File:   WireShark.cpp
 * Author: marc
 *
 * Created on 13 mars 2013, 15:41
 */

#include <sys/socket.h>

#include "WireShark.h"
#include "modele/Frame.h"
#include "modele/Header.h"
#include "modele/ICMPHeader.h"

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
    ///////////ici on recuperera la list/////////////
    QStringList listOfstringFrame;
    listOfstringFrame.append("ARP;MAC_S;MAC_D;IP-S;IP_D");
    listOfstringFrame.append("ARP2;MAC_S2;MAC_2D;IP2-S;I2P_D");

    //////extraction de la string de la liste////////////////
    QStringList::iterator i;


    for (i = listOfstringFrame.begin(); i != listOfstringFrame.end(); ++i) {
        QString strExtracted = *i;
        qDebug() << *i;

        ////////////A FOUTRE DANS UNE FONCTION///////////////////////
        QString delimiterPattern(";");
        strExtractedSplited = strExtracted.split(delimiterPattern);
        QStringList::iterator j;
        for (j = strExtractedSplited.begin(); j != strExtractedSplited.end();
                ++j) {
            qDebug() << *j;

        }
        tableLine.push_back(strExtractedSplited);
    }
    
    //for (int row = 0; row < sizeOfList; row++) {
            int row = 0;
        for(auto& it : tableLine){
            strExtractedSplited = it;
            for (int colum = 0; colum < 5; colum++) {

            QString rowContent = strExtractedSplited.at(colum);
            QStandardItem *item = new QStandardItem(rowContent);
            item->setEditable(false);
            qDebug() << rowContent;
            model->setItem(row, colum, item);
                }
            row++;
        //}
        ////
        

    }
    mainWireSharkView->setModel(model);
}

void WireShark::btnFiltre_clicked() {

    QStandardItemModel *model = new QStandardItemModel(1, 1, this);
    //cette partie est à modifier je doit recupere les element que je recupere!!

    for (int row = 0; row < 5; row++) {
        for (int colum = 0; colum < 5; colum++) {
            /*QString sstr = "[ debug " + QString::number(row) + " , " + QString::number(colum) + " ]";
            QStandardItem *item = new QStandardItem(QString("Idx ") + sstr);
            item->setEditable(false);
            model->setItem(row, colum, item);*/
            if (filtre->text() == " ") {
                if (filtre->text().split(" ")[0].compare("ip")) {
                    if (filtre->text().split(" ")[1].compare("=")) {
                        if (filtre->text().split(" ")[2].compare("192.168.0.54")) {
                        }
                    }
                }
            }
        }
    }
    mainWireSharkView->setModel(model);
}

void WireShark::addFrame() {
    Frame *frame = new Frame();
    std::shared_ptr<Header> head = std::shared_ptr<ICMPHeader > (new ICMPHeader(Ip("192.168.1.2", 24)));
    frame->setHeader(head);

    for (int row = 0; row < 5; row++) {
        QString rowContent = "frame.get(numberOfFrame)";
        QStandardItem *item = new QStandardItem(rowContent);
        item->setEditable(false);
    }
}

WireShark::~WireShark() {
}
