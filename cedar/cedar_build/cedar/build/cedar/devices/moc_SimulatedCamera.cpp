/****************************************************************************
** Meta object code from reading C++ file 'SimulatedCamera.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../cedar/devices/SimulatedCamera.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SimulatedCamera.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_cedar__dev__SimulatedCamera_t {
    QByteArrayData data[1];
    char stringdata0[28];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cedar__dev__SimulatedCamera_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cedar__dev__SimulatedCamera_t qt_meta_stringdata_cedar__dev__SimulatedCamera = {
    {
QT_MOC_LITERAL(0, 0, 27) // "cedar::dev::SimulatedCamera"

    },
    "cedar::dev::SimulatedCamera"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cedar__dev__SimulatedCamera[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void cedar::dev::SimulatedCamera::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject cedar::dev::SimulatedCamera::staticMetaObject = {
    { &cedar::dev::Camera::staticMetaObject, qt_meta_stringdata_cedar__dev__SimulatedCamera.data,
      qt_meta_data_cedar__dev__SimulatedCamera,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *cedar::dev::SimulatedCamera::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cedar::dev::SimulatedCamera::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_cedar__dev__SimulatedCamera.stringdata0))
        return static_cast<void*>(const_cast< SimulatedCamera*>(this));
    return cedar::dev::Camera::qt_metacast(_clname);
}

int cedar::dev::SimulatedCamera::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = cedar::dev::Camera::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
