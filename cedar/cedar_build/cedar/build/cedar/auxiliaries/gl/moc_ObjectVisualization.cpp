/****************************************************************************
** Meta object code from reading C++ file 'ObjectVisualization.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../cedar/auxiliaries/gl/ObjectVisualization.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ObjectVisualization.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_cedar__aux__gl__ObjectVisualization_t {
    QByteArrayData data[4];
    char stringdata0[57];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cedar__aux__gl__ObjectVisualization_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cedar__aux__gl__ObjectVisualization_t qt_meta_stringdata_cedar__aux__gl__ObjectVisualization = {
    {
QT_MOC_LITERAL(0, 0, 35), // "cedar::aux::gl::ObjectVisuali..."
QT_MOC_LITERAL(1, 36, 13), // "setVisibility"
QT_MOC_LITERAL(2, 50, 0), // ""
QT_MOC_LITERAL(3, 51, 5) // "state"

    },
    "cedar::aux::gl::ObjectVisualization\0"
    "setVisibility\0\0state"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cedar__aux__gl__ObjectVisualization[] = {

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
       1,    1,   24,    2, 0x0a /* Public */,
       1,    0,   27,    2, 0x2a /* Public | MethodCloned */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,

       0        // eod
};

void cedar::aux::gl::ObjectVisualization::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ObjectVisualization *_t = static_cast<ObjectVisualization *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setVisibility((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->setVisibility(); break;
        default: ;
        }
    }
}

const QMetaObject cedar::aux::gl::ObjectVisualization::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_cedar__aux__gl__ObjectVisualization.data,
      qt_meta_data_cedar__aux__gl__ObjectVisualization,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *cedar::aux::gl::ObjectVisualization::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cedar::aux::gl::ObjectVisualization::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_cedar__aux__gl__ObjectVisualization.stringdata0))
        return static_cast<void*>(const_cast< ObjectVisualization*>(this));
    if (!strcmp(_clname, "cedar::aux::Configurable"))
        return static_cast< cedar::aux::Configurable*>(const_cast< ObjectVisualization*>(this));
    return QObject::qt_metacast(_clname);
}

int cedar::aux::gl::ObjectVisualization::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
