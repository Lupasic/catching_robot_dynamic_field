/****************************************************************************
** Meta object code from reading C++ file 'ArchitectureScriptEditor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../cedar/processing/gui/ArchitectureScriptEditor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ArchitectureScriptEditor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_cedar__proc__gui__detail__ScriptControlWidget_t {
    QByteArrayData data[6];
    char stringdata0[103];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cedar__proc__gui__detail__ScriptControlWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cedar__proc__gui__detail__ScriptControlWidget_t qt_meta_stringdata_cedar__proc__gui__detail__ScriptControlWidget = {
    {
QT_MOC_LITERAL(0, 0, 45), // "cedar::proc::gui::detail::Scr..."
QT_MOC_LITERAL(1, 46, 9), // "runScript"
QT_MOC_LITERAL(2, 56, 0), // ""
QT_MOC_LITERAL(3, 57, 17), // "requestScriptStop"
QT_MOC_LITERAL(4, 75, 13), // "scriptStarted"
QT_MOC_LITERAL(5, 89, 13) // "scriptStopped"

    },
    "cedar::proc::gui::detail::ScriptControlWidget\0"
    "runScript\0\0requestScriptStop\0scriptStarted\0"
    "scriptStopped"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cedar__proc__gui__detail__ScriptControlWidget[] = {

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
       1,    0,   34,    2, 0x08 /* Private */,
       3,    0,   35,    2, 0x08 /* Private */,
       4,    0,   36,    2, 0x08 /* Private */,
       5,    0,   37,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void cedar::proc::gui::detail::ScriptControlWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ScriptControlWidget *_t = static_cast<ScriptControlWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->runScript(); break;
        case 1: _t->requestScriptStop(); break;
        case 2: _t->scriptStarted(); break;
        case 3: _t->scriptStopped(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject cedar::proc::gui::detail::ScriptControlWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_cedar__proc__gui__detail__ScriptControlWidget.data,
      qt_meta_data_cedar__proc__gui__detail__ScriptControlWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *cedar::proc::gui::detail::ScriptControlWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cedar::proc::gui::detail::ScriptControlWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_cedar__proc__gui__detail__ScriptControlWidget.stringdata0))
        return static_cast<void*>(const_cast< ScriptControlWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int cedar::proc::gui::detail::ScriptControlWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_cedar__proc__gui__ArchitectureScriptEditor_t {
    QByteArrayData data[13];
    char stringdata0[220];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cedar__proc__gui__ArchitectureScriptEditor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cedar__proc__gui__ArchitectureScriptEditor_t qt_meta_stringdata_cedar__proc__gui__ArchitectureScriptEditor = {
    {
QT_MOC_LITERAL(0, 0, 42), // "cedar::proc::gui::Architectur..."
QT_MOC_LITERAL(1, 43, 18), // "scriptAddedInGroup"
QT_MOC_LITERAL(2, 62, 0), // ""
QT_MOC_LITERAL(3, 63, 10), // "scriptName"
QT_MOC_LITERAL(4, 74, 22), // "scriptRemovedFromGroup"
QT_MOC_LITERAL(5, 97, 10), // "addClicked"
QT_MOC_LITERAL(6, 108, 13), // "removeClicked"
QT_MOC_LITERAL(7, 122, 15), // "addScriptToList"
QT_MOC_LITERAL(8, 138, 20), // "removeScriptFromList"
QT_MOC_LITERAL(9, 159, 12), // "itemSelected"
QT_MOC_LITERAL(10, 172, 17), // "scriptNameChanged"
QT_MOC_LITERAL(11, 190, 19), // "scriptStatusChanged"
QT_MOC_LITERAL(12, 210, 9) // "newStatus"

    },
    "cedar::proc::gui::ArchitectureScriptEditor\0"
    "scriptAddedInGroup\0\0scriptName\0"
    "scriptRemovedFromGroup\0addClicked\0"
    "removeClicked\0addScriptToList\0"
    "removeScriptFromList\0itemSelected\0"
    "scriptNameChanged\0scriptStatusChanged\0"
    "newStatus"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cedar__proc__gui__ArchitectureScriptEditor[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,
       4,    1,   62,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   65,    2, 0x08 /* Private */,
       6,    0,   66,    2, 0x08 /* Private */,
       7,    1,   67,    2, 0x08 /* Private */,
       8,    1,   70,    2, 0x08 /* Private */,
       9,    0,   73,    2, 0x08 /* Private */,
      10,    0,   74,    2, 0x08 /* Private */,
      11,    1,   75,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   12,

       0        // eod
};

void cedar::proc::gui::ArchitectureScriptEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ArchitectureScriptEditor *_t = static_cast<ArchitectureScriptEditor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->scriptAddedInGroup((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->scriptRemovedFromGroup((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->addClicked(); break;
        case 3: _t->removeClicked(); break;
        case 4: _t->addScriptToList((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->removeScriptFromList((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->itemSelected(); break;
        case 7: _t->scriptNameChanged(); break;
        case 8: _t->scriptStatusChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ArchitectureScriptEditor::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ArchitectureScriptEditor::scriptAddedInGroup)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (ArchitectureScriptEditor::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ArchitectureScriptEditor::scriptRemovedFromGroup)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject cedar::proc::gui::ArchitectureScriptEditor::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_cedar__proc__gui__ArchitectureScriptEditor.data,
      qt_meta_data_cedar__proc__gui__ArchitectureScriptEditor,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *cedar::proc::gui::ArchitectureScriptEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cedar::proc::gui::ArchitectureScriptEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_cedar__proc__gui__ArchitectureScriptEditor.stringdata0))
        return static_cast<void*>(const_cast< ArchitectureScriptEditor*>(this));
    if (!strcmp(_clname, "Ui_ArchitectureScriptEditor"))
        return static_cast< Ui_ArchitectureScriptEditor*>(const_cast< ArchitectureScriptEditor*>(this));
    return QWidget::qt_metacast(_clname);
}

int cedar::proc::gui::ArchitectureScriptEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void cedar::proc::gui::ArchitectureScriptEditor::scriptAddedInGroup(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void cedar::proc::gui::ArchitectureScriptEditor::scriptRemovedFromGroup(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
