/****************************************************************************
** Meta object code from reading C++ file 'Group.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../cedar/processing/Group.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Group.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_cedar__proc__Group_t {
    QByteArrayData data[13];
    char stringdata0[179];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cedar__proc__Group_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cedar__proc__Group_t qt_meta_stringdata_cedar__proc__Group = {
    {
QT_MOC_LITERAL(0, 0, 18), // "cedar::proc::Group"
QT_MOC_LITERAL(1, 19, 15), // "stepNameChanged"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 11), // "std::string"
QT_MOC_LITERAL(4, 48, 4), // "from"
QT_MOC_LITERAL(5, 53, 2), // "to"
QT_MOC_LITERAL(6, 56, 14), // "triggerStarted"
QT_MOC_LITERAL(7, 71, 18), // "allTriggersStopped"
QT_MOC_LITERAL(8, 90, 29), // "triggerableStateCountsChanged"
QT_MOC_LITERAL(9, 120, 13), // "loopedChanged"
QT_MOC_LITERAL(10, 134, 13), // "onNameChanged"
QT_MOC_LITERAL(11, 148, 15), // "onLoopedChanged"
QT_MOC_LITERAL(12, 164, 14) // "triggerStopped"

    },
    "cedar::proc::Group\0stepNameChanged\0\0"
    "std::string\0from\0to\0triggerStarted\0"
    "allTriggersStopped\0triggerableStateCountsChanged\0"
    "loopedChanged\0onNameChanged\0onLoopedChanged\0"
    "triggerStopped"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cedar__proc__Group[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   54,    2, 0x06 /* Public */,
       6,    0,   59,    2, 0x06 /* Public */,
       7,    0,   60,    2, 0x06 /* Public */,
       8,    0,   61,    2, 0x06 /* Public */,
       9,    0,   62,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    0,   63,    2, 0x08 /* Private */,
      11,    0,   64,    2, 0x08 /* Private */,
      12,    0,   65,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,    4,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void cedar::proc::Group::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Group *_t = static_cast<Group *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->stepNameChanged((*reinterpret_cast< const std::string(*)>(_a[1])),(*reinterpret_cast< const std::string(*)>(_a[2]))); break;
        case 1: _t->triggerStarted(); break;
        case 2: _t->allTriggersStopped(); break;
        case 3: _t->triggerableStateCountsChanged(); break;
        case 4: _t->loopedChanged(); break;
        case 5: _t->onNameChanged(); break;
        case 6: _t->onLoopedChanged(); break;
        case 7: _t->triggerStopped(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Group::*_t)(const std::string & , const std::string & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Group::stepNameChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Group::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Group::triggerStarted)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (Group::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Group::allTriggersStopped)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (Group::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Group::triggerableStateCountsChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (Group::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Group::loopedChanged)) {
                *result = 4;
                return;
            }
        }
    }
}

const QMetaObject cedar::proc::Group::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_cedar__proc__Group.data,
      qt_meta_data_cedar__proc__Group,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *cedar::proc::Group::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cedar::proc::Group::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_cedar__proc__Group.stringdata0))
        return static_cast<void*>(const_cast< Group*>(this));
    if (!strcmp(_clname, "cedar::proc::Connectable"))
        return static_cast< cedar::proc::Connectable*>(const_cast< Group*>(this));
    if (!strcmp(_clname, "cedar::proc::Triggerable"))
        return static_cast< cedar::proc::Triggerable*>(const_cast< Group*>(this));
    return QThread::qt_metacast(_clname);
}

int cedar::proc::Group::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void cedar::proc::Group::stepNameChanged(const std::string & _t1, const std::string & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void cedar::proc::Group::triggerStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void cedar::proc::Group::allTriggersStopped()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void cedar::proc::Group::triggerableStateCountsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void cedar::proc::Group::loopedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
