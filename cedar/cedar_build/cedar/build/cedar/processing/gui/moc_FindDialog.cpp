/****************************************************************************
** Meta object code from reading C++ file 'FindDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../cedar/processing/gui/FindDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FindDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_cedar__proc__gui__FindDialog_t {
    QByteArrayData data[5];
    char stringdata0[90];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cedar__proc__gui__FindDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cedar__proc__gui__FindDialog_t qt_meta_stringdata_cedar__proc__gui__FindDialog = {
    {
QT_MOC_LITERAL(0, 0, 28), // "cedar::proc::gui::FindDialog"
QT_MOC_LITERAL(1, 29, 26), // "searchStringChangedChanged"
QT_MOC_LITERAL(2, 56, 0), // ""
QT_MOC_LITERAL(3, 57, 23), // "checkButtonAvailability"
QT_MOC_LITERAL(4, 81, 8) // "findNext"

    },
    "cedar::proc::gui::FindDialog\0"
    "searchStringChangedChanged\0\0"
    "checkButtonAvailability\0findNext"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cedar__proc__gui__FindDialog[] = {

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
       1,    0,   29,    2, 0x08 /* Private */,
       3,    0,   30,    2, 0x08 /* Private */,
       4,    0,   31,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void cedar::proc::gui::FindDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FindDialog *_t = static_cast<FindDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->searchStringChangedChanged(); break;
        case 1: _t->checkButtonAvailability(); break;
        case 2: _t->findNext(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject cedar::proc::gui::FindDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_cedar__proc__gui__FindDialog.data,
      qt_meta_data_cedar__proc__gui__FindDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *cedar::proc::gui::FindDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cedar::proc::gui::FindDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_cedar__proc__gui__FindDialog.stringdata0))
        return static_cast<void*>(const_cast< FindDialog*>(this));
    if (!strcmp(_clname, "Ui_FindDialog"))
        return static_cast< Ui_FindDialog*>(const_cast< FindDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int cedar::proc::gui::FindDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
