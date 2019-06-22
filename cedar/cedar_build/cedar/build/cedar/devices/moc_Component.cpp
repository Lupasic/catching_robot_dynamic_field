/****************************************************************************
** Meta object code from reading C++ file 'Component.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../cedar/devices/Component.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Component.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_cedar__dev__Component_t {
    QByteArrayData data[3];
    char stringdata0[56];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cedar__dev__Component_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cedar__dev__Component_t qt_meta_stringdata_cedar__dev__Component = {
    {
QT_MOC_LITERAL(0, 0, 21), // "cedar::dev::Component"
QT_MOC_LITERAL(1, 22, 32), // "updatedUserSideMeasurementSignal"
QT_MOC_LITERAL(2, 55, 0) // ""

    },
    "cedar::dev::Component\0"
    "updatedUserSideMeasurementSignal\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cedar__dev__Component[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

       0        // eod
};

void cedar::dev::Component::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Component *_t = static_cast<Component *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updatedUserSideMeasurementSignal(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Component::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Component::updatedUserSideMeasurementSignal)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject cedar::dev::Component::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_cedar__dev__Component.data,
      qt_meta_data_cedar__dev__Component,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *cedar::dev::Component::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cedar::dev::Component::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_cedar__dev__Component.stringdata0))
        return static_cast<void*>(const_cast< Component*>(this));
    if (!strcmp(_clname, "cedar::aux::NamedConfigurable"))
        return static_cast< cedar::aux::NamedConfigurable*>(const_cast< Component*>(this));
    return QObject::qt_metacast(_clname);
}

int cedar::dev::Component::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void cedar::dev::Component::updatedUserSideMeasurementSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
