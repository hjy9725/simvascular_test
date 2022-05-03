/****************************************************************************
** Meta object code from reading C++ file 'sv4gui_SegSelectionWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "sv4gui_SegSelectionWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sv4gui_SegSelectionWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_sv4guiSegSelectionWidget_t {
    QByteArrayData data[16];
    char stringdata0[189];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_sv4guiSegSelectionWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_sv4guiSegSelectionWidget_t qt_meta_stringdata_sv4guiSegSelectionWidget = {
    {
QT_MOC_LITERAL(0, 0, 24), // "sv4guiSegSelectionWidget"
QT_MOC_LITERAL(1, 25, 8), // "accepted"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 29), // "TableViewContextMenuRequested"
QT_MOC_LITERAL(4, 65, 5), // "index"
QT_MOC_LITERAL(5, 71, 11), // "UseSelected"
QT_MOC_LITERAL(6, 83, 7), // "checked"
QT_MOC_LITERAL(7, 91, 6), // "UseAll"
QT_MOC_LITERAL(8, 98, 14), // "NotUseSelected"
QT_MOC_LITERAL(9, 113, 7), // "UseNone"
QT_MOC_LITERAL(10, 121, 7), // "Confirm"
QT_MOC_LITERAL(11, 129, 6), // "Cancel"
QT_MOC_LITERAL(12, 136, 9), // "OKLofting"
QT_MOC_LITERAL(13, 146, 12), // "ApplyLofting"
QT_MOC_LITERAL(14, 159, 14), // "HideLoftWidget"
QT_MOC_LITERAL(15, 174, 14) // "ShowLoftWidget"

    },
    "sv4guiSegSelectionWidget\0accepted\0\0"
    "TableViewContextMenuRequested\0index\0"
    "UseSelected\0checked\0UseAll\0NotUseSelected\0"
    "UseNone\0Confirm\0Cancel\0OKLofting\0"
    "ApplyLofting\0HideLoftWidget\0ShowLoftWidget"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_sv4guiSegSelectionWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   94,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   95,    2, 0x0a /* Public */,
       5,    1,   98,    2, 0x0a /* Public */,
       5,    0,  101,    2, 0x2a /* Public | MethodCloned */,
       7,    1,  102,    2, 0x0a /* Public */,
       7,    0,  105,    2, 0x2a /* Public | MethodCloned */,
       8,    1,  106,    2, 0x0a /* Public */,
       8,    0,  109,    2, 0x2a /* Public | MethodCloned */,
       9,    1,  110,    2, 0x0a /* Public */,
       9,    0,  113,    2, 0x2a /* Public | MethodCloned */,
      10,    0,  114,    2, 0x0a /* Public */,
      11,    0,  115,    2, 0x0a /* Public */,
      12,    0,  116,    2, 0x0a /* Public */,
      13,    0,  117,    2, 0x0a /* Public */,
      14,    0,  118,    2, 0x0a /* Public */,
      15,    0,  119,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QPoint,    4,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void sv4guiSegSelectionWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        sv4guiSegSelectionWidget *_t = static_cast<sv4guiSegSelectionWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->accepted(); break;
        case 1: _t->TableViewContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 2: _t->UseSelected((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->UseSelected(); break;
        case 4: _t->UseAll((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->UseAll(); break;
        case 6: _t->NotUseSelected((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->NotUseSelected(); break;
        case 8: _t->UseNone((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->UseNone(); break;
        case 10: _t->Confirm(); break;
        case 11: _t->Cancel(); break;
        case 12: _t->OKLofting(); break;
        case 13: _t->ApplyLofting(); break;
        case 14: _t->HideLoftWidget(); break;
        case 15: _t->ShowLoftWidget(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (sv4guiSegSelectionWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&sv4guiSegSelectionWidget::accepted)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject sv4guiSegSelectionWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_sv4guiSegSelectionWidget.data,
      qt_meta_data_sv4guiSegSelectionWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *sv4guiSegSelectionWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *sv4guiSegSelectionWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_sv4guiSegSelectionWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int sv4guiSegSelectionWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void sv4guiSegSelectionWidget::accepted()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
