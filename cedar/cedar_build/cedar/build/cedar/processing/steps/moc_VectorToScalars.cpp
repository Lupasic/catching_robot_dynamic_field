/****************************************************************************
** Meta object code from reading C++ file 'VectorToScalars.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../cedar/processing/steps/VectorToScalars.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'VectorToScalars.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_cedar__proc__steps__VectorToScalars_t {
    QByteArrayData data[6];
    char stringdata0[105];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cedar__proc__steps__VectorToScalars_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cedar__proc__steps__VectorToScalars_t qt_meta_stringdata_cedar__proc__steps__VectorToScalars = {
    {
QT_MOC_LITERAL(0, 0, 35), // "cedar::proc::steps::VectorToS..."
QT_MOC_LITERAL(1, 36, 22), // "vectorDimensionChanged"
QT_MOC_LITERAL(2, 59, 0), // ""
QT_MOC_LITERAL(3, 60, 22), // "inputConnectionChanged"
QT_MOC_LITERAL(4, 83, 11), // "std::string"
QT_MOC_LITERAL(5, 95, 9) // "inputName"

    },
    "cedar::proc::steps::VectorToScalars\0"
    "vectorDimensionChanged\0\0inputConnectionChanged\0"
    "std::string\0inputName"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cedar__proc__steps__VectorToScalars[] = {

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
       1,    0,   24,    2, 0x0a /* Public */,
       3,    1,   25,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,

       0        // eod
};

void cedar::proc::steps::VectorToScalars::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        VectorToScalars *_t = static_cast<VectorToScalars *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->vectorDimensionChanged(); break;
        case 1: _t->inputConnectionChanged((*reinterpret_cast< const std::string(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject cedar::proc::steps::VectorToScalars::staticMetaObject = {
    { &cedar::proc::Step::staticMetaObject, qt_meta_stringdata_cedar__proc__steps__VectorToScalars.data,
      qt_meta_data_cedar__proc__steps__VectorToScalars,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *cedar::proc::steps::VectorToScalars::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cedar::proc::steps::VectorToScalars::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_cedar__proc__steps__VectorToScalars.stringdata0))
        return static_cast<void*>(const_cast< VectorToScalars*>(this));
    return cedar::proc::Step::qt_metacast(_clname);
}

int cedar::proc::steps::VectorToScalars::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
