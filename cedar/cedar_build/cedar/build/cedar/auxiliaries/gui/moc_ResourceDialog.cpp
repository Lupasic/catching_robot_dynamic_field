/****************************************************************************
** Meta object code from reading C++ file 'ResourceDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../cedar/auxiliaries/gui/ResourceDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ResourceDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_cedar__aux__gui__ResourceDialog_t {
    QByteArrayData data[6];
    char stringdata0[83];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cedar__aux__gui__ResourceDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cedar__aux__gui__ResourceDialog_t qt_meta_stringdata_cedar__aux__gui__ResourceDialog = {
    {
QT_MOC_LITERAL(0, 0, 31), // "cedar::aux::gui::ResourceDialog"
QT_MOC_LITERAL(1, 32, 12), // "itemSelected"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 13), // "itemActivated"
QT_MOC_LITERAL(4, 60, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(5, 77, 5) // "pItem"

    },
    "cedar::aux::gui::ResourceDialog\0"
    "itemSelected\0\0itemActivated\0"
    "QTreeWidgetItem*\0pItem"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cedar__aux__gui__ResourceDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x08 /* Private */,
       3,    2,   25,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4, QMetaType::Int,    5,    2,

       0        // eod
};

void cedar::aux::gui::ResourceDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ResourceDialog *_t = static_cast<ResourceDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->itemSelected(); break;
        case 1: _t->itemActivated((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject cedar::aux::gui::ResourceDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_cedar__aux__gui__ResourceDialog.data,
      qt_meta_data_cedar__aux__gui__ResourceDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *cedar::aux::gui::ResourceDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cedar::aux::gui::ResourceDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_cedar__aux__gui__ResourceDialog.stringdata0))
        return static_cast<void*>(const_cast< ResourceDialog*>(this));
    if (!strcmp(_clname, "Ui_ResourceDialog"))
        return static_cast< Ui_ResourceDialog*>(const_cast< ResourceDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int cedar::aux::gui::ResourceDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
