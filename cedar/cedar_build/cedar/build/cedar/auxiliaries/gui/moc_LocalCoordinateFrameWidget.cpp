/****************************************************************************
** Meta object code from reading C++ file 'LocalCoordinateFrameWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../cedar/auxiliaries/gui/LocalCoordinateFrameWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LocalCoordinateFrameWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_cedar__aux__gui__LocalCoordinateFrameWidget_t {
    QByteArrayData data[11];
    char stringdata0[150];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cedar__aux__gui__LocalCoordinateFrameWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cedar__aux__gui__LocalCoordinateFrameWidget_t qt_meta_stringdata_cedar__aux__gui__LocalCoordinateFrameWidget = {
    {
QT_MOC_LITERAL(0, 0, 43), // "cedar::aux::gui::LocalCoordin..."
QT_MOC_LITERAL(1, 44, 15), // "decimalsChanged"
QT_MOC_LITERAL(2, 60, 0), // ""
QT_MOC_LITERAL(3, 61, 6), // "update"
QT_MOC_LITERAL(4, 68, 10), // "rotateXPos"
QT_MOC_LITERAL(5, 79, 10), // "rotateXNeg"
QT_MOC_LITERAL(6, 90, 10), // "rotateYPos"
QT_MOC_LITERAL(7, 101, 10), // "rotateYNeg"
QT_MOC_LITERAL(8, 112, 10), // "rotateZPos"
QT_MOC_LITERAL(9, 123, 10), // "rotateZNeg"
QT_MOC_LITERAL(10, 134, 15) // "positionChanged"

    },
    "cedar::aux::gui::LocalCoordinateFrameWidget\0"
    "decimalsChanged\0\0update\0rotateXPos\0"
    "rotateXNeg\0rotateYPos\0rotateYNeg\0"
    "rotateZPos\0rotateZNeg\0positionChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cedar__aux__gui__LocalCoordinateFrameWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x08 /* Private */,
       3,    0,   60,    2, 0x0a /* Public */,
       4,    0,   61,    2, 0x08 /* Private */,
       5,    0,   62,    2, 0x08 /* Private */,
       6,    0,   63,    2, 0x08 /* Private */,
       7,    0,   64,    2, 0x08 /* Private */,
       8,    0,   65,    2, 0x08 /* Private */,
       9,    0,   66,    2, 0x08 /* Private */,
      10,    1,   67,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    2,

       0        // eod
};

void cedar::aux::gui::LocalCoordinateFrameWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        LocalCoordinateFrameWidget *_t = static_cast<LocalCoordinateFrameWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->decimalsChanged(); break;
        case 1: _t->update(); break;
        case 2: _t->rotateXPos(); break;
        case 3: _t->rotateXNeg(); break;
        case 4: _t->rotateYPos(); break;
        case 5: _t->rotateYNeg(); break;
        case 6: _t->rotateZPos(); break;
        case 7: _t->rotateZNeg(); break;
        case 8: _t->positionChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject cedar::aux::gui::LocalCoordinateFrameWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_cedar__aux__gui__LocalCoordinateFrameWidget.data,
      qt_meta_data_cedar__aux__gui__LocalCoordinateFrameWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *cedar::aux::gui::LocalCoordinateFrameWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cedar::aux::gui::LocalCoordinateFrameWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_cedar__aux__gui__LocalCoordinateFrameWidget.stringdata0))
        return static_cast<void*>(const_cast< LocalCoordinateFrameWidget*>(this));
    if (!strcmp(_clname, "cedar::aux::Configurable"))
        return static_cast< cedar::aux::Configurable*>(const_cast< LocalCoordinateFrameWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int cedar::aux::gui::LocalCoordinateFrameWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
