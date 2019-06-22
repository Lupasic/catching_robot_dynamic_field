/****************************************************************************
** Meta object code from reading C++ file 'Settings.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../cedar/auxiliaries/Settings.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Settings.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_cedar__aux__Settings_t {
    QByteArrayData data[3];
    char stringdata0[53];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cedar__aux__Settings_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cedar__aux__Settings_t qt_meta_stringdata_cedar__aux__Settings = {
    {
QT_MOC_LITERAL(0, 0, 20), // "cedar::aux::Settings"
QT_MOC_LITERAL(1, 21, 30), // "currentArchitectureFileChanged"
QT_MOC_LITERAL(2, 52, 0) // ""

    },
    "cedar::aux::Settings\0"
    "currentArchitectureFileChanged\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cedar__aux__Settings[] = {

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

void cedar::aux::Settings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Settings *_t = static_cast<Settings *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->currentArchitectureFileChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Settings::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Settings::currentArchitectureFileChanged)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject cedar::aux::Settings::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_cedar__aux__Settings.data,
      qt_meta_data_cedar__aux__Settings,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *cedar::aux::Settings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cedar::aux::Settings::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_cedar__aux__Settings.stringdata0))
        return static_cast<void*>(const_cast< Settings*>(this));
    if (!strcmp(_clname, "cedar::aux::Configurable"))
        return static_cast< cedar::aux::Configurable*>(const_cast< Settings*>(this));
    return QObject::qt_metacast(_clname);
}

int cedar::aux::Settings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void cedar::aux::Settings::currentArchitectureFileChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
