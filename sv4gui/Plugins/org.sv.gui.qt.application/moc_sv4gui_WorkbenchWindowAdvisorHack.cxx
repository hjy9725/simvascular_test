/****************************************************************************
** Meta object code from reading C++ file 'sv4gui_WorkbenchWindowAdvisorHack.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "sv4gui_WorkbenchWindowAdvisorHack.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sv4gui_WorkbenchWindowAdvisorHack.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_sv4guiWorkbenchWindowAdvisorHack_t {
    QByteArrayData data[15];
    char stringdata0[205];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_sv4guiWorkbenchWindowAdvisorHack_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_sv4guiWorkbenchWindowAdvisorHack_t qt_meta_stringdata_sv4guiWorkbenchWindowAdvisorHack = {
    {
QT_MOC_LITERAL(0, 0, 32), // "sv4guiWorkbenchWindowAdvisorHack"
QT_MOC_LITERAL(1, 33, 6), // "onUndo"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 6), // "onRedo"
QT_MOC_LITERAL(4, 48, 16), // "onImageNavigator"
QT_MOC_LITERAL(5, 65, 15), // "onViewNavigator"
QT_MOC_LITERAL(6, 81, 17), // "onEditPreferences"
QT_MOC_LITERAL(7, 99, 6), // "onQuit"
QT_MOC_LITERAL(8, 106, 18), // "onResetPerspective"
QT_MOC_LITERAL(9, 125, 18), // "onClosePerspective"
QT_MOC_LITERAL(10, 144, 11), // "onNewWindow"
QT_MOC_LITERAL(11, 156, 7), // "onIntro"
QT_MOC_LITERAL(12, 164, 6), // "onHelp"
QT_MOC_LITERAL(13, 171, 25), // "onHelpOpenHelpPerspective"
QT_MOC_LITERAL(14, 197, 7) // "onAbout"

    },
    "sv4guiWorkbenchWindowAdvisorHack\0"
    "onUndo\0\0onRedo\0onImageNavigator\0"
    "onViewNavigator\0onEditPreferences\0"
    "onQuit\0onResetPerspective\0onClosePerspective\0"
    "onNewWindow\0onIntro\0onHelp\0"
    "onHelpOpenHelpPerspective\0onAbout"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_sv4guiWorkbenchWindowAdvisorHack[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x0a /* Public */,
       3,    0,   80,    2, 0x0a /* Public */,
       4,    0,   81,    2, 0x0a /* Public */,
       5,    0,   82,    2, 0x0a /* Public */,
       6,    0,   83,    2, 0x0a /* Public */,
       7,    0,   84,    2, 0x0a /* Public */,
       8,    0,   85,    2, 0x0a /* Public */,
       9,    0,   86,    2, 0x0a /* Public */,
      10,    0,   87,    2, 0x0a /* Public */,
      11,    0,   88,    2, 0x0a /* Public */,
      12,    0,   89,    2, 0x0a /* Public */,
      13,    0,   90,    2, 0x0a /* Public */,
      14,    0,   91,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void sv4guiWorkbenchWindowAdvisorHack::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        sv4guiWorkbenchWindowAdvisorHack *_t = static_cast<sv4guiWorkbenchWindowAdvisorHack *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onUndo(); break;
        case 1: _t->onRedo(); break;
        case 2: _t->onImageNavigator(); break;
        case 3: _t->onViewNavigator(); break;
        case 4: _t->onEditPreferences(); break;
        case 5: _t->onQuit(); break;
        case 6: _t->onResetPerspective(); break;
        case 7: _t->onClosePerspective(); break;
        case 8: _t->onNewWindow(); break;
        case 9: _t->onIntro(); break;
        case 10: _t->onHelp(); break;
        case 11: _t->onHelpOpenHelpPerspective(); break;
        case 12: _t->onAbout(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject sv4guiWorkbenchWindowAdvisorHack::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_sv4guiWorkbenchWindowAdvisorHack.data,
      qt_meta_data_sv4guiWorkbenchWindowAdvisorHack,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *sv4guiWorkbenchWindowAdvisorHack::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *sv4guiWorkbenchWindowAdvisorHack::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_sv4guiWorkbenchWindowAdvisorHack.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int sv4guiWorkbenchWindowAdvisorHack::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
