/****************************************************************************
** Meta object code from reading C++ file 'Convolution.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../cedar/auxiliaries/convolution/Convolution.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Convolution.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_cedar__aux__conv__Convolution_t {
    QByteArrayData data[5];
    char stringdata0[95];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cedar__aux__conv__Convolution_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cedar__aux__conv__Convolution_t qt_meta_stringdata_cedar__aux__conv__Convolution = {
    {
QT_MOC_LITERAL(0, 0, 29), // "cedar::aux::conv::Convolution"
QT_MOC_LITERAL(1, 30, 20), // "configurationChanged"
QT_MOC_LITERAL(2, 51, 0), // ""
QT_MOC_LITERAL(3, 52, 21), // "selectedEngineChanged"
QT_MOC_LITERAL(4, 74, 20) // "updateCombinedKernel"

    },
    "cedar::aux::conv::Convolution\0"
    "configurationChanged\0\0selectedEngineChanged\0"
    "updateCombinedKernel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cedar__aux__conv__Convolution[] = {

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
       3,    0,   30,    2, 0x08 /* Private */,
       4,    0,   31,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void cedar::aux::conv::Convolution::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Convolution *_t = static_cast<Convolution *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->configurationChanged(); break;
        case 1: _t->selectedEngineChanged(); break;
        case 2: _t->updateCombinedKernel(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Convolution::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Convolution::configurationChanged)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject cedar::aux::conv::Convolution::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_cedar__aux__conv__Convolution.data,
      qt_meta_data_cedar__aux__conv__Convolution,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *cedar::aux::conv::Convolution::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cedar::aux::conv::Convolution::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_cedar__aux__conv__Convolution.stringdata0))
        return static_cast<void*>(const_cast< Convolution*>(this));
    if (!strcmp(_clname, "cedar::aux::Configurable"))
        return static_cast< cedar::aux::Configurable*>(const_cast< Convolution*>(this));
    return QObject::qt_metacast(_clname);
}

int cedar::aux::conv::Convolution::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void cedar::aux::conv::Convolution::configurationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
