/****************************************************************************
** Meta object code from reading C++ file 'DivideElementwise.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../cedar/processing/steps/DivideElementwise.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DivideElementwise.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_cedar__proc__steps__DivideElementwise_t {
    QByteArrayData data[1];
    char stringdata0[38];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cedar__proc__steps__DivideElementwise_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cedar__proc__steps__DivideElementwise_t qt_meta_stringdata_cedar__proc__steps__DivideElementwise = {
    {
QT_MOC_LITERAL(0, 0, 37) // "cedar::proc::steps::DivideEle..."

    },
    "cedar::proc::steps::DivideElementwise"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cedar__proc__steps__DivideElementwise[] = {

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

void cedar::proc::steps::DivideElementwise::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject cedar::proc::steps::DivideElementwise::staticMetaObject = {
    { &cedar::proc::Step::staticMetaObject, qt_meta_stringdata_cedar__proc__steps__DivideElementwise.data,
      qt_meta_data_cedar__proc__steps__DivideElementwise,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *cedar::proc::steps::DivideElementwise::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cedar::proc::steps::DivideElementwise::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_cedar__proc__steps__DivideElementwise.stringdata0))
        return static_cast<void*>(const_cast< DivideElementwise*>(this));
    return cedar::proc::Step::qt_metacast(_clname);
}

int cedar::proc::steps::DivideElementwise::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = cedar::proc::Step::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
