/****************************************************************************
** Meta object code from reading C++ file 'StepManager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../cedar/processing/gui/StepManager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'StepManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_cedar__proc__gui__StepManager_t {
    QByteArrayData data[7];
    char stringdata0[117];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cedar__proc__gui__StepManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cedar__proc__gui__StepManager_t qt_meta_stringdata_cedar__proc__gui__StepManager = {
    {
QT_MOC_LITERAL(0, 0, 29), // "cedar::proc::gui::StepManager"
QT_MOC_LITERAL(1, 30, 15), // "checkBoxToggled"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 13), // "fullClassName"
QT_MOC_LITERAL(4, 61, 20), // "handleCheckBoxToggle"
QT_MOC_LITERAL(5, 82, 23), // "handleComboBoxSelection"
QT_MOC_LITERAL(6, 106, 10) // "presetName"

    },
    "cedar::proc::gui::StepManager\0"
    "checkBoxToggled\0\0fullClassName\0"
    "handleCheckBoxToggle\0handleComboBoxSelection\0"
    "presetName"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cedar__proc__gui__StepManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   32,    2, 0x08 /* Private */,
       5,    1,   35,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    6,

       0        // eod
};

void cedar::proc::gui::StepManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        StepManager *_t = static_cast<StepManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->checkBoxToggled((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->handleCheckBoxToggle((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->handleComboBoxSelection((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (StepManager::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StepManager::checkBoxToggled)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject cedar::proc::gui::StepManager::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_cedar__proc__gui__StepManager.data,
      qt_meta_data_cedar__proc__gui__StepManager,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *cedar::proc::gui::StepManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cedar::proc::gui::StepManager::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_cedar__proc__gui__StepManager.stringdata0))
        return static_cast<void*>(const_cast< StepManager*>(this));
    if (!strcmp(_clname, "Ui_StepManager"))
        return static_cast< Ui_StepManager*>(const_cast< StepManager*>(this));
    return QWidget::qt_metacast(_clname);
}

int cedar::proc::gui::StepManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void cedar::proc::gui::StepManager::checkBoxToggled(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
