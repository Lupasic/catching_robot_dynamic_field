/****************************************************************************
** Meta object code from reading C++ file 'ProjectionMappingParameter.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../cedar/processing/gui/ProjectionMappingParameter.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ProjectionMappingParameter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_cedar__proc__gui__ProjectionMappingParameter_t {
    QByteArrayData data[7];
    char stringdata0[125];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cedar__proc__gui__ProjectionMappingParameter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cedar__proc__gui__ProjectionMappingParameter_t qt_meta_stringdata_cedar__proc__gui__ProjectionMappingParameter = {
    {
QT_MOC_LITERAL(0, 0, 44), // "cedar::proc::gui::ProjectionM..."
QT_MOC_LITERAL(1, 45, 23), // "parameterPointerChanged"
QT_MOC_LITERAL(2, 69, 0), // ""
QT_MOC_LITERAL(3, 70, 19), // "currentIndexChanged"
QT_MOC_LITERAL(4, 90, 5), // "index"
QT_MOC_LITERAL(5, 96, 12), // "valueChanged"
QT_MOC_LITERAL(6, 109, 15) // "propertyChanged"

    },
    "cedar::proc::gui::ProjectionMappingParameter\0"
    "parameterPointerChanged\0\0currentIndexChanged\0"
    "index\0valueChanged\0propertyChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cedar__proc__gui__ProjectionMappingParameter[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x0a /* Public */,
       3,    1,   35,    2, 0x0a /* Public */,
       5,    0,   38,    2, 0x0a /* Public */,
       6,    0,   39,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void cedar::proc::gui::ProjectionMappingParameter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ProjectionMappingParameter *_t = static_cast<ProjectionMappingParameter *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->parameterPointerChanged(); break;
        case 1: _t->currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->valueChanged(); break;
        case 3: _t->propertyChanged(); break;
        default: ;
        }
    }
}

const QMetaObject cedar::proc::gui::ProjectionMappingParameter::staticMetaObject = {
    { &cedar::aux::gui::Parameter::staticMetaObject, qt_meta_stringdata_cedar__proc__gui__ProjectionMappingParameter.data,
      qt_meta_data_cedar__proc__gui__ProjectionMappingParameter,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *cedar::proc::gui::ProjectionMappingParameter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cedar::proc::gui::ProjectionMappingParameter::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_cedar__proc__gui__ProjectionMappingParameter.stringdata0))
        return static_cast<void*>(const_cast< ProjectionMappingParameter*>(this));
    return cedar::aux::gui::Parameter::qt_metacast(_clname);
}

int cedar::proc::gui::ProjectionMappingParameter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = cedar::aux::gui::Parameter::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
