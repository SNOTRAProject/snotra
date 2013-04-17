/* 
 * File:   RelevantActions.h
 * Author: antoine
 *
 * Created on 3 avril 2013, 00:18
 */

#ifndef _RELEVANTACTIONS_H
#define	_RELEVANTACTIONS_H

#include "ui_RelevantActions.h"

class RelevantActions : public QDialog {
    Q_OBJECT
public:
    /**
     * default constructor,
     * create a window to set what action is relevant and set the scoring through
     * the context
     */
    RelevantActions();
    virtual ~RelevantActions();
private:
    Ui::RelevantActions widget;
//    void checkCheckBox();
public slots:
    void slotCheckCheckBox();
};

#endif	/* _RELEVANTACTIONS_H */
