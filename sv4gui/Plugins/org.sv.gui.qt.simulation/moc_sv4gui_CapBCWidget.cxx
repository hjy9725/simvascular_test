/****************************************************************************
** Meta object code from reading C++ file 'sv4gui_CapBCWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "sv4gui_CapBCWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sv4gui_CapBCWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_sv4guiCapBCWidget_t {
    QByteArrayData data[9];
    char stringdata0[112];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_sv4guiCapBCWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_sv4guiCapBCWidget_t qt_meta_stringdata_sv4guiCapBCWidget = {
    {
QT_MOC_LITERAL(0, 0, 17), // "sv4guiCapBCWidget"
QT_MOC_LITERAL(1, 18, 8), // "accepted"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 7), // "Confirm"
QT_MOC_LITERAL(4, 36, 6), // "Cancel"
QT_MOC_LITERAL(5, 43, 16), // "SelectionChanged"
QT_MOC_LITERAL(6, 60, 4), // "text"
QT_MOC_LITERAL(7, 65, 20), // "LoadFlowrateFromFile"
QT_MOC_LITERAL(8, 86, 25) // "LoadTimedPressureFromFile"

    },
    "sv4guiCapBCWidget\0accepted\0\0Confirm\0"
    "Cancel\0SelectionChanged\0text\0"
    "LoadFlowrateFromFile\0LoadTimedPressureFromFile"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_sv4guiCapBCWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   45,    2, 0x0a /* Public */,
       4,    0,   46,    2, 0x0a /* Public */,
       5,    1,   47,    2, 0x0a /* Public */,
       7,    0,   50,    2, 0x0a /* Public */,
       8,    0,   51,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void sv4guiCapBCWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        sv4guiCapBCWidget *_t = static_cast<sv4guiCapBCWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->accepted(); break;
        case 1: _t->Confirm(); break;
        case 2: _t->Cancel(); break;
        case 3: _t->SelectionChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->LoadFlowrateFromFile(); break;
        case 5: _t->LoadTimedPressureFromFile(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (sv4guiCapBCWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&sv4guiCapBCWidget::accepted)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject sv4guiCapBCWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_sv4guiCapBCWidget.data,
      qt_meta_data_sv4guiCapBCWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *sv4guiCapBCWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *sv4guiCapBCWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_sv4guiCapBCWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int sv4guiCapBCWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void sv4guiCapBCWidget::accepted()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
