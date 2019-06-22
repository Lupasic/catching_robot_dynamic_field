/****************************************************************************
** Meta object code from reading C++ file 'VariableGauss.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../cedar/processing/steps/VariableGauss.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'VariableGauss.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_cedar__proc__steps__VariableGauss_t {
    QByteArrayData data[7];
    char stringdata0[114];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cedar__proc__steps__VariableGauss_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cedar__proc__steps__VariableGauss_t qt_meta_stringdata_cedar__proc__steps__VariableGauss = {
    {
QT_MOC_LITERAL(0, 0, 33), // "cedar::proc::steps::VariableG..."
QT_MOC_LITERAL(1, 34, 12), // "updateMatrix"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 20), // "updateDimensionality"
QT_MOC_LITERAL(4, 69, 22), // "inputConnectionChanged"
QT_MOC_LITERAL(5, 92, 11), // "std::string"
QT_MOC_LITERAL(6, 104, 9) // "inputName"

    },
    "cedar::proc::steps::VariableGauss\0"
    "updateMatrix\0\0updateDimensionality\0"
    "inputConnectionChanged\0std::string\0"
    "inputName"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cedar__proc__steps__VariableGauss[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x0a /* Public */,
       3,    0,   30,    2, 0x0a /* Public */,
       4,    1,   31,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,

       0        // eod
};

void cedar::proc::steps::VariableGauss::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        VariableGauss *_t = static_cast<VariableGauss *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateMatrix(); break;
        case 1: _t->updateDimensionality(); break;
        case 2: _t->inputConnectionChanged((*reinterpret_cast< const std::string(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject cedar::proc::steps::VariableGauss::staticMetaObject = {
    { &cedar::proc::Step::staticMetaObject, qt_meta_stringdata_cedar__proc__steps__VariableGauss.data,
      qt_meta_data_cedar__proc__steps__VariableGauss,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *cedar::proc::steps::VariableGauss::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cedar::proc::steps::VariableGauss::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_cedar__proc__steps__VariableGauss.stringdata0))
        return static_cast<void*>(const_cast< VariableGauss*>(this));
    return cedar::proc::Step::qt_metacast(_clname);
}

int cedar::proc::steps::VariableGauss::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = cedar::proc::Step::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
