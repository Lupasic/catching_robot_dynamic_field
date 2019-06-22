/****************************************************************************
** Meta object code from reading C++ file 'OneTimeMessageDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../cedar/processing/gui/OneTimeMessageDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'OneTimeMessageDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_cedar__proc__gui__OneTimeMessageDialog_t {
    QByteArrayData data[5];
    char stringdata0[91];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cedar__proc__gui__OneTimeMessageDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cedar__proc__gui__OneTimeMessageDialog_t qt_meta_stringdata_cedar__proc__gui__OneTimeMessageDialog = {
    {
QT_MOC_LITERAL(0, 0, 38), // "cedar::proc::gui::OneTimeMess..."
QT_MOC_LITERAL(1, 39, 15), // "showNextMessage"
QT_MOC_LITERAL(2, 55, 0), // ""
QT_MOC_LITERAL(3, 56, 19), // "showPreviousMessage"
QT_MOC_LITERAL(4, 76, 14) // "dialogAccepted"

    },
    "cedar::proc::gui::OneTimeMessageDialog\0"
    "showNextMessage\0\0showPreviousMessage\0"
    "dialogAccepted"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cedar__proc__gui__OneTimeMessageDialog[] = {

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
       3,    0,   30,    2, 0x0a /* Public */,
       4,    0,   31,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void cedar::proc::gui::OneTimeMessageDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        OneTimeMessageDialog *_t = static_cast<OneTimeMessageDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->showNextMessage(); break;
        case 1: _t->showPreviousMessage(); break;
        case 2: _t->dialogAccepted(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject cedar::proc::gui::OneTimeMessageDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_cedar__proc__gui__OneTimeMessageDialog.data,
      qt_meta_data_cedar__proc__gui__OneTimeMessageDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *cedar::proc::gui::OneTimeMessageDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cedar::proc::gui::OneTimeMessageDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_cedar__proc__gui__OneTimeMessageDialog.stringdata0))
        return static_cast<void*>(const_cast< OneTimeMessageDialog*>(this));
    if (!strcmp(_clname, "Ui_OneTimeMessageDialog"))
        return static_cast< Ui_OneTimeMessageDialog*>(const_cast< OneTimeMessageDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int cedar::proc::gui::OneTimeMessageDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
