/****************************************************************************
** Meta object code from reading C++ file 'ActionParameter.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../cedar/processing/experiment/gui/ActionParameter.h"
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
struct qt_meta_stringdata_cedar__proc__experiment__gui__ActionParameter_t {
    QByteArrayData data[7];
    char stringdata0[136];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cedar__proc__experiment__gui__ActionParameter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cedar__proc__experiment__gui__ActionParameter_t qt_meta_stringdata_cedar__proc__experiment__gui__ActionParameter = {
    {
QT_MOC_LITERAL(0, 0, 45), // "cedar::proc::experiment::gui:..."
QT_MOC_LITERAL(1, 46, 23), // "parameterPointerChanged"
QT_MOC_LITERAL(2, 70, 0), // ""
QT_MOC_LITERAL(3, 71, 18), // "connectableChanged"
QT_MOC_LITERAL(4, 90, 17), // "actionListChanged"
QT_MOC_LITERAL(5, 108, 13), // "actionChanged"
QT_MOC_LITERAL(6, 122, 13) // "updateActions"

    },
    "cedar::proc::experiment::gui::ActionParameter\0"
    "parameterPointerChanged\0\0connectableChanged\0"
    "actionListChanged\0actionChanged\0"
    "updateActions"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cedar__proc__experiment__gui__ActionParameter[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x0a /* Public */,
       3,    0,   40,    2, 0x0a /* Public */,
       4,    0,   41,    2, 0x0a /* Public */,
       5,    0,   42,    2, 0x0a /* Public */,
       6,    0,   43,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void cedar::proc::experiment::gui::ActionParameter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ActionParameter *_t = static_cast<ActionParameter *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->parameterPointerChanged(); break;
        case 1: _t->connectableChanged(); break;
        case 2: _t->actionListChanged(); break;
        case 3: _t->actionChanged(); break;
        case 4: _t->updateActions(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject cedar::proc::experiment::gui::ActionParameter::staticMetaObject = {
    { &cedar::aux::gui::Parameter::staticMetaObject, qt_meta_stringdata_cedar__proc__experiment__gui__ActionParameter.data,
      qt_meta_data_cedar__proc__experiment__gui__ActionParameter,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *cedar::proc::experiment::gui::ActionParameter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cedar::proc::experiment::gui::ActionParameter::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_cedar__proc__experiment__gui__ActionParameter.stringdata0))
        return static_cast<void*>(const_cast< ActionParameter*>(this));
    return cedar::aux::gui::Parameter::qt_metacast(_clname);
}

int cedar::proc::experiment::gui::ActionParameter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = cedar::aux::gui::Parameter::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
