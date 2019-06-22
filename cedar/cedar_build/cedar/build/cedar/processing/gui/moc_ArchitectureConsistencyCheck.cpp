/****************************************************************************
** Meta object code from reading C++ file 'ArchitectureConsistencyCheck.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../cedar/processing/gui/ArchitectureConsistencyCheck.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ArchitectureConsistencyCheck.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_cedar__proc__gui__ArchitectureConsistencyCheck_t {
    QByteArrayData data[6];
    char stringdata0[78];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cedar__proc__gui__ArchitectureConsistencyCheck_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cedar__proc__gui__ArchitectureConsistencyCheck_t qt_meta_stringdata_cedar__proc__gui__ArchitectureConsistencyCheck = {
    {
QT_MOC_LITERAL(0, 0, 46), // "cedar::proc::gui::Architectur..."
QT_MOC_LITERAL(1, 47, 7), // "recheck"
QT_MOC_LITERAL(2, 55, 0), // ""
QT_MOC_LITERAL(3, 56, 10), // "itemAction"
QT_MOC_LITERAL(4, 67, 3), // "row"
QT_MOC_LITERAL(5, 71, 6) // "column"

    },
    "cedar::proc::gui::ArchitectureConsistencyCheck\0"
    "recheck\0\0itemAction\0row\0column"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cedar__proc__gui__ArchitectureConsistencyCheck[] = {

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
       1,    0,   24,    2, 0x0a /* Public */,
       3,    2,   25,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    4,    5,

       0        // eod
};

void cedar::proc::gui::ArchitectureConsistencyCheck::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ArchitectureConsistencyCheck *_t = static_cast<ArchitectureConsistencyCheck *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->recheck(); break;
        case 1: _t->itemAction((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject cedar::proc::gui::ArchitectureConsistencyCheck::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_cedar__proc__gui__ArchitectureConsistencyCheck.data,
      qt_meta_data_cedar__proc__gui__ArchitectureConsistencyCheck,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *cedar::proc::gui::ArchitectureConsistencyCheck::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cedar::proc::gui::ArchitectureConsistencyCheck::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_cedar__proc__gui__ArchitectureConsistencyCheck.stringdata0))
        return static_cast<void*>(const_cast< ArchitectureConsistencyCheck*>(this));
    if (!strcmp(_clname, "Ui_ConsistencyCheck"))
        return static_cast< Ui_ConsistencyCheck*>(const_cast< ArchitectureConsistencyCheck*>(this));
    return QWidget::qt_metacast(_clname);
}

int cedar::proc::gui::ArchitectureConsistencyCheck::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_END_MOC_NAMESPACE
