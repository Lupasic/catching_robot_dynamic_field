/****************************************************************************
** Meta object code from reading C++ file 'IgnoreLocaleDoubleSpinBox.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../cedar/auxiliaries/gui/IgnoreLocaleDoubleSpinBox.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'IgnoreLocaleDoubleSpinBox.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_cedar__aux__gui__IgnoreLocaleDoubleSpinBox_t {
    QByteArrayData data[5];
    char stringdata0[95];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cedar__aux__gui__IgnoreLocaleDoubleSpinBox_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cedar__aux__gui__IgnoreLocaleDoubleSpinBox_t qt_meta_stringdata_cedar__aux__gui__IgnoreLocaleDoubleSpinBox = {
    {
QT_MOC_LITERAL(0, 0, 42), // "cedar::aux::gui::IgnoreLocale..."
QT_MOC_LITERAL(1, 43, 21), // "inputPrecisionChanged"
QT_MOC_LITERAL(2, 65, 0), // ""
QT_MOC_LITERAL(3, 66, 12), // "newPrecision"
QT_MOC_LITERAL(4, 79, 15) // "updatePrecision"

    },
    "cedar::aux::gui::IgnoreLocaleDoubleSpinBox\0"
    "inputPrecisionChanged\0\0newPrecision\0"
    "updatePrecision"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cedar__aux__gui__IgnoreLocaleDoubleSpinBox[] = {

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
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   27,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Double,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Double,    3,

       0        // eod
};

void cedar::aux::gui::IgnoreLocaleDoubleSpinBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        IgnoreLocaleDoubleSpinBox *_t = static_cast<IgnoreLocaleDoubleSpinBox *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->inputPrecisionChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->updatePrecision((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (IgnoreLocaleDoubleSpinBox::*_t)(double ) const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&IgnoreLocaleDoubleSpinBox::inputPrecisionChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject cedar::aux::gui::IgnoreLocaleDoubleSpinBox::staticMetaObject = {
    { &QDoubleSpinBox::staticMetaObject, qt_meta_stringdata_cedar__aux__gui__IgnoreLocaleDoubleSpinBox.data,
      qt_meta_data_cedar__aux__gui__IgnoreLocaleDoubleSpinBox,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *cedar::aux::gui::IgnoreLocaleDoubleSpinBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cedar::aux::gui::IgnoreLocaleDoubleSpinBox::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_cedar__aux__gui__IgnoreLocaleDoubleSpinBox.stringdata0))
        return static_cast<void*>(const_cast< IgnoreLocaleDoubleSpinBox*>(this));
    return QDoubleSpinBox::qt_metacast(_clname);
}

int cedar::aux::gui::IgnoreLocaleDoubleSpinBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDoubleSpinBox::qt_metacall(_c, _id, _a);
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
void cedar::aux::gui::IgnoreLocaleDoubleSpinBox::inputPrecisionChanged(double _t1)const
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< cedar::aux::gui::IgnoreLocaleDoubleSpinBox *>(this), &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
