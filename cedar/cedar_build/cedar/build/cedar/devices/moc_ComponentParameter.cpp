/****************************************************************************
** Meta object code from reading C++ file 'ComponentParameter.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../cedar/devices/ComponentParameter.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ComponentParameter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_cedar__dev__ComponentParameter_t {
    QByteArrayData data[6];
    char stringdata0[74];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cedar__dev__ComponentParameter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cedar__dev__ComponentParameter_t qt_meta_stringdata_cedar__dev__ComponentParameter = {
    {
QT_MOC_LITERAL(0, 0, 30), // "cedar::dev::ComponentParameter"
QT_MOC_LITERAL(1, 31, 8), // "reselect"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 11), // "std::string"
QT_MOC_LITERAL(4, 53, 10), // "robot_name"
QT_MOC_LITERAL(5, 64, 9) // "slot_name"

    },
    "cedar::dev::ComponentParameter\0reselect\0"
    "\0std::string\0robot_name\0slot_name"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cedar__dev__ComponentParameter[] = {

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
       1,    2,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,    4,    5,

       0        // eod
};

void cedar::dev::ComponentParameter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ComponentParameter *_t = static_cast<ComponentParameter *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->reselect((*reinterpret_cast< const std::string(*)>(_a[1])),(*reinterpret_cast< const std::string(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ComponentParameter::*_t)(const std::string & , const std::string & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ComponentParameter::reselect)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject cedar::dev::ComponentParameter::staticMetaObject = {
    { &cedar::aux::Parameter::staticMetaObject, qt_meta_stringdata_cedar__dev__ComponentParameter.data,
      qt_meta_data_cedar__dev__ComponentParameter,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *cedar::dev::ComponentParameter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cedar::dev::ComponentParameter::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_cedar__dev__ComponentParameter.stringdata0))
        return static_cast<void*>(const_cast< ComponentParameter*>(this));
    return cedar::aux::Parameter::qt_metacast(_clname);
}

int cedar::dev::ComponentParameter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = cedar::aux::Parameter::qt_metacall(_c, _id, _a);
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
void cedar::dev::ComponentParameter::reselect(const std::string & _t1, const std::string & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
