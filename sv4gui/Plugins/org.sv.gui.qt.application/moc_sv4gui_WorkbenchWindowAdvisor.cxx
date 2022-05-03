/****************************************************************************
** Meta object code from reading C++ file 'sv4gui_WorkbenchWindowAdvisor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "sv4gui_WorkbenchWindowAdvisor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sv4gui_WorkbenchWindowAdvisor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_sv4guiWorkbenchWindowAdvisor_t {
    QByteArrayData data[16];
    char stringdata0[236];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_sv4guiWorkbenchWindowAdvisor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_sv4guiWorkbenchWindowAdvisor_t qt_meta_stringdata_sv4guiWorkbenchWindowAdvisor = {
    {
QT_MOC_LITERAL(0, 0, 28), // "sv4guiWorkbenchWindowAdvisor"
QT_MOC_LITERAL(1, 29, 7), // "onIntro"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 6), // "onHelp"
QT_MOC_LITERAL(4, 45, 25), // "onHelpOpenHelpPerspective"
QT_MOC_LITERAL(5, 71, 7), // "onAbout"
QT_MOC_LITERAL(6, 79, 10), // "ShowSVView"
QT_MOC_LITERAL(7, 90, 15), // "ExitApplication"
QT_MOC_LITERAL(8, 106, 19), // "RemoveSelectedNodes"
QT_MOC_LITERAL(9, 126, 7), // "checked"
QT_MOC_LITERAL(10, 134, 18), // "RenameSelectedNode"
QT_MOC_LITERAL(11, 153, 12), // "CopyDataNode"
QT_MOC_LITERAL(12, 166, 13), // "PasteDataNode"
QT_MOC_LITERAL(13, 180, 16), // "ToggleAxialPlane"
QT_MOC_LITERAL(14, 197, 19), // "ToggleSagittalPlane"
QT_MOC_LITERAL(15, 217, 18) // "ToggleCoronalPlane"

    },
    "sv4guiWorkbenchWindowAdvisor\0onIntro\0"
    "\0onHelp\0onHelpOpenHelpPerspective\0"
    "onAbout\0ShowSVView\0ExitApplication\0"
    "RemoveSelectedNodes\0checked\0"
    "RenameSelectedNode\0CopyDataNode\0"
    "PasteDataNode\0ToggleAxialPlane\0"
    "ToggleSagittalPlane\0ToggleCoronalPlane"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_sv4guiWorkbenchWindowAdvisor[] = {

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
       1,    0,   89,    2, 0x09 /* Protected */,
       3,    0,   90,    2, 0x09 /* Protected */,
       4,    0,   91,    2, 0x09 /* Protected */,
       5,    0,   92,    2, 0x09 /* Protected */,
       6,    0,   93,    2, 0x09 /* Protected */,
       7,    0,   94,    2, 0x09 /* Protected */,
       8,    1,   95,    2, 0x09 /* Protected */,
       8,    0,   98,    2, 0x29 /* Protected | MethodCloned */,
      10,    1,   99,    2, 0x09 /* Protected */,
      10,    0,  102,    2, 0x29 /* Protected | MethodCloned */,
      11,    1,  103,    2, 0x09 /* Protected */,
      12,    1,  106,    2, 0x09 /* Protected */,
      13,    1,  109,    2, 0x09 /* Protected */,
      14,    1,  112,    2, 0x09 /* Protected */,
      15,    1,  115,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::Bool,    9,

       0        // eod
};

void sv4guiWorkbenchWindowAdvisor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        sv4guiWorkbenchWindowAdvisor *_t = static_cast<sv4guiWorkbenchWindowAdvisor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onIntro(); break;
        case 1: _t->onHelp(); break;
        case 2: _t->onHelpOpenHelpPerspective(); break;
        case 3: _t->onAbout(); break;
        case 4: _t->ShowSVView(); break;
        case 5: _t->ExitApplication(); break;
        case 6: _t->RemoveSelectedNodes((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->RemoveSelectedNodes(); break;
        case 8: _t->RenameSelectedNode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->RenameSelectedNode(); break;
        case 10: _t->CopyDataNode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->PasteDataNode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->ToggleAxialPlane((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->ToggleSagittalPlane((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->ToggleCoronalPlane((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject sv4guiWorkbenchWindowAdvisor::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_sv4guiWorkbenchWindowAdvisor.data,
      qt_meta_data_sv4guiWorkbenchWindowAdvisor,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *sv4guiWorkbenchWindowAdvisor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *sv4guiWorkbenchWindowAdvisor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_sv4guiWorkbenchWindowAdvisor.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "berry::WorkbenchWindowAdvisor"))
        return static_cast< berry::WorkbenchWindowAdvisor*>(this);
    return QObject::qt_metacast(_clname);
}

int sv4guiWorkbenchWindowAdvisor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
