/****************************************************************************
** Meta object code from reading C++ file 'VideoGrabber.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../cedar/devices/sensors/visual/VideoGrabber.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'VideoGrabber.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_cedar__dev__sensors__visual__VideoGrabber_t {
    QByteArrayData data[6];
    char stringdata0[114];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cedar__dev__sensors__visual__VideoGrabber_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cedar__dev__sensors__visual__VideoGrabber_t qt_meta_stringdata_cedar__dev__sensors__visual__VideoGrabber = {
    {
QT_MOC_LITERAL(0, 0, 41), // "cedar::dev::sensors::visual::..."
QT_MOC_LITERAL(1, 42, 14), // "doVideoChanged"
QT_MOC_LITERAL(2, 57, 0), // ""
QT_MOC_LITERAL(3, 58, 20), // "doSpeedFactorChanged"
QT_MOC_LITERAL(4, 79, 15), // "fileNameChanged"
QT_MOC_LITERAL(5, 95, 18) // "speedFactorChanged"

    },
    "cedar::dev::sensors::visual::VideoGrabber\0"
    "doVideoChanged\0\0doSpeedFactorChanged\0"
    "fileNameChanged\0speedFactorChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cedar__dev__sensors__visual__VideoGrabber[] = {

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
       1,    0,   34,    2, 0x06 /* Public */,
       3,    0,   35,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   36,    2, 0x09 /* Protected */,
       5,    0,   37,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void cedar::dev::sensors::visual::VideoGrabber::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        VideoGrabber *_t = static_cast<VideoGrabber *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->doVideoChanged(); break;
        case 1: _t->doSpeedFactorChanged(); break;
        case 2: _t->fileNameChanged(); break;
        case 3: _t->speedFactorChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (VideoGrabber::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&VideoGrabber::doVideoChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (VideoGrabber::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&VideoGrabber::doSpeedFactorChanged)) {
                *result = 1;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject cedar::dev::sensors::visual::VideoGrabber::staticMetaObject = {
    { &cedar::dev::sensors::visual::Grabber::staticMetaObject, qt_meta_stringdata_cedar__dev__sensors__visual__VideoGrabber.data,
      qt_meta_data_cedar__dev__sensors__visual__VideoGrabber,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *cedar::dev::sensors::visual::VideoGrabber::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cedar::dev::sensors::visual::VideoGrabber::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_cedar__dev__sensors__visual__VideoGrabber.stringdata0))
        return static_cast<void*>(const_cast< VideoGrabber*>(this));
    return cedar::dev::sensors::visual::Grabber::qt_metacast(_clname);
}

int cedar::dev::sensors::visual::VideoGrabber::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = cedar::dev::sensors::visual::Grabber::qt_metacall(_c, _id, _a);
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
void cedar::dev::sensors::visual::VideoGrabber::doVideoChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void cedar::dev::sensors::visual::VideoGrabber::doSpeedFactorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
