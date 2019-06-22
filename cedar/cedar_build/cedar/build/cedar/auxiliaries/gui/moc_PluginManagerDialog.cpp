/****************************************************************************
** Meta object code from reading C++ file 'PluginManagerDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../cedar/auxiliaries/gui/PluginManagerDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PluginManagerDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_cedar__aux__gui__PluginManagerDialog_t {
    QByteArrayData data[15];
    char stringdata0[319];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cedar__aux__gui__PluginManagerDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cedar__aux__gui__PluginManagerDialog_t qt_meta_stringdata_cedar__aux__gui__PluginManagerDialog = {
    {
QT_MOC_LITERAL(0, 0, 36), // "cedar::aux::gui::PluginManage..."
QT_MOC_LITERAL(1, 37, 21), // "removeSelectedPlugins"
QT_MOC_LITERAL(2, 59, 0), // ""
QT_MOC_LITERAL(3, 60, 28), // "toggleSelectedPluginsButtons"
QT_MOC_LITERAL(4, 89, 20), // "addSearchPathClicked"
QT_MOC_LITERAL(5, 110, 23), // "removeSearchPathClicked"
QT_MOC_LITERAL(6, 134, 16), // "addPluginClicked"
QT_MOC_LITERAL(7, 151, 28), // "loadOnStartupCheckboxToggled"
QT_MOC_LITERAL(8, 180, 6), // "loaded"
QT_MOC_LITERAL(9, 187, 19), // "loadSelectedPlugins"
QT_MOC_LITERAL(10, 207, 14), // "openInfoDialog"
QT_MOC_LITERAL(11, 222, 24), // "moveSelectedSearchPathUp"
QT_MOC_LITERAL(12, 247, 26), // "moveSelectedSearchPathDown"
QT_MOC_LITERAL(13, 274, 25), // "selectedSearchPathChanged"
QT_MOC_LITERAL(14, 300, 18) // "showSearchPathHelp"

    },
    "cedar::aux::gui::PluginManagerDialog\0"
    "removeSelectedPlugins\0\0"
    "toggleSelectedPluginsButtons\0"
    "addSearchPathClicked\0removeSearchPathClicked\0"
    "addPluginClicked\0loadOnStartupCheckboxToggled\0"
    "loaded\0loadSelectedPlugins\0openInfoDialog\0"
    "moveSelectedSearchPathUp\0"
    "moveSelectedSearchPathDown\0"
    "selectedSearchPathChanged\0showSearchPathHelp"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cedar__aux__gui__PluginManagerDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x08 /* Private */,
       3,    0,   75,    2, 0x08 /* Private */,
       4,    0,   76,    2, 0x08 /* Private */,
       5,    0,   77,    2, 0x08 /* Private */,
       6,    0,   78,    2, 0x08 /* Private */,
       7,    1,   79,    2, 0x08 /* Private */,
       9,    0,   82,    2, 0x08 /* Private */,
      10,    0,   83,    2, 0x08 /* Private */,
      11,    0,   84,    2, 0x08 /* Private */,
      12,    0,   85,    2, 0x08 /* Private */,
      13,    0,   86,    2, 0x08 /* Private */,
      14,    0,   87,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void cedar::aux::gui::PluginManagerDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PluginManagerDialog *_t = static_cast<PluginManagerDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->removeSelectedPlugins(); break;
        case 1: _t->toggleSelectedPluginsButtons(); break;
        case 2: _t->addSearchPathClicked(); break;
        case 3: _t->removeSearchPathClicked(); break;
        case 4: _t->addPluginClicked(); break;
        case 5: _t->loadOnStartupCheckboxToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->loadSelectedPlugins(); break;
        case 7: _t->openInfoDialog(); break;
        case 8: _t->moveSelectedSearchPathUp(); break;
        case 9: _t->moveSelectedSearchPathDown(); break;
        case 10: _t->selectedSearchPathChanged(); break;
        case 11: _t->showSearchPathHelp(); break;
        default: ;
        }
    }
}

const QMetaObject cedar::aux::gui::PluginManagerDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_cedar__aux__gui__PluginManagerDialog.data,
      qt_meta_data_cedar__aux__gui__PluginManagerDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *cedar::aux::gui::PluginManagerDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cedar::aux::gui::PluginManagerDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_cedar__aux__gui__PluginManagerDialog.stringdata0))
        return static_cast<void*>(const_cast< PluginManagerDialog*>(this));
    if (!strcmp(_clname, "Ui_PluginManagerDialog"))
        return static_cast< Ui_PluginManagerDialog*>(const_cast< PluginManagerDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int cedar::aux::gui::PluginManagerDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
