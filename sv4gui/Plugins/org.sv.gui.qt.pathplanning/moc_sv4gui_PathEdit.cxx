/****************************************************************************
** Meta object code from reading C++ file 'sv4gui_PathEdit.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "sv4gui_PathEdit.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sv4gui_PathEdit.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_sv4guiPathEdit_t {
    QByteArrayData data[21];
    char stringdata0[242];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_sv4guiPathEdit_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_sv4guiPathEdit_t qt_meta_stringdata_sv4guiPathEdit = {
    {
QT_MOC_LITERAL(0, 0, 14), // "sv4guiPathEdit"
QT_MOC_LITERAL(1, 15, 10), // "ChangePath"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 8), // "AddPoint"
QT_MOC_LITERAL(4, 36, 13), // "mitk::Point3D"
QT_MOC_LITERAL(5, 50, 17), // "SmoothCurrentPath"
QT_MOC_LITERAL(6, 68, 8), // "ClearAll"
QT_MOC_LITERAL(7, 77, 11), // "SelectPoint"
QT_MOC_LITERAL(8, 89, 11), // "QModelIndex"
QT_MOC_LITERAL(9, 101, 3), // "idx"
QT_MOC_LITERAL(10, 105, 14), // "DeleteSelected"
QT_MOC_LITERAL(11, 120, 8), // "SmartAdd"
QT_MOC_LITERAL(12, 129, 11), // "ManuallyAdd"
QT_MOC_LITERAL(13, 141, 9), // "UpdateGUI"
QT_MOC_LITERAL(14, 151, 18), // "SetupResliceSlider"
QT_MOC_LITERAL(15, 170, 11), // "UpdateSlice"
QT_MOC_LITERAL(16, 182, 21), // "UpdatePathResliceSize"
QT_MOC_LITERAL(17, 204, 7), // "newSize"
QT_MOC_LITERAL(18, 212, 16), // "UpdateAddingMode"
QT_MOC_LITERAL(19, 229, 4), // "mode"
QT_MOC_LITERAL(20, 234, 7) // "NewPath"

    },
    "sv4guiPathEdit\0ChangePath\0\0AddPoint\0"
    "mitk::Point3D\0SmoothCurrentPath\0"
    "ClearAll\0SelectPoint\0QModelIndex\0idx\0"
    "DeleteSelected\0SmartAdd\0ManuallyAdd\0"
    "UpdateGUI\0SetupResliceSlider\0UpdateSlice\0"
    "UpdatePathResliceSize\0newSize\0"
    "UpdateAddingMode\0mode\0NewPath"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_sv4guiPathEdit[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x0a /* Public */,
       3,    1,   90,    2, 0x0a /* Public */,
       5,    0,   93,    2, 0x0a /* Public */,
       6,    0,   94,    2, 0x0a /* Public */,
       7,    0,   95,    2, 0x0a /* Public */,
       7,    1,   96,    2, 0x0a /* Public */,
      10,    0,   99,    2, 0x0a /* Public */,
      11,    0,  100,    2, 0x0a /* Public */,
      12,    0,  101,    2, 0x0a /* Public */,
      13,    0,  102,    2, 0x0a /* Public */,
      14,    0,  103,    2, 0x0a /* Public */,
      15,    0,  104,    2, 0x0a /* Public */,
      16,    1,  105,    2, 0x0a /* Public */,
      18,    1,  108,    2, 0x0a /* Public */,
      20,    0,  111,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,   17,
    QMetaType::Void, QMetaType::Int,   19,
    QMetaType::Void,

       0        // eod
};

void sv4guiPathEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        sv4guiPathEdit *_t = static_cast<sv4guiPathEdit *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ChangePath(); break;
        case 1: _t->AddPoint((*reinterpret_cast< mitk::Point3D(*)>(_a[1]))); break;
        case 2: _t->SmoothCurrentPath(); break;
        case 3: _t->ClearAll(); break;
        case 4: _t->SelectPoint(); break;
        case 5: _t->SelectPoint((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 6: _t->DeleteSelected(); break;
        case 7: _t->SmartAdd(); break;
        case 8: _t->ManuallyAdd(); break;
        case 9: _t->UpdateGUI(); break;
        case 10: _t->SetupResliceSlider(); break;
        case 11: _t->UpdateSlice(); break;
        case 12: _t->UpdatePathResliceSize((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 13: _t->UpdateAddingMode((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->NewPath(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject sv4guiPathEdit::staticMetaObject = {
    { &sv4guiQmitkFunctionality::staticMetaObject, qt_meta_stringdata_sv4guiPathEdit.data,
      qt_meta_data_sv4guiPathEdit,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *sv4guiPathEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *sv4guiPathEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_sv4guiPathEdit.stringdata0))
        return static_cast<void*>(this);
    return sv4guiQmitkFunctionality::qt_metacast(_clname);
}

int sv4guiPathEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = sv4guiQmitkFunctionality::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
