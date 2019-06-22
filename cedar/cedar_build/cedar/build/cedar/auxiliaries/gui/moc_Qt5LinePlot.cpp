/****************************************************************************
** Meta object code from reading C++ file 'Qt5LinePlot.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../cedar/auxiliaries/gui/Qt5LinePlot.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Qt5LinePlot.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_cedar__aux__gui__detail__Qt5LinePlotWorker_t {
    QByteArrayData data[7];
    char stringdata0[77];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cedar__aux__gui__detail__Qt5LinePlotWorker_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cedar__aux__gui__detail__Qt5LinePlotWorker_t qt_meta_stringdata_cedar__aux__gui__detail__Qt5LinePlotWorker = {
    {
QT_MOC_LITERAL(0, 0, 42), // "cedar::aux::gui::detail::Qt5L..."
QT_MOC_LITERAL(1, 43, 4), // "done"
QT_MOC_LITERAL(2, 48, 0), // ""
QT_MOC_LITERAL(3, 49, 3), // "min"
QT_MOC_LITERAL(4, 53, 3), // "max"
QT_MOC_LITERAL(5, 57, 11), // "dataChanged"
QT_MOC_LITERAL(6, 69, 7) // "convert"

    },
    "cedar::aux::gui::detail::Qt5LinePlotWorker\0"
    "done\0\0min\0max\0dataChanged\0convert"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cedar__aux__gui__detail__Qt5LinePlotWorker[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   29,    2, 0x06 /* Public */,
       5,    0,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   35,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Double, QMetaType::Double,    3,    4,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void cedar::aux::gui::detail::Qt5LinePlotWorker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Qt5LinePlotWorker *_t = static_cast<Qt5LinePlotWorker *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->done((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 1: _t->dataChanged(); break;
        case 2: _t->convert(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Qt5LinePlotWorker::*_t)(double , double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Qt5LinePlotWorker::done)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Qt5LinePlotWorker::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Qt5LinePlotWorker::dataChanged)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject cedar::aux::gui::detail::Qt5LinePlotWorker::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_cedar__aux__gui__detail__Qt5LinePlotWorker.data,
      qt_meta_data_cedar__aux__gui__detail__Qt5LinePlotWorker,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *cedar::aux::gui::detail::Qt5LinePlotWorker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cedar::aux::gui::detail::Qt5LinePlotWorker::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_cedar__aux__gui__detail__Qt5LinePlotWorker.stringdata0))
        return static_cast<void*>(const_cast< Qt5LinePlotWorker*>(this));
    return QObject::qt_metacast(_clname);
}

int cedar::aux::gui::detail::Qt5LinePlotWorker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void cedar::aux::gui::detail::Qt5LinePlotWorker::done(double _t1, double _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void cedar::aux::gui::detail::Qt5LinePlotWorker::dataChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
struct qt_meta_stringdata_cedar__aux__gui__Qt5LinePlot_t {
    QByteArrayData data[12];
    char stringdata0[144];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cedar__aux__gui__Qt5LinePlot_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cedar__aux__gui__Qt5LinePlot_t qt_meta_stringdata_cedar__aux__gui__Qt5LinePlot = {
    {
QT_MOC_LITERAL(0, 0, 28), // "cedar::aux::gui::Qt5LinePlot"
QT_MOC_LITERAL(1, 29, 7), // "convert"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 14), // "conversionDone"
QT_MOC_LITERAL(4, 53, 3), // "min"
QT_MOC_LITERAL(5, 57, 3), // "max"
QT_MOC_LITERAL(6, 61, 10), // "showLegend"
QT_MOC_LITERAL(7, 72, 4), // "show"
QT_MOC_LITERAL(8, 77, 8), // "showGrid"
QT_MOC_LITERAL(9, 86, 20), // "setFixedYAxisScaling"
QT_MOC_LITERAL(10, 107, 16), // "setFixedSampling"
QT_MOC_LITERAL(11, 124, 19) // "handleMarkerClicked"

    },
    "cedar::aux::gui::Qt5LinePlot\0convert\0"
    "\0conversionDone\0min\0max\0showLegend\0"
    "show\0showGrid\0setFixedYAxisScaling\0"
    "setFixedSampling\0handleMarkerClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cedar__aux__gui__Qt5LinePlot[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    2,   60,    2, 0x08 /* Private */,
       6,    1,   65,    2, 0x08 /* Private */,
       6,    0,   68,    2, 0x28 /* Private | MethodCloned */,
       8,    1,   69,    2, 0x08 /* Private */,
       8,    0,   72,    2, 0x28 /* Private | MethodCloned */,
       9,    0,   73,    2, 0x08 /* Private */,
      10,    0,   74,    2, 0x08 /* Private */,
      11,    0,   75,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Double, QMetaType::Double,    4,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void cedar::aux::gui::Qt5LinePlot::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Qt5LinePlot *_t = static_cast<Qt5LinePlot *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->convert(); break;
        case 1: _t->conversionDone((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 2: _t->showLegend((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->showLegend(); break;
        case 4: _t->showGrid((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->showGrid(); break;
        case 6: _t->setFixedYAxisScaling(); break;
        case 7: _t->setFixedSampling(); break;
        case 8: _t->handleMarkerClicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Qt5LinePlot::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Qt5LinePlot::convert)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject cedar::aux::gui::Qt5LinePlot::staticMetaObject = {
    { &cedar::aux::gui::MultiPlotInterface::staticMetaObject, qt_meta_stringdata_cedar__aux__gui__Qt5LinePlot.data,
      qt_meta_data_cedar__aux__gui__Qt5LinePlot,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *cedar::aux::gui::Qt5LinePlot::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cedar::aux::gui::Qt5LinePlot::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_cedar__aux__gui__Qt5LinePlot.stringdata0))
        return static_cast<void*>(const_cast< Qt5LinePlot*>(this));
    return cedar::aux::gui::MultiPlotInterface::qt_metacast(_clname);
}

int cedar::aux::gui::Qt5LinePlot::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = cedar::aux::gui::MultiPlotInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void cedar::aux::gui::Qt5LinePlot::convert()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
