/****************************************************************************
** Meta object code from reading C++ file 'Properties.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../cedar/devices/sensors/camera/Properties.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Properties.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_cedar__dev__sensors__camera__Properties_t {
    QByteArrayData data[10];
    char stringdata0[216];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cedar__dev__sensors__camera__Properties_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cedar__dev__sensors__camera__Properties_t qt_meta_stringdata_cedar__dev__sensors__camera__Properties = {
    {
QT_MOC_LITERAL(0, 0, 39), // "cedar::dev::sensors::camera::..."
QT_MOC_LITERAL(1, 40, 17), // "propertiesChanged"
QT_MOC_LITERAL(2, 58, 0), // ""
QT_MOC_LITERAL(3, 59, 20), // "propertyValueChanged"
QT_MOC_LITERAL(4, 80, 41), // "cedar::dev::sensors::camera::..."
QT_MOC_LITERAL(5, 122, 10), // "propertyId"
QT_MOC_LITERAL(6, 133, 8), // "newValue"
QT_MOC_LITERAL(7, 142, 19), // "propertyModeChanged"
QT_MOC_LITERAL(8, 162, 45), // "cedar::dev::sensors::camera::..."
QT_MOC_LITERAL(9, 208, 7) // "newMode"

    },
    "cedar::dev::sensors::camera::Properties\0"
    "propertiesChanged\0\0propertyValueChanged\0"
    "cedar::dev::sensors::camera::Property::Id\0"
    "propertyId\0newValue\0propertyModeChanged\0"
    "cedar::dev::sensors::camera::PropertyMode::Id\0"
    "newMode"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cedar__dev__sensors__camera__Properties[] = {

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
       1,    0,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    2,   30,    2, 0x09 /* Protected */,
       7,    2,   35,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4, QMetaType::Double,    5,    6,
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 8,    5,    9,

       0        // eod
};

void cedar::dev::sensors::camera::Properties::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Properties *_t = static_cast<Properties *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->propertiesChanged(); break;
        case 1: _t->propertyValueChanged((*reinterpret_cast< cedar::dev::sensors::camera::Property::Id(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 2: _t->propertyModeChanged((*reinterpret_cast< cedar::dev::sensors::camera::Property::Id(*)>(_a[1])),(*reinterpret_cast< cedar::dev::sensors::camera::PropertyMode::Id(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Properties::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Properties::propertiesChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject cedar::dev::sensors::camera::Properties::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_cedar__dev__sensors__camera__Properties.data,
      qt_meta_data_cedar__dev__sensors__camera__Properties,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *cedar::dev::sensors::camera::Properties::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cedar::dev::sensors::camera::Properties::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_cedar__dev__sensors__camera__Properties.stringdata0))
        return static_cast<void*>(const_cast< Properties*>(this));
    if (!strcmp(_clname, "cedar::aux::Configurable"))
        return static_cast< cedar::aux::Configurable*>(const_cast< Properties*>(this));
    return QObject::qt_metacast(_clname);
}

int cedar::dev::sensors::camera::Properties::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void cedar::dev::sensors::camera::Properties::propertiesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
