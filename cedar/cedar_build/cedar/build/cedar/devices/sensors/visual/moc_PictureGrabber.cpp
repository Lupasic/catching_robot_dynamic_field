/****************************************************************************
** Meta object code from reading C++ file 'PictureGrabber.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../cedar/devices/sensors/visual/PictureGrabber.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PictureGrabber.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_cedar__dev__sensors__visual__PictureGrabber_t {
    QByteArrayData data[4];
    char stringdata0[76];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cedar__dev__sensors__visual__PictureGrabber_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cedar__dev__sensors__visual__PictureGrabber_t qt_meta_stringdata_cedar__dev__sensors__visual__PictureGrabber = {
    {
QT_MOC_LITERAL(0, 0, 43), // "cedar::dev::sensors::visual::..."
QT_MOC_LITERAL(1, 44, 14), // "pictureChanged"
QT_MOC_LITERAL(2, 59, 0), // ""
QT_MOC_LITERAL(3, 60, 15) // "fileNameChanged"

    },
    "cedar::dev::sensors::visual::PictureGrabber\0"
    "pictureChanged\0\0fileNameChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cedar__dev__sensors__visual__PictureGrabber[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   25,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void cedar::dev::sensors::visual::PictureGrabber::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PictureGrabber *_t = static_cast<PictureGrabber *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->pictureChanged(); break;
        case 1: _t->fileNameChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (PictureGrabber::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PictureGrabber::pictureChanged)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject cedar::dev::sensors::visual::PictureGrabber::staticMetaObject = {
    { &cedar::dev::sensors::visual::Grabber::staticMetaObject, qt_meta_stringdata_cedar__dev__sensors__visual__PictureGrabber.data,
      qt_meta_data_cedar__dev__sensors__visual__PictureGrabber,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *cedar::dev::sensors::visual::PictureGrabber::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cedar::dev::sensors::visual::PictureGrabber::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_cedar__dev__sensors__visual__PictureGrabber.stringdata0))
        return static_cast<void*>(const_cast< PictureGrabber*>(this));
    return cedar::dev::sensors::visual::Grabber::qt_metacast(_clname);
}

int cedar::dev::sensors::visual::PictureGrabber::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = cedar::dev::sensors::visual::Grabber::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void cedar::dev::sensors::visual::PictureGrabber::pictureChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
