/********************************************************************************
** Form generated from reading UI file 'sv4gui_ROMSimulationView.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SV4GUI_ROMSIMULATIONVIEW_H
#define UI_SV4GUI_ROMSIMULATIONVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_sv4guiROMSimulationView
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widgetTop;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label;
    QLabel *JobStatusValueLabel;
    QLabel *labelJobName;
    QGroupBox *ModelOrdr_GroupBox;
    QHBoxLayout *horizontalLayout_14;
    QRadioButton *ModelOrderZero_RadioButton;
    QRadioButton *ModelOrderOne_RadioButton;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_2;
    QToolBox *toolBox;
    QWidget *page_7;
    QVBoxLayout *verticalLayout_18;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout_5;
    QWidget *widget_12;
    QHBoxLayout *horizontalLayout_11;
    QLabel *ModelLabel;
    QLabel *ModelNameLabel;
    QWidget *widget_16;
    QGridLayout *gridLayout_3;
    QPushButton *selectModelFacesPushButton;
    QLabel *InletFaceLabel;
    QLabel *InletFaceNameLabel;
    QWidget *widget_18;
    QHBoxLayout *horizontalLayout_12;
    QPushButton *CalculateCenterlinesPushButton;
    QWidget *widget_19;
    QHBoxLayout *horizontalLayout_13;
    QLabel *ElementSizeLabel;
    QLineEdit *ElementSizeLineEdit;
    QWidget *widget_21;
    QHBoxLayout *horizontalLayout_4;
    QLabel *ElementSizeLabel_2;
    QLineEdit *NumSegmentsLineEdit;
    QWidget *widget_23;
    QHBoxLayout *horizontalLayout_10;
    QCheckBox *AdaptiveMeshingCheckBox;
    QWidget *page;
    QVBoxLayout *verticalLayout_7;
    QTableView *tableViewBasic;
    QWidget *page_2;
    QVBoxLayout *verticalLayout_8;
    QWidget *widget_6;
    QVBoxLayout *verticalLayout_9;
    QTableView *tableViewCap;
    QWidget *page_3;
    QVBoxLayout *verticalLayout_3;
    QWidget *widget_4;
    QGridLayout *gridLayout_7;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QComboBox *MaterialModelComboBox;
    QStackedWidget *MaterialModel_StackedWidget;
    QWidget *LinearMatProp_Panel;
    QGridLayout *gridLayout_4;
    QLabel *LinearMatProp_Ehr_Label;
    QLineEdit *LinearMatProp_Ehr_LineEdit;
    QLabel *LinearMatProp_Pressure_Label;
    QLineEdit *LinearMatProp_Pressure_LineEdit;
    QWidget *OlufsenMatProp_Panel;
    QGridLayout *gridLayout_6;
    QLabel *label_4;
    QLineEdit *OlufsenMatProp_K1_LineEdit;
    QLabel *label_5;
    QLineEdit *OlufsenMatProp_K2_LineEdit;
    QLabel *label_6;
    QLineEdit *OlufsenMatProp_K3_LineEdit;
    QLabel *OlufsenMatProp_Exponent_Label;
    QLineEdit *OlufsenMatProp_Exponent_LineEdit;
    QLabel *OlufsenMatProp_Pressure_Label;
    QLineEdit *OlufsenMatProp_Pressure_LineEdit;
    QWidget *widget_10;
    QHBoxLayout *horizontalLayout_6;
    QWidget *widgetVariable;
    QVBoxLayout *verticalLayout_6;
    QSpacerItem *verticalSpacer;
    QWidget *page_4;
    QVBoxLayout *verticalLayout_10;
    QTableView *tableViewSolver;
    QWidget *page_5;
    QVBoxLayout *verticalLayout_11;
    QWidget *widget_7;
    QVBoxLayout *verticalLayout_12;
    QWidget *widgetRun;
    QGridLayout *gridLayout;
    QPushButton *RunSimulationPushButton;
    QPushButton *CreateSimulationFilesButton;
    QWidget *widget_15;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *verticalSpacer_2;
    QWidget *Convertresults_Panel;
    QVBoxLayout *verticalLayout_13;
    QWidget *widget_11;
    QVBoxLayout *verticalLayout_4;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout_16;
    QWidget *widget_17;
    QHBoxLayout *horizontalLayout;
    QLabel *label_20;
    QWidget *widget;
    QGridLayout *gridLayout_5;
    QToolButton *toolButtonResultDir;
    QLineEdit *lineEditResultDir;
    QFrame *frame_3;
    QVBoxLayout *verticalLayout_17;
    QWidget *widget_20;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_21;
    QWidget *widget_8;
    QGridLayout *gridLayout_9;
    QToolButton *toolButtonConvertDir;
    QLineEdit *lineEditConvertDir;
    QFrame *frame_13;
    QVBoxLayout *verticalLayout_15;
    QLabel *label_13;
    QWidget *widget_14;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_14;
    QLineEdit *lineEditStart;
    QLabel *label_15;
    QLineEdit *lineEditStop;
    QFrame *frame_15;
    QGridLayout *gridLayout_2;
    QLabel *label_2;
    QComboBox *SegmentExportComboBox;
    QLabel *label_7;
    QListWidget *DataExportListWidget;
    QFrame *ProjectMesh_Frame;
    QHBoxLayout *horizontalLayout_5;
    QCheckBox *ProjectTo3DMesh_CheckBox;
    QComboBox *SimName_ComboBox;
    QCheckBox *ProjectCenterlines_CheckBox;
    QWidget *widget_13;
    QHBoxLayout *horizontalLayout_9;
    QCheckBox *ExportNumpy_CheckBox;
    QPushButton *btnExportResults;
    QSpacerItem *verticalSpacer_3;

    void setupUi(QWidget *sv4guiROMSimulationView)
    {
        if (sv4guiROMSimulationView->objectName().isEmpty())
            sv4guiROMSimulationView->setObjectName(QStringLiteral("sv4guiROMSimulationView"));
        sv4guiROMSimulationView->resize(417, 945);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(sv4guiROMSimulationView->sizePolicy().hasHeightForWidth());
        sv4guiROMSimulationView->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(sv4guiROMSimulationView);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        widgetTop = new QWidget(sv4guiROMSimulationView);
        widgetTop->setObjectName(QStringLiteral("widgetTop"));
        horizontalLayout_15 = new QHBoxLayout(widgetTop);
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        label = new QLabel(widgetTop);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setLayoutDirection(Qt::LeftToRight);

        horizontalLayout_15->addWidget(label);

        JobStatusValueLabel = new QLabel(widgetTop);
        JobStatusValueLabel->setObjectName(QStringLiteral("JobStatusValueLabel"));

        horizontalLayout_15->addWidget(JobStatusValueLabel);

        labelJobName = new QLabel(widgetTop);
        labelJobName->setObjectName(QStringLiteral("labelJobName"));

        horizontalLayout_15->addWidget(labelJobName);

        ModelOrdr_GroupBox = new QGroupBox(widgetTop);
        ModelOrdr_GroupBox->setObjectName(QStringLiteral("ModelOrdr_GroupBox"));
        sizePolicy1.setHeightForWidth(ModelOrdr_GroupBox->sizePolicy().hasHeightForWidth());
        ModelOrdr_GroupBox->setSizePolicy(sizePolicy1);
        ModelOrdr_GroupBox->setLayoutDirection(Qt::LeftToRight);
        horizontalLayout_14 = new QHBoxLayout(ModelOrdr_GroupBox);
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        ModelOrderZero_RadioButton = new QRadioButton(ModelOrdr_GroupBox);
        ModelOrderZero_RadioButton->setObjectName(QStringLiteral("ModelOrderZero_RadioButton"));
        ModelOrderZero_RadioButton->setChecked(true);

        horizontalLayout_14->addWidget(ModelOrderZero_RadioButton);

        ModelOrderOne_RadioButton = new QRadioButton(ModelOrdr_GroupBox);
        ModelOrderOne_RadioButton->setObjectName(QStringLiteral("ModelOrderOne_RadioButton"));
        ModelOrderOne_RadioButton->setChecked(false);

        horizontalLayout_14->addWidget(ModelOrderOne_RadioButton);


        horizontalLayout_15->addWidget(ModelOrdr_GroupBox);


        verticalLayout->addWidget(widgetTop);

        widget_2 = new QWidget(sv4guiROMSimulationView);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        verticalLayout_2 = new QVBoxLayout(widget_2);
        verticalLayout_2->setSpacing(5);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        toolBox = new QToolBox(widget_2);
        toolBox->setObjectName(QStringLiteral("toolBox"));
        page_7 = new QWidget();
        page_7->setObjectName(QStringLiteral("page_7"));
        page_7->setGeometry(QRect(0, 0, 393, 599));
        verticalLayout_18 = new QVBoxLayout(page_7);
        verticalLayout_18->setObjectName(QStringLiteral("verticalLayout_18"));
        widget_3 = new QWidget(page_7);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        verticalLayout_5 = new QVBoxLayout(widget_3);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        widget_12 = new QWidget(widget_3);
        widget_12->setObjectName(QStringLiteral("widget_12"));
        widget_12->setStyleSheet(QLatin1String("QWidget {\n"
"#background-color: rgb(225, 225, 225)\n"
"}"));
        horizontalLayout_11 = new QHBoxLayout(widget_12);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        ModelLabel = new QLabel(widget_12);
        ModelLabel->setObjectName(QStringLiteral("ModelLabel"));

        horizontalLayout_11->addWidget(ModelLabel);

        ModelNameLabel = new QLabel(widget_12);
        ModelNameLabel->setObjectName(QStringLiteral("ModelNameLabel"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(ModelNameLabel->sizePolicy().hasHeightForWidth());
        ModelNameLabel->setSizePolicy(sizePolicy2);
        ModelNameLabel->setStyleSheet(QLatin1String("QWidget {\n"
"background-color: white\n"
"}"));

        horizontalLayout_11->addWidget(ModelNameLabel);


        verticalLayout_5->addWidget(widget_12);

        widget_16 = new QWidget(widget_3);
        widget_16->setObjectName(QStringLiteral("widget_16"));
        widget_16->setStyleSheet(QLatin1String("QWidget {\n"
"#background-color: rgb(225, 225, 225)\n"
"}"));
        gridLayout_3 = new QGridLayout(widget_16);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        selectModelFacesPushButton = new QPushButton(widget_16);
        selectModelFacesPushButton->setObjectName(QStringLiteral("selectModelFacesPushButton"));
        sizePolicy2.setHeightForWidth(selectModelFacesPushButton->sizePolicy().hasHeightForWidth());
        selectModelFacesPushButton->setSizePolicy(sizePolicy2);

        gridLayout_3->addWidget(selectModelFacesPushButton, 0, 0, 1, 2);

        InletFaceLabel = new QLabel(widget_16);
        InletFaceLabel->setObjectName(QStringLiteral("InletFaceLabel"));

        gridLayout_3->addWidget(InletFaceLabel, 1, 0, 1, 1);

        InletFaceNameLabel = new QLabel(widget_16);
        InletFaceNameLabel->setObjectName(QStringLiteral("InletFaceNameLabel"));
        sizePolicy2.setHeightForWidth(InletFaceNameLabel->sizePolicy().hasHeightForWidth());
        InletFaceNameLabel->setSizePolicy(sizePolicy2);
        InletFaceNameLabel->setStyleSheet(QLatin1String("QWidget {\n"
"background-color: white\n"
"}"));

        gridLayout_3->addWidget(InletFaceNameLabel, 1, 1, 1, 1);


        verticalLayout_5->addWidget(widget_16);

        widget_18 = new QWidget(widget_3);
        widget_18->setObjectName(QStringLiteral("widget_18"));
        widget_18->setStyleSheet(QLatin1String("QWidget {\n"
"#background-color: rgb(225, 225, 225)\n"
"}"));
        horizontalLayout_12 = new QHBoxLayout(widget_18);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        CalculateCenterlinesPushButton = new QPushButton(widget_18);
        CalculateCenterlinesPushButton->setObjectName(QStringLiteral("CalculateCenterlinesPushButton"));
        sizePolicy2.setHeightForWidth(CalculateCenterlinesPushButton->sizePolicy().hasHeightForWidth());
        CalculateCenterlinesPushButton->setSizePolicy(sizePolicy2);

        horizontalLayout_12->addWidget(CalculateCenterlinesPushButton);


        verticalLayout_5->addWidget(widget_18);

        widget_19 = new QWidget(widget_3);
        widget_19->setObjectName(QStringLiteral("widget_19"));
        widget_19->setStyleSheet(QLatin1String("QWidget {\n"
"#background-color: rgb(225, 225, 225)\n"
"}"));
        horizontalLayout_13 = new QHBoxLayout(widget_19);
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        ElementSizeLabel = new QLabel(widget_19);
        ElementSizeLabel->setObjectName(QStringLiteral("ElementSizeLabel"));

        horizontalLayout_13->addWidget(ElementSizeLabel);

        ElementSizeLineEdit = new QLineEdit(widget_19);
        ElementSizeLineEdit->setObjectName(QStringLiteral("ElementSizeLineEdit"));

        horizontalLayout_13->addWidget(ElementSizeLineEdit);


        verticalLayout_5->addWidget(widget_19);

        widget_21 = new QWidget(widget_3);
        widget_21->setObjectName(QStringLiteral("widget_21"));
        widget_21->setStyleSheet(QLatin1String("QWidget {\n"
"#background-color: rgb(225, 225, 225)\n"
"}"));
        horizontalLayout_4 = new QHBoxLayout(widget_21);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        ElementSizeLabel_2 = new QLabel(widget_21);
        ElementSizeLabel_2->setObjectName(QStringLiteral("ElementSizeLabel_2"));

        horizontalLayout_4->addWidget(ElementSizeLabel_2);

        NumSegmentsLineEdit = new QLineEdit(widget_21);
        NumSegmentsLineEdit->setObjectName(QStringLiteral("NumSegmentsLineEdit"));

        horizontalLayout_4->addWidget(NumSegmentsLineEdit);


        verticalLayout_5->addWidget(widget_21);

        widget_23 = new QWidget(widget_3);
        widget_23->setObjectName(QStringLiteral("widget_23"));
        widget_23->setStyleSheet(QLatin1String("QWidget {\n"
"#background-color: rgb(225, 225, 225)\n"
"}"));
        horizontalLayout_10 = new QHBoxLayout(widget_23);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        AdaptiveMeshingCheckBox = new QCheckBox(widget_23);
        AdaptiveMeshingCheckBox->setObjectName(QStringLiteral("AdaptiveMeshingCheckBox"));

        horizontalLayout_10->addWidget(AdaptiveMeshingCheckBox);


        verticalLayout_5->addWidget(widget_23);


        verticalLayout_18->addWidget(widget_3);

        toolBox->addItem(page_7, QStringLiteral("Mesh"));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        page->setGeometry(QRect(0, 0, 98, 76));
        verticalLayout_7 = new QVBoxLayout(page);
        verticalLayout_7->setSpacing(5);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(5, 0, 5, 5);
        tableViewBasic = new QTableView(page);
        tableViewBasic->setObjectName(QStringLiteral("tableViewBasic"));
        tableViewBasic->setSelectionBehavior(QAbstractItemView::SelectRows);

        verticalLayout_7->addWidget(tableViewBasic);

        toolBox->addItem(page, QStringLiteral("Basic Parameters"));
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        page_2->setGeometry(QRect(0, 0, 98, 76));
        verticalLayout_8 = new QVBoxLayout(page_2);
        verticalLayout_8->setSpacing(5);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(5, 0, 5, 5);
        widget_6 = new QWidget(page_2);
        widget_6->setObjectName(QStringLiteral("widget_6"));
        verticalLayout_9 = new QVBoxLayout(widget_6);
        verticalLayout_9->setSpacing(5);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        tableViewCap = new QTableView(widget_6);
        tableViewCap->setObjectName(QStringLiteral("tableViewCap"));
        tableViewCap->setContextMenuPolicy(Qt::CustomContextMenu);
        tableViewCap->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableViewCap->setSortingEnabled(true);

        verticalLayout_9->addWidget(tableViewCap);


        verticalLayout_8->addWidget(widget_6);

        toolBox->addItem(page_2, QStringLiteral("Inlet and Outlet BCs"));
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        page_3->setGeometry(QRect(0, 0, 220, 244));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(page_3->sizePolicy().hasHeightForWidth());
        page_3->setSizePolicy(sizePolicy3);
        verticalLayout_3 = new QVBoxLayout(page_3);
        verticalLayout_3->setSpacing(5);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        widget_4 = new QWidget(page_3);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        sizePolicy3.setHeightForWidth(widget_4->sizePolicy().hasHeightForWidth());
        widget_4->setSizePolicy(sizePolicy3);
        gridLayout_7 = new QGridLayout(widget_4);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        widget_5 = new QWidget(widget_4);
        widget_5->setObjectName(QStringLiteral("widget_5"));
        sizePolicy3.setHeightForWidth(widget_5->sizePolicy().hasHeightForWidth());
        widget_5->setSizePolicy(sizePolicy3);
        horizontalLayout_2 = new QHBoxLayout(widget_5);
        horizontalLayout_2->setSpacing(5);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(widget_5);
        label_3->setObjectName(QStringLiteral("label_3"));
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(label_3);

        MaterialModelComboBox = new QComboBox(widget_5);
        MaterialModelComboBox->setObjectName(QStringLiteral("MaterialModelComboBox"));
        sizePolicy2.setHeightForWidth(MaterialModelComboBox->sizePolicy().hasHeightForWidth());
        MaterialModelComboBox->setSizePolicy(sizePolicy2);

        horizontalLayout_2->addWidget(MaterialModelComboBox);


        gridLayout_7->addWidget(widget_5, 0, 0, 1, 1);

        MaterialModel_StackedWidget = new QStackedWidget(widget_4);
        MaterialModel_StackedWidget->setObjectName(QStringLiteral("MaterialModel_StackedWidget"));
        sizePolicy3.setHeightForWidth(MaterialModel_StackedWidget->sizePolicy().hasHeightForWidth());
        MaterialModel_StackedWidget->setSizePolicy(sizePolicy3);
        LinearMatProp_Panel = new QWidget();
        LinearMatProp_Panel->setObjectName(QStringLiteral("LinearMatProp_Panel"));
        sizePolicy3.setHeightForWidth(LinearMatProp_Panel->sizePolicy().hasHeightForWidth());
        LinearMatProp_Panel->setSizePolicy(sizePolicy3);
        gridLayout_4 = new QGridLayout(LinearMatProp_Panel);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        LinearMatProp_Ehr_Label = new QLabel(LinearMatProp_Panel);
        LinearMatProp_Ehr_Label->setObjectName(QStringLiteral("LinearMatProp_Ehr_Label"));

        gridLayout_4->addWidget(LinearMatProp_Ehr_Label, 0, 0, 1, 1);

        LinearMatProp_Ehr_LineEdit = new QLineEdit(LinearMatProp_Panel);
        LinearMatProp_Ehr_LineEdit->setObjectName(QStringLiteral("LinearMatProp_Ehr_LineEdit"));

        gridLayout_4->addWidget(LinearMatProp_Ehr_LineEdit, 0, 1, 1, 1);

        LinearMatProp_Pressure_Label = new QLabel(LinearMatProp_Panel);
        LinearMatProp_Pressure_Label->setObjectName(QStringLiteral("LinearMatProp_Pressure_Label"));

        gridLayout_4->addWidget(LinearMatProp_Pressure_Label, 1, 0, 1, 1);

        LinearMatProp_Pressure_LineEdit = new QLineEdit(LinearMatProp_Panel);
        LinearMatProp_Pressure_LineEdit->setObjectName(QStringLiteral("LinearMatProp_Pressure_LineEdit"));

        gridLayout_4->addWidget(LinearMatProp_Pressure_LineEdit, 1, 1, 1, 1);

        MaterialModel_StackedWidget->addWidget(LinearMatProp_Panel);
        OlufsenMatProp_Panel = new QWidget();
        OlufsenMatProp_Panel->setObjectName(QStringLiteral("OlufsenMatProp_Panel"));
        sizePolicy3.setHeightForWidth(OlufsenMatProp_Panel->sizePolicy().hasHeightForWidth());
        OlufsenMatProp_Panel->setSizePolicy(sizePolicy3);
        gridLayout_6 = new QGridLayout(OlufsenMatProp_Panel);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        label_4 = new QLabel(OlufsenMatProp_Panel);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_6->addWidget(label_4, 0, 0, 1, 1);

        OlufsenMatProp_K1_LineEdit = new QLineEdit(OlufsenMatProp_Panel);
        OlufsenMatProp_K1_LineEdit->setObjectName(QStringLiteral("OlufsenMatProp_K1_LineEdit"));

        gridLayout_6->addWidget(OlufsenMatProp_K1_LineEdit, 0, 1, 1, 1);

        label_5 = new QLabel(OlufsenMatProp_Panel);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_6->addWidget(label_5, 1, 0, 1, 1);

        OlufsenMatProp_K2_LineEdit = new QLineEdit(OlufsenMatProp_Panel);
        OlufsenMatProp_K2_LineEdit->setObjectName(QStringLiteral("OlufsenMatProp_K2_LineEdit"));

        gridLayout_6->addWidget(OlufsenMatProp_K2_LineEdit, 1, 1, 1, 1);

        label_6 = new QLabel(OlufsenMatProp_Panel);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_6->addWidget(label_6, 2, 0, 1, 1);

        OlufsenMatProp_K3_LineEdit = new QLineEdit(OlufsenMatProp_Panel);
        OlufsenMatProp_K3_LineEdit->setObjectName(QStringLiteral("OlufsenMatProp_K3_LineEdit"));

        gridLayout_6->addWidget(OlufsenMatProp_K3_LineEdit, 2, 1, 1, 1);

        OlufsenMatProp_Exponent_Label = new QLabel(OlufsenMatProp_Panel);
        OlufsenMatProp_Exponent_Label->setObjectName(QStringLiteral("OlufsenMatProp_Exponent_Label"));

        gridLayout_6->addWidget(OlufsenMatProp_Exponent_Label, 3, 0, 1, 1);

        OlufsenMatProp_Exponent_LineEdit = new QLineEdit(OlufsenMatProp_Panel);
        OlufsenMatProp_Exponent_LineEdit->setObjectName(QStringLiteral("OlufsenMatProp_Exponent_LineEdit"));

        gridLayout_6->addWidget(OlufsenMatProp_Exponent_LineEdit, 3, 1, 1, 1);

        OlufsenMatProp_Pressure_Label = new QLabel(OlufsenMatProp_Panel);
        OlufsenMatProp_Pressure_Label->setObjectName(QStringLiteral("OlufsenMatProp_Pressure_Label"));

        gridLayout_6->addWidget(OlufsenMatProp_Pressure_Label, 4, 0, 1, 1);

        OlufsenMatProp_Pressure_LineEdit = new QLineEdit(OlufsenMatProp_Panel);
        OlufsenMatProp_Pressure_LineEdit->setObjectName(QStringLiteral("OlufsenMatProp_Pressure_LineEdit"));

        gridLayout_6->addWidget(OlufsenMatProp_Pressure_LineEdit, 4, 1, 1, 1);

        MaterialModel_StackedWidget->addWidget(OlufsenMatProp_Panel);

        gridLayout_7->addWidget(MaterialModel_StackedWidget, 1, 0, 1, 1);

        widget_10 = new QWidget(widget_4);
        widget_10->setObjectName(QStringLiteral("widget_10"));
        horizontalLayout_6 = new QHBoxLayout(widget_10);
        horizontalLayout_6->setSpacing(0);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        widgetVariable = new QWidget(widget_10);
        widgetVariable->setObjectName(QStringLiteral("widgetVariable"));
        verticalLayout_6 = new QVBoxLayout(widgetVariable);
        verticalLayout_6->setSpacing(0);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 5, 0, 0);

        horizontalLayout_6->addWidget(widgetVariable);

        verticalSpacer = new QSpacerItem(0, 459, QSizePolicy::Minimum, QSizePolicy::Expanding);

        horizontalLayout_6->addItem(verticalSpacer);


        gridLayout_7->addWidget(widget_10, 2, 0, 1, 1);


        verticalLayout_3->addWidget(widget_4);

        toolBox->addItem(page_3, QStringLiteral("Wall Properties"));
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        page_4->setGeometry(QRect(0, 0, 98, 76));
        verticalLayout_10 = new QVBoxLayout(page_4);
        verticalLayout_10->setSpacing(5);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(5, 0, 5, 5);
        tableViewSolver = new QTableView(page_4);
        tableViewSolver->setObjectName(QStringLiteral("tableViewSolver"));
        tableViewSolver->setSelectionBehavior(QAbstractItemView::SelectRows);

        verticalLayout_10->addWidget(tableViewSolver);

        toolBox->addItem(page_4, QStringLiteral("Solver Parameters"));
        page_5 = new QWidget();
        page_5->setObjectName(QStringLiteral("page_5"));
        page_5->setGeometry(QRect(0, 0, 212, 68));
        verticalLayout_11 = new QVBoxLayout(page_5);
        verticalLayout_11->setSpacing(5);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        verticalLayout_11->setContentsMargins(5, 0, 5, 5);
        widget_7 = new QWidget(page_5);
        widget_7->setObjectName(QStringLiteral("widget_7"));
        verticalLayout_12 = new QVBoxLayout(widget_7);
        verticalLayout_12->setSpacing(5);
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        verticalLayout_12->setContentsMargins(0, 0, 0, 0);
        widgetRun = new QWidget(widget_7);
        widgetRun->setObjectName(QStringLiteral("widgetRun"));
        gridLayout = new QGridLayout(widgetRun);
        gridLayout->setSpacing(5);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        RunSimulationPushButton = new QPushButton(widgetRun);
        RunSimulationPushButton->setObjectName(QStringLiteral("RunSimulationPushButton"));

        gridLayout->addWidget(RunSimulationPushButton, 4, 0, 1, 2);

        CreateSimulationFilesButton = new QPushButton(widgetRun);
        CreateSimulationFilesButton->setObjectName(QStringLiteral("CreateSimulationFilesButton"));

        gridLayout->addWidget(CreateSimulationFilesButton, 1, 0, 1, 2);

        widget_15 = new QWidget(widgetRun);
        widget_15->setObjectName(QStringLiteral("widget_15"));
        horizontalLayout_7 = new QHBoxLayout(widget_15);
        horizontalLayout_7->setSpacing(5);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);

        gridLayout->addWidget(widget_15, 0, 0, 1, 2);


        verticalLayout_12->addWidget(widgetRun);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_12->addItem(verticalSpacer_2);


        verticalLayout_11->addWidget(widget_7);

        toolBox->addItem(page_5, QStringLiteral("Create Files and Run Simulation"));
        Convertresults_Panel = new QWidget();
        Convertresults_Panel->setObjectName(QStringLiteral("Convertresults_Panel"));
        Convertresults_Panel->setGeometry(QRect(0, 0, 357, 548));
        verticalLayout_13 = new QVBoxLayout(Convertresults_Panel);
        verticalLayout_13->setObjectName(QStringLiteral("verticalLayout_13"));
        widget_11 = new QWidget(Convertresults_Panel);
        widget_11->setObjectName(QStringLiteral("widget_11"));
        verticalLayout_4 = new QVBoxLayout(widget_11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        frame_2 = new QFrame(widget_11);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        verticalLayout_16 = new QVBoxLayout(frame_2);
        verticalLayout_16->setSpacing(5);
        verticalLayout_16->setObjectName(QStringLiteral("verticalLayout_16"));
        verticalLayout_16->setContentsMargins(5, 5, 5, 5);
        widget_17 = new QWidget(frame_2);
        widget_17->setObjectName(QStringLiteral("widget_17"));
        horizontalLayout = new QHBoxLayout(widget_17);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_20 = new QLabel(widget_17);
        label_20->setObjectName(QStringLiteral("label_20"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_20->setFont(font);

        horizontalLayout->addWidget(label_20);


        verticalLayout_16->addWidget(widget_17);

        widget = new QWidget(frame_2);
        widget->setObjectName(QStringLiteral("widget"));
        gridLayout_5 = new QGridLayout(widget);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        gridLayout_5->setHorizontalSpacing(0);
        gridLayout_5->setVerticalSpacing(5);
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        toolButtonResultDir = new QToolButton(widget);
        toolButtonResultDir->setObjectName(QStringLiteral("toolButtonResultDir"));

        gridLayout_5->addWidget(toolButtonResultDir, 0, 1, 1, 1);

        lineEditResultDir = new QLineEdit(widget);
        lineEditResultDir->setObjectName(QStringLiteral("lineEditResultDir"));

        gridLayout_5->addWidget(lineEditResultDir, 0, 0, 1, 1);


        verticalLayout_16->addWidget(widget);


        verticalLayout_4->addWidget(frame_2);

        frame_3 = new QFrame(widget_11);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        verticalLayout_17 = new QVBoxLayout(frame_3);
        verticalLayout_17->setSpacing(5);
        verticalLayout_17->setObjectName(QStringLiteral("verticalLayout_17"));
        verticalLayout_17->setContentsMargins(5, 5, 5, 5);
        widget_20 = new QWidget(frame_3);
        widget_20->setObjectName(QStringLiteral("widget_20"));
        horizontalLayout_3 = new QHBoxLayout(widget_20);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_21 = new QLabel(widget_20);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setFont(font);

        horizontalLayout_3->addWidget(label_21);


        verticalLayout_17->addWidget(widget_20);

        widget_8 = new QWidget(frame_3);
        widget_8->setObjectName(QStringLiteral("widget_8"));
        gridLayout_9 = new QGridLayout(widget_8);
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        gridLayout_9->setHorizontalSpacing(0);
        gridLayout_9->setVerticalSpacing(5);
        gridLayout_9->setContentsMargins(0, 0, 0, 0);
        toolButtonConvertDir = new QToolButton(widget_8);
        toolButtonConvertDir->setObjectName(QStringLiteral("toolButtonConvertDir"));

        gridLayout_9->addWidget(toolButtonConvertDir, 0, 1, 1, 1);

        lineEditConvertDir = new QLineEdit(widget_8);
        lineEditConvertDir->setObjectName(QStringLiteral("lineEditConvertDir"));

        gridLayout_9->addWidget(lineEditConvertDir, 0, 0, 1, 1);


        verticalLayout_17->addWidget(widget_8);


        verticalLayout_4->addWidget(frame_3);

        frame_13 = new QFrame(widget_11);
        frame_13->setObjectName(QStringLiteral("frame_13"));
        frame_13->setFrameShape(QFrame::StyledPanel);
        frame_13->setFrameShadow(QFrame::Raised);
        verticalLayout_15 = new QVBoxLayout(frame_13);
        verticalLayout_15->setSpacing(5);
        verticalLayout_15->setObjectName(QStringLiteral("verticalLayout_15"));
        verticalLayout_15->setContentsMargins(5, 5, 5, 5);
        label_13 = new QLabel(frame_13);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setFont(font);

        verticalLayout_15->addWidget(label_13);

        widget_14 = new QWidget(frame_13);
        widget_14->setObjectName(QStringLiteral("widget_14"));
        horizontalLayout_8 = new QHBoxLayout(widget_14);
        horizontalLayout_8->setSpacing(5);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        label_14 = new QLabel(widget_14);
        label_14->setObjectName(QStringLiteral("label_14"));

        horizontalLayout_8->addWidget(label_14);

        lineEditStart = new QLineEdit(widget_14);
        lineEditStart->setObjectName(QStringLiteral("lineEditStart"));

        horizontalLayout_8->addWidget(lineEditStart);

        label_15 = new QLabel(widget_14);
        label_15->setObjectName(QStringLiteral("label_15"));

        horizontalLayout_8->addWidget(label_15);

        lineEditStop = new QLineEdit(widget_14);
        lineEditStop->setObjectName(QStringLiteral("lineEditStop"));

        horizontalLayout_8->addWidget(lineEditStop);


        verticalLayout_15->addWidget(widget_14);


        verticalLayout_4->addWidget(frame_13);

        frame_15 = new QFrame(widget_11);
        frame_15->setObjectName(QStringLiteral("frame_15"));
        frame_15->setFrameShape(QFrame::StyledPanel);
        frame_15->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frame_15);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label_2 = new QLabel(frame_15);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_2->addWidget(label_2, 0, 0, 1, 1);

        SegmentExportComboBox = new QComboBox(frame_15);
        SegmentExportComboBox->setObjectName(QStringLiteral("SegmentExportComboBox"));
        sizePolicy2.setHeightForWidth(SegmentExportComboBox->sizePolicy().hasHeightForWidth());
        SegmentExportComboBox->setSizePolicy(sizePolicy2);

        gridLayout_2->addWidget(SegmentExportComboBox, 0, 1, 1, 1);

        label_7 = new QLabel(frame_15);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_2->addWidget(label_7, 1, 0, 1, 1);

        DataExportListWidget = new QListWidget(frame_15);
        DataExportListWidget->setObjectName(QStringLiteral("DataExportListWidget"));
        DataExportListWidget->setMaximumSize(QSize(16777215, 50));

        gridLayout_2->addWidget(DataExportListWidget, 1, 1, 1, 1);


        verticalLayout_4->addWidget(frame_15);

        ProjectMesh_Frame = new QFrame(widget_11);
        ProjectMesh_Frame->setObjectName(QStringLiteral("ProjectMesh_Frame"));
        ProjectMesh_Frame->setFrameShape(QFrame::StyledPanel);
        ProjectMesh_Frame->setFrameShadow(QFrame::Raised);
        horizontalLayout_5 = new QHBoxLayout(ProjectMesh_Frame);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        ProjectTo3DMesh_CheckBox = new QCheckBox(ProjectMesh_Frame);
        ProjectTo3DMesh_CheckBox->setObjectName(QStringLiteral("ProjectTo3DMesh_CheckBox"));

        horizontalLayout_5->addWidget(ProjectTo3DMesh_CheckBox);

        SimName_ComboBox = new QComboBox(ProjectMesh_Frame);
        SimName_ComboBox->setObjectName(QStringLiteral("SimName_ComboBox"));

        horizontalLayout_5->addWidget(SimName_ComboBox);


        verticalLayout_4->addWidget(ProjectMesh_Frame);

        ProjectCenterlines_CheckBox = new QCheckBox(widget_11);
        ProjectCenterlines_CheckBox->setObjectName(QStringLiteral("ProjectCenterlines_CheckBox"));

        verticalLayout_4->addWidget(ProjectCenterlines_CheckBox);

        widget_13 = new QWidget(widget_11);
        widget_13->setObjectName(QStringLiteral("widget_13"));
        horizontalLayout_9 = new QHBoxLayout(widget_13);
        horizontalLayout_9->setSpacing(5);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(5, 5, 5, 5);

        verticalLayout_4->addWidget(widget_13);

        ExportNumpy_CheckBox = new QCheckBox(widget_11);
        ExportNumpy_CheckBox->setObjectName(QStringLiteral("ExportNumpy_CheckBox"));

        verticalLayout_4->addWidget(ExportNumpy_CheckBox);


        verticalLayout_13->addWidget(widget_11);

        btnExportResults = new QPushButton(Convertresults_Panel);
        btnExportResults->setObjectName(QStringLiteral("btnExportResults"));
        btnExportResults->setEnabled(true);

        verticalLayout_13->addWidget(btnExportResults);

        verticalSpacer_3 = new QSpacerItem(17, 56, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_13->addItem(verticalSpacer_3);

        toolBox->addItem(Convertresults_Panel, QStringLiteral("Convert Results"));

        verticalLayout_2->addWidget(toolBox);


        verticalLayout->addWidget(widget_2);


        retranslateUi(sv4guiROMSimulationView);

        toolBox->setCurrentIndex(0);
        MaterialModel_StackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(sv4guiROMSimulationView);
    } // setupUi

    void retranslateUi(QWidget *sv4guiROMSimulationView)
    {
        sv4guiROMSimulationView->setWindowTitle(QApplication::translate("sv4guiROMSimulationView", "Form", nullptr));
        label->setText(QApplication::translate("sv4guiROMSimulationView", "Job Name:", nullptr));
        JobStatusValueLabel->setText(QString());
        labelJobName->setText(QString());
        ModelOrdr_GroupBox->setTitle(QApplication::translate("sv4guiROMSimulationView", "Model Order", nullptr));
        ModelOrderZero_RadioButton->setText(QApplication::translate("sv4guiROMSimulationView", "0", nullptr));
        ModelOrderOne_RadioButton->setText(QApplication::translate("sv4guiROMSimulationView", "1", nullptr));
#ifndef QT_NO_TOOLTIP
        toolBox->setToolTip(QApplication::translate("sv4guiROMSimulationView", "Generate a 1D mesh from the surface model.", nullptr));
#endif // QT_NO_TOOLTIP
        ModelLabel->setText(QApplication::translate("sv4guiROMSimulationView", "Model", nullptr));
        ModelNameLabel->setText(QString());
        selectModelFacesPushButton->setText(QApplication::translate("sv4guiROMSimulationView", "Select Inlet Face", nullptr));
        InletFaceLabel->setText(QApplication::translate("sv4guiROMSimulationView", "Inlet Face", nullptr));
        InletFaceNameLabel->setText(QString());
        CalculateCenterlinesPushButton->setText(QApplication::translate("sv4guiROMSimulationView", "Calculate Centerlines", nullptr));
        ElementSizeLabel->setText(QApplication::translate("sv4guiROMSimulationView", "Element size", nullptr));
        ElementSizeLineEdit->setText(QApplication::translate("sv4guiROMSimulationView", "0.1", nullptr));
        ElementSizeLabel_2->setText(QApplication::translate("sv4guiROMSimulationView", "Number of segments per branch", nullptr));
        NumSegmentsLineEdit->setText(QApplication::translate("sv4guiROMSimulationView", "1", nullptr));
        AdaptiveMeshingCheckBox->setText(QApplication::translate("sv4guiROMSimulationView", "Adaptive meshing", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_7), QApplication::translate("sv4guiROMSimulationView", "Mesh", nullptr));
        toolBox->setItemText(toolBox->indexOf(page), QApplication::translate("sv4guiROMSimulationView", "Basic Parameters", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_2), QApplication::translate("sv4guiROMSimulationView", "Inlet and Outlet BCs", nullptr));
        label_3->setText(QApplication::translate("sv4guiROMSimulationView", "Material Model", nullptr));
        LinearMatProp_Ehr_Label->setText(QApplication::translate("sv4guiROMSimulationView", "Eh/R", nullptr));
        LinearMatProp_Pressure_Label->setText(QApplication::translate("sv4guiROMSimulationView", "Pressure", nullptr));
        label_4->setText(QApplication::translate("sv4guiROMSimulationView", "K1", nullptr));
        label_5->setText(QApplication::translate("sv4guiROMSimulationView", "K2", nullptr));
        label_6->setText(QApplication::translate("sv4guiROMSimulationView", "K3", nullptr));
        OlufsenMatProp_Exponent_Label->setText(QApplication::translate("sv4guiROMSimulationView", "Exponent", nullptr));
        OlufsenMatProp_Pressure_Label->setText(QApplication::translate("sv4guiROMSimulationView", "Pressure", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_3), QApplication::translate("sv4guiROMSimulationView", "Wall Properties", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_4), QApplication::translate("sv4guiROMSimulationView", "Solver Parameters", nullptr));
#ifndef QT_NO_TOOLTIP
        RunSimulationPushButton->setToolTip(QApplication::translate("sv4guiROMSimulationView", "Run a 1D simulation.", nullptr));
#endif // QT_NO_TOOLTIP
        RunSimulationPushButton->setText(QApplication::translate("sv4guiROMSimulationView", "Run Simulation", nullptr));
        CreateSimulationFilesButton->setText(QApplication::translate("sv4guiROMSimulationView", "Create Files for Simulation", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_5), QApplication::translate("sv4guiROMSimulationView", "Create Files and Run Simulation", nullptr));
        label_20->setText(QApplication::translate("sv4guiROMSimulationView", "Results Directory", nullptr));
        toolButtonResultDir->setText(QApplication::translate("sv4guiROMSimulationView", "...", nullptr));
#ifndef QT_NO_TOOLTIP
        lineEditResultDir->setToolTip(QApplication::translate("sv4guiROMSimulationView", "The directory which contains the restart files output from simulation", nullptr));
#endif // QT_NO_TOOLTIP
        label_21->setText(QApplication::translate("sv4guiROMSimulationView", "Convert Directory", nullptr));
        toolButtonConvertDir->setText(QApplication::translate("sv4guiROMSimulationView", "...", nullptr));
#ifndef QT_NO_TOOLTIP
        lineEditConvertDir->setToolTip(QApplication::translate("sv4guiROMSimulationView", "The directory to write the converted results files. ", nullptr));
#endif // QT_NO_TOOLTIP
        label_13->setText(QApplication::translate("sv4guiROMSimulationView", "Time", nullptr));
        label_14->setText(QApplication::translate("sv4guiROMSimulationView", "Start", nullptr));
#ifndef QT_NO_TOOLTIP
        lineEditStart->setToolTip(QApplication::translate("sv4guiROMSimulationView", "Set the start time for the range of times to convert data. The time is a float simulation time value.", nullptr));
#endif // QT_NO_TOOLTIP
        label_15->setText(QApplication::translate("sv4guiROMSimulationView", "Stop", nullptr));
#ifndef QT_NO_TOOLTIP
        lineEditStop->setToolTip(QApplication::translate("sv4guiROMSimulationView", "Set the stop time for the range of times to convert data. The time is a float simulation time value.", nullptr));
#endif // QT_NO_TOOLTIP
        label_2->setText(QApplication::translate("sv4guiROMSimulationView", "Segments", nullptr));
#ifndef QT_NO_TOOLTIP
        SegmentExportComboBox->setToolTip(QApplication::translate("sv4guiROMSimulationView", "Set the segment type used to convert data. Select <b>Outlet</b> to convert data only for segments that have an outlet boundary condition. Select <b>All</b> for converting data for all segments.", nullptr));
#endif // QT_NO_TOOLTIP
        label_7->setText(QApplication::translate("sv4guiROMSimulationView", "Data", nullptr));
#ifndef QT_NO_TOOLTIP
        DataExportListWidget->setToolTip(QApplication::translate("sv4guiROMSimulationView", "Set the data names to convert.", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        ProjectTo3DMesh_CheckBox->setToolTip(QApplication::translate("sv4guiROMSimulationView", "Project results to a 3D simulation volume mesh.", nullptr));
#endif // QT_NO_TOOLTIP
        ProjectTo3DMesh_CheckBox->setText(QApplication::translate("sv4guiROMSimulationView", "Project results to 3D mesh", nullptr));
#ifndef QT_NO_TOOLTIP
        SimName_ComboBox->setToolTip(QApplication::translate("sv4guiROMSimulationView", "<html><head/><body><p>The simulation name for projecting results to a 3D simulation volume mesh.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        ProjectCenterlines_CheckBox->setToolTip(QApplication::translate("sv4guiROMSimulationView", "If selected then results are projected to centerline geometry.", nullptr));
#endif // QT_NO_TOOLTIP
        ProjectCenterlines_CheckBox->setText(QApplication::translate("sv4guiROMSimulationView", "Project results to centerline geometry", nullptr));
#ifndef QT_NO_TOOLTIP
        ExportNumpy_CheckBox->setToolTip(QApplication::translate("sv4guiROMSimulationView", "If checked then results are written as NumPy arrays.", nullptr));
#endif // QT_NO_TOOLTIP
        ExportNumpy_CheckBox->setText(QApplication::translate("sv4guiROMSimulationView", "Write results as NumPy arrays", nullptr));
#ifndef QT_NO_TOOLTIP
        btnExportResults->setToolTip(QApplication::translate("sv4guiROMSimulationView", "Select the output directory for the converted files and start the conversion process.", nullptr));
#endif // QT_NO_TOOLTIP
        btnExportResults->setText(QApplication::translate("sv4guiROMSimulationView", "Convert ...", nullptr));
        toolBox->setItemText(toolBox->indexOf(Convertresults_Panel), QApplication::translate("sv4guiROMSimulationView", "Convert Results", nullptr));
    } // retranslateUi

};

namespace Ui {
    class sv4guiROMSimulationView: public Ui_sv4guiROMSimulationView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SV4GUI_ROMSIMULATIONVIEW_H
