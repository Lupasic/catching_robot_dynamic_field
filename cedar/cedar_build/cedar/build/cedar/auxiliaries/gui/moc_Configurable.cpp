/****************************************************************************
** Meta object code from reading C++ file 'Configurable.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../cedar/auxiliaries/gui/Configurable.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Configurable.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_cedar__aux__gui__Configurable_t {
    QByteArrayData data[21];
    char stringdata0[369];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cedar__aux__gui__Configurable_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cedar__aux__gui__Configurable_t qt_meta_stringdata_cedar__aux__gui__Configurable = {
    {
QT_MOC_LITERAL(0, 0, 29), // "cedar::aux::gui::Configurable"
QT_MOC_LITERAL(1, 30, 15), // "settingsChanged"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 14), // "parameterAdded"
QT_MOC_LITERAL(4, 62, 17), // "configurableIndex"
QT_MOC_LITERAL(5, 80, 4), // "path"
QT_MOC_LITERAL(6, 85, 16), // "parameterRemoved"
QT_MOC_LITERAL(7, 102, 9), // "parameter"
QT_MOC_LITERAL(8, 112, 16), // "parameterRenamed"
QT_MOC_LITERAL(9, 129, 7), // "oldName"
QT_MOC_LITERAL(10, 137, 7), // "newName"
QT_MOC_LITERAL(11, 145, 22), // "delButtonClickedSignal"
QT_MOC_LITERAL(12, 168, 8), // "fullPath"
QT_MOC_LITERAL(13, 177, 17), // "fitRowsToContents"
QT_MOC_LITERAL(14, 195, 26), // "parameterChangeFlagChanged"
QT_MOC_LITERAL(15, 222, 27), // "objectParameterValueChanged"
QT_MOC_LITERAL(16, 250, 31), // "objectListParameterValueChanged"
QT_MOC_LITERAL(17, 282, 18), // "parameterAddedSlot"
QT_MOC_LITERAL(18, 301, 20), // "parameterRemovedSlot"
QT_MOC_LITERAL(19, 322, 20), // "parameterRenamedSlot"
QT_MOC_LITERAL(20, 343, 25) // "handleDeleteButtonClicked"

    },
    "cedar::aux::gui::Configurable\0"
    "settingsChanged\0\0parameterAdded\0"
    "configurableIndex\0path\0parameterRemoved\0"
    "parameter\0parameterRenamed\0oldName\0"
    "newName\0delButtonClickedSignal\0fullPath\0"
    "fitRowsToContents\0parameterChangeFlagChanged\0"
    "objectParameterValueChanged\0"
    "objectListParameterValueChanged\0"
    "parameterAddedSlot\0parameterRemovedSlot\0"
    "parameterRenamedSlot\0handleDeleteButtonClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cedar__aux__gui__Configurable[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x06 /* Public */,
       3,    2,   80,    2, 0x06 /* Public */,
       6,    2,   85,    2, 0x06 /* Public */,
       8,    3,   90,    2, 0x06 /* Public */,
      11,    1,   97,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      13,    0,  100,    2, 0x0a /* Public */,
      14,    0,  101,    2, 0x08 /* Private */,
      15,    0,  102,    2, 0x08 /* Private */,
      16,    0,  103,    2, 0x08 /* Private */,
      17,    2,  104,    2, 0x08 /* Private */,
      18,    2,  109,    2, 0x08 /* Private */,
      19,    3,  114,    2, 0x08 /* Private */,
      20,    1,  121,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    4,    5,
    QMetaType::Void, QMetaType::Int, QMetaType::QVariant,    4,    7,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::QString,    4,    9,   10,
    QMetaType::Void, QMetaType::QString,   12,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    4,    5,
    QMetaType::Void, QMetaType::Int, QMetaType::QVariant,    4,    7,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::QString,    4,    9,   10,
    QMetaType::Void, QMetaType::QString,   12,

       0        // eod
};

void cedar::aux::gui::Configurable::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Configurable *_t = static_cast<Configurable *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->settingsChanged(); break;
        case 1: _t->parameterAdded((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 2: _t->parameterRemoved((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QVariant(*)>(_a[2]))); break;
        case 3: _t->parameterRenamed((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 4: _t->delButtonClickedSignal((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->fitRowsToContents(); break;
        case 6: _t->parameterChangeFlagChanged(); break;
        case 7: _t->objectParameterValueChanged(); break;
        case 8: _t->objectListParameterValueChanged(); break;
        case 9: _t->parameterAddedSlot((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 10: _t->parameterRemovedSlot((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QVariant(*)>(_a[2]))); break;
        case 11: _t->parameterRenamedSlot((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 12: _t->handleDeleteButtonClicked((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Configurable::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Configurable::settingsChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Configurable::*_t)(int , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Configurable::parameterAdded)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (Configurable::*_t)(int , QVariant );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Configurable::parameterRemoved)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (Configurable::*_t)(int , QString , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Configurable::parameterRenamed)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (Configurable::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Configurable::delButtonClickedSignal)) {
                *result = 4;
                return;
            }
        }
    }
}

const QMetaObject cedar::aux::gui::Configurable::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_cedar__aux__gui__Configurable.data,
      qt_meta_data_cedar__aux__gui__Configurable,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *cedar::aux::gui::Configurable::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cedar::aux::gui::Configurable::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_cedar__aux__gui__Configurable.stringdata0))
        return static_cast<void*>(const_cast< Configurable*>(this));
    return QWidget::qt_metacast(_clname);
}

int cedar::aux::gui::Configurable::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void cedar::aux::gui::Configurable::settingsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void cedar::aux::gui::Configurable::parameterAdded(int _t1, QString _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void cedar::aux::gui::Configurable::parameterRemoved(int _t1, QVariant _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void cedar::aux::gui::Configurable::parameterRenamed(int _t1, QString _t2, QString _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void cedar::aux::gui::Configurable::delButtonClickedSignal(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
struct qt_meta_stringdata_cedar__aux__gui__Configurable__DataDelegate_t {
    QByteArrayData data[4];
    char stringdata0[69];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cedar__aux__gui__Configurable__DataDelegate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cedar__aux__gui__Configurable__DataDelegate_t qt_meta_stringdata_cedar__aux__gui__Configurable__DataDelegate = {
    {
QT_MOC_LITERAL(0, 0, 43), // "cedar::aux::gui::Configurable..."
QT_MOC_LITERAL(1, 44, 15), // "widgetDestroyed"
QT_MOC_LITERAL(2, 60, 0), // ""
QT_MOC_LITERAL(3, 61, 7) // "removed"

    },
    "cedar::aux::gui::Configurable::DataDelegate\0"
    "widgetDestroyed\0\0removed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cedar__aux__gui__Configurable__DataDelegate[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QObjectStar,    3,

       0        // eod
};

void cedar::aux::gui::Configurable::DataDelegate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DataDelegate *_t = static_cast<DataDelegate *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->widgetDestroyed((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject cedar::aux::gui::Configurable::DataDelegate::staticMetaObject = {
    { &QStyledItemDelegate::staticMetaObject, qt_meta_stringdata_cedar__aux__gui__Configurable__DataDelegate.data,
      qt_meta_data_cedar__aux__gui__Configurable__DataDelegate,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *cedar::aux::gui::Configurable::DataDelegate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cedar::aux::gui::Configurable::DataDelegate::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_cedar__aux__gui__Configurable__DataDelegate.stringdata0))
        return static_cast<void*>(const_cast< DataDelegate*>(this));
    return QStyledItemDelegate::qt_metacast(_clname);
}

int cedar::aux::gui::Configurable::DataDelegate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QStyledItemDelegate::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
