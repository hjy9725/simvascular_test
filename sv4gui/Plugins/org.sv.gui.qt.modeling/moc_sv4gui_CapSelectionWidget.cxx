/****************************************************************************
** Meta object code from reading C++ file 'sv4gui_CapSelectionWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "sv4gui_CapSelectionWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sv4gui_CapSelectionWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_sv4guiCapSelectionWidget_t {
    QByteArrayData data[12];
    char stringdata0[136];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_sv4guiCapSelectionWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_sv4guiCapSelectionWidget_t qt_meta_stringdata_sv4guiCapSelectionWidget = {
    {
QT_MOC_LITERAL(0, 0, 24), // "sv4guiCapSelectionWidget"
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
QT_MOC_LITERAL(11, 129, 6) // "Cancel"

    },
    "sv4guiCapSelectionWidget\0accepted\0\0"
    "TableViewContextMenuRequested\0index\0"
    "UseSelected\0checked\0UseAll\0NotUseSelected\0"
    "UseNone\0Confirm\0Cancel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_sv4guiCapSelectionWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   75,    2, 0x0a /* Public */,
       5,    1,   78,    2, 0x0a /* Public */,
       5,    0,   81,    2, 0x2a /* Public | MethodCloned */,
       7,    1,   82,    2, 0x0a /* Public */,
       7,    0,   85,    2, 0x2a /* Public | MethodCloned */,
       8,    1,   86,    2, 0x0a /* Public */,
       8,    0,   89,    2, 0x2a /* Public | MethodCloned */,
       9,    1,   90,    2, 0x0a /* Public */,
       9,    0,   93,    2, 0x2a /* Public | MethodCloned */,
      10,    0,   94,    2, 0x0a /* Public */,
      11,    0,   95,    2, 0x0a /* Public */,

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

       0        // eod
};

void sv4guiCapSelectionWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        sv4guiCapSelectionWidget *_t = static_cast<sv4guiCapSelectionWidget *>(_o);
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
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (sv4guiCapSelectionWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&sv4guiCapSelectionWidget::accepted)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject sv4guiCapSelectionWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_sv4guiCapSelectionWidget.data,
      qt_meta_data_sv4guiCapSelectionWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *sv4guiCapSelectionWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *sv4guiCapSelectionWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_sv4guiCapSelectionWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int sv4guiCapSelectionWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void sv4guiCapSelectionWidget::accepted()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
