/****************************************************************************
** Meta object code from reading C++ file 'Scene.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../cedar/processing/gui/Scene.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Scene.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_cedar__proc__gui__Scene_t {
    QByteArrayData data[10];
    char stringdata0[146];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cedar__proc__gui__Scene_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cedar__proc__gui__Scene_t qt_meta_stringdata_cedar__proc__gui__Scene = {
    {
QT_MOC_LITERAL(0, 0, 23), // "cedar::proc::gui::Scene"
QT_MOC_LITERAL(1, 24, 12), // "modeFinished"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 12), // "sceneChanged"
QT_MOC_LITERAL(4, 51, 29), // "promoteElementToExistingGroup"
QT_MOC_LITERAL(5, 81, 12), // "itemSelected"
QT_MOC_LITERAL(6, 94, 11), // "importGroup"
QT_MOC_LITERAL(7, 106, 4), // "link"
QT_MOC_LITERAL(8, 111, 10), // "importStep"
QT_MOC_LITERAL(9, 122, 23) // "assignSelectedToTrigger"

    },
    "cedar::proc::gui::Scene\0modeFinished\0"
    "\0sceneChanged\0promoteElementToExistingGroup\0"
    "itemSelected\0importGroup\0link\0importStep\0"
    "assignSelectedToTrigger"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cedar__proc__gui__Scene[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    0,   50,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   51,    2, 0x08 /* Private */,
       5,    0,   52,    2, 0x08 /* Private */,
       6,    1,   53,    2, 0x08 /* Private */,
       8,    0,   56,    2, 0x08 /* Private */,
       9,    0,   57,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void cedar::proc::gui::Scene::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Scene *_t = static_cast<Scene *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->modeFinished(); break;
        case 1: _t->sceneChanged(); break;
        case 2: _t->promoteElementToExistingGroup(); break;
        case 3: _t->itemSelected(); break;
        case 4: _t->importGroup((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->importStep(); break;
        case 6: _t->assignSelectedToTrigger(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Scene::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Scene::modeFinished)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Scene::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Scene::sceneChanged)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject cedar::proc::gui::Scene::staticMetaObject = {
    { &QGraphicsScene::staticMetaObject, qt_meta_stringdata_cedar__proc__gui__Scene.data,
      qt_meta_data_cedar__proc__gui__Scene,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *cedar::proc::gui::Scene::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cedar::proc::gui::Scene::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_cedar__proc__gui__Scene.stringdata0))
        return static_cast<void*>(const_cast< Scene*>(this));
    return QGraphicsScene::qt_metacast(_clname);
}

int cedar::proc::gui::Scene::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsScene::qt_metacall(_c, _id, _a);
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
void cedar::proc::gui::Scene::modeFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void cedar::proc::gui::Scene::sceneChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
