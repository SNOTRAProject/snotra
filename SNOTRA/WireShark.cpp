/*
 * File:   WireShark.cpp
 * Author: marc
 *
 * Created on 13 mars 2013, 15:41
 */

#include <sys/socket.h>
#include <qt4/QtGui/qstandarditemmodel.h>

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
    //QStandardItemModel *model = new QStandardItemModel(1, 1, this);
    createHeaderTable();

    ///////////ici on recuperera la list/////////////
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
    createTable();
    mainWireSharkView->setModel(model);
}

void WireShark::btnFiltre_clicked() {
    QString delimiterPattern(" ");
    filtreExtracted = filtre->text().split(delimiterPattern);
    createTableComplete();
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

void WireShark::createTableComplete() {
    createHeaderTable();
    createTable();
    mainWireSharkView->setModel(model);
}

void WireShark::createLine(int row) {
    if (!filtreExtractedSplited.empty()) {
        for (int colum = 0; colum < 5; colum++) {
            QString rowContent = filtreExtractedSplited.at(colum);
            QStandardItem *item = new QStandardItem(rowContent);
            item->setEditable(false);
            qDebug() << rowContent;
            model->setItem(row, colum, item);
        }
    }

}

void WireShark::filterLine(int row) {
    QString delimiterPattern(";");
    if (filtre->text() != "") {
        if (filtreExtracted.at(0) == "ip") {
            if (filtreExtracted.at(1) == "=") {
                filtreLineIpSource(row);
            }
        } else if (filtreExtracted.at(0) == "mac") {
            if (filtreExtracted.at(1) == "=") {
                filtreLineMacSource(row);
            }
        } else if (filtreExtracted.at(0) == "port"){
        
        }else if (filtreExtracted.at(0) == "protocol"){
            if (filtreExtracted.at(1) == "=") {
                filtreLineProtocl(row);
            }
        }
    } else {
        filtreExtractedSplited = listOfstringFrame.at(row).split(delimiterPattern);
    }
}

void WireShark::createHeaderTable() {
    model = new QStandardItemModel(1, 1, this);
    for (int colum = 0; colum < 5; colum++) {

        switch (colum) {
            case 0:
            {
                model->setHorizontalHeaderItem(colum,
                        new QStandardItem(QString("Protocol")));
                break;
            }
            case 1:
            {
                model->setHorizontalHeaderItem(colum,
                        new QStandardItem(QString("MAC Source")));
                break;
            }
            case 2:
            {
                model->setHorizontalHeaderItem(colum,
                        new QStandardItem(QString("MAC destination")));
                break;
            }
            case 3:
            {
                model->setHorizontalHeaderItem(colum,
                        new QStandardItem(QString("IP Source")));
                break;
            }
            case 4:
            {
                model->setHorizontalHeaderItem(colum,
                        new QStandardItem(QString("IP destination")));
                break;
            }
            case 5:
            {
                model->setHorizontalHeaderItem(colum,
                        new QStandardItem(QString("information")));
                break;
            }
        }
    }
}

void WireShark::createTable() {
    int row = 0;
    for (auto& it : tableLine) {
        filterLine(row);
        createLine(row);
        row++;
    }
}

void WireShark::filtreLineIpSource(int row) {
    QString content = listOfstringFrame.at(row).split(";").at(3);
    qDebug() << content << filtreExtracted.at(2);
    if (filtreExtracted.at(2) == (content)) {
        filtreExtractedSplited = listOfstringFrame.at(row).split(";");
    } else {
        filtreExtractedSplited.clear();
    }
}

void WireShark::filtreLineMacSource(int row) {
    QString content = listOfstringFrame.at(row).split(";").at(1);
    qDebug() << content << filtreExtracted.at(2);
    if (filtreExtracted.at(2) == (content)) {
        filtreExtractedSplited = listOfstringFrame.at(row).split(";");
    } else {
        filtreExtractedSplited.clear();
    }
}

void WireShark::filtreLinePortSource(int row) {
}

void WireShark::filtreLineProtocl(int row) {
     QString content = listOfstringFrame.at(row).split(";").at(0);
    qDebug() << content << filtreExtracted.at(2);
    if (filtreExtracted.at(2) == (content)) {
        filtreExtractedSplited = listOfstringFrame.at(row).split(";");
    } else {
        filtreExtractedSplited.clear();
    }
}

WireShark::~WireShark() {
}
