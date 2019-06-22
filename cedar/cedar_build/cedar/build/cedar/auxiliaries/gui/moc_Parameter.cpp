/****************************************************************************
** Meta object code from reading C++ file 'Parameter.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../cedar/auxiliaries/gui/Parameter.h"
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
struct qt_meta_stringdata_cedar__aux__gui__Parameter_t {
    QByteArrayData data[7];
    char stringdata0[114];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cedar__aux__gui__Parameter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cedar__aux__gui__Parameter_t qt_meta_stringdata_cedar__aux__gui__Parameter = {
    {
QT_MOC_LITERAL(0, 0, 26), // "cedar::aux::gui::Parameter"
QT_MOC_LITERAL(1, 27, 23), // "parameterPointerChanged"
QT_MOC_LITERAL(2, 51, 0), // ""
QT_MOC_LITERAL(3, 52, 13), // "heightChanged"
QT_MOC_LITERAL(4, 66, 16), // "parameterChanged"
QT_MOC_LITERAL(5, 83, 17), // "propertiesChanged"
QT_MOC_LITERAL(6, 101, 12) // "valueChanged"

    },
    "cedar::aux::gui::Parameter\0"
    "parameterPointerChanged\0\0heightChanged\0"
    "parameterChanged\0propertiesChanged\0"
    "valueChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cedar__aux__gui__Parameter[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    0,   40,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   41,    2, 0x08 /* Private */,
       5,    0,   42,    2, 0x08 /* Private */,
       6,    0,   43,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void cedar::aux::gui::Parameter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Parameter *_t = static_cast<Parameter *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->parameterPointerChanged(); break;
        case 1: _t->heightChanged(); break;
        case 2: _t->parameterChanged(); break;
        case 3: _t->propertiesChanged(); break;
        case 4: _t->valueChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Parameter::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Parameter::parameterPointerChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Parameter::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Parameter::heightChanged)) {
                *result = 1;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject cedar::aux::gui::Parameter::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_cedar__aux__gui__Parameter.data,
      qt_meta_data_cedar__aux__gui__Parameter,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *cedar::aux::gui::Parameter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cedar::aux::gui::Parameter::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_cedar__aux__gui__Parameter.stringdata0))
        return static_cast<void*>(const_cast< Parameter*>(this));
    return QWidget::qt_metacast(_clname);
}

int cedar::aux::gui::Parameter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void cedar::aux::gui::Parameter::parameterPointerChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void cedar::aux::gui::Parameter::heightChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
