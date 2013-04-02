/*
 * File:   RelevantActions.cpp
 * Author: antoine
 *
 * Created on 3 avril 2013, 00:18
 */

#include "RelevantActions.h"
#include <QDebug>;
#include <math.h>

RelevantActions::RelevantActions() {
    widget.setupUi(this);
    connect(this->widget.ajouterRouteur, SIGNAL(clicked()),
            this, SLOT(slotCheckCheckBox()));
}

RelevantActions::~RelevantActions() {
}

void RelevantActions::slotCheckCheckBox() {
    QString objectCheckedName = this->widget.ajouterRouteur->objectName();
    if (this->widget.ajouterRouteur->isChecked()) {
        this->widget.textBrowserActionsPertinantes->setText(objectCheckedName);
    }else {
        this->widget.textBrowserActionsPertinantes->setText("");
    }
}

//void RelevantActions::checkCheckBox() {
//    qDebug() << "coucou";
//}
