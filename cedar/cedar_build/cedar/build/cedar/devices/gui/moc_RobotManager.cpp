/****************************************************************************
** Meta object code from reading C++ file 'RobotManager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../cedar/devices/gui/RobotManager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RobotManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_cedar__dev__gui__RobotManager_t {
    QByteArrayData data[21];
    char stringdata0[362];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cedar__dev__gui__RobotManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cedar__dev__gui__RobotManager_t qt_meta_stringdata_cedar__dev__gui__RobotManager = {
    {
QT_MOC_LITERAL(0, 0, 29), // "cedar::dev::gui::RobotManager"
QT_MOC_LITERAL(1, 30, 14), // "robotNameAdded"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 14), // "addedRobotName"
QT_MOC_LITERAL(4, 61, 24), // "robotConfigurationLoaded"
QT_MOC_LITERAL(5, 86, 17), // "closeRobotManager"
QT_MOC_LITERAL(6, 104, 20), // "configurationChanged"
QT_MOC_LITERAL(7, 125, 26), // "loadConfigurationTriggered"
QT_MOC_LITERAL(8, 152, 38), // "loadConfigurationFromResource..."
QT_MOC_LITERAL(9, 191, 15), // "addRobotClicked"
QT_MOC_LITERAL(10, 207, 12), // "addRobotName"
QT_MOC_LITERAL(11, 220, 24), // "updateRobotConfiguration"
QT_MOC_LITERAL(12, 245, 17), // "robotNameSelected"
QT_MOC_LITERAL(13, 263, 9), // "nameIndex"
QT_MOC_LITERAL(14, 273, 12), // "partSelected"
QT_MOC_LITERAL(15, 286, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(16, 303, 8), // "pCurrent"
QT_MOC_LITERAL(17, 312, 9), // "pPrevious"
QT_MOC_LITERAL(18, 322, 13), // "simpleModeAdd"
QT_MOC_LITERAL(19, 336, 13), // "removeClicked"
QT_MOC_LITERAL(20, 350, 11) // "closeWindow"

    },
    "cedar::dev::gui::RobotManager\0"
    "robotNameAdded\0\0addedRobotName\0"
    "robotConfigurationLoaded\0closeRobotManager\0"
    "configurationChanged\0loadConfigurationTriggered\0"
    "loadConfigurationFromResourceTriggered\0"
    "addRobotClicked\0addRobotName\0"
    "updateRobotConfiguration\0robotNameSelected\0"
    "nameIndex\0partSelected\0QTreeWidgetItem*\0"
    "pCurrent\0pPrevious\0simpleModeAdd\0"
    "removeClicked\0closeWindow"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cedar__dev__gui__RobotManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   84,    2, 0x06 /* Public */,
       4,    1,   87,    2, 0x06 /* Public */,
       5,    0,   90,    2, 0x06 /* Public */,
       6,    0,   91,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   92,    2, 0x08 /* Private */,
       8,    0,   93,    2, 0x08 /* Private */,
       9,    0,   94,    2, 0x08 /* Private */,
      10,    1,   95,    2, 0x08 /* Private */,
      11,    1,   98,    2, 0x08 /* Private */,
      12,    1,  101,    2, 0x08 /* Private */,
      14,    2,  104,    2, 0x08 /* Private */,
      18,    0,  109,    2, 0x08 /* Private */,
      19,    0,  110,    2, 0x08 /* Private */,
      20,    0,  111,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, 0x80000000 | 15, 0x80000000 | 15,   16,   17,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void cedar::dev::gui::RobotManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        RobotManager *_t = static_cast<RobotManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->robotNameAdded((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->robotConfigurationLoaded((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->closeRobotManager(); break;
        case 3: _t->configurationChanged(); break;
        case 4: _t->loadConfigurationTriggered(); break;
        case 5: _t->loadConfigurationFromResourceTriggered(); break;
        case 6: _t->addRobotClicked(); break;
        case 7: _t->addRobotName((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->updateRobotConfiguration((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: _t->robotNameSelected((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->partSelected((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QTreeWidgetItem*(*)>(_a[2]))); break;
        case 11: _t->simpleModeAdd(); break;
        case 12: _t->removeClicked(); break;
        case 13: _t->closeWindow(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (RobotManager::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RobotManager::robotNameAdded)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (RobotManager::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RobotManager::robotConfigurationLoaded)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (RobotManager::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RobotManager::closeRobotManager)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (RobotManager::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RobotManager::configurationChanged)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject cedar::dev::gui::RobotManager::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_cedar__dev__gui__RobotManager.data,
      qt_meta_data_cedar__dev__gui__RobotManager,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *cedar::dev::gui::RobotManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cedar::dev::gui::RobotManager::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_cedar__dev__gui__RobotManager.stringdata0))
        return static_cast<void*>(const_cast< RobotManager*>(this));
    if (!strcmp(_clname, "Ui_RobotManager"))
        return static_cast< Ui_RobotManager*>(const_cast< RobotManager*>(this));
    return QWidget::qt_metacast(_clname);
}

int cedar::dev::gui::RobotManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void cedar::dev::gui::RobotManager::robotNameAdded(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void cedar::dev::gui::RobotManager::robotConfigurationLoaded(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void cedar::dev::gui::RobotManager::closeRobotManager()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void cedar::dev::gui::RobotManager::configurationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
