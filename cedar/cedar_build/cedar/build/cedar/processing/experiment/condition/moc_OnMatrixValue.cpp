/****************************************************************************
** Meta object code from reading C++ file 'OnMatrixValue.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../cedar/processing/experiment/condition/OnMatrixValue.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'OnMatrixValue.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_cedar__proc__experiment__condition__OnMatrixValue_t {
    QByteArrayData data[3];
    char stringdata0[74];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cedar__proc__experiment__condition__OnMatrixValue_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cedar__proc__experiment__condition__OnMatrixValue_t qt_meta_stringdata_cedar__proc__experiment__condition__OnMatrixValue = {
    {
QT_MOC_LITERAL(0, 0, 49), // "cedar::proc::experiment::cond..."
QT_MOC_LITERAL(1, 50, 22), // "toggleNumberOfElements"
QT_MOC_LITERAL(2, 73, 0) // ""

    },
    "cedar::proc::experiment::condition::OnMatrixValue\0"
    "toggleNumberOfElements\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cedar__proc__experiment__condition__OnMatrixValue[] = {

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
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void cedar::proc::experiment::condition::OnMatrixValue::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        OnMatrixValue *_t = static_cast<OnMatrixValue *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->toggleNumberOfElements(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject cedar::proc::experiment::condition::OnMatrixValue::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_cedar__proc__experiment__condition__OnMatrixValue.data,
      qt_meta_data_cedar__proc__experiment__condition__OnMatrixValue,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *cedar::proc::experiment::condition::OnMatrixValue::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cedar::proc::experiment::condition::OnMatrixValue::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_cedar__proc__experiment__condition__OnMatrixValue.stringdata0))
        return static_cast<void*>(const_cast< OnMatrixValue*>(this));
    if (!strcmp(_clname, "cedar::proc::experiment::condition::Condition"))
        return static_cast< cedar::proc::experiment::condition::Condition*>(const_cast< OnMatrixValue*>(this));
    return QObject::qt_metacast(_clname);
}

int cedar::proc::experiment::condition::OnMatrixValue::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
