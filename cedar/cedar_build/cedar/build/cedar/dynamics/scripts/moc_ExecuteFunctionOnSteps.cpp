/****************************************************************************
** Meta object code from reading C++ file 'ExecuteFunctionOnSteps.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../cedar/dynamics/scripts/ExecuteFunctionOnSteps.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ExecuteFunctionOnSteps.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_cedar__dyn__scripts__ExecuteFunctionOnSteps_t {
    QByteArrayData data[1];
    char stringdata0[44];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cedar__dyn__scripts__ExecuteFunctionOnSteps_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cedar__dyn__scripts__ExecuteFunctionOnSteps_t qt_meta_stringdata_cedar__dyn__scripts__ExecuteFunctionOnSteps = {
    {
QT_MOC_LITERAL(0, 0, 43) // "cedar::dyn::scripts::ExecuteF..."

    },
    "cedar::dyn::scripts::ExecuteFunctionOnSteps"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cedar__dyn__scripts__ExecuteFunctionOnSteps[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void cedar::dyn::scripts::ExecuteFunctionOnSteps::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject cedar::dyn::scripts::ExecuteFunctionOnSteps::staticMetaObject = {
    { &cedar::proc::CppScript::staticMetaObject, qt_meta_stringdata_cedar__dyn__scripts__ExecuteFunctionOnSteps.data,
      qt_meta_data_cedar__dyn__scripts__ExecuteFunctionOnSteps,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *cedar::dyn::scripts::ExecuteFunctionOnSteps::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cedar::dyn::scripts::ExecuteFunctionOnSteps::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_cedar__dyn__scripts__ExecuteFunctionOnSteps.stringdata0))
        return static_cast<void*>(const_cast< ExecuteFunctionOnSteps*>(this));
    return cedar::proc::CppScript::qt_metacast(_clname);
}

int cedar::dyn::scripts::ExecuteFunctionOnSteps::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = cedar::proc::CppScript::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
