/****************************************************************************
** Meta object code from reading C++ file 'sv4gui_PathCreate.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "sv4gui_PathCreate.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sv4gui_PathCreate.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_sv4guiPathCreate_t {
    QByteArrayData data[15];
    char stringdata0[170];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_sv4guiPathCreate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_sv4guiPathCreate_t qt_meta_stringdata_sv4guiPathCreate = {
    {
QT_MOC_LITERAL(0, 0, 16), // "sv4guiPathCreate"
QT_MOC_LITERAL(1, 17, 10), // "CreatePath"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 6), // "Cancel"
QT_MOC_LITERAL(4, 36, 18), // "ResetNumberSpacing"
QT_MOC_LITERAL(5, 55, 5), // "index"
QT_MOC_LITERAL(6, 61, 13), // "SetCreatePath"
QT_MOC_LITERAL(7, 75, 6), // "create"
QT_MOC_LITERAL(8, 82, 11), // "SetPathName"
QT_MOC_LITERAL(9, 94, 8), // "pathName"
QT_MOC_LITERAL(10, 103, 18), // "SetSubdivisionType"
QT_MOC_LITERAL(11, 122, 9), // "SetNumber"
QT_MOC_LITERAL(12, 132, 6), // "number"
QT_MOC_LITERAL(13, 139, 21), // "GetVolumeImageSpacing"
QT_MOC_LITERAL(14, 161, 8) // "SetFocus"

    },
    "sv4guiPathCreate\0CreatePath\0\0Cancel\0"
    "ResetNumberSpacing\0index\0SetCreatePath\0"
    "create\0SetPathName\0pathName\0"
    "SetSubdivisionType\0SetNumber\0number\0"
    "GetVolumeImageSpacing\0SetFocus"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_sv4guiPathCreate[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x0a /* Public */,
       3,    0,   60,    2, 0x0a /* Public */,
       4,    1,   61,    2, 0x0a /* Public */,
       6,    1,   64,    2, 0x0a /* Public */,
       8,    1,   67,    2, 0x0a /* Public */,
      10,    1,   70,    2, 0x0a /* Public */,
      11,    1,   73,    2, 0x0a /* Public */,
      13,    0,   76,    2, 0x0a /* Public */,
      14,    0,   77,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Double,
    QMetaType::Void,

       0        // eod
};

void sv4guiPathCreate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        sv4guiPathCreate *_t = static_cast<sv4guiPathCreate *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->CreatePath(); break;
        case 1: _t->Cancel(); break;
        case 2: _t->ResetNumberSpacing((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->SetCreatePath((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->SetPathName((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->SetSubdivisionType((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->SetNumber((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: { double _r = _t->GetVolumeImageSpacing();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 8: _t->SetFocus(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject sv4guiPathCreate::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_sv4guiPathCreate.data,
      qt_meta_data_sv4guiPathCreate,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *sv4guiPathCreate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *sv4guiPathCreate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_sv4guiPathCreate.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int sv4guiPathCreate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
