/* 
 * File:   ConnecterChoice.h
 * Author: antoine
 *
 * Created on 10 avril 2013, 18:19
 */

#ifndef _CONNECTERCHOICE_H
#define	_CONNECTERCHOICE_H

#include "ui_ConnecterChoice.h"

class ConnecterChoice : public QDialog {
    Q_OBJECT
public:
    ConnecterChoice();

    Ui::ConnecterChoice widget;
    void setPortSelected(int portSelectedDevice1, int portSelectedDevice2);
    void setText(QString Device1Name, QString Device2Name);
    virtual ~ConnecterChoice();
    int getPortDevice1();
    int getPortDevice2();

signals:
    void signalPortChanged();

public slots:

    void setInterface();

private:
    int portSelectedDevice1;
    int portSelectedDevice2;
};

#endif	/* _CONNECTERCHOICE_H */
