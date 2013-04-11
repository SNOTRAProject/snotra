/****************************************************************************
** Meta object code from reading C++ file 'NetworkGameArea.h'
**
** Created: Thu Apr 11 10:34:33 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "NetworkGameArea.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'NetworkGameArea.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_NetworkGameArea[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x0a,
      30,   16,   16,   16, 0x0a,
      50,   16,   16,   16, 0x0a,
      70,   16,   16,   16, 0x0a,
      90,   16,   16,   16, 0x0a,
     110,   16,   16,   16, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_NetworkGameArea[] = {
    "NetworkGameArea\0\0deleteItem()\0"
    "disconnectStocker()\0pushButtonPressed()\0"
    "slotSaveLabelList()\0slotLoadLabelList()\0"
    "slotResetGame()\0"
};

void NetworkGameArea::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        NetworkGameArea *_t = static_cast<NetworkGameArea *>(_o);
        switch (_id) {
        case 0: _t->deleteItem(); break;
        case 1: _t->disconnectStocker(); break;
        case 2: _t->pushButtonPressed(); break;
        case 3: _t->slotSaveLabelList(); break;
        case 4: _t->slotLoadLabelList(); break;
        case 5: _t->slotResetGame(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData NetworkGameArea::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject NetworkGameArea::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_NetworkGameArea,
      qt_meta_data_NetworkGameArea, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &NetworkGameArea::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *NetworkGameArea::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *NetworkGameArea::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_NetworkGameArea))
        return static_cast<void*>(const_cast< NetworkGameArea*>(this));
    return QWidget::qt_metacast(_clname);
}

int NetworkGameArea::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
