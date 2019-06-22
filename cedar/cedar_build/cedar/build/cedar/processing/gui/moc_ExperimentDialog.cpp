/****************************************************************************
** Meta object code from reading C++ file 'ExperimentDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../cedar/processing/gui/ExperimentDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ExperimentDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_cedar__proc__gui__ExperimentDialog_t {
    QByteArrayData data[18];
    char stringdata0[228];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cedar__proc__gui__ExperimentDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cedar__proc__gui__ExperimentDialog_t qt_meta_stringdata_cedar__proc__gui__ExperimentDialog = {
    {
QT_MOC_LITERAL(0, 0, 34), // "cedar::proc::gui::ExperimentD..."
QT_MOC_LITERAL(1, 35, 6), // "redraw"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 19), // "createNewExperiment"
QT_MOC_LITERAL(4, 63, 4), // "save"
QT_MOC_LITERAL(5, 68, 6), // "saveAs"
QT_MOC_LITERAL(6, 75, 4), // "load"
QT_MOC_LITERAL(7, 80, 11), // "nameChanged"
QT_MOC_LITERAL(8, 92, 17), // "addActionSequence"
QT_MOC_LITERAL(9, 110, 12), // "trialChanged"
QT_MOC_LITERAL(10, 123, 13), // "runExperiment"
QT_MOC_LITERAL(11, 137, 14), // "stopExperiment"
QT_MOC_LITERAL(12, 152, 17), // "experimentRunning"
QT_MOC_LITERAL(13, 170, 6), // "status"
QT_MOC_LITERAL(14, 177, 18), // "trialNumberChanged"
QT_MOC_LITERAL(15, 196, 6), // "number"
QT_MOC_LITERAL(16, 203, 10), // "timeUpdate"
QT_MOC_LITERAL(17, 214, 13) // "repeatChecked"

    },
    "cedar::proc::gui::ExperimentDialog\0"
    "redraw\0\0createNewExperiment\0save\0"
    "saveAs\0load\0nameChanged\0addActionSequence\0"
    "trialChanged\0runExperiment\0stopExperiment\0"
    "experimentRunning\0status\0trialNumberChanged\0"
    "number\0timeUpdate\0repeatChecked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cedar__proc__gui__ExperimentDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x0a /* Public */,
       3,    0,   85,    2, 0x08 /* Private */,
       4,    0,   86,    2, 0x08 /* Private */,
       5,    0,   87,    2, 0x08 /* Private */,
       6,    0,   88,    2, 0x08 /* Private */,
       7,    0,   89,    2, 0x08 /* Private */,
       8,    0,   90,    2, 0x08 /* Private */,
       9,    0,   91,    2, 0x08 /* Private */,
      10,    0,   92,    2, 0x08 /* Private */,
      11,    0,   93,    2, 0x08 /* Private */,
      12,    1,   94,    2, 0x08 /* Private */,
      14,    1,   97,    2, 0x08 /* Private */,
      16,    0,  100,    2, 0x08 /* Private */,
      17,    1,  101,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,

       0        // eod
};

void cedar::proc::gui::ExperimentDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ExperimentDialog *_t = static_cast<ExperimentDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->redraw(); break;
        case 1: _t->createNewExperiment(); break;
        case 2: _t->save(); break;
        case 3: _t->saveAs(); break;
        case 4: _t->load(); break;
        case 5: _t->nameChanged(); break;
        case 6: _t->addActionSequence(); break;
        case 7: _t->trialChanged(); break;
        case 8: _t->runExperiment(); break;
        case 9: _t->stopExperiment(); break;
        case 10: _t->experimentRunning((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->trialNumberChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->timeUpdate(); break;
        case 13: _t->repeatChecked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject cedar::proc::gui::ExperimentDialog::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_cedar__proc__gui__ExperimentDialog.data,
      qt_meta_data_cedar__proc__gui__ExperimentDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *cedar::proc::gui::ExperimentDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cedar::proc::gui::ExperimentDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_cedar__proc__gui__ExperimentDialog.stringdata0))
        return static_cast<void*>(const_cast< ExperimentDialog*>(this));
    if (!strcmp(_clname, "Ui_ExperimentDialog"))
        return static_cast< Ui_ExperimentDialog*>(const_cast< ExperimentDialog*>(this));
    return QWidget::qt_metacast(_clname);
}

int cedar::proc::gui::ExperimentDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
