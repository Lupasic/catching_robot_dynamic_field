/****************************************************************************
** Meta object code from reading C++ file 'QImagePlot.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../cedar/auxiliaries/gui/QImagePlot.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QImagePlot.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_cedar__aux__gui__detail__QImagePlotLegend_t {
    QByteArrayData data[8];
    char stringdata0[114];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cedar__aux__gui__detail__QImagePlotLegend_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cedar__aux__gui__detail__QImagePlotLegend_t qt_meta_stringdata_cedar__aux__gui__detail__QImagePlotLegend = {
    {
QT_MOC_LITERAL(0, 0, 41), // "cedar::aux::gui::detail::QIma..."
QT_MOC_LITERAL(1, 42, 12), // "updateMinMax"
QT_MOC_LITERAL(2, 55, 0), // ""
QT_MOC_LITERAL(3, 56, 3), // "min"
QT_MOC_LITERAL(4, 60, 3), // "max"
QT_MOC_LITERAL(5, 64, 11), // "setGradient"
QT_MOC_LITERAL(6, 76, 28), // "cedar::aux::ColorGradientPtr"
QT_MOC_LITERAL(7, 105, 8) // "gradient"

    },
    "cedar::aux::gui::detail::QImagePlotLegend\0"
    "updateMinMax\0\0min\0max\0setGradient\0"
    "cedar::aux::ColorGradientPtr\0gradient"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cedar__aux__gui__detail__QImagePlotLegend[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   24,    2, 0x0a /* Public */,
       5,    1,   29,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Double, QMetaType::Double,    3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,

       0        // eod
};

void cedar::aux::gui::detail::QImagePlotLegend::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QImagePlotLegend *_t = static_cast<QImagePlotLegend *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateMinMax((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 1: _t->setGradient((*reinterpret_cast< cedar::aux::ColorGradientPtr(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject cedar::aux::gui::detail::QImagePlotLegend::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_cedar__aux__gui__detail__QImagePlotLegend.data,
      qt_meta_data_cedar__aux__gui__detail__QImagePlotLegend,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *cedar::aux::gui::detail::QImagePlotLegend::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cedar::aux::gui::detail::QImagePlotLegend::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_cedar__aux__gui__detail__QImagePlotLegend.stringdata0))
        return static_cast<void*>(const_cast< QImagePlotLegend*>(this));
    return QWidget::qt_metacast(_clname);
}

int cedar::aux::gui::detail::QImagePlotLegend::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_cedar__aux__gui__QImagePlot_t {
    QByteArrayData data[19];
    char stringdata0[282];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cedar__aux__gui__QImagePlot_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cedar__aux__gui__QImagePlot_t qt_meta_stringdata_cedar__aux__gui__QImagePlot = {
    {
QT_MOC_LITERAL(0, 0, 27), // "cedar::aux::gui::QImagePlot"
QT_MOC_LITERAL(1, 28, 13), // "minMaxChanged"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 3), // "min"
QT_MOC_LITERAL(4, 47, 3), // "max"
QT_MOC_LITERAL(5, 51, 16), // "setSmoothScaling"
QT_MOC_LITERAL(6, 68, 6), // "smooth"
QT_MOC_LITERAL(7, 75, 18), // "setKeepAspectRatio"
QT_MOC_LITERAL(8, 94, 15), // "keepAspectRatio"
QT_MOC_LITERAL(9, 110, 10), // "showLegend"
QT_MOC_LITERAL(10, 121, 4), // "show"
QT_MOC_LITERAL(11, 126, 12), // "updateMinMax"
QT_MOC_LITERAL(12, 139, 19), // "setAutomaticScaling"
QT_MOC_LITERAL(13, 159, 20), // "queryFixedValueScale"
QT_MOC_LITERAL(14, 180, 17), // "showLegendChanged"
QT_MOC_LITERAL(15, 198, 18), // "valueLimitsChanged"
QT_MOC_LITERAL(16, 217, 15), // "colorJetChanged"
QT_MOC_LITERAL(17, 233, 23), // "colorJetActionTriggered"
QT_MOC_LITERAL(18, 257, 24) // "saveImageActionTriggered"

    },
    "cedar::aux::gui::QImagePlot\0minMaxChanged\0"
    "\0min\0max\0setSmoothScaling\0smooth\0"
    "setKeepAspectRatio\0keepAspectRatio\0"
    "showLegend\0show\0updateMinMax\0"
    "setAutomaticScaling\0queryFixedValueScale\0"
    "showLegendChanged\0valueLimitsChanged\0"
    "colorJetChanged\0colorJetActionTriggered\0"
    "saveImageActionTriggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cedar__aux__gui__QImagePlot[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   74,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   79,    2, 0x0a /* Public */,
       7,    1,   82,    2, 0x0a /* Public */,
       9,    1,   85,    2, 0x0a /* Public */,
      11,    2,   88,    2, 0x09 /* Protected */,
      12,    0,   93,    2, 0x09 /* Protected */,
      13,    0,   94,    2, 0x08 /* Private */,
      14,    0,   95,    2, 0x08 /* Private */,
      15,    0,   96,    2, 0x08 /* Private */,
      16,    0,   97,    2, 0x08 /* Private */,
      17,    0,   98,    2, 0x08 /* Private */,
      18,    0,   99,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Double, QMetaType::Double,    3,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::Double, QMetaType::Double,    3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void cedar::aux::gui::QImagePlot::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QImagePlot *_t = static_cast<QImagePlot *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->minMaxChanged((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 1: _t->setSmoothScaling((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->setKeepAspectRatio((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->showLegend((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->updateMinMax((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 5: _t->setAutomaticScaling(); break;
        case 6: _t->queryFixedValueScale(); break;
        case 7: _t->showLegendChanged(); break;
        case 8: _t->valueLimitsChanged(); break;
        case 9: _t->colorJetChanged(); break;
        case 10: _t->colorJetActionTriggered(); break;
        case 11: _t->saveImageActionTriggered(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QImagePlot::*_t)(double , double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QImagePlot::minMaxChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject cedar::aux::gui::QImagePlot::staticMetaObject = {
    { &cedar::aux::gui::ThreadedPlot::staticMetaObject, qt_meta_stringdata_cedar__aux__gui__QImagePlot.data,
      qt_meta_data_cedar__aux__gui__QImagePlot,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *cedar::aux::gui::QImagePlot::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cedar::aux::gui::QImagePlot::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_cedar__aux__gui__QImagePlot.stringdata0))
        return static_cast<void*>(const_cast< QImagePlot*>(this));
    return cedar::aux::gui::ThreadedPlot::qt_metacast(_clname);
}

int cedar::aux::gui::QImagePlot::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = cedar::aux::gui::ThreadedPlot::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void cedar::aux::gui::QImagePlot::minMaxChanged(double _t1, double _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
