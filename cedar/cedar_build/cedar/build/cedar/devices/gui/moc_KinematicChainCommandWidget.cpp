/****************************************************************************
** Meta object code from reading C++ file 'KinematicChainCommandWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../cedar/devices/gui/KinematicChainCommandWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'KinematicChainCommandWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_cedar__dev__gui__KinematicChainCommandWidget_t {
    QByteArrayData data[14];
    char stringdata0[240];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cedar__dev__gui__KinematicChainCommandWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cedar__dev__gui__KinematicChainCommandWidget_t qt_meta_stringdata_cedar__dev__gui__KinematicChainCommandWidget = {
    {
QT_MOC_LITERAL(0, 0, 44), // "cedar::dev::gui::KinematicCha..."
QT_MOC_LITERAL(1, 45, 6), // "update"
QT_MOC_LITERAL(2, 52, 0), // ""
QT_MOC_LITERAL(3, 53, 17), // "changeWorkingMode"
QT_MOC_LITERAL(4, 71, 5), // "index"
QT_MOC_LITERAL(5, 77, 13), // "commandJoints"
QT_MOC_LITERAL(6, 91, 12), // "stopMovement"
QT_MOC_LITERAL(7, 104, 19), // "setKeepSendingState"
QT_MOC_LITERAL(8, 124, 5), // "state"
QT_MOC_LITERAL(9, 130, 24), // "saveInitialConfiguration"
QT_MOC_LITERAL(10, 155, 25), // "loadInitialConfigurations"
QT_MOC_LITERAL(11, 181, 19), // "changeInitialConfig"
QT_MOC_LITERAL(12, 201, 18), // "applyInitialConfig"
QT_MOC_LITERAL(13, 220, 19) // "deleteInitialConfig"

    },
    "cedar::dev::gui::KinematicChainCommandWidget\0"
    "update\0\0changeWorkingMode\0index\0"
    "commandJoints\0stopMovement\0"
    "setKeepSendingState\0state\0"
    "saveInitialConfiguration\0"
    "loadInitialConfigurations\0changeInitialConfig\0"
    "applyInitialConfig\0deleteInitialConfig"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cedar__dev__gui__KinematicChainCommandWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x0a /* Public */,
       3,    1,   65,    2, 0x08 /* Private */,
       5,    0,   68,    2, 0x08 /* Private */,
       6,    0,   69,    2, 0x08 /* Private */,
       7,    1,   70,    2, 0x08 /* Private */,
       9,    0,   73,    2, 0x08 /* Private */,
      10,    0,   74,    2, 0x08 /* Private */,
      11,    0,   75,    2, 0x08 /* Private */,
      12,    0,   76,    2, 0x08 /* Private */,
      13,    0,   77,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void cedar::dev::gui::KinematicChainCommandWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        KinematicChainCommandWidget *_t = static_cast<KinematicChainCommandWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->update(); break;
        case 1: _t->changeWorkingMode((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->commandJoints(); break;
        case 3: _t->stopMovement(); break;
        case 4: _t->setKeepSendingState((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->saveInitialConfiguration(); break;
        case 6: _t->loadInitialConfigurations(); break;
        case 7: _t->changeInitialConfig(); break;
        case 8: _t->applyInitialConfig(); break;
        case 9: _t->deleteInitialConfig(); break;
        default: ;
        }
    }
}

const QMetaObject cedar::dev::gui::KinematicChainCommandWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_cedar__dev__gui__KinematicChainCommandWidget.data,
      qt_meta_data_cedar__dev__gui__KinematicChainCommandWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *cedar::dev::gui::KinematicChainCommandWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cedar::dev::gui::KinematicChainCommandWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_cedar__dev__gui__KinematicChainCommandWidget.stringdata0))
        return static_cast<void*>(const_cast< KinematicChainCommandWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int cedar::dev::gui::KinematicChainCommandWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
