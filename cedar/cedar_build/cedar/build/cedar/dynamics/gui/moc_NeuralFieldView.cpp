/****************************************************************************
** Meta object code from reading C++ file 'NeuralFieldView.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../cedar/dynamics/gui/NeuralFieldView.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'NeuralFieldView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_cedar__dyn__gui__NeuralFieldView_t {
    QByteArrayData data[5];
    char stringdata0[87];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cedar__dyn__gui__NeuralFieldView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cedar__dyn__gui__NeuralFieldView_t qt_meta_stringdata_cedar__dyn__gui__NeuralFieldView = {
    {
QT_MOC_LITERAL(0, 0, 32), // "cedar::dyn::gui::NeuralFieldView"
QT_MOC_LITERAL(1, 33, 24), // "updateIconDimensionality"
QT_MOC_LITERAL(2, 58, 0), // ""
QT_MOC_LITERAL(3, 59, 18), // "updateActivityIcon"
QT_MOC_LITERAL(4, 78, 8) // "isActive"

    },
    "cedar::dyn::gui::NeuralFieldView\0"
    "updateIconDimensionality\0\0updateActivityIcon\0"
    "isActive"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cedar__dyn__gui__NeuralFieldView[] = {

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
       1,    0,   24,    2, 0x08 /* Private */,
       3,    1,   25,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    4,

       0        // eod
};

void cedar::dyn::gui::NeuralFieldView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        NeuralFieldView *_t = static_cast<NeuralFieldView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateIconDimensionality(); break;
        case 1: _t->updateActivityIcon((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject cedar::dyn::gui::NeuralFieldView::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_cedar__dyn__gui__NeuralFieldView.data,
      qt_meta_data_cedar__dyn__gui__NeuralFieldView,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *cedar::dyn::gui::NeuralFieldView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cedar::dyn::gui::NeuralFieldView::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_cedar__dyn__gui__NeuralFieldView.stringdata0))
        return static_cast<void*>(const_cast< NeuralFieldView*>(this));
    if (!strcmp(_clname, "cedar::proc::gui::DefaultConnectableIconView"))
        return static_cast< cedar::proc::gui::DefaultConnectableIconView*>(const_cast< NeuralFieldView*>(this));
    return QObject::qt_metacast(_clname);
}

int cedar::dyn::gui::NeuralFieldView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_END_MOC_NAMESPACE
