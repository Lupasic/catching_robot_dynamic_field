/****************************************************************************
** Meta object code from reading C++ file 'Component.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../cedar/processing/steps/Component.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Component.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_cedar__proc__details__ComponentStepUserSelectableCommandTypeSubsetParameterWidget_t {
    QByteArrayData data[5];
    char stringdata0[153];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cedar__proc__details__ComponentStepUserSelectableCommandTypeSubsetParameterWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cedar__proc__details__ComponentStepUserSelectableCommandTypeSubsetParameterWidget_t qt_meta_stringdata_cedar__proc__details__ComponentStepUserSelectableCommandTypeSubsetParameterWidget = {
    {
QT_MOC_LITERAL(0, 0, 81), // "cedar::proc::details::Compone..."
QT_MOC_LITERAL(1, 82, 16), // "componentChanged"
QT_MOC_LITERAL(2, 99, 0), // ""
QT_MOC_LITERAL(3, 100, 46), // "selectedUserSelectableCommand..."
QT_MOC_LITERAL(4, 147, 5) // "group"

    },
    "cedar::proc::details::ComponentStepUserSelectableCommandTypeSubsetPara"
    "meterWidget\0"
    "componentChanged\0\0"
    "selectedUserSelectableCommandTypeSubsetChanged\0"
    "group"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cedar__proc__details__ComponentStepUserSelectableCommandTypeSubsetParameterWidget[] = {

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
    QMetaType::Void, QMetaType::QString,    4,

       0        // eod
};

void cedar::proc::details::ComponentStepUserSelectableCommandTypeSubsetParameterWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ComponentStepUserSelectableCommandTypeSubsetParameterWidget *_t = static_cast<ComponentStepUserSelectableCommandTypeSubsetParameterWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->componentChanged(); break;
        case 1: _t->selectedUserSelectableCommandTypeSubsetChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject cedar::proc::details::ComponentStepUserSelectableCommandTypeSubsetParameterWidget::staticMetaObject = {
    { &cedar::aux::gui::Parameter::staticMetaObject, qt_meta_stringdata_cedar__proc__details__ComponentStepUserSelectableCommandTypeSubsetParameterWidget.data,
      qt_meta_data_cedar__proc__details__ComponentStepUserSelectableCommandTypeSubsetParameterWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *cedar::proc::details::ComponentStepUserSelectableCommandTypeSubsetParameterWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cedar::proc::details::ComponentStepUserSelectableCommandTypeSubsetParameterWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_cedar__proc__details__ComponentStepUserSelectableCommandTypeSubsetParameterWidget.stringdata0))
        return static_cast<void*>(const_cast< ComponentStepUserSelectableCommandTypeSubsetParameterWidget*>(this));
    return cedar::aux::gui::Parameter::qt_metacast(_clname);
}

int cedar::proc::details::ComponentStepUserSelectableCommandTypeSubsetParameterWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = cedar::aux::gui::Parameter::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_cedar__proc__details__ComponentStepUserSelectableCommandTypeSubsetParameter_t {
    QByteArrayData data[3];
    char stringdata0[94];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cedar__proc__details__ComponentStepUserSelectableCommandTypeSubsetParameter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cedar__proc__details__ComponentStepUserSelectableCommandTypeSubsetParameter_t qt_meta_stringdata_cedar__proc__details__ComponentStepUserSelectableCommandTypeSubsetParameter = {
    {
QT_MOC_LITERAL(0, 0, 75), // "cedar::proc::details::Compone..."
QT_MOC_LITERAL(1, 76, 16), // "componentChanged"
QT_MOC_LITERAL(2, 93, 0) // ""

    },
    "cedar::proc::details::ComponentStepUserSelectableCommandTypeSubsetPara"
    "meter\0"
    "componentChanged\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cedar__proc__details__ComponentStepUserSelectableCommandTypeSubsetParameter[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

       0        // eod
};

void cedar::proc::details::ComponentStepUserSelectableCommandTypeSubsetParameter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ComponentStepUserSelectableCommandTypeSubsetParameter *_t = static_cast<ComponentStepUserSelectableCommandTypeSubsetParameter *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->componentChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ComponentStepUserSelectableCommandTypeSubsetParameter::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ComponentStepUserSelectableCommandTypeSubsetParameter::componentChanged)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject cedar::proc::details::ComponentStepUserSelectableCommandTypeSubsetParameter::staticMetaObject = {
    { &cedar::aux::ParameterTemplate<std::string>::staticMetaObject, qt_meta_stringdata_cedar__proc__details__ComponentStepUserSelectableCommandTypeSubsetParameter.data,
      qt_meta_data_cedar__proc__details__ComponentStepUserSelectableCommandTypeSubsetParameter,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *cedar::proc::details::ComponentStepUserSelectableCommandTypeSubsetParameter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cedar::proc::details::ComponentStepUserSelectableCommandTypeSubsetParameter::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_cedar__proc__details__ComponentStepUserSelectableCommandTypeSubsetParameter.stringdata0))
        return static_cast<void*>(const_cast< ComponentStepUserSelectableCommandTypeSubsetParameter*>(this));
    return cedar::aux::ParameterTemplate<std::string>::qt_metacast(_clname);
}

int cedar::proc::details::ComponentStepUserSelectableCommandTypeSubsetParameter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = cedar::aux::ParameterTemplate<std::string>::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void cedar::proc::details::ComponentStepUserSelectableCommandTypeSubsetParameter::componentChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
struct qt_meta_stringdata_cedar__proc__steps__Component_t {
    QByteArrayData data[9];
    char stringdata0[191];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cedar__proc__steps__Component_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cedar__proc__steps__Component_t qt_meta_stringdata_cedar__proc__steps__Component = {
    {
QT_MOC_LITERAL(0, 0, 29), // "cedar::proc::steps::Component"
QT_MOC_LITERAL(1, 30, 16), // "componentChanged"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 20), // "componentChangedSlot"
QT_MOC_LITERAL(4, 69, 46), // "selectedUserSelectableCommand..."
QT_MOC_LITERAL(5, 116, 28), // "communicationStepSizeChanged"
QT_MOC_LITERAL(6, 145, 10), // "testStates"
QT_MOC_LITERAL(7, 156, 24), // "cedar::dev::ComponentPtr"
QT_MOC_LITERAL(8, 181, 9) // "component"

    },
    "cedar::proc::steps::Component\0"
    "componentChanged\0\0componentChangedSlot\0"
    "selectedUserSelectableCommandTypeSubsetChanged\0"
    "communicationStepSizeChanged\0testStates\0"
    "cedar::dev::ComponentPtr\0component"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cedar__proc__steps__Component[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   40,    2, 0x08 /* Private */,
       4,    0,   41,    2, 0x08 /* Private */,
       5,    0,   42,    2, 0x08 /* Private */,
       6,    1,   43,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,

       0        // eod
};

void cedar::proc::steps::Component::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Component *_t = static_cast<Component *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->componentChanged(); break;
        case 1: _t->componentChangedSlot(); break;
        case 2: _t->selectedUserSelectableCommandTypeSubsetChanged(); break;
        case 3: _t->communicationStepSizeChanged(); break;
        case 4: _t->testStates((*reinterpret_cast< cedar::dev::ComponentPtr(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Component::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Component::componentChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject cedar::proc::steps::Component::staticMetaObject = {
    { &cedar::proc::Step::staticMetaObject, qt_meta_stringdata_cedar__proc__steps__Component.data,
      qt_meta_data_cedar__proc__steps__Component,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *cedar::proc::steps::Component::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cedar::proc::steps::Component::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_cedar__proc__steps__Component.stringdata0))
        return static_cast<void*>(const_cast< Component*>(this));
    return cedar::proc::Step::qt_metacast(_clname);
}

int cedar::proc::steps::Component::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = cedar::proc::Step::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void cedar::proc::steps::Component::componentChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
