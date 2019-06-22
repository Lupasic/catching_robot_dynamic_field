/****************************************************************************
** Meta object code from reading C++ file 'HebbianConnection.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../cedar/dynamics/steps/HebbianConnection.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'HebbianConnection.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_cedar__dyn__steps__HebbianConnection_t {
    QByteArrayData data[6];
    char stringdata0[117];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cedar__dyn__steps__HebbianConnection_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cedar__dyn__steps__HebbianConnection_t qt_meta_stringdata_cedar__dyn__steps__HebbianConnection = {
    {
QT_MOC_LITERAL(0, 0, 36), // "cedar::dyn::steps::HebbianCon..."
QT_MOC_LITERAL(1, 37, 26), // "updateAssociationDimension"
QT_MOC_LITERAL(2, 64, 0), // ""
QT_MOC_LITERAL(3, 65, 12), // "resetWeights"
QT_MOC_LITERAL(4, 78, 15), // "toggleUseReward"
QT_MOC_LITERAL(5, 94, 22) // "toggleUseManualWeights"

    },
    "cedar::dyn::steps::HebbianConnection\0"
    "updateAssociationDimension\0\0resetWeights\0"
    "toggleUseReward\0toggleUseManualWeights"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cedar__dyn__steps__HebbianConnection[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x0a /* Public */,
       3,    0,   35,    2, 0x0a /* Public */,
       4,    0,   36,    2, 0x0a /* Public */,
       5,    0,   37,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void cedar::dyn::steps::HebbianConnection::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        HebbianConnection *_t = static_cast<HebbianConnection *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateAssociationDimension(); break;
        case 1: _t->resetWeights(); break;
        case 2: _t->toggleUseReward(); break;
        case 3: _t->toggleUseManualWeights(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject cedar::dyn::steps::HebbianConnection::staticMetaObject = {
    { &cedar::dyn::Dynamics::staticMetaObject, qt_meta_stringdata_cedar__dyn__steps__HebbianConnection.data,
      qt_meta_data_cedar__dyn__steps__HebbianConnection,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *cedar::dyn::steps::HebbianConnection::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cedar::dyn::steps::HebbianConnection::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_cedar__dyn__steps__HebbianConnection.stringdata0))
        return static_cast<void*>(const_cast< HebbianConnection*>(this));
    return cedar::dyn::Dynamics::qt_metacast(_clname);
}

int cedar::dyn::steps::HebbianConnection::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = cedar::dyn::Dynamics::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
