/****************************************************************************
** Meta object code from reading C++ file 'sv4gui_MeshCreate.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "sv4gui_MeshCreate.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sv4gui_MeshCreate.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_sv4guiMeshCreate_t {
    QByteArrayData data[8];
    char stringdata0[73];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_sv4guiMeshCreate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_sv4guiMeshCreate_t qt_meta_stringdata_sv4guiMeshCreate = {
    {
QT_MOC_LITERAL(0, 0, 16), // "sv4guiMeshCreate"
QT_MOC_LITERAL(1, 17, 10), // "CreateMesh"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 6), // "Cancel"
QT_MOC_LITERAL(4, 36, 8), // "SetFocus"
QT_MOC_LITERAL(5, 45, 9), // "Activated"
QT_MOC_LITERAL(6, 55, 13), // "SetupMeshType"
QT_MOC_LITERAL(7, 69, 3) // "idx"

    },
    "sv4guiMeshCreate\0CreateMesh\0\0Cancel\0"
    "SetFocus\0Activated\0SetupMeshType\0idx"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_sv4guiMeshCreate[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x0a /* Public */,
       3,    0,   40,    2, 0x0a /* Public */,
       4,    0,   41,    2, 0x0a /* Public */,
       5,    0,   42,    2, 0x0a /* Public */,
       6,    1,   43,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,

       0        // eod
};

void sv4guiMeshCreate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        sv4guiMeshCreate *_t = static_cast<sv4guiMeshCreate *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->CreateMesh(); break;
        case 1: _t->Cancel(); break;
        case 2: _t->SetFocus(); break;
        case 3: _t->Activated(); break;
        case 4: _t->SetupMeshType((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject sv4guiMeshCreate::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_sv4guiMeshCreate.data,
      qt_meta_data_sv4guiMeshCreate,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *sv4guiMeshCreate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *sv4guiMeshCreate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_sv4guiMeshCreate.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int sv4guiMeshCreate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
