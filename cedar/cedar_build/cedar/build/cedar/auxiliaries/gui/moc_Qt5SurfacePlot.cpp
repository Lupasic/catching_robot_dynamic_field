/****************************************************************************
** Meta object code from reading C++ file 'Qt5SurfacePlot.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../cedar/auxiliaries/gui/Qt5SurfacePlot.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Qt5SurfacePlot.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_cedar__aux__gui__detail__Qt5SurfacePlotWorker_t {
    QByteArrayData data[4];
    char stringdata0[60];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cedar__aux__gui__detail__Qt5SurfacePlotWorker_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cedar__aux__gui__detail__Qt5SurfacePlotWorker_t qt_meta_stringdata_cedar__aux__gui__detail__Qt5SurfacePlotWorker = {
    {
QT_MOC_LITERAL(0, 0, 45), // "cedar::aux::gui::detail::Qt5S..."
QT_MOC_LITERAL(1, 46, 4), // "done"
QT_MOC_LITERAL(2, 51, 0), // ""
QT_MOC_LITERAL(3, 52, 7) // "convert"

    },
    "cedar::aux::gui::detail::Qt5SurfacePlotWorker\0"
    "done\0\0convert"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cedar__aux__gui__detail__Qt5SurfacePlotWorker[] = {

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

void cedar::aux::gui::detail::Qt5SurfacePlotWorker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Qt5SurfacePlotWorker *_t = static_cast<Qt5SurfacePlotWorker *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->done(); break;
        case 1: _t->convert(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Qt5SurfacePlotWorker::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Qt5SurfacePlotWorker::done)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject cedar::aux::gui::detail::Qt5SurfacePlotWorker::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_cedar__aux__gui__detail__Qt5SurfacePlotWorker.data,
      qt_meta_data_cedar__aux__gui__detail__Qt5SurfacePlotWorker,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *cedar::aux::gui::detail::Qt5SurfacePlotWorker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cedar::aux::gui::detail::Qt5SurfacePlotWorker::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_cedar__aux__gui__detail__Qt5SurfacePlotWorker.stringdata0))
        return static_cast<void*>(const_cast< Qt5SurfacePlotWorker*>(this));
    return QObject::qt_metacast(_clname);
}

int cedar::aux::gui::detail::Qt5SurfacePlotWorker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void cedar::aux::gui::detail::Qt5SurfacePlotWorker::done()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
struct qt_meta_stringdata_cedar__aux__gui__Qt5SurfacePlot_t {
    QByteArrayData data[4];
    char stringdata0[56];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cedar__aux__gui__Qt5SurfacePlot_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cedar__aux__gui__Qt5SurfacePlot_t qt_meta_stringdata_cedar__aux__gui__Qt5SurfacePlot = {
    {
QT_MOC_LITERAL(0, 0, 31), // "cedar::aux::gui::Qt5SurfacePlot"
QT_MOC_LITERAL(1, 32, 7), // "convert"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 14) // "conversionDone"

    },
    "cedar::aux::gui::Qt5SurfacePlot\0convert\0"
    "\0conversionDone"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cedar__aux__gui__Qt5SurfacePlot[] = {

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
       3,    0,   25,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void cedar::aux::gui::Qt5SurfacePlot::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Qt5SurfacePlot *_t = static_cast<Qt5SurfacePlot *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->convert(); break;
        case 1: _t->conversionDone(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Qt5SurfacePlot::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Qt5SurfacePlot::convert)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject cedar::aux::gui::Qt5SurfacePlot::staticMetaObject = {
    { &PlotInterface::staticMetaObject, qt_meta_stringdata_cedar__aux__gui__Qt5SurfacePlot.data,
      qt_meta_data_cedar__aux__gui__Qt5SurfacePlot,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *cedar::aux::gui::Qt5SurfacePlot::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cedar::aux::gui::Qt5SurfacePlot::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_cedar__aux__gui__Qt5SurfacePlot.stringdata0))
        return static_cast<void*>(const_cast< Qt5SurfacePlot*>(this));
    return PlotInterface::qt_metacast(_clname);
}

int cedar::aux::gui::Qt5SurfacePlot::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PlotInterface::qt_metacall(_c, _id, _a);
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
void cedar::aux::gui::Qt5SurfacePlot::convert()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
