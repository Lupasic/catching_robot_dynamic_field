/****************************************************************************
** Meta object code from reading C++ file 'DataSlotItem.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../cedar/processing/gui/DataSlotItem.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DataSlotItem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_cedar__proc__gui__DataSlotItem_t {
    QByteArrayData data[4];
    char stringdata0[83];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cedar__proc__gui__DataSlotItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cedar__proc__gui__DataSlotItem_t qt_meta_stringdata_cedar__proc__gui__DataSlotItem = {
    {
QT_MOC_LITERAL(0, 0, 30), // "cedar::proc::gui::DataSlotItem"
QT_MOC_LITERAL(1, 31, 25), // "connectionValidityChanged"
QT_MOC_LITERAL(2, 57, 0), // ""
QT_MOC_LITERAL(3, 58, 24) // "updateConnectionValidity"

    },
    "cedar::proc::gui::DataSlotItem\0"
    "connectionValidityChanged\0\0"
    "updateConnectionValidity"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cedar__proc__gui__DataSlotItem[] = {

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
       3,    0,   25,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void cedar::proc::gui::DataSlotItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DataSlotItem *_t = static_cast<DataSlotItem *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->connectionValidityChanged(); break;
        case 1: _t->updateConnectionValidity(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (DataSlotItem::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DataSlotItem::connectionValidityChanged)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject cedar::proc::gui::DataSlotItem::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_cedar__proc__gui__DataSlotItem.data,
      qt_meta_data_cedar__proc__gui__DataSlotItem,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *cedar::proc::gui::DataSlotItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cedar::proc::gui::DataSlotItem::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_cedar__proc__gui__DataSlotItem.stringdata0))
        return static_cast<void*>(const_cast< DataSlotItem*>(this));
    if (!strcmp(_clname, "cedar::proc::gui::GraphicsBase"))
        return static_cast< cedar::proc::gui::GraphicsBase*>(const_cast< DataSlotItem*>(this));
    return QObject::qt_metacast(_clname);
}

int cedar::proc::gui::DataSlotItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void cedar::proc::gui::DataSlotItem::connectionValidityChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE