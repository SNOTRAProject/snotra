/****************************************************************************
** Meta object code from reading C++ file 'PortConnecterChoice.h'
**
** Created: Thu Mar 21 17:52:46 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "PortConnecterChoice.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PortConnecterChoice.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PortConnecterChoice[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      21,   20,   20,   20, 0x05,

 // slots: signature, parameters, type, tag, flags
      41,   20,   20,   20, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PortConnecterChoice[] = {
    "PortConnecterChoice\0\0signalPortChanged()\0"
    "setInterface()\0"
};

void PortConnecterChoice::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PortConnecterChoice *_t = static_cast<PortConnecterChoice *>(_o);
        switch (_id) {
        case 0: _t->signalPortChanged(); break;
        case 1: _t->setInterface(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData PortConnecterChoice::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PortConnecterChoice::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_PortConnecterChoice,
      qt_meta_data_PortConnecterChoice, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PortConnecterChoice::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PortConnecterChoice::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PortConnecterChoice::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PortConnecterChoice))
        return static_cast<void*>(const_cast< PortConnecterChoice*>(this));
    return QDialog::qt_metacast(_clname);
}

int PortConnecterChoice::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void PortConnecterChoice::signalPortChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE