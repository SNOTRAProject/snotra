/* 
 * File:   SubWindowWidget.h
 * Author: antoine
 *
 * Created on 19 février 2013, 14:16
 */
#include <QtCore>
#include <QtGui>


#ifndef SUBWINDOWWIDGET_H
#define	SUBWINDOWWIDGET_H

class SubWindowWidget : public QLabel {
public:
    SubWindowWidget();
    SubWindowWidget(const SubWindowWidget& orig);
    virtual ~SubWindowWidget();
private:

};

#endif	/* SUBWINDOWWIDGET_H */

