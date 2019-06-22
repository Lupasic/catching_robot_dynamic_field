/****************************************************************************
** Meta object code from reading C++ file 'CamProperty.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../cedar/devices/sensors/camera/CamProperty.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CamProperty.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_cedar__dev__sensors__camera__CamProperty_t {
    QByteArrayData data[11];
    char stringdata0[234];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cedar__dev__sensors__camera__CamProperty_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cedar__dev__sensors__camera__CamProperty_t qt_meta_stringdata_cedar__dev__sensors__camera__CamProperty = {
    {
QT_MOC_LITERAL(0, 0, 40), // "cedar::dev::sensors::camera::..."
QT_MOC_LITERAL(1, 41, 20), // "propertyValueChanged"
QT_MOC_LITERAL(2, 62, 0), // ""
QT_MOC_LITERAL(3, 63, 41), // "cedar::dev::sensors::camera::..."
QT_MOC_LITERAL(4, 105, 10), // "propertyId"
QT_MOC_LITERAL(5, 116, 8), // "newValue"
QT_MOC_LITERAL(6, 125, 19), // "propertyModeChanged"
QT_MOC_LITERAL(7, 145, 45), // "cedar::dev::sensors::camera::..."
QT_MOC_LITERAL(8, 191, 7), // "newMode"
QT_MOC_LITERAL(9, 199, 17), // "propertyValueSlot"
QT_MOC_LITERAL(10, 217, 16) // "propertyModeSlot"

    },
    "cedar::dev::sensors::camera::CamProperty\0"
    "propertyValueChanged\0\0"
    "cedar::dev::sensors::camera::Property::Id\0"
    "propertyId\0newValue\0propertyModeChanged\0"
    "cedar::dev::sensors::camera::PropertyMode::Id\0"
    "newMode\0propertyValueSlot\0propertyModeSlot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cedar__dev__sensors__camera__CamProperty[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   34,    2, 0x06 /* Public */,
       6,    2,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    0,   44,    2, 0x09 /* Protected */,
      10,    0,   45,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Double,    4,    5,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 7,    4,    8,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void cedar::dev::sensors::camera::CamProperty::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CamProperty *_t = static_cast<CamProperty *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->propertyValueChanged((*reinterpret_cast< cedar::dev::sensors::camera::Property::Id(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 1: _t->propertyModeChanged((*reinterpret_cast< cedar::dev::sensors::camera::Property::Id(*)>(_a[1])),(*reinterpret_cast< cedar::dev::sensors::camera::PropertyMode::Id(*)>(_a[2]))); break;
        case 2: _t->propertyValueSlot(); break;
        case 3: _t->propertyModeSlot(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (CamProperty::*_t)(cedar::dev::sensors::camera::Property::Id , double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CamProperty::propertyValueChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (CamProperty::*_t)(cedar::dev::sensors::camera::Property::Id , cedar::dev::sensors::camera::PropertyMode::Id );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CamProperty::propertyModeChanged)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject cedar::dev::sensors::camera::CamProperty::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_cedar__dev__sensors__camera__CamProperty.data,
      qt_meta_data_cedar__dev__sensors__camera__CamProperty,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *cedar::dev::sensors::camera::CamProperty::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cedar::dev::sensors::camera::CamProperty::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_cedar__dev__sensors__camera__CamProperty.stringdata0))
        return static_cast<void*>(const_cast< CamProperty*>(this));
    if (!strcmp(_clname, "cedar::aux::Configurable"))
        return static_cast< cedar::aux::Configurable*>(const_cast< CamProperty*>(this));
    return QObject::qt_metacast(_clname);
}

int cedar::dev::sensors::camera::CamProperty::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void cedar::dev::sensors::camera::CamProperty::propertyValueChanged(cedar::dev::sensors::camera::Property::Id _t1, double _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void cedar::dev::sensors::camera::CamProperty::propertyModeChanged(cedar::dev::sensors::camera::Property::Id _t1, cedar::dev::sensors::camera::PropertyMode::Id _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
