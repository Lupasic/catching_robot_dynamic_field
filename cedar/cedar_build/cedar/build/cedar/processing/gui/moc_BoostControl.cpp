/****************************************************************************
** Meta object code from reading C++ file 'BoostControl.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../cedar/processing/gui/BoostControl.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'BoostControl.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_cedar__proc__gui__BoostControl_t {
    QByteArrayData data[6];
    char stringdata0[76];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cedar__proc__gui__BoostControl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cedar__proc__gui__BoostControl_t qt_meta_stringdata_cedar__proc__gui__BoostControl = {
    {
QT_MOC_LITERAL(0, 0, 30), // "cedar::proc::gui::BoostControl"
QT_MOC_LITERAL(1, 31, 13), // "itemActivated"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(4, 63, 5), // "pItem"
QT_MOC_LITERAL(5, 69, 6) // "column"

    },
    "cedar::proc::gui::BoostControl\0"
    "itemActivated\0\0QTreeWidgetItem*\0pItem\0"
    "column"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cedar__proc__gui__BoostControl[] = {

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
       1,    2,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    4,    5,

       0        // eod
};

void cedar::proc::gui::BoostControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BoostControl *_t = static_cast<BoostControl *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->itemActivated((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject cedar::proc::gui::BoostControl::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_cedar__proc__gui__BoostControl.data,
      qt_meta_data_cedar__proc__gui__BoostControl,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *cedar::proc::gui::BoostControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cedar::proc::gui::BoostControl::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_cedar__proc__gui__BoostControl.stringdata0))
        return static_cast<void*>(const_cast< BoostControl*>(this));
    if (!strcmp(_clname, "Ui_BoostControl"))
        return static_cast< Ui_BoostControl*>(const_cast< BoostControl*>(this));
    return QWidget::qt_metacast(_clname);
}

int cedar::proc::gui::BoostControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
