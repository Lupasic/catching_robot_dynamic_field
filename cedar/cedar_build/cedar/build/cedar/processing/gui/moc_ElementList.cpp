/****************************************************************************
** Meta object code from reading C++ file 'ElementList.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../cedar/processing/gui/ElementList.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ElementList.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_cedar__proc__gui__elementList__SearchBar_t {
    QByteArrayData data[7];
    char stringdata0[105];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cedar__proc__gui__elementList__SearchBar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cedar__proc__gui__elementList__SearchBar_t qt_meta_stringdata_cedar__proc__gui__elementList__SearchBar = {
    {
QT_MOC_LITERAL(0, 0, 40), // "cedar::proc::gui::elementList..."
QT_MOC_LITERAL(1, 41, 19), // "searchStringChanged"
QT_MOC_LITERAL(2, 61, 0), // ""
QT_MOC_LITERAL(3, 62, 12), // "searchString"
QT_MOC_LITERAL(4, 75, 11), // "textChanged"
QT_MOC_LITERAL(5, 87, 4), // "text"
QT_MOC_LITERAL(6, 92, 12) // "clearClicked"

    },
    "cedar::proc::gui::elementList::SearchBar\0"
    "searchStringChanged\0\0searchString\0"
    "textChanged\0text\0clearClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cedar__proc__gui__elementList__SearchBar[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   32,    2, 0x08 /* Private */,
       6,    0,   35,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,

       0        // eod
};

void cedar::proc::gui::elementList::SearchBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SearchBar *_t = static_cast<SearchBar *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->searchStringChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->clearClicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SearchBar::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SearchBar::searchStringChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject cedar::proc::gui::elementList::SearchBar::staticMetaObject = {
    { &QLineEdit::staticMetaObject, qt_meta_stringdata_cedar__proc__gui__elementList__SearchBar.data,
      qt_meta_data_cedar__proc__gui__elementList__SearchBar,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *cedar::proc::gui::elementList::SearchBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cedar::proc::gui::elementList::SearchBar::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_cedar__proc__gui__elementList__SearchBar.stringdata0))
        return static_cast<void*>(const_cast< SearchBar*>(this));
    return QLineEdit::qt_metacast(_clname);
}

int cedar::proc::gui::elementList::SearchBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLineEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void cedar::proc::gui::elementList::SearchBar::searchStringChanged(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_cedar__proc__gui__ElementList_t {
    QByteArrayData data[5];
    char stringdata0[68];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cedar__proc__gui__ElementList_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cedar__proc__gui__ElementList_t qt_meta_stringdata_cedar__proc__gui__ElementList = {
    {
QT_MOC_LITERAL(0, 0, 29), // "cedar::proc::gui::ElementList"
QT_MOC_LITERAL(1, 30, 5), // "reset"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 19), // "updateSearchResults"
QT_MOC_LITERAL(4, 57, 10) // "searchText"

    },
    "cedar::proc::gui::ElementList\0reset\0"
    "\0updateSearchResults\0searchText"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cedar__proc__gui__ElementList[] = {

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
       3,    1,   25,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,

       0        // eod
};

void cedar::proc::gui::ElementList::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ElementList *_t = static_cast<ElementList *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->reset(); break;
        case 1: _t->updateSearchResults((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject cedar::proc::gui::ElementList::staticMetaObject = {
    { &QTabWidget::staticMetaObject, qt_meta_stringdata_cedar__proc__gui__ElementList.data,
      qt_meta_data_cedar__proc__gui__ElementList,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *cedar::proc::gui::ElementList::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cedar::proc::gui::ElementList::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_cedar__proc__gui__ElementList.stringdata0))
        return static_cast<void*>(const_cast< ElementList*>(this));
    return QTabWidget::qt_metacast(_clname);
}

int cedar::proc::gui::ElementList::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTabWidget::qt_metacall(_c, _id, _a);
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
