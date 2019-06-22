/****************************************************************************
** Meta object code from reading C++ file 'Parameter.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../cedar/auxiliaries/Parameter.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Parameter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_cedar__aux__Parameter_t {
    QByteArrayData data[5];
    char stringdata0[71];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cedar__aux__Parameter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cedar__aux__Parameter_t qt_meta_stringdata_cedar__aux__Parameter = {
    {
QT_MOC_LITERAL(0, 0, 21), // "cedar::aux::Parameter"
QT_MOC_LITERAL(1, 22, 12), // "valueChanged"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 15), // "propertyChanged"
QT_MOC_LITERAL(4, 52, 18) // "changedFlagChanged"

    },
    "cedar::aux::Parameter\0valueChanged\0\0"
    "propertyChanged\0changedFlagChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cedar__aux__Parameter[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,
       3,    0,   30,    2, 0x06 /* Public */,
       4,    0,   31,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void cedar::aux::Parameter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Parameter *_t = static_cast<Parameter *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->valueChanged(); break;
        case 1: _t->propertyChanged(); break;
        case 2: _t->changedFlagChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Parameter::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Parameter::valueChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Parameter::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Parameter::propertyChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (Parameter::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Parameter::changedFlagChanged)) {
                *result = 2;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject cedar::aux::Parameter::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_cedar__aux__Parameter.data,
      qt_meta_data_cedar__aux__Parameter,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *cedar::aux::Parameter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cedar::aux::Parameter::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_cedar__aux__Parameter.stringdata0))
        return static_cast<void*>(const_cast< Parameter*>(this));
    if (!strcmp(_clname, "cedar::aux::IntrusivePtrBase"))
        return static_cast< cedar::aux::IntrusivePtrBase*>(const_cast< Parameter*>(this));
    return QObject::qt_metacast(_clname);
}

int cedar::aux::Parameter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void cedar::aux::Parameter::valueChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void cedar::aux::Parameter::propertyChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void cedar::aux::Parameter::changedFlagChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
