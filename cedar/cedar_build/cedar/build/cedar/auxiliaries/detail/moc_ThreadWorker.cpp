/****************************************************************************
** Meta object code from reading C++ file 'ThreadWorker.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../cedar/auxiliaries/detail/ThreadWorker.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ThreadWorker.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_cedar__aux__detail__ThreadWorker_t {
    QByteArrayData data[4];
    char stringdata0[59];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cedar__aux__detail__ThreadWorker_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cedar__aux__detail__ThreadWorker_t qt_meta_stringdata_cedar__aux__detail__ThreadWorker = {
    {
QT_MOC_LITERAL(0, 0, 32), // "cedar::aux::detail::ThreadWorker"
QT_MOC_LITERAL(1, 33, 15), // "finishedWorking"
QT_MOC_LITERAL(2, 49, 0), // ""
QT_MOC_LITERAL(3, 50, 8) // "workSlot"

    },
    "cedar::aux::detail::ThreadWorker\0"
    "finishedWorking\0\0workSlot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cedar__aux__detail__ThreadWorker[] = {

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
       3,    0,   25,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void cedar::aux::detail::ThreadWorker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ThreadWorker *_t = static_cast<ThreadWorker *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->finishedWorking(); break;
        case 1: _t->workSlot(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ThreadWorker::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ThreadWorker::finishedWorking)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject cedar::aux::detail::ThreadWorker::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_cedar__aux__detail__ThreadWorker.data,
      qt_meta_data_cedar__aux__detail__ThreadWorker,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *cedar::aux::detail::ThreadWorker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cedar::aux::detail::ThreadWorker::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_cedar__aux__detail__ThreadWorker.stringdata0))
        return static_cast<void*>(const_cast< ThreadWorker*>(this));
    return QObject::qt_metacast(_clname);
}

int cedar::aux::detail::ThreadWorker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void cedar::aux::detail::ThreadWorker::finishedWorking()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
