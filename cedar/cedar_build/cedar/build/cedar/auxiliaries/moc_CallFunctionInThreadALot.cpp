/****************************************************************************
** Meta object code from reading C++ file 'CallFunctionInThreadALot.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../cedar/auxiliaries/CallFunctionInThreadALot.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CallFunctionInThreadALot.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_cedar__aux__CallFunctionInThreadALot_t {
    QByteArrayData data[3];
    char stringdata0[52];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cedar__aux__CallFunctionInThreadALot_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cedar__aux__CallFunctionInThreadALot_t qt_meta_stringdata_cedar__aux__CallFunctionInThreadALot = {
    {
QT_MOC_LITERAL(0, 0, 36), // "cedar::aux::CallFunctionInThr..."
QT_MOC_LITERAL(1, 37, 13), // "executeSignal"
QT_MOC_LITERAL(2, 51, 0) // ""

    },
    "cedar::aux::CallFunctionInThreadALot\0"
    "executeSignal\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cedar__aux__CallFunctionInThreadALot[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

       0        // eod
};

void cedar::aux::CallFunctionInThreadALot::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CallFunctionInThreadALot *_t = static_cast<CallFunctionInThreadALot *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->executeSignal(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (CallFunctionInThreadALot::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CallFunctionInThreadALot::executeSignal)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject cedar::aux::CallFunctionInThreadALot::staticMetaObject = {
    { &cedar::aux::ThreadWrapper::staticMetaObject, qt_meta_stringdata_cedar__aux__CallFunctionInThreadALot.data,
      qt_meta_data_cedar__aux__CallFunctionInThreadALot,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *cedar::aux::CallFunctionInThreadALot::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cedar::aux::CallFunctionInThreadALot::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_cedar__aux__CallFunctionInThreadALot.stringdata0))
        return static_cast<void*>(const_cast< CallFunctionInThreadALot*>(this));
    return cedar::aux::ThreadWrapper::qt_metacast(_clname);
}

int cedar::aux::CallFunctionInThreadALot::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = cedar::aux::ThreadWrapper::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void cedar::aux::CallFunctionInThreadALot::executeSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
