/****************************************************************************
** Meta object code from reading C++ file 'LocalCoordinateFrame.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../cedar/auxiliaries/LocalCoordinateFrame.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LocalCoordinateFrame.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_cedar__aux__LocalCoordinateFrame_t {
    QByteArrayData data[20];
    char stringdata0[253];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cedar__aux__LocalCoordinateFrame_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cedar__aux__LocalCoordinateFrame_t qt_meta_stringdata_cedar__aux__LocalCoordinateFrame = {
    {
QT_MOC_LITERAL(0, 0, 32), // "cedar::aux::LocalCoordinateFrame"
QT_MOC_LITERAL(1, 33, 6), // "update"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 14), // "setTranslation"
QT_MOC_LITERAL(4, 56, 19), // "cedar::unit::Length"
QT_MOC_LITERAL(5, 76, 1), // "x"
QT_MOC_LITERAL(6, 78, 1), // "y"
QT_MOC_LITERAL(7, 80, 1), // "z"
QT_MOC_LITERAL(8, 82, 25), // "cedar::unit::LengthMatrix"
QT_MOC_LITERAL(9, 108, 11), // "translation"
QT_MOC_LITERAL(10, 120, 18), // "std::vector<float>"
QT_MOC_LITERAL(11, 139, 9), // "translate"
QT_MOC_LITERAL(12, 149, 32), // "std::vector<cedar::unit::Length>"
QT_MOC_LITERAL(13, 182, 11), // "setRotation"
QT_MOC_LITERAL(14, 194, 7), // "cv::Mat"
QT_MOC_LITERAL(15, 202, 8), // "rotation"
QT_MOC_LITERAL(16, 211, 6), // "rotate"
QT_MOC_LITERAL(17, 218, 4), // "axis"
QT_MOC_LITERAL(18, 223, 23), // "cedar::unit::PlaneAngle"
QT_MOC_LITERAL(19, 247, 5) // "angle"

    },
    "cedar::aux::LocalCoordinateFrame\0"
    "update\0\0setTranslation\0cedar::unit::Length\0"
    "x\0y\0z\0cedar::unit::LengthMatrix\0"
    "translation\0std::vector<float>\0translate\0"
    "std::vector<cedar::unit::Length>\0"
    "setRotation\0cv::Mat\0rotation\0rotate\0"
    "axis\0cedar::unit::PlaneAngle\0angle"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cedar__aux__LocalCoordinateFrame[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x0a /* Public */,
       3,    3,   65,    2, 0x0a /* Public */,
       3,    1,   72,    2, 0x0a /* Public */,
       3,    1,   75,    2, 0x0a /* Public */,
      11,    3,   78,    2, 0x0a /* Public */,
      11,    1,   85,    2, 0x0a /* Public */,
      11,    1,   88,    2, 0x0a /* Public */,
      13,    1,   91,    2, 0x0a /* Public */,
      13,    1,   94,    2, 0x0a /* Public */,
      16,    2,   97,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 4, 0x80000000 | 4,    5,    6,    7,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 10,    9,
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 4, 0x80000000 | 4,    5,    6,    7,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 12,    9,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, 0x80000000 | 10,   15,
    QMetaType::Void, QMetaType::UInt, 0x80000000 | 18,   17,   19,

       0        // eod
};

void cedar::aux::LocalCoordinateFrame::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        LocalCoordinateFrame *_t = static_cast<LocalCoordinateFrame *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->update(); break;
        case 1: _t->setTranslation((*reinterpret_cast< const cedar::unit::Length(*)>(_a[1])),(*reinterpret_cast< const cedar::unit::Length(*)>(_a[2])),(*reinterpret_cast< const cedar::unit::Length(*)>(_a[3]))); break;
        case 2: _t->setTranslation((*reinterpret_cast< const cedar::unit::LengthMatrix(*)>(_a[1]))); break;
        case 3: _t->setTranslation((*reinterpret_cast< const std::vector<float>(*)>(_a[1]))); break;
        case 4: _t->translate((*reinterpret_cast< const cedar::unit::Length(*)>(_a[1])),(*reinterpret_cast< const cedar::unit::Length(*)>(_a[2])),(*reinterpret_cast< const cedar::unit::Length(*)>(_a[3]))); break;
        case 5: _t->translate((*reinterpret_cast< const cedar::unit::LengthMatrix(*)>(_a[1]))); break;
        case 6: _t->translate((*reinterpret_cast< const std::vector<cedar::unit::Length>(*)>(_a[1]))); break;
        case 7: _t->setRotation((*reinterpret_cast< const cv::Mat(*)>(_a[1]))); break;
        case 8: _t->setRotation((*reinterpret_cast< const std::vector<float>(*)>(_a[1]))); break;
        case 9: _t->rotate((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< const cedar::unit::PlaneAngle(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject cedar::aux::LocalCoordinateFrame::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_cedar__aux__LocalCoordinateFrame.data,
      qt_meta_data_cedar__aux__LocalCoordinateFrame,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *cedar::aux::LocalCoordinateFrame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cedar::aux::LocalCoordinateFrame::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_cedar__aux__LocalCoordinateFrame.stringdata0))
        return static_cast<void*>(const_cast< LocalCoordinateFrame*>(this));
    if (!strcmp(_clname, "cedar::aux::NamedConfigurable"))
        return static_cast< cedar::aux::NamedConfigurable*>(const_cast< LocalCoordinateFrame*>(this));
    return QObject::qt_metacast(_clname);
}

int cedar::aux::LocalCoordinateFrame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
