/****************************************************************************
** Meta object code from reading C++ file 'UIntVectorParameter.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../tests/unit/auxiliaries/gui/gui_NumericVectorParameter/UIntVectorParameter.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UIntVectorParameter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_UIntVectorParameter_t {
    QByteArrayData data[1];
    char stringdata0[20];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UIntVectorParameter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UIntVectorParameter_t qt_meta_stringdata_UIntVectorParameter = {
    {
QT_MOC_LITERAL(0, 0, 19) // "UIntVectorParameter"

    },
    "UIntVectorParameter"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UIntVectorParameter[] = {

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

void UIntVectorParameter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject UIntVectorParameter::staticMetaObject = {
    { &cedar::aux::gui::UIntVectorParameter::staticMetaObject, qt_meta_stringdata_UIntVectorParameter.data,
      qt_meta_data_UIntVectorParameter,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *UIntVectorParameter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UIntVectorParameter::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_UIntVectorParameter.stringdata0))
        return static_cast<void*>(const_cast< UIntVectorParameter*>(this));
    return cedar::aux::gui::UIntVectorParameter::qt_metacast(_clname);
}

int UIntVectorParameter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = cedar::aux::gui::UIntVectorParameter::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
