/****************************************************************************
** Meta object code from reading C++ file 'SceneWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../cedar/auxiliaries/gui/SceneWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SceneWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_cedar__aux__gui__SceneWidget_t {
    QByteArrayData data[10];
    char stringdata0[124];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cedar__aux__gui__SceneWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cedar__aux__gui__SceneWidget_t qt_meta_stringdata_cedar__aux__gui__SceneWidget = {
    {
QT_MOC_LITERAL(0, 0, 28), // "cedar::aux::gui::SceneWidget"
QT_MOC_LITERAL(1, 29, 12), // "deleteObject"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 9), // "setLength"
QT_MOC_LITERAL(4, 53, 5), // "value"
QT_MOC_LITERAL(5, 59, 8), // "setWidth"
QT_MOC_LITERAL(6, 68, 9), // "setHeight"
QT_MOC_LITERAL(7, 78, 9), // "setRadius"
QT_MOC_LITERAL(8, 88, 12), // "setThickness"
QT_MOC_LITERAL(9, 101, 22) // "setActiveVisualization"

    },
    "cedar::aux::gui::SceneWidget\0deleteObject\0"
    "\0setLength\0value\0setWidth\0setHeight\0"
    "setRadius\0setThickness\0setActiveVisualization"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cedar__aux__gui__SceneWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x0a /* Public */,
       3,    1,   50,    2, 0x0a /* Public */,
       5,    1,   53,    2, 0x0a /* Public */,
       6,    1,   56,    2, 0x0a /* Public */,
       7,    1,   59,    2, 0x0a /* Public */,
       8,    1,   62,    2, 0x0a /* Public */,
       9,    0,   65,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    4,
    QMetaType::Void, QMetaType::Double,    4,
    QMetaType::Void, QMetaType::Double,    4,
    QMetaType::Void, QMetaType::Double,    4,
    QMetaType::Void, QMetaType::Double,    4,
    QMetaType::Void,

       0        // eod
};

void cedar::aux::gui::SceneWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SceneWidget *_t = static_cast<SceneWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->deleteObject(); break;
        case 1: _t->setLength((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->setWidth((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->setHeight((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->setRadius((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: _t->setThickness((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 6: _t->setActiveVisualization(); break;
        default: ;
        }
    }
}

const QMetaObject cedar::aux::gui::SceneWidget::staticMetaObject = {
    { &cedar::aux::gui::BaseWidget::staticMetaObject, qt_meta_stringdata_cedar__aux__gui__SceneWidget.data,
      qt_meta_data_cedar__aux__gui__SceneWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *cedar::aux::gui::SceneWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cedar::aux::gui::SceneWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_cedar__aux__gui__SceneWidget.stringdata0))
        return static_cast<void*>(const_cast< SceneWidget*>(this));
    return cedar::aux::gui::BaseWidget::qt_metacast(_clname);
}

int cedar::aux::gui::SceneWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = cedar::aux::gui::BaseWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
