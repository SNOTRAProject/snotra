/* 
 * File:   Onglet1.h
 * Author: antoine
 *
 * Created on 2 avril 2013, 00:49
 */

#ifndef _ONGLET1_H
#define	_ONGLET1_H

#include "ui_Onglet1.h"

class Onglet1 : public QWidget {
    Q_OBJECT
public:
    Onglet1();
    virtual ~Onglet1();
private:
    Ui::Onglet1 widget;
};

#endif	/* _ONGLET1_H */
