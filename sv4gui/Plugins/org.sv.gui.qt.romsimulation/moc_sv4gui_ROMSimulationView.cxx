/****************************************************************************
** Meta object code from reading C++ file 'sv4gui_ROMSimulationView.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "sv4gui_ROMSimulationView.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sv4gui_ROMSimulationView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_sv4guiROMSimulationView_t {
    QByteArrayData data[71];
    char stringdata0[1148];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_sv4guiROMSimulationView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_sv4guiROMSimulationView_t qt_meta_stringdata_sv4guiROMSimulationView = {
    {
QT_MOC_LITERAL(0, 0, 23), // "sv4guiROMSimulationView"
QT_MOC_LITERAL(1, 24, 13), // "SaveToManager"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 8), // "ClearAll"
QT_MOC_LITERAL(4, 48, 12), // "AddObservers"
QT_MOC_LITERAL(5, 61, 15), // "RemoveObservers"
QT_MOC_LITERAL(6, 77, 23), // "UpdateFaceListSelection"
QT_MOC_LITERAL(7, 101, 14), // "UpdateGUIBasic"
QT_MOC_LITERAL(8, 116, 23), // "UpdateGUIConvertResults"
QT_MOC_LITERAL(9, 140, 13), // "UpdateGUIMesh"
QT_MOC_LITERAL(10, 154, 14), // "UpdateModelGUI"
QT_MOC_LITERAL(11, 169, 27), // "TableViewBasicDoubleClicked"
QT_MOC_LITERAL(12, 197, 11), // "QModelIndex"
QT_MOC_LITERAL(13, 209, 5), // "index"
QT_MOC_LITERAL(14, 215, 24), // "TableCapSelectionChanged"
QT_MOC_LITERAL(15, 240, 14), // "QItemSelection"
QT_MOC_LITERAL(16, 255, 8), // "selected"
QT_MOC_LITERAL(17, 264, 10), // "deselected"
QT_MOC_LITERAL(18, 275, 25), // "TableViewCapDoubleClicked"
QT_MOC_LITERAL(19, 301, 32), // "TableViewCapContextMenuRequested"
QT_MOC_LITERAL(20, 334, 3), // "pos"
QT_MOC_LITERAL(21, 338, 15), // "ShowCapBCWidget"
QT_MOC_LITERAL(22, 354, 7), // "checked"
QT_MOC_LITERAL(23, 362, 17), // "SetDistalPressure"
QT_MOC_LITERAL(24, 380, 8), // "SetCapBC"
QT_MOC_LITERAL(25, 389, 17), // "ShowSplitBCWidget"
QT_MOC_LITERAL(26, 407, 11), // "splitTarget"
QT_MOC_LITERAL(27, 419, 18), // "ShowSplitBCWidgetR"
QT_MOC_LITERAL(28, 438, 18), // "ShowSplitBCWidgetC"
QT_MOC_LITERAL(29, 457, 10), // "SplitCapBC"
QT_MOC_LITERAL(30, 468, 12), // "UpdateGUICap"
QT_MOC_LITERAL(31, 481, 19), // "SelectMaterialModel"
QT_MOC_LITERAL(32, 501, 24), // "TableVarSelectionChanged"
QT_MOC_LITERAL(33, 526, 32), // "TableViewVarContextMenuRequested"
QT_MOC_LITERAL(34, 559, 7), // "SetVarE"
QT_MOC_LITERAL(35, 567, 15), // "SetVarThickness"
QT_MOC_LITERAL(36, 583, 13), // "UpdateGUIWall"
QT_MOC_LITERAL(37, 597, 15), // "UpdateGUISolver"
QT_MOC_LITERAL(38, 613, 12), // "UpdateGUIJob"
QT_MOC_LITERAL(39, 626, 15), // "UpdateGUIRunDir"
QT_MOC_LITERAL(40, 642, 14), // "ToolBoxChanged"
QT_MOC_LITERAL(41, 657, 14), // "Generate1DMesh"
QT_MOC_LITERAL(42, 672, 10), // "Show1DMesh"
QT_MOC_LITERAL(43, 683, 14), // "SetElementSize"
QT_MOC_LITERAL(44, 698, 8), // "ReadMesh"
QT_MOC_LITERAL(45, 707, 23), // "UpdateCenterlinesSource"
QT_MOC_LITERAL(46, 731, 21), // "SelectCenterlinesFile"
QT_MOC_LITERAL(47, 753, 20), // "CalculateCenterlines"
QT_MOC_LITERAL(48, 774, 15), // "ShowCenterlines"
QT_MOC_LITERAL(49, 790, 18), // "SetModelInletFaces"
QT_MOC_LITERAL(50, 809, 15), // "SelectModelFile"
QT_MOC_LITERAL(51, 825, 21), // "SelectModelInletFaces"
QT_MOC_LITERAL(52, 847, 4), // "show"
QT_MOC_LITERAL(53, 852, 9), // "ShowModel"
QT_MOC_LITERAL(54, 862, 24), // "UpdateSurfaceModelSource"
QT_MOC_LITERAL(55, 887, 21), // "CreateSimulationFiles"
QT_MOC_LITERAL(56, 909, 11), // "ImportFiles"
QT_MOC_LITERAL(57, 921, 6), // "RunJob"
QT_MOC_LITERAL(58, 928, 23), // "SelectSegmentExportType"
QT_MOC_LITERAL(59, 952, 13), // "ExportResults"
QT_MOC_LITERAL(60, 966, 12), // "SetResultDir"
QT_MOC_LITERAL(61, 979, 13), // "SetConvertDir"
QT_MOC_LITERAL(62, 993, 15), // "UpdateJobStatus"
QT_MOC_LITERAL(63, 1009, 12), // "UpdateSimJob"
QT_MOC_LITERAL(64, 1022, 21), // "UpdateSurfaceMeshName"
QT_MOC_LITERAL(65, 1044, 24), // "SetupInternalSolverPaths"
QT_MOC_LITERAL(66, 1069, 24), // "ShowConvertWorkerMessage"
QT_MOC_LITERAL(67, 1094, 8), // "errorMsg"
QT_MOC_LITERAL(68, 1103, 3), // "msg"
QT_MOC_LITERAL(69, 1107, 18), // "ConvertWorkerError"
QT_MOC_LITERAL(70, 1126, 21) // "ConvertWorkerFinished"

    },
    "sv4guiROMSimulationView\0SaveToManager\0"
    "\0ClearAll\0AddObservers\0RemoveObservers\0"
    "UpdateFaceListSelection\0UpdateGUIBasic\0"
    "UpdateGUIConvertResults\0UpdateGUIMesh\0"
    "UpdateModelGUI\0TableViewBasicDoubleClicked\0"
    "QModelIndex\0index\0TableCapSelectionChanged\0"
    "QItemSelection\0selected\0deselected\0"
    "TableViewCapDoubleClicked\0"
    "TableViewCapContextMenuRequested\0pos\0"
    "ShowCapBCWidget\0checked\0SetDistalPressure\0"
    "SetCapBC\0ShowSplitBCWidget\0splitTarget\0"
    "ShowSplitBCWidgetR\0ShowSplitBCWidgetC\0"
    "SplitCapBC\0UpdateGUICap\0SelectMaterialModel\0"
    "TableVarSelectionChanged\0"
    "TableViewVarContextMenuRequested\0"
    "SetVarE\0SetVarThickness\0UpdateGUIWall\0"
    "UpdateGUISolver\0UpdateGUIJob\0"
    "UpdateGUIRunDir\0ToolBoxChanged\0"
    "Generate1DMesh\0Show1DMesh\0SetElementSize\0"
    "ReadMesh\0UpdateCenterlinesSource\0"
    "SelectCenterlinesFile\0CalculateCenterlines\0"
    "ShowCenterlines\0SetModelInletFaces\0"
    "SelectModelFile\0SelectModelInletFaces\0"
    "show\0ShowModel\0UpdateSurfaceModelSource\0"
    "CreateSimulationFiles\0ImportFiles\0"
    "RunJob\0SelectSegmentExportType\0"
    "ExportResults\0SetResultDir\0SetConvertDir\0"
    "UpdateJobStatus\0UpdateSimJob\0"
    "UpdateSurfaceMeshName\0SetupInternalSolverPaths\0"
    "ShowConvertWorkerMessage\0errorMsg\0msg\0"
    "ConvertWorkerError\0ConvertWorkerFinished"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_sv4guiROMSimulationView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      67,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  349,    2, 0x0a /* Public */,
       3,    0,  350,    2, 0x0a /* Public */,
       4,    0,  351,    2, 0x0a /* Public */,
       5,    0,  352,    2, 0x0a /* Public */,
       6,    0,  353,    2, 0x0a /* Public */,
       7,    0,  354,    2, 0x0a /* Public */,
       8,    0,  355,    2, 0x0a /* Public */,
       9,    0,  356,    2, 0x0a /* Public */,
      10,    0,  357,    2, 0x0a /* Public */,
      11,    1,  358,    2, 0x0a /* Public */,
      14,    2,  361,    2, 0x0a /* Public */,
      18,    1,  366,    2, 0x0a /* Public */,
      19,    1,  369,    2, 0x0a /* Public */,
      21,    1,  372,    2, 0x0a /* Public */,
      21,    0,  375,    2, 0x2a /* Public | MethodCloned */,
      23,    1,  376,    2, 0x0a /* Public */,
      23,    0,  379,    2, 0x2a /* Public | MethodCloned */,
      24,    0,  380,    2, 0x0a /* Public */,
      25,    1,  381,    2, 0x0a /* Public */,
      27,    1,  384,    2, 0x0a /* Public */,
      27,    0,  387,    2, 0x2a /* Public | MethodCloned */,
      28,    1,  388,    2, 0x0a /* Public */,
      28,    0,  391,    2, 0x2a /* Public | MethodCloned */,
      29,    0,  392,    2, 0x0a /* Public */,
      30,    0,  393,    2, 0x0a /* Public */,
      31,    1,  394,    2, 0x0a /* Public */,
      32,    2,  397,    2, 0x0a /* Public */,
      33,    1,  402,    2, 0x0a /* Public */,
      34,    1,  405,    2, 0x0a /* Public */,
      34,    0,  408,    2, 0x2a /* Public | MethodCloned */,
      35,    1,  409,    2, 0x0a /* Public */,
      35,    0,  412,    2, 0x2a /* Public | MethodCloned */,
      36,    0,  413,    2, 0x0a /* Public */,
      37,    0,  414,    2, 0x0a /* Public */,
      38,    0,  415,    2, 0x0a /* Public */,
      39,    0,  416,    2, 0x0a /* Public */,
      40,    1,  417,    2, 0x0a /* Public */,
      41,    0,  420,    2, 0x0a /* Public */,
      42,    0,  421,    2, 0x0a /* Public */,
      43,    1,  422,    2, 0x0a /* Public */,
      44,    0,  425,    2, 0x0a /* Public */,
      45,    0,  426,    2, 0x0a /* Public */,
      46,    0,  427,    2, 0x0a /* Public */,
      47,    0,  428,    2, 0x0a /* Public */,
      48,    1,  429,    2, 0x0a /* Public */,
      48,    0,  432,    2, 0x2a /* Public | MethodCloned */,
      49,    0,  433,    2, 0x0a /* Public */,
      50,    0,  434,    2, 0x0a /* Public */,
      51,    1,  435,    2, 0x0a /* Public */,
      51,    0,  438,    2, 0x2a /* Public | MethodCloned */,
      53,    1,  439,    2, 0x0a /* Public */,
      53,    0,  442,    2, 0x2a /* Public | MethodCloned */,
      54,    0,  443,    2, 0x0a /* Public */,
      55,    0,  444,    2, 0x0a /* Public */,
      56,    0,  445,    2, 0x0a /* Public */,
      57,    0,  446,    2, 0x0a /* Public */,
      58,    1,  447,    2, 0x0a /* Public */,
      59,    0,  450,    2, 0x0a /* Public */,
      60,    0,  451,    2, 0x0a /* Public */,
      61,    0,  452,    2, 0x0a /* Public */,
      62,    0,  453,    2, 0x0a /* Public */,
      63,    0,  454,    2, 0x0a /* Public */,
      64,    0,  455,    2, 0x0a /* Public */,
      65,    0,  456,    2, 0x0a /* Public */,
      66,    2,  457,    2, 0x0a /* Public */,
      69,    1,  462,    2, 0x0a /* Public */,
      70,    0,  465,    2, 0x0a /* Public */,

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
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, 0x80000000 | 15, 0x80000000 | 15,   16,   17,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, QMetaType::QPoint,   20,
    QMetaType::Void, QMetaType::Bool,   22,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   22,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   26,
    QMetaType::Void, QMetaType::Bool,   22,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   22,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, 0x80000000 | 15, 0x80000000 | 15,   16,   17,
    QMetaType::Void, QMetaType::QPoint,   20,
    QMetaType::Void, QMetaType::Bool,   22,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   22,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   22,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   52,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   22,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool, QMetaType::QString,   67,   68,
    QMetaType::Void, QMetaType::QString,   68,
    QMetaType::Void,

       0        // eod
};

void sv4guiROMSimulationView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        sv4guiROMSimulationView *_t = static_cast<sv4guiROMSimulationView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->SaveToManager(); break;
        case 1: _t->ClearAll(); break;
        case 2: _t->AddObservers(); break;
        case 3: _t->RemoveObservers(); break;
        case 4: _t->UpdateFaceListSelection(); break;
        case 5: _t->UpdateGUIBasic(); break;
        case 6: _t->UpdateGUIConvertResults(); break;
        case 7: _t->UpdateGUIMesh(); break;
        case 8: _t->UpdateModelGUI(); break;
        case 9: _t->TableViewBasicDoubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 10: _t->TableCapSelectionChanged((*reinterpret_cast< const QItemSelection(*)>(_a[1])),(*reinterpret_cast< const QItemSelection(*)>(_a[2]))); break;
        case 11: _t->TableViewCapDoubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 12: _t->TableViewCapContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 13: _t->ShowCapBCWidget((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->ShowCapBCWidget(); break;
        case 15: _t->SetDistalPressure((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: _t->SetDistalPressure(); break;
        case 17: _t->SetCapBC(); break;
        case 18: _t->ShowSplitBCWidget((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 19: _t->ShowSplitBCWidgetR((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 20: _t->ShowSplitBCWidgetR(); break;
        case 21: _t->ShowSplitBCWidgetC((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 22: _t->ShowSplitBCWidgetC(); break;
        case 23: _t->SplitCapBC(); break;
        case 24: _t->UpdateGUICap(); break;
        case 25: _t->SelectMaterialModel((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 26: _t->TableVarSelectionChanged((*reinterpret_cast< const QItemSelection(*)>(_a[1])),(*reinterpret_cast< const QItemSelection(*)>(_a[2]))); break;
        case 27: _t->TableViewVarContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 28: _t->SetVarE((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 29: _t->SetVarE(); break;
        case 30: _t->SetVarThickness((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 31: _t->SetVarThickness(); break;
        case 32: _t->UpdateGUIWall(); break;
        case 33: _t->UpdateGUISolver(); break;
        case 34: _t->UpdateGUIJob(); break;
        case 35: _t->UpdateGUIRunDir(); break;
        case 36: _t->ToolBoxChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 37: _t->Generate1DMesh(); break;
        case 38: _t->Show1DMesh(); break;
        case 39: _t->SetElementSize((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 40: _t->ReadMesh(); break;
        case 41: _t->UpdateCenterlinesSource(); break;
        case 42: _t->SelectCenterlinesFile(); break;
        case 43: _t->CalculateCenterlines(); break;
        case 44: _t->ShowCenterlines((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 45: _t->ShowCenterlines(); break;
        case 46: _t->SetModelInletFaces(); break;
        case 47: _t->SelectModelFile(); break;
        case 48: _t->SelectModelInletFaces((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 49: _t->SelectModelInletFaces(); break;
        case 50: _t->ShowModel((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 51: _t->ShowModel(); break;
        case 52: _t->UpdateSurfaceModelSource(); break;
        case 53: _t->CreateSimulationFiles(); break;
        case 54: _t->ImportFiles(); break;
        case 55: _t->RunJob(); break;
        case 56: _t->SelectSegmentExportType((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 57: _t->ExportResults(); break;
        case 58: _t->SetResultDir(); break;
        case 59: _t->SetConvertDir(); break;
        case 60: _t->UpdateJobStatus(); break;
        case 61: _t->UpdateSimJob(); break;
        case 62: _t->UpdateSurfaceMeshName(); break;
        case 63: _t->SetupInternalSolverPaths(); break;
        case 64: _t->ShowConvertWorkerMessage((*reinterpret_cast< const bool(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 65: _t->ConvertWorkerError((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 66: _t->ConvertWorkerFinished(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QItemSelection >(); break;
            }
            break;
        case 26:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QItemSelection >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject sv4guiROMSimulationView::staticMetaObject = {
    { &sv4guiQmitkFunctionality::staticMetaObject, qt_meta_stringdata_sv4guiROMSimulationView.data,
      qt_meta_data_sv4guiROMSimulationView,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *sv4guiROMSimulationView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *sv4guiROMSimulationView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_sv4guiROMSimulationView.stringdata0))
        return static_cast<void*>(this);
    return sv4guiQmitkFunctionality::qt_metacast(_clname);
}

int sv4guiROMSimulationView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = sv4guiQmitkFunctionality::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 67)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 67;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 67)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 67;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
