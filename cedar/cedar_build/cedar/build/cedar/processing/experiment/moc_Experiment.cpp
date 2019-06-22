/****************************************************************************
** Meta object code from reading C++ file 'Experiment.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../cedar/processing/experiment/Experiment.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Experiment.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_cedar__proc__experiment__Experiment_t {
    QByteArrayData data[7];
    char stringdata0[107];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cedar__proc__experiment__Experiment_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cedar__proc__experiment__Experiment_t qt_meta_stringdata_cedar__proc__experiment__Experiment = {
    {
QT_MOC_LITERAL(0, 0, 35), // "cedar::proc::experiment::Expe..."
QT_MOC_LITERAL(1, 36, 17), // "experimentRunning"
QT_MOC_LITERAL(2, 54, 0), // ""
QT_MOC_LITERAL(3, 55, 7), // "running"
QT_MOC_LITERAL(4, 63, 18), // "trialNumberChanged"
QT_MOC_LITERAL(5, 82, 11), // "trialNumber"
QT_MOC_LITERAL(6, 94, 12) // "groupChanged"

    },
    "cedar::proc::experiment::Experiment\0"
    "experimentRunning\0\0running\0"
    "trialNumberChanged\0trialNumber\0"
    "groupChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cedar__proc__experiment__Experiment[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       4,    1,   32,    2, 0x06 /* Public */,
       6,    0,   35,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,

       0        // eod
};

void cedar::proc::experiment::Experiment::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Experiment *_t = static_cast<Experiment *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->experimentRunning((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->trialNumberChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->groupChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Experiment::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Experiment::experimentRunning)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Experiment::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Experiment::trialNumberChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (Experiment::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Experiment::groupChanged)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject cedar::proc::experiment::Experiment::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_cedar__proc__experiment__Experiment.data,
      qt_meta_data_cedar__proc__experiment__Experiment,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *cedar::proc::experiment::Experiment::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cedar::proc::experiment::Experiment::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_cedar__proc__experiment__Experiment.stringdata0))
        return static_cast<void*>(const_cast< Experiment*>(this));
    if (!strcmp(_clname, "cedar::aux::NamedConfigurable"))
        return static_cast< cedar::aux::NamedConfigurable*>(const_cast< Experiment*>(this));
    if (!strcmp(_clname, "boost::enable_shared_from_this<cedar::proc::experiment::Experiment>"))
        return static_cast< boost::enable_shared_from_this<cedar::proc::experiment::Experiment>*>(const_cast< Experiment*>(this));
    return QObject::qt_metacast(_clname);
}

int cedar::proc::experiment::Experiment::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void cedar::proc::experiment::Experiment::experimentRunning(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void cedar::proc::experiment::Experiment::trialNumberChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void cedar::proc::experiment::Experiment::groupChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
