/****************************************************************************
** Meta object code from reading C++ file 'ElementTreeWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../cedar/processing/gui/ElementTreeWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ElementTreeWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_cedar__proc__gui__ElementTreeWidget_t {
    QByteArrayData data[13];
    char stringdata0[183];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cedar__proc__gui__ElementTreeWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cedar__proc__gui__ElementTreeWidget_t qt_meta_stringdata_cedar__proc__gui__ElementTreeWidget = {
    {
QT_MOC_LITERAL(0, 0, 35), // "cedar::proc::gui::ElementTree..."
QT_MOC_LITERAL(1, 36, 18), // "elementAddedSignal"
QT_MOC_LITERAL(2, 55, 0), // ""
QT_MOC_LITERAL(3, 56, 20), // "elementRemovedSignal"
QT_MOC_LITERAL(4, 77, 18), // "elementNameChanged"
QT_MOC_LITERAL(5, 96, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(6, 113, 4), // "item"
QT_MOC_LITERAL(7, 118, 12), // "elementAdded"
QT_MOC_LITERAL(8, 131, 11), // "elementName"
QT_MOC_LITERAL(9, 143, 14), // "elementRemoved"
QT_MOC_LITERAL(10, 158, 11), // "itemChanged"
QT_MOC_LITERAL(11, 170, 5), // "pItem"
QT_MOC_LITERAL(12, 176, 6) // "column"

    },
    "cedar::proc::gui::ElementTreeWidget\0"
    "elementAddedSignal\0\0elementRemovedSignal\0"
    "elementNameChanged\0QTreeWidgetItem*\0"
    "item\0elementAdded\0elementName\0"
    "elementRemoved\0itemChanged\0pItem\0"
    "column"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cedar__proc__gui__ElementTreeWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,
       3,    1,   52,    2, 0x06 /* Public */,
       4,    1,   55,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   58,    2, 0x08 /* Private */,
       9,    1,   61,    2, 0x08 /* Private */,
       4,    0,   64,    2, 0x08 /* Private */,
      10,    2,   65,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, 0x80000000 | 5,    6,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5, QMetaType::Int,   11,   12,

       0        // eod
};

void cedar::proc::gui::ElementTreeWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ElementTreeWidget *_t = static_cast<ElementTreeWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->elementAddedSignal((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->elementRemovedSignal((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->elementNameChanged((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 3: _t->elementAdded((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->elementRemoved((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->elementNameChanged(); break;
        case 6: _t->itemChanged((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ElementTreeWidget::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ElementTreeWidget::elementAddedSignal)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (ElementTreeWidget::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ElementTreeWidget::elementRemovedSignal)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (ElementTreeWidget::*_t)(QTreeWidgetItem * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ElementTreeWidget::elementNameChanged)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject cedar::proc::gui::ElementTreeWidget::staticMetaObject = {
    { &QTreeWidget::staticMetaObject, qt_meta_stringdata_cedar__proc__gui__ElementTreeWidget.data,
      qt_meta_data_cedar__proc__gui__ElementTreeWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *cedar::proc::gui::ElementTreeWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cedar::proc::gui::ElementTreeWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_cedar__proc__gui__ElementTreeWidget.stringdata0))
        return static_cast<void*>(const_cast< ElementTreeWidget*>(this));
    return QTreeWidget::qt_metacast(_clname);
}

int cedar::proc::gui::ElementTreeWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void cedar::proc::gui::ElementTreeWidget::elementAddedSignal(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void cedar::proc::gui::ElementTreeWidget::elementRemovedSignal(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void cedar::proc::gui::ElementTreeWidget::elementNameChanged(QTreeWidgetItem * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE