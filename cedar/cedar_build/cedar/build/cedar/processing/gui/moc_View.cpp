/****************************************************************************
** Meta object code from reading C++ file 'View.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../cedar/processing/gui/View.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'View.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_cedar__proc__gui__View_t {
    QByteArrayData data[13];
    char stringdata0[189];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cedar__proc__gui__View_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cedar__proc__gui__View_t qt_meta_stringdata_cedar__proc__gui__View = {
    {
QT_MOC_LITERAL(0, 0, 22), // "cedar::proc::gui::View"
QT_MOC_LITERAL(1, 23, 16), // "zoomLevelChanged"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 12), // "newZoomLevel"
QT_MOC_LITERAL(4, 54, 12), // "setZoomLevel"
QT_MOC_LITERAL(5, 67, 8), // "newLevel"
QT_MOC_LITERAL(6, 76, 16), // "scrollTimerEvent"
QT_MOC_LITERAL(7, 93, 12), // "zoomLevelSet"
QT_MOC_LITERAL(8, 106, 9), // "zoomLevel"
QT_MOC_LITERAL(9, 116, 14), // "resetZoomLevel"
QT_MOC_LITERAL(10, 131, 17), // "increaseZoomLevel"
QT_MOC_LITERAL(11, 149, 17), // "decreaseZoomLevel"
QT_MOC_LITERAL(12, 167, 21) // "fitZoomToArchitecture"

    },
    "cedar::proc::gui::View\0zoomLevelChanged\0"
    "\0newZoomLevel\0setZoomLevel\0newLevel\0"
    "scrollTimerEvent\0zoomLevelSet\0zoomLevel\0"
    "resetZoomLevel\0increaseZoomLevel\0"
    "decreaseZoomLevel\0fitZoomToArchitecture"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cedar__proc__gui__View[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   57,    2, 0x0a /* Public */,
       6,    0,   60,    2, 0x0a /* Public */,
       7,    1,   61,    2, 0x08 /* Private */,
       9,    0,   64,    2, 0x08 /* Private */,
      10,    0,   65,    2, 0x08 /* Private */,
      11,    0,   66,    2, 0x08 /* Private */,
      12,    0,   67,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Double,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void cedar::proc::gui::View::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        View *_t = static_cast<View *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->zoomLevelChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->setZoomLevel((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->scrollTimerEvent(); break;
        case 3: _t->zoomLevelSet((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->resetZoomLevel(); break;
        case 5: _t->increaseZoomLevel(); break;
        case 6: _t->decreaseZoomLevel(); break;
        case 7: _t->fitZoomToArchitecture(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (View::*_t)(double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&View::zoomLevelChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject cedar::proc::gui::View::staticMetaObject = {
    { &QGraphicsView::staticMetaObject, qt_meta_stringdata_cedar__proc__gui__View.data,
      qt_meta_data_cedar__proc__gui__View,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *cedar::proc::gui::View::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cedar::proc::gui::View::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_cedar__proc__gui__View.stringdata0))
        return static_cast<void*>(const_cast< View*>(this));
    return QGraphicsView::qt_metacast(_clname);
}

int cedar::proc::gui::View::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void cedar::proc::gui::View::zoomLevelChanged(double _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
