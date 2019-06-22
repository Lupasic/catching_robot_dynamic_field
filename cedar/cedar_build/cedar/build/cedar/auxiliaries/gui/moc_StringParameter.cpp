/****************************************************************************
** Meta object code from reading C++ file 'StringParameter.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../cedar/auxiliaries/gui/StringParameter.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'StringParameter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_cedar__aux__gui__StringParameter_t {
    QByteArrayData data[6];
    char stringdata0[96];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cedar__aux__gui__StringParameter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cedar__aux__gui__StringParameter_t qt_meta_stringdata_cedar__aux__gui__StringParameter = {
    {
QT_MOC_LITERAL(0, 0, 32), // "cedar::aux::gui::StringParameter"
QT_MOC_LITERAL(1, 33, 23), // "parameterPointerChanged"
QT_MOC_LITERAL(2, 57, 0), // ""
QT_MOC_LITERAL(3, 58, 10), // "textEdited"
QT_MOC_LITERAL(4, 69, 4), // "text"
QT_MOC_LITERAL(5, 74, 21) // "parameterValueChanged"

    },
    "cedar::aux::gui::StringParameter\0"
    "parameterPointerChanged\0\0textEdited\0"
    "text\0parameterValueChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cedar__aux__gui__StringParameter[] = {

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
       3,    1,   30,    2, 0x0a /* Public */,
       5,    0,   33,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,

       0        // eod
};

void cedar::aux::gui::StringParameter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        StringParameter *_t = static_cast<StringParameter *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->parameterPointerChanged(); break;
        case 1: _t->textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->parameterValueChanged(); break;
        default: ;
        }
    }
}

const QMetaObject cedar::aux::gui::StringParameter::staticMetaObject = {
    { &cedar::aux::gui::Parameter::staticMetaObject, qt_meta_stringdata_cedar__aux__gui__StringParameter.data,
      qt_meta_data_cedar__aux__gui__StringParameter,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *cedar::aux::gui::StringParameter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cedar::aux::gui::StringParameter::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_cedar__aux__gui__StringParameter.stringdata0))
        return static_cast<void*>(const_cast< StringParameter*>(this));
    return cedar::aux::gui::Parameter::qt_metacast(_clname);
}

int cedar::aux::gui::StringParameter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = cedar::aux::gui::Parameter::qt_metacall(_c, _id, _a);
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
