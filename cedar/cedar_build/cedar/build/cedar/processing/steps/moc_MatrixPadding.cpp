/****************************************************************************
** Meta object code from reading C++ file 'MatrixPadding.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../cedar/processing/steps/MatrixPadding.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MatrixPadding.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_cedar__proc__steps__MatrixPadding_t {
    QByteArrayData data[4];
    char stringdata0[62];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cedar__proc__steps__MatrixPadding_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cedar__proc__steps__MatrixPadding_t qt_meta_stringdata_cedar__proc__steps__MatrixPadding = {
    {
QT_MOC_LITERAL(0, 0, 33), // "cedar::proc::steps::MatrixPad..."
QT_MOC_LITERAL(1, 34, 16), // "updateOutputSize"
QT_MOC_LITERAL(2, 51, 0), // ""
QT_MOC_LITERAL(3, 52, 9) // "recompute"

    },
    "cedar::proc::steps::MatrixPadding\0"
    "updateOutputSize\0\0recompute"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cedar__proc__steps__MatrixPadding[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x08 /* Private */,
       3,    0,   25,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void cedar::proc::steps::MatrixPadding::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MatrixPadding *_t = static_cast<MatrixPadding *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateOutputSize(); break;
        case 1: _t->recompute(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject cedar::proc::steps::MatrixPadding::staticMetaObject = {
    { &cedar::proc::Step::staticMetaObject, qt_meta_stringdata_cedar__proc__steps__MatrixPadding.data,
      qt_meta_data_cedar__proc__steps__MatrixPadding,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *cedar::proc::steps::MatrixPadding::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cedar::proc::steps::MatrixPadding::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_cedar__proc__steps__MatrixPadding.stringdata0))
        return static_cast<void*>(const_cast< MatrixPadding*>(this));
    return cedar::proc::Step::qt_metacast(_clname);
}

int cedar::proc::steps::MatrixPadding::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = cedar::proc::Step::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
