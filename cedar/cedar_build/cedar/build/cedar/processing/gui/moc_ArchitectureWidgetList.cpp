/****************************************************************************
** Meta object code from reading C++ file 'ArchitectureWidgetList.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../cedar/processing/gui/ArchitectureWidgetList.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ArchitectureWidgetList.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_cedar__proc__gui__ArchitectureWidgetList_t {
    QByteArrayData data[9];
    char stringdata0[153];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cedar__proc__gui__ArchitectureWidgetList_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cedar__proc__gui__ArchitectureWidgetList_t qt_meta_stringdata_cedar__proc__gui__ArchitectureWidgetList = {
    {
QT_MOC_LITERAL(0, 0, 40), // "cedar::proc::gui::Architectur..."
QT_MOC_LITERAL(1, 41, 14), // "dialogAccepted"
QT_MOC_LITERAL(2, 56, 0), // ""
QT_MOC_LITERAL(3, 57, 13), // "addRowClicked"
QT_MOC_LITERAL(4, 71, 16), // "removeRowClicked"
QT_MOC_LITERAL(5, 88, 29), // "architectureWidgetNameChanged"
QT_MOC_LITERAL(6, 118, 12), // "itemSelected"
QT_MOC_LITERAL(7, 131, 16), // "checkCurrentName"
QT_MOC_LITERAL(8, 148, 4) // "text"

    },
    "cedar::proc::gui::ArchitectureWidgetList\0"
    "dialogAccepted\0\0addRowClicked\0"
    "removeRowClicked\0architectureWidgetNameChanged\0"
    "itemSelected\0checkCurrentName\0text"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cedar__proc__gui__ArchitectureWidgetList[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x08 /* Private */,
       3,    0,   45,    2, 0x08 /* Private */,
       4,    0,   46,    2, 0x08 /* Private */,
       5,    0,   47,    2, 0x08 /* Private */,
       6,    0,   48,    2, 0x08 /* Private */,
       7,    1,   49,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    8,

       0        // eod
};

void cedar::proc::gui::ArchitectureWidgetList::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ArchitectureWidgetList *_t = static_cast<ArchitectureWidgetList *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->dialogAccepted(); break;
        case 1: _t->addRowClicked(); break;
        case 2: _t->removeRowClicked(); break;
        case 3: _t->architectureWidgetNameChanged(); break;
        case 4: _t->itemSelected(); break;
        case 5: _t->checkCurrentName((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject cedar::proc::gui::ArchitectureWidgetList::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_cedar__proc__gui__ArchitectureWidgetList.data,
      qt_meta_data_cedar__proc__gui__ArchitectureWidgetList,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *cedar::proc::gui::ArchitectureWidgetList::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cedar::proc::gui::ArchitectureWidgetList::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_cedar__proc__gui__ArchitectureWidgetList.stringdata0))
        return static_cast<void*>(const_cast< ArchitectureWidgetList*>(this));
    if (!strcmp(_clname, "Ui_ArchitectureWidgetEditor"))
        return static_cast< Ui_ArchitectureWidgetEditor*>(const_cast< ArchitectureWidgetList*>(this));
    return QDialog::qt_metacast(_clname);
}

int cedar::proc::gui::ArchitectureWidgetList::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
