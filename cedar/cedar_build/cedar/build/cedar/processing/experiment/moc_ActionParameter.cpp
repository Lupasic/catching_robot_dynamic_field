/****************************************************************************
** Meta object code from reading C++ file 'ActionParameter.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../cedar/processing/experiment/ActionParameter.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ActionParameter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_cedar__proc__experiment__ActionParameter_t {
    QByteArrayData data[4];
    char stringdata0[79];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cedar__proc__experiment__ActionParameter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cedar__proc__experiment__ActionParameter_t qt_meta_stringdata_cedar__proc__experiment__ActionParameter = {
    {
QT_MOC_LITERAL(0, 0, 40), // "cedar::proc::experiment::Acti..."
QT_MOC_LITERAL(1, 41, 17), // "actionListChanged"
QT_MOC_LITERAL(2, 59, 0), // ""
QT_MOC_LITERAL(3, 60, 18) // "connectableChanged"

    },
    "cedar::proc::experiment::ActionParameter\0"
    "actionListChanged\0\0connectableChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cedar__proc__experiment__ActionParameter[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   25,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void cedar::proc::experiment::ActionParameter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ActionParameter *_t = static_cast<ActionParameter *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->actionListChanged(); break;
        case 1: _t->connectableChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ActionParameter::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ActionParameter::actionListChanged)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject cedar::proc::experiment::ActionParameter::staticMetaObject = {
    { &cedar::proc::experiment::PropertyParameter::staticMetaObject, qt_meta_stringdata_cedar__proc__experiment__ActionParameter.data,
      qt_meta_data_cedar__proc__experiment__ActionParameter,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *cedar::proc::experiment::ActionParameter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cedar::proc::experiment::ActionParameter::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_cedar__proc__experiment__ActionParameter.stringdata0))
        return static_cast<void*>(const_cast< ActionParameter*>(this));
    return cedar::proc::experiment::PropertyParameter::qt_metacast(_clname);
}

int cedar::proc::experiment::ActionParameter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = cedar::proc::experiment::PropertyParameter::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void cedar::proc::experiment::ActionParameter::actionListChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
