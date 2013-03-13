/* 
 * File:   WireShark.h
 * Author: marc
 *
 * Created on 13 mars 2013, 15:41
 */

#ifndef _WIRESHARK_H
#define	_WIRESHARK_H

#include "ui_WireShark.h"

class WireShark : public QDialog {
    Q_OBJECT
public:
    WireShark();
    virtual ~WireShark();
private:
    Ui::WireShark widget;
};

#endif	/* _WIRESHARK_H */
