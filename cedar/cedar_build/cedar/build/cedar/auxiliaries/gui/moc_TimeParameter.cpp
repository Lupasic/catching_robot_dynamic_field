/****************************************************************************
** Meta object code from reading C++ file 'TimeParameter.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../cedar/auxiliaries/gui/TimeParameter.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TimeParameter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_cedar__aux__gui__TimeParameter_t {
    QByteArrayData data[4];
    char stringdata0[51];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cedar__aux__gui__TimeParameter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cedar__aux__gui__TimeParameter_t qt_meta_stringdata_cedar__aux__gui__TimeParameter = {
    {
QT_MOC_LITERAL(0, 0, 30), // "cedar::aux::gui::TimeParameter"
QT_MOC_LITERAL(1, 31, 12), // "valueChanged"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 5) // "value"

    },
    "cedar::aux::gui::TimeParameter\0"
    "valueChanged\0\0value"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cedar__aux__gui__TimeParameter[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Double,    3,

       0        // eod
};

void cedar::aux::gui::TimeParameter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TimeParameter *_t = static_cast<TimeParameter *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject cedar::aux::gui::TimeParameter::staticMetaObject = {
    { &cedar::aux::gui::NumericParameter<cedar::unit::Time,QDoubleSpinBox>::staticMetaObject, qt_meta_stringdata_cedar__aux__gui__TimeParameter.data,
      qt_meta_data_cedar__aux__gui__TimeParameter,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *cedar::aux::gui::TimeParameter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cedar::aux::gui::TimeParameter::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_cedar__aux__gui__TimeParameter.stringdata0))
        return static_cast<void*>(const_cast< TimeParameter*>(this));
    return cedar::aux::gui::NumericParameter<cedar::unit::Time,QDoubleSpinBox>::qt_metacast(_clname);
}

int cedar::aux::gui::TimeParameter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = cedar::aux::gui::NumericParameter<cedar::unit::Time,QDoubleSpinBox>::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
