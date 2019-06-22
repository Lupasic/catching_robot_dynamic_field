/****************************************************************************
** Meta object code from reading C++ file 'Projection.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../cedar/processing/steps/Projection.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Projection.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_cedar__proc__steps__Projection_t {
    QByteArrayData data[6];
    char stringdata0[118];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cedar__proc__steps__Projection_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cedar__proc__steps__Projection_t qt_meta_stringdata_cedar__proc__steps__Projection = {
    {
QT_MOC_LITERAL(0, 0, 30), // "cedar::proc::steps::Projection"
QT_MOC_LITERAL(1, 31, 27), // "outputDimensionalityChanged"
QT_MOC_LITERAL(2, 59, 0), // ""
QT_MOC_LITERAL(3, 60, 27), // "outputDimensionSizesChanged"
QT_MOC_LITERAL(4, 88, 11), // "reconfigure"
QT_MOC_LITERAL(5, 100, 17) // "triggerSubsequent"

    },
    "cedar::proc::steps::Projection\0"
    "outputDimensionalityChanged\0\0"
    "outputDimensionSizesChanged\0reconfigure\0"
    "triggerSubsequent"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cedar__proc__steps__Projection[] = {

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
       1,    0,   34,    2, 0x09 /* Protected */,
       3,    0,   35,    2, 0x09 /* Protected */,
       4,    1,   36,    2, 0x09 /* Protected */,
       4,    0,   39,    2, 0x29 /* Protected | MethodCloned */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void,

       0        // eod
};

void cedar::proc::steps::Projection::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Projection *_t = static_cast<Projection *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->outputDimensionalityChanged(); break;
        case 1: _t->outputDimensionSizesChanged(); break;
        case 2: _t->reconfigure((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->reconfigure(); break;
        default: ;
        }
    }
}

const QMetaObject cedar::proc::steps::Projection::staticMetaObject = {
    { &cedar::proc::Step::staticMetaObject, qt_meta_stringdata_cedar__proc__steps__Projection.data,
      qt_meta_data_cedar__proc__steps__Projection,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *cedar::proc::steps::Projection::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cedar::proc::steps::Projection::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_cedar__proc__steps__Projection.stringdata0))
        return static_cast<void*>(const_cast< Projection*>(this));
    return cedar::proc::Step::qt_metacast(_clname);
}

int cedar::proc::steps::Projection::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = cedar::proc::Step::qt_metacall(_c, _id, _a);
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
