/********************************************************************************
** Form generated from reading UI file 'sv4gui_svFSIView.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SV4GUI_SVFSIVIEW_H
#define UI_SV4GUI_SVFSIVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
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
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <ctkSliderWidget.h>

QT_BEGIN_NAMESPACE

class Ui_sv4guisvFSIView
{
public:
    QGridLayout *gridLayout_32;
    QGridLayout *JobTop_gridLayout;
    QPushButton *btnLoadJob;
    QLabel *label_25;
    QPushButton *btnSave;
    QPushButton *btnNewJob;
    QLabel *labelJobName;
    QPushButton *loadMeshButton;
    QLabel *label_14;
    QLabel *labelJobStatus;
    QWidget *Subpanel_Widget;
    QGridLayout *gridLayout_31;
    QToolBox *Subpanel_toolBox;
    QWidget *DomainsSubpanel_widget;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout_22;
    QFrame *line_6;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnAddMeshComplete;
    QFrame *line_4;
    QGridLayout *gridLayout_6;
    QLabel *label;
    QComboBox *comboBoxDomains;
    QPushButton *btnDeleteDomain;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_13;
    QRadioButton *radioButtonFluid;
    QRadioButton *radioButtonSolid;
    QLabel *label_7;
    QListWidget *faceList;
    QWidget *PhysicsSubpanel_widget;
    QGridLayout *gridLayout_18;
    QGridLayout *gridLayout_41;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_4;
    QGroupBox *phys_prop_group_box;
    QGridLayout *gridLayout_51;
    QGridLayout *gridLayout_46;
    QGridLayout *gridLayout_11;
    QLabel *prop_1_txt;
    QSpacerItem *horizontalSpacer_32;
    QLineEdit *prop_1_box;
    QGridLayout *gridLayout_47;
    QGridLayout *gridLayout_14;
    QLabel *prop_2_txt;
    QSpacerItem *horizontalSpacer_33;
    QLineEdit *prop_2_box;
    QGridLayout *gridLayout_49;
    QGridLayout *gridLayout_44;
    QLabel *prop_4_txt;
    QSpacerItem *horizontalSpacer_35;
    QLineEdit *prop_4_box;
    QGridLayout *gridLayout_50;
    QGridLayout *gridLayout_45;
    QLabel *prop_5_txt;
    QSpacerItem *horizontalSpacer_36;
    QLineEdit *prop_5_box;
    QGridLayout *gridLayout_48;
    QGridLayout *gridLayout_16;
    QLabel *prop_3_txt;
    QSpacerItem *horizontalSpacer_37;
    QLineEdit *prop_3_box;
    QSpacerItem *verticalSpacer_3;
    QWidget *widgetConstitutive;
    QGridLayout *gridLayout_25;
    QLabel *label_35;
    QComboBox *comboBoxConstitutive;
    QWidget *tab_2;
    QGridLayout *gridLayout_5;
    QGroupBox *groupBox_6;
    QGridLayout *gridLayout_17;
    QListWidget *output;
    QGridLayout *gridLayout_10;
    QSpacerItem *verticalSpacer_7;
    QPushButton *btnAddOutput;
    QSpacerItem *verticalSpacer_9;
    QPushButton *btnClearOutput;
    QSpacerItem *verticalSpacer_8;
    QListWidget *outputList;
    QSpacerItem *verticalSpacer_11;
    QWidget *tab_3;
    QGridLayout *gridLayout_7;
    QGroupBox *bc_box;
    QGridLayout *gridLayout_12;
    QTableWidget *bcList;
    QPushButton *btnAddBC;
    QPushButton *btnModifyBC;
    QPushButton *btnRemoveBC;
    QWidget *tab_4;
    QGridLayout *gridLayout_8;
    QGroupBox *eqAdvOptions;
    QGridLayout *gridLayout_40;
    QGridLayout *gridLayout_36;
    QGridLayout *gridLayout_20;
    QLabel *label_19;
    QLabel *label_18;
    QLabel *label_21;
    QLabel *label_20;
    QLabel *labelBackflow;
    QGridLayout *gridLayout_35;
    QSpinBox *minItr;
    QLineEdit *lineEditTol;
    QSpinBox *maxItr;
    QSpinBox *dBr;
    QDoubleSpinBox *dsbBackflow;
    QSpacerItem *verticalSpacer_10;
    QCheckBox *coupled;
    QWidget *tab_5;
    QGridLayout *gridLayout_13;
    QWidget *widgetNS;
    QGridLayout *gridLayout_26;
    QLabel *label_17;
    QLabel *label_23;
    QLabel *label_15;
    QLineEdit *lineEditNSGMMaxItr;
    QLineEdit *lineEditNSGMTol;
    QLineEdit *lineEditNSCGMaxItr;
    QLabel *label_24;
    QLineEdit *lineEditNSCGTol;
    QGridLayout *gridLayout_2;
    QLineEdit *lineEditLSTol;
    QLabel *label_2;
    QLineEdit *lineEditLSAbsTol;
    QLabel *label_26;
    QLabel *label_12;
    QLabel *label_27;
    QComboBox *comboBoxLSType;
    QLineEdit *lineEditKrylovDim;
    QLabel *label_11;
    QLineEdit *lineEditLSMaxItr;
    QLabel *label_36;
    QComboBox *comboBoxPreconditioner;
    QSpacerItem *verticalSpacer_12;
    QWidget *tab_6;
    QGridLayout *gridLayout_23;
    QGridLayout *gridLayout_24;
    QLabel *label_28;
    QComboBox *comboBoxRemesher;
    QWidget *widgetRemesher;
    QGridLayout *gridLayout_21;
    QLabel *label_32;
    QDoubleSpinBox *dsbMinAngle;
    QLabel *label_31;
    QLabel *label_30;
    QLabel *label_33;
    QDoubleSpinBox *dsbRadiusRatio;
    QLabel *label_29;
    QSpinBox *sbCopyFrequency;
    QSpinBox *sbRemeshFrequency;
    QFrame *line_3;
    QComboBox *comboBoxDomain2;
    QLabel *label_34;
    QDoubleSpinBox *dsbEdgeSize;
    QSpacerItem *verticalSpacer_14;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout_19;
    QListWidget *listEqs;
    QListWidget *listAvailableEqs;
    QGridLayout *gridLayout_9;
    QSpacerItem *verticalSpacer_6;
    QSpacerItem *verticalSpacer_5;
    QPushButton *btnClearEq;
    QPushButton *btnAddEq;
    QSpacerItem *verticalSpacer_4;
    QPushButton *btnResetEq;
    QWidget *SimulationParametrsSubpanel_widget;
    QGridLayout *gridLayout_33;
    QGroupBox *TimeControl_groupBox;
    QGridLayout *gridLayout_27;
    QCheckBox *TimeStartFromPrev_checkBox;
    QGridLayout *gridLayout_43;
    QGridLayout *gridLayout_30;
    QLabel *label_6;
    QLabel *label_3;
    QGridLayout *gridLayout_34;
    QLineEdit *TimeStepSize_lineEdit;
    QSpinBox *TimeNumSteps_spinBox;
    QGroupBox *SimulationResultsOutput_groupBox;
    QGridLayout *gridLayout_28;
    QFrame *Restart_frame;
    QGridLayout *gridLayout_3;
    QLabel *RestartFiles_label;
    QLabel *RestartName_label;
    QLineEdit *RestartName_lineEdit;
    QLabel *RestartSaveIncr_label;
    QSpinBox *RestartSaveIncr_spinBox;
    QLabel *RestartSaveStart_label;
    QSpinBox *RestartSaveStart_spinBox;
    QFrame *Vtk_frame;
    QGridLayout *gridLayout_15;
    QCheckBox *VtkSave_checkBox;
    QLabel *VtkName_label;
    QLineEdit *VtkName_lineEdit;
    QLabel *VtkSaveIncr_label;
    QSpinBox *VtkSaveIncr_spinBox;
    QCheckBox *save_average;
    QGroupBox *AdvancedOptions_groupBox;
    QGridLayout *gridLayout;
    QLabel *label_10;
    QDoubleSpinBox *rhoInf;
    QCheckBox *checkBoxRemeshing;
    QGridLayout *gridLayout_29;
    QCheckBox *warn;
    QCheckBox *verb;
    QCheckBox *debug;
    QWidget *RunSimulation_widget;
    QGridLayout *gridLayout_53;
    QSpacerItem *verticalSpacer;
    QWidget *widgetRun;
    QGridLayout *gridLayout_42;
    ctkSliderWidget *sliderNumProcs;
    QPushButton *btnCreateInputFile;
    QLabel *label_5;
    QPushButton *btnRunSim;
    QSpacerItem *verticalSpacer_2;
    QPushButton *btnStopSim;
    QButtonGroup *buttonGroup;

    void setupUi(QWidget *sv4guisvFSIView)
    {
        if (sv4guisvFSIView->objectName().isEmpty())
            sv4guisvFSIView->setObjectName(QStringLiteral("sv4guisvFSIView"));
        sv4guisvFSIView->resize(497, 858);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(sv4guisvFSIView->sizePolicy().hasHeightForWidth());
        sv4guisvFSIView->setSizePolicy(sizePolicy);
        gridLayout_32 = new QGridLayout(sv4guisvFSIView);
        gridLayout_32->setObjectName(QStringLiteral("gridLayout_32"));
        JobTop_gridLayout = new QGridLayout();
        JobTop_gridLayout->setSpacing(5);
        JobTop_gridLayout->setObjectName(QStringLiteral("JobTop_gridLayout"));
        btnLoadJob = new QPushButton(sv4guisvFSIView);
        btnLoadJob->setObjectName(QStringLiteral("btnLoadJob"));

        JobTop_gridLayout->addWidget(btnLoadJob, 2, 2, 1, 1);

        label_25 = new QLabel(sv4guisvFSIView);
        label_25->setObjectName(QStringLiteral("label_25"));

        JobTop_gridLayout->addWidget(label_25, 1, 0, 1, 1);

        btnSave = new QPushButton(sv4guisvFSIView);
        btnSave->setObjectName(QStringLiteral("btnSave"));

        JobTop_gridLayout->addWidget(btnSave, 1, 2, 1, 1);

        btnNewJob = new QPushButton(sv4guisvFSIView);
        btnNewJob->setObjectName(QStringLiteral("btnNewJob"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(btnNewJob->sizePolicy().hasHeightForWidth());
        btnNewJob->setSizePolicy(sizePolicy1);

        JobTop_gridLayout->addWidget(btnNewJob, 0, 2, 1, 1);

        labelJobName = new QLabel(sv4guisvFSIView);
        labelJobName->setObjectName(QStringLiteral("labelJobName"));

        JobTop_gridLayout->addWidget(labelJobName, 0, 1, 1, 1);

        loadMeshButton = new QPushButton(sv4guisvFSIView);
        loadMeshButton->setObjectName(QStringLiteral("loadMeshButton"));

        JobTop_gridLayout->addWidget(loadMeshButton, 3, 2, 1, 1);

        label_14 = new QLabel(sv4guisvFSIView);
        label_14->setObjectName(QStringLiteral("label_14"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_14->sizePolicy().hasHeightForWidth());
        label_14->setSizePolicy(sizePolicy2);

        JobTop_gridLayout->addWidget(label_14, 0, 0, 1, 1);

        labelJobStatus = new QLabel(sv4guisvFSIView);
        labelJobStatus->setObjectName(QStringLiteral("labelJobStatus"));

        JobTop_gridLayout->addWidget(labelJobStatus, 1, 1, 1, 1);


        gridLayout_32->addLayout(JobTop_gridLayout, 0, 0, 1, 1);

        Subpanel_Widget = new QWidget(sv4guisvFSIView);
        Subpanel_Widget->setObjectName(QStringLiteral("Subpanel_Widget"));
        gridLayout_31 = new QGridLayout(Subpanel_Widget);
        gridLayout_31->setObjectName(QStringLiteral("gridLayout_31"));
        Subpanel_toolBox = new QToolBox(Subpanel_Widget);
        Subpanel_toolBox->setObjectName(QStringLiteral("Subpanel_toolBox"));
        DomainsSubpanel_widget = new QWidget();
        DomainsSubpanel_widget->setObjectName(QStringLiteral("DomainsSubpanel_widget"));
        DomainsSubpanel_widget->setGeometry(QRect(0, 0, 449, 557));
        verticalLayout_2 = new QVBoxLayout(DomainsSubpanel_widget);
        verticalLayout_2->setSpacing(5);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(2, 0, 2, 0);
        gridLayout_22 = new QGridLayout();
        gridLayout_22->setSpacing(5);
        gridLayout_22->setObjectName(QStringLiteral("gridLayout_22"));
        gridLayout_22->setContentsMargins(-1, 0, -1, -1);

        verticalLayout_2->addLayout(gridLayout_22);

        line_6 = new QFrame(DomainsSubpanel_widget);
        line_6->setObjectName(QStringLiteral("line_6"));
        line_6->setFrameShape(QFrame::HLine);
        line_6->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line_6);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(5);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        btnAddMeshComplete = new QPushButton(DomainsSubpanel_widget);
        btnAddMeshComplete->setObjectName(QStringLiteral("btnAddMeshComplete"));

        horizontalLayout->addWidget(btnAddMeshComplete);


        verticalLayout_2->addLayout(horizontalLayout);

        line_4 = new QFrame(DomainsSubpanel_widget);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line_4);

        gridLayout_6 = new QGridLayout();
        gridLayout_6->setSpacing(5);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        label = new QLabel(DomainsSubpanel_widget);
        label->setObjectName(QStringLiteral("label"));
        sizePolicy2.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy2);

        gridLayout_6->addWidget(label, 3, 0, 1, 1);

        comboBoxDomains = new QComboBox(DomainsSubpanel_widget);
        comboBoxDomains->setObjectName(QStringLiteral("comboBoxDomains"));

        gridLayout_6->addWidget(comboBoxDomains, 3, 1, 1, 1);


        verticalLayout_2->addLayout(gridLayout_6);

        btnDeleteDomain = new QPushButton(DomainsSubpanel_widget);
        btnDeleteDomain->setObjectName(QStringLiteral("btnDeleteDomain"));

        verticalLayout_2->addWidget(btnDeleteDomain);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(5);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_13 = new QLabel(DomainsSubpanel_widget);
        label_13->setObjectName(QStringLiteral("label_13"));
        sizePolicy2.setHeightForWidth(label_13->sizePolicy().hasHeightForWidth());
        label_13->setSizePolicy(sizePolicy2);

        horizontalLayout_2->addWidget(label_13);

        radioButtonFluid = new QRadioButton(DomainsSubpanel_widget);
        buttonGroup = new QButtonGroup(sv4guisvFSIView);
        buttonGroup->setObjectName(QStringLiteral("buttonGroup"));
        buttonGroup->addButton(radioButtonFluid);
        radioButtonFluid->setObjectName(QStringLiteral("radioButtonFluid"));
        radioButtonFluid->setChecked(true);

        horizontalLayout_2->addWidget(radioButtonFluid);

        radioButtonSolid = new QRadioButton(DomainsSubpanel_widget);
        buttonGroup->addButton(radioButtonSolid);
        radioButtonSolid->setObjectName(QStringLiteral("radioButtonSolid"));
        radioButtonSolid->setChecked(false);

        horizontalLayout_2->addWidget(radioButtonSolid);


        verticalLayout_2->addLayout(horizontalLayout_2);

        label_7 = new QLabel(DomainsSubpanel_widget);
        label_7->setObjectName(QStringLiteral("label_7"));

        verticalLayout_2->addWidget(label_7);

        faceList = new QListWidget(DomainsSubpanel_widget);
        faceList->setObjectName(QStringLiteral("faceList"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(faceList->sizePolicy().hasHeightForWidth());
        faceList->setSizePolicy(sizePolicy3);
        faceList->setAlternatingRowColors(true);
        faceList->setSortingEnabled(true);

        verticalLayout_2->addWidget(faceList);

        Subpanel_toolBox->addItem(DomainsSubpanel_widget, QStringLiteral("Domains"));
        PhysicsSubpanel_widget = new QWidget();
        PhysicsSubpanel_widget->setObjectName(QStringLiteral("PhysicsSubpanel_widget"));
        PhysicsSubpanel_widget->setGeometry(QRect(0, 0, 434, 581));
        gridLayout_18 = new QGridLayout(PhysicsSubpanel_widget);
        gridLayout_18->setSpacing(5);
        gridLayout_18->setObjectName(QStringLiteral("gridLayout_18"));
        gridLayout_18->setContentsMargins(2, 0, 2, 0);
        gridLayout_41 = new QGridLayout();
        gridLayout_41->setSpacing(5);
        gridLayout_41->setObjectName(QStringLiteral("gridLayout_41"));
        gridLayout_41->setContentsMargins(10, -1, 5, 20);
        tabWidget = new QTabWidget(PhysicsSubpanel_widget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setEnabled(true);
        tabWidget->setTabPosition(QTabWidget::North);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        gridLayout_4 = new QGridLayout(tab);
        gridLayout_4->setSpacing(5);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        phys_prop_group_box = new QGroupBox(tab);
        phys_prop_group_box->setObjectName(QStringLiteral("phys_prop_group_box"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(phys_prop_group_box->sizePolicy().hasHeightForWidth());
        phys_prop_group_box->setSizePolicy(sizePolicy4);
        phys_prop_group_box->setMaximumSize(QSize(16777215, 16777215));
        gridLayout_51 = new QGridLayout(phys_prop_group_box);
        gridLayout_51->setSpacing(5);
        gridLayout_51->setObjectName(QStringLiteral("gridLayout_51"));
        gridLayout_51->setContentsMargins(0, 2, 0, 0);
        gridLayout_46 = new QGridLayout();
        gridLayout_46->setObjectName(QStringLiteral("gridLayout_46"));
        gridLayout_11 = new QGridLayout();
        gridLayout_11->setObjectName(QStringLiteral("gridLayout_11"));
        prop_1_txt = new QLabel(phys_prop_group_box);
        prop_1_txt->setObjectName(QStringLiteral("prop_1_txt"));
        QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(prop_1_txt->sizePolicy().hasHeightForWidth());
        prop_1_txt->setSizePolicy(sizePolicy5);
        prop_1_txt->setMinimumSize(QSize(0, 27));

        gridLayout_11->addWidget(prop_1_txt, 0, 0, 1, 1);

        horizontalSpacer_32 = new QSpacerItem(20, 13, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_11->addItem(horizontalSpacer_32, 0, 1, 1, 1);


        gridLayout_46->addLayout(gridLayout_11, 0, 0, 1, 1);

        prop_1_box = new QLineEdit(phys_prop_group_box);
        prop_1_box->setObjectName(QStringLiteral("prop_1_box"));
        QSizePolicy sizePolicy6(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(prop_1_box->sizePolicy().hasHeightForWidth());
        prop_1_box->setSizePolicy(sizePolicy6);
        prop_1_box->setMaximumSize(QSize(16777215, 16777215));
        prop_1_box->setInputMethodHints(Qt::ImhDigitsOnly);

        gridLayout_46->addWidget(prop_1_box, 0, 1, 1, 1);


        gridLayout_51->addLayout(gridLayout_46, 0, 0, 1, 1);

        gridLayout_47 = new QGridLayout();
        gridLayout_47->setObjectName(QStringLiteral("gridLayout_47"));
        gridLayout_14 = new QGridLayout();
        gridLayout_14->setObjectName(QStringLiteral("gridLayout_14"));
        prop_2_txt = new QLabel(phys_prop_group_box);
        prop_2_txt->setObjectName(QStringLiteral("prop_2_txt"));
        QSizePolicy sizePolicy7(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(prop_2_txt->sizePolicy().hasHeightForWidth());
        prop_2_txt->setSizePolicy(sizePolicy7);

        gridLayout_14->addWidget(prop_2_txt, 0, 0, 1, 1);

        horizontalSpacer_33 = new QSpacerItem(20, 13, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_14->addItem(horizontalSpacer_33, 0, 1, 1, 1);


        gridLayout_47->addLayout(gridLayout_14, 0, 0, 1, 1);

        prop_2_box = new QLineEdit(phys_prop_group_box);
        prop_2_box->setObjectName(QStringLiteral("prop_2_box"));
        sizePolicy6.setHeightForWidth(prop_2_box->sizePolicy().hasHeightForWidth());
        prop_2_box->setSizePolicy(sizePolicy6);
        prop_2_box->setInputMethodHints(Qt::ImhDigitsOnly);

        gridLayout_47->addWidget(prop_2_box, 0, 1, 1, 1);


        gridLayout_51->addLayout(gridLayout_47, 1, 0, 1, 1);

        gridLayout_49 = new QGridLayout();
        gridLayout_49->setObjectName(QStringLiteral("gridLayout_49"));
        gridLayout_44 = new QGridLayout();
        gridLayout_44->setObjectName(QStringLiteral("gridLayout_44"));
        prop_4_txt = new QLabel(phys_prop_group_box);
        prop_4_txt->setObjectName(QStringLiteral("prop_4_txt"));
        sizePolicy5.setHeightForWidth(prop_4_txt->sizePolicy().hasHeightForWidth());
        prop_4_txt->setSizePolicy(sizePolicy5);
        prop_4_txt->setMinimumSize(QSize(0, 27));

        gridLayout_44->addWidget(prop_4_txt, 0, 0, 1, 1);

        horizontalSpacer_35 = new QSpacerItem(20, 13, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_44->addItem(horizontalSpacer_35, 0, 1, 1, 1);


        gridLayout_49->addLayout(gridLayout_44, 0, 0, 1, 1);

        prop_4_box = new QLineEdit(phys_prop_group_box);
        prop_4_box->setObjectName(QStringLiteral("prop_4_box"));
        sizePolicy6.setHeightForWidth(prop_4_box->sizePolicy().hasHeightForWidth());
        prop_4_box->setSizePolicy(sizePolicy6);
        prop_4_box->setInputMethodHints(Qt::ImhDigitsOnly);

        gridLayout_49->addWidget(prop_4_box, 0, 1, 1, 1);


        gridLayout_51->addLayout(gridLayout_49, 3, 0, 1, 1);

        gridLayout_50 = new QGridLayout();
        gridLayout_50->setObjectName(QStringLiteral("gridLayout_50"));
        gridLayout_45 = new QGridLayout();
        gridLayout_45->setObjectName(QStringLiteral("gridLayout_45"));
        prop_5_txt = new QLabel(phys_prop_group_box);
        prop_5_txt->setObjectName(QStringLiteral("prop_5_txt"));

        gridLayout_45->addWidget(prop_5_txt, 0, 0, 1, 1);

        horizontalSpacer_36 = new QSpacerItem(20, 13, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_45->addItem(horizontalSpacer_36, 0, 1, 1, 1);


        gridLayout_50->addLayout(gridLayout_45, 0, 0, 1, 1);

        prop_5_box = new QLineEdit(phys_prop_group_box);
        prop_5_box->setObjectName(QStringLiteral("prop_5_box"));
        sizePolicy6.setHeightForWidth(prop_5_box->sizePolicy().hasHeightForWidth());
        prop_5_box->setSizePolicy(sizePolicy6);
        prop_5_box->setInputMethodHints(Qt::ImhDigitsOnly);

        gridLayout_50->addWidget(prop_5_box, 0, 1, 1, 1);


        gridLayout_51->addLayout(gridLayout_50, 4, 0, 1, 1);

        gridLayout_48 = new QGridLayout();
        gridLayout_48->setObjectName(QStringLiteral("gridLayout_48"));
        gridLayout_16 = new QGridLayout();
        gridLayout_16->setObjectName(QStringLiteral("gridLayout_16"));
        prop_3_txt = new QLabel(phys_prop_group_box);
        prop_3_txt->setObjectName(QStringLiteral("prop_3_txt"));

        gridLayout_16->addWidget(prop_3_txt, 0, 0, 1, 1);

        horizontalSpacer_37 = new QSpacerItem(20, 13, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_16->addItem(horizontalSpacer_37, 0, 1, 1, 1);


        gridLayout_48->addLayout(gridLayout_16, 0, 0, 1, 1);

        prop_3_box = new QLineEdit(phys_prop_group_box);
        prop_3_box->setObjectName(QStringLiteral("prop_3_box"));
        sizePolicy6.setHeightForWidth(prop_3_box->sizePolicy().hasHeightForWidth());
        prop_3_box->setSizePolicy(sizePolicy6);
        prop_3_box->setInputMethodHints(Qt::ImhDigitsOnly);

        gridLayout_48->addWidget(prop_3_box, 0, 1, 1, 1);


        gridLayout_51->addLayout(gridLayout_48, 2, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_51->addItem(verticalSpacer_3, 6, 0, 1, 1);

        widgetConstitutive = new QWidget(phys_prop_group_box);
        widgetConstitutive->setObjectName(QStringLiteral("widgetConstitutive"));
        gridLayout_25 = new QGridLayout(widgetConstitutive);
        gridLayout_25->setSpacing(5);
        gridLayout_25->setObjectName(QStringLiteral("gridLayout_25"));
        gridLayout_25->setContentsMargins(0, 0, 0, 0);
        label_35 = new QLabel(widgetConstitutive);
        label_35->setObjectName(QStringLiteral("label_35"));

        gridLayout_25->addWidget(label_35, 0, 0, 1, 1);

        comboBoxConstitutive = new QComboBox(widgetConstitutive);
        comboBoxConstitutive->addItem(QString());
        comboBoxConstitutive->addItem(QString());
        comboBoxConstitutive->addItem(QString());
        comboBoxConstitutive->setObjectName(QStringLiteral("comboBoxConstitutive"));

        gridLayout_25->addWidget(comboBoxConstitutive, 0, 1, 1, 1);


        gridLayout_51->addWidget(widgetConstitutive, 5, 0, 1, 1);


        gridLayout_4->addWidget(phys_prop_group_box, 0, 0, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        gridLayout_5 = new QGridLayout(tab_2);
        gridLayout_5->setSpacing(5);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        groupBox_6 = new QGroupBox(tab_2);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        gridLayout_17 = new QGridLayout(groupBox_6);
        gridLayout_17->setSpacing(5);
        gridLayout_17->setObjectName(QStringLiteral("gridLayout_17"));
        gridLayout_17->setContentsMargins(0, 2, 0, 0);
        output = new QListWidget(groupBox_6);
        output->setObjectName(QStringLiteral("output"));
        QSizePolicy sizePolicy8(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy8.setHorizontalStretch(0);
        sizePolicy8.setVerticalStretch(1);
        sizePolicy8.setHeightForWidth(output->sizePolicy().hasHeightForWidth());
        output->setSizePolicy(sizePolicy8);
        output->setMaximumSize(QSize(16777215, 16777215));
        output->setAlternatingRowColors(true);

        gridLayout_17->addWidget(output, 0, 0, 1, 1);

        gridLayout_10 = new QGridLayout();
        gridLayout_10->setSpacing(5);
        gridLayout_10->setObjectName(QStringLiteral("gridLayout_10"));
        verticalSpacer_7 = new QSpacerItem(20, 44, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_10->addItem(verticalSpacer_7, 0, 0, 1, 1);

        btnAddOutput = new QPushButton(groupBox_6);
        btnAddOutput->setObjectName(QStringLiteral("btnAddOutput"));
        QSizePolicy sizePolicy9(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy9.setHorizontalStretch(1);
        sizePolicy9.setVerticalStretch(0);
        sizePolicy9.setHeightForWidth(btnAddOutput->sizePolicy().hasHeightForWidth());
        btnAddOutput->setSizePolicy(sizePolicy9);
        btnAddOutput->setMaximumSize(QSize(27, 16777215));

        gridLayout_10->addWidget(btnAddOutput, 1, 0, 1, 1);

        verticalSpacer_9 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_10->addItem(verticalSpacer_9, 2, 0, 1, 1);

        btnClearOutput = new QPushButton(groupBox_6);
        btnClearOutput->setObjectName(QStringLiteral("btnClearOutput"));
        sizePolicy9.setHeightForWidth(btnClearOutput->sizePolicy().hasHeightForWidth());
        btnClearOutput->setSizePolicy(sizePolicy9);
        btnClearOutput->setMaximumSize(QSize(27, 16777215));

        gridLayout_10->addWidget(btnClearOutput, 3, 0, 1, 1);

        verticalSpacer_8 = new QSpacerItem(20, 44, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_10->addItem(verticalSpacer_8, 4, 0, 1, 1);


        gridLayout_17->addLayout(gridLayout_10, 0, 1, 1, 1);

        outputList = new QListWidget(groupBox_6);
        outputList->setObjectName(QStringLiteral("outputList"));
        sizePolicy8.setHeightForWidth(outputList->sizePolicy().hasHeightForWidth());
        outputList->setSizePolicy(sizePolicy8);
        outputList->setMaximumSize(QSize(16777215, 16777215));
        outputList->setAlternatingRowColors(true);

        gridLayout_17->addWidget(outputList, 0, 2, 1, 1);


        gridLayout_5->addWidget(groupBox_6, 0, 0, 1, 1);

        verticalSpacer_11 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(verticalSpacer_11, 1, 0, 1, 1);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        gridLayout_7 = new QGridLayout(tab_3);
        gridLayout_7->setSpacing(5);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        gridLayout_7->setContentsMargins(0, 0, 0, 0);
        bc_box = new QGroupBox(tab_3);
        bc_box->setObjectName(QStringLiteral("bc_box"));
        bc_box->setEnabled(false);
        QSizePolicy sizePolicy10(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy10.setHorizontalStretch(1);
        sizePolicy10.setVerticalStretch(0);
        sizePolicy10.setHeightForWidth(bc_box->sizePolicy().hasHeightForWidth());
        bc_box->setSizePolicy(sizePolicy10);
        gridLayout_12 = new QGridLayout(bc_box);
        gridLayout_12->setSpacing(5);
        gridLayout_12->setObjectName(QStringLiteral("gridLayout_12"));
        gridLayout_12->setContentsMargins(0, 5, 0, 0);
        bcList = new QTableWidget(bc_box);
        if (bcList->columnCount() < 2)
            bcList->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setTextAlignment(Qt::AlignLeading|Qt::AlignVCenter);
        bcList->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setTextAlignment(Qt::AlignLeading|Qt::AlignVCenter);
        bcList->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        bcList->setObjectName(QStringLiteral("bcList"));
        QSizePolicy sizePolicy11(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy11.setHorizontalStretch(1);
        sizePolicy11.setVerticalStretch(0);
        sizePolicy11.setHeightForWidth(bcList->sizePolicy().hasHeightForWidth());
        bcList->setSizePolicy(sizePolicy11);
        bcList->setEditTriggers(QAbstractItemView::NoEditTriggers);
        bcList->setAlternatingRowColors(true);
        bcList->setSelectionMode(QAbstractItemView::ExtendedSelection);
        bcList->setSelectionBehavior(QAbstractItemView::SelectRows);
        bcList->horizontalHeader()->setVisible(false);
        bcList->horizontalHeader()->setCascadingSectionResizes(false);
        bcList->horizontalHeader()->setDefaultSectionSize(118);
        bcList->horizontalHeader()->setHighlightSections(false);
        bcList->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        bcList->horizontalHeader()->setStretchLastSection(true);
        bcList->verticalHeader()->setVisible(false);
        bcList->verticalHeader()->setDefaultSectionSize(30);
        bcList->verticalHeader()->setHighlightSections(false);

        gridLayout_12->addWidget(bcList, 0, 0, 1, 3);

        btnAddBC = new QPushButton(bc_box);
        btnAddBC->setObjectName(QStringLiteral("btnAddBC"));

        gridLayout_12->addWidget(btnAddBC, 1, 0, 1, 1);

        btnModifyBC = new QPushButton(bc_box);
        btnModifyBC->setObjectName(QStringLiteral("btnModifyBC"));

        gridLayout_12->addWidget(btnModifyBC, 1, 1, 1, 1);

        btnRemoveBC = new QPushButton(bc_box);
        btnRemoveBC->setObjectName(QStringLiteral("btnRemoveBC"));

        gridLayout_12->addWidget(btnRemoveBC, 1, 2, 1, 1);


        gridLayout_7->addWidget(bc_box, 0, 0, 1, 1);

        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        gridLayout_8 = new QGridLayout(tab_4);
        gridLayout_8->setSpacing(5);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        gridLayout_8->setContentsMargins(0, 0, 0, 0);
        eqAdvOptions = new QGroupBox(tab_4);
        eqAdvOptions->setObjectName(QStringLiteral("eqAdvOptions"));
        eqAdvOptions->setEnabled(false);
        eqAdvOptions->setMaximumSize(QSize(16777215, 16777215));
        eqAdvOptions->setCheckable(true);
        eqAdvOptions->setChecked(false);
        gridLayout_40 = new QGridLayout(eqAdvOptions);
        gridLayout_40->setSpacing(5);
        gridLayout_40->setObjectName(QStringLiteral("gridLayout_40"));
        gridLayout_40->setContentsMargins(0, 2, 0, 0);
        gridLayout_36 = new QGridLayout();
        gridLayout_36->setSpacing(5);
        gridLayout_36->setObjectName(QStringLiteral("gridLayout_36"));
        gridLayout_20 = new QGridLayout();
        gridLayout_20->setSpacing(5);
        gridLayout_20->setObjectName(QStringLiteral("gridLayout_20"));
        label_19 = new QLabel(eqAdvOptions);
        label_19->setObjectName(QStringLiteral("label_19"));
        sizePolicy7.setHeightForWidth(label_19->sizePolicy().hasHeightForWidth());
        label_19->setSizePolicy(sizePolicy7);

        gridLayout_20->addWidget(label_19, 3, 0, 1, 1);

        label_18 = new QLabel(eqAdvOptions);
        label_18->setObjectName(QStringLiteral("label_18"));
        sizePolicy7.setHeightForWidth(label_18->sizePolicy().hasHeightForWidth());
        label_18->setSizePolicy(sizePolicy7);

        gridLayout_20->addWidget(label_18, 0, 0, 1, 1);

        label_21 = new QLabel(eqAdvOptions);
        label_21->setObjectName(QStringLiteral("label_21"));
        sizePolicy7.setHeightForWidth(label_21->sizePolicy().hasHeightForWidth());
        label_21->setSizePolicy(sizePolicy7);

        gridLayout_20->addWidget(label_21, 1, 0, 1, 1);

        label_20 = new QLabel(eqAdvOptions);
        label_20->setObjectName(QStringLiteral("label_20"));
        sizePolicy7.setHeightForWidth(label_20->sizePolicy().hasHeightForWidth());
        label_20->setSizePolicy(sizePolicy7);

        gridLayout_20->addWidget(label_20, 2, 0, 1, 1);

        labelBackflow = new QLabel(eqAdvOptions);
        labelBackflow->setObjectName(QStringLiteral("labelBackflow"));

        gridLayout_20->addWidget(labelBackflow, 4, 0, 1, 1);


        gridLayout_36->addLayout(gridLayout_20, 0, 0, 1, 1);

        gridLayout_35 = new QGridLayout();
        gridLayout_35->setSpacing(5);
        gridLayout_35->setObjectName(QStringLiteral("gridLayout_35"));
        minItr = new QSpinBox(eqAdvOptions);
        minItr->setObjectName(QStringLiteral("minItr"));
        minItr->setMinimum(1);
        minItr->setMaximum(5);

        gridLayout_35->addWidget(minItr, 2, 0, 1, 1);

        lineEditTol = new QLineEdit(eqAdvOptions);
        lineEditTol->setObjectName(QStringLiteral("lineEditTol"));
        lineEditTol->setInputMethodHints(Qt::ImhDigitsOnly);

        gridLayout_35->addWidget(lineEditTol, 0, 0, 1, 1);

        maxItr = new QSpinBox(eqAdvOptions);
        maxItr->setObjectName(QStringLiteral("maxItr"));
        maxItr->setMinimum(1);
        maxItr->setValue(5);

        gridLayout_35->addWidget(maxItr, 3, 0, 1, 1);

        dBr = new QSpinBox(eqAdvOptions);
        dBr->setObjectName(QStringLiteral("dBr"));
        dBr->setMinimum(-1000);
        dBr->setMaximum(0);
        dBr->setSingleStep(5);
        dBr->setValue(-20);

        gridLayout_35->addWidget(dBr, 1, 0, 1, 1);

        dsbBackflow = new QDoubleSpinBox(eqAdvOptions);
        dsbBackflow->setObjectName(QStringLiteral("dsbBackflow"));
        dsbBackflow->setMaximum(1);
        dsbBackflow->setSingleStep(0.1);
        dsbBackflow->setValue(0.3);

        gridLayout_35->addWidget(dsbBackflow, 4, 0, 1, 1);


        gridLayout_36->addLayout(gridLayout_35, 0, 1, 1, 1);


        gridLayout_40->addLayout(gridLayout_36, 1, 0, 1, 1);

        verticalSpacer_10 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_40->addItem(verticalSpacer_10, 2, 0, 1, 1);

        coupled = new QCheckBox(eqAdvOptions);
        coupled->setObjectName(QStringLiteral("coupled"));
        coupled->setChecked(true);

        gridLayout_40->addWidget(coupled, 0, 0, 1, 1);


        gridLayout_8->addWidget(eqAdvOptions, 0, 0, 1, 1);

        tabWidget->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        gridLayout_13 = new QGridLayout(tab_5);
        gridLayout_13->setObjectName(QStringLiteral("gridLayout_13"));
        widgetNS = new QWidget(tab_5);
        widgetNS->setObjectName(QStringLiteral("widgetNS"));
        gridLayout_26 = new QGridLayout(widgetNS);
        gridLayout_26->setSpacing(5);
        gridLayout_26->setObjectName(QStringLiteral("gridLayout_26"));
        gridLayout_26->setContentsMargins(0, 0, 0, 0);
        label_17 = new QLabel(widgetNS);
        label_17->setObjectName(QStringLiteral("label_17"));

        gridLayout_26->addWidget(label_17, 1, 0, 1, 1);

        label_23 = new QLabel(widgetNS);
        label_23->setObjectName(QStringLiteral("label_23"));

        gridLayout_26->addWidget(label_23, 2, 0, 1, 1);

        label_15 = new QLabel(widgetNS);
        label_15->setObjectName(QStringLiteral("label_15"));

        gridLayout_26->addWidget(label_15, 0, 0, 1, 1);

        lineEditNSGMMaxItr = new QLineEdit(widgetNS);
        lineEditNSGMMaxItr->setObjectName(QStringLiteral("lineEditNSGMMaxItr"));

        gridLayout_26->addWidget(lineEditNSGMMaxItr, 0, 1, 1, 1);

        lineEditNSGMTol = new QLineEdit(widgetNS);
        lineEditNSGMTol->setObjectName(QStringLiteral("lineEditNSGMTol"));

        gridLayout_26->addWidget(lineEditNSGMTol, 1, 1, 1, 1);

        lineEditNSCGMaxItr = new QLineEdit(widgetNS);
        lineEditNSCGMaxItr->setObjectName(QStringLiteral("lineEditNSCGMaxItr"));

        gridLayout_26->addWidget(lineEditNSCGMaxItr, 2, 1, 1, 1);

        label_24 = new QLabel(widgetNS);
        label_24->setObjectName(QStringLiteral("label_24"));

        gridLayout_26->addWidget(label_24, 3, 0, 1, 1);

        lineEditNSCGTol = new QLineEdit(widgetNS);
        lineEditNSCGTol->setObjectName(QStringLiteral("lineEditNSCGTol"));

        gridLayout_26->addWidget(lineEditNSCGTol, 3, 1, 1, 1);


        gridLayout_13->addWidget(widgetNS, 1, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(5);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        lineEditLSTol = new QLineEdit(tab_5);
        lineEditLSTol->setObjectName(QStringLiteral("lineEditLSTol"));

        gridLayout_2->addWidget(lineEditLSTol, 2, 1, 1, 1);

        label_2 = new QLabel(tab_5);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_2->addWidget(label_2, 0, 0, 1, 1);

        lineEditLSAbsTol = new QLineEdit(tab_5);
        lineEditLSAbsTol->setObjectName(QStringLiteral("lineEditLSAbsTol"));

        gridLayout_2->addWidget(lineEditLSAbsTol, 8, 1, 1, 1);

        label_26 = new QLabel(tab_5);
        label_26->setObjectName(QStringLiteral("label_26"));

        gridLayout_2->addWidget(label_26, 7, 0, 1, 1);

        label_12 = new QLabel(tab_5);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout_2->addWidget(label_12, 2, 0, 1, 1);

        label_27 = new QLabel(tab_5);
        label_27->setObjectName(QStringLiteral("label_27"));

        gridLayout_2->addWidget(label_27, 8, 0, 1, 1);

        comboBoxLSType = new QComboBox(tab_5);
        comboBoxLSType->addItem(QString());
        comboBoxLSType->addItem(QString());
        comboBoxLSType->addItem(QString());
        comboBoxLSType->addItem(QString());
        comboBoxLSType->setObjectName(QStringLiteral("comboBoxLSType"));

        gridLayout_2->addWidget(comboBoxLSType, 0, 1, 1, 1);

        lineEditKrylovDim = new QLineEdit(tab_5);
        lineEditKrylovDim->setObjectName(QStringLiteral("lineEditKrylovDim"));

        gridLayout_2->addWidget(lineEditKrylovDim, 7, 1, 1, 1);

        label_11 = new QLabel(tab_5);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout_2->addWidget(label_11, 1, 0, 1, 1);

        lineEditLSMaxItr = new QLineEdit(tab_5);
        lineEditLSMaxItr->setObjectName(QStringLiteral("lineEditLSMaxItr"));

        gridLayout_2->addWidget(lineEditLSMaxItr, 1, 1, 1, 1);

        label_36 = new QLabel(tab_5);
        label_36->setObjectName(QStringLiteral("label_36"));

        gridLayout_2->addWidget(label_36, 9, 0, 1, 1);

        comboBoxPreconditioner = new QComboBox(tab_5);
        comboBoxPreconditioner->addItem(QString());
        comboBoxPreconditioner->addItem(QString());
        comboBoxPreconditioner->setObjectName(QStringLiteral("comboBoxPreconditioner"));
        comboBoxPreconditioner->setEditable(false);

        gridLayout_2->addWidget(comboBoxPreconditioner, 9, 1, 1, 1);


        gridLayout_13->addLayout(gridLayout_2, 0, 0, 1, 1);

        verticalSpacer_12 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_13->addItem(verticalSpacer_12, 2, 0, 1, 1);

        tabWidget->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QStringLiteral("tab_6"));
        gridLayout_23 = new QGridLayout(tab_6);
        gridLayout_23->setObjectName(QStringLiteral("gridLayout_23"));
        gridLayout_24 = new QGridLayout();
        gridLayout_24->setObjectName(QStringLiteral("gridLayout_24"));
        label_28 = new QLabel(tab_6);
        label_28->setObjectName(QStringLiteral("label_28"));

        gridLayout_24->addWidget(label_28, 0, 0, 1, 1);

        comboBoxRemesher = new QComboBox(tab_6);
        comboBoxRemesher->addItem(QString());
        comboBoxRemesher->addItem(QString());
        comboBoxRemesher->setObjectName(QStringLiteral("comboBoxRemesher"));
        comboBoxRemesher->setEnabled(true);

        gridLayout_24->addWidget(comboBoxRemesher, 0, 1, 1, 1);


        gridLayout_23->addLayout(gridLayout_24, 0, 0, 1, 1);

        widgetRemesher = new QWidget(tab_6);
        widgetRemesher->setObjectName(QStringLiteral("widgetRemesher"));
        gridLayout_21 = new QGridLayout(widgetRemesher);
        gridLayout_21->setSpacing(5);
        gridLayout_21->setObjectName(QStringLiteral("gridLayout_21"));
        gridLayout_21->setContentsMargins(0, 0, 0, 0);
        label_32 = new QLabel(widgetRemesher);
        label_32->setObjectName(QStringLiteral("label_32"));

        gridLayout_21->addWidget(label_32, 4, 0, 1, 1);

        dsbMinAngle = new QDoubleSpinBox(widgetRemesher);
        dsbMinAngle->setObjectName(QStringLiteral("dsbMinAngle"));
        dsbMinAngle->setDecimals(1);
        dsbMinAngle->setMaximum(180);
        dsbMinAngle->setSingleStep(10);
        dsbMinAngle->setValue(10);

        gridLayout_21->addWidget(dsbMinAngle, 1, 1, 1, 1);

        label_31 = new QLabel(widgetRemesher);
        label_31->setObjectName(QStringLiteral("label_31"));

        gridLayout_21->addWidget(label_31, 3, 0, 1, 1);

        label_30 = new QLabel(widgetRemesher);
        label_30->setObjectName(QStringLiteral("label_30"));

        gridLayout_21->addWidget(label_30, 2, 0, 1, 1);

        label_33 = new QLabel(widgetRemesher);
        label_33->setObjectName(QStringLiteral("label_33"));

        gridLayout_21->addWidget(label_33, 6, 0, 1, 1);

        dsbRadiusRatio = new QDoubleSpinBox(widgetRemesher);
        dsbRadiusRatio->setObjectName(QStringLiteral("dsbRadiusRatio"));
        dsbRadiusRatio->setDecimals(1);
        dsbRadiusRatio->setSingleStep(0.1);
        dsbRadiusRatio->setValue(1.3);

        gridLayout_21->addWidget(dsbRadiusRatio, 2, 1, 1, 1);

        label_29 = new QLabel(widgetRemesher);
        label_29->setObjectName(QStringLiteral("label_29"));

        gridLayout_21->addWidget(label_29, 1, 0, 1, 1);

        sbCopyFrequency = new QSpinBox(widgetRemesher);
        sbCopyFrequency->setObjectName(QStringLiteral("sbCopyFrequency"));
        sbCopyFrequency->setMaximum(200);
        sbCopyFrequency->setSingleStep(10);
        sbCopyFrequency->setValue(1);

        gridLayout_21->addWidget(sbCopyFrequency, 4, 1, 1, 1);

        sbRemeshFrequency = new QSpinBox(widgetRemesher);
        sbRemeshFrequency->setObjectName(QStringLiteral("sbRemeshFrequency"));
        sbRemeshFrequency->setMaximum(2000);
        sbRemeshFrequency->setSingleStep(100);
        sbRemeshFrequency->setValue(300);

        gridLayout_21->addWidget(sbRemeshFrequency, 3, 1, 1, 1);

        line_3 = new QFrame(widgetRemesher);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        gridLayout_21->addWidget(line_3, 5, 0, 1, 2);

        comboBoxDomain2 = new QComboBox(widgetRemesher);
        comboBoxDomain2->setObjectName(QStringLiteral("comboBoxDomain2"));

        gridLayout_21->addWidget(comboBoxDomain2, 6, 1, 1, 1);

        label_34 = new QLabel(widgetRemesher);
        label_34->setObjectName(QStringLiteral("label_34"));

        gridLayout_21->addWidget(label_34, 7, 0, 1, 1);

        dsbEdgeSize = new QDoubleSpinBox(widgetRemesher);
        dsbEdgeSize->setObjectName(QStringLiteral("dsbEdgeSize"));
        dsbEdgeSize->setValue(2.6);

        gridLayout_21->addWidget(dsbEdgeSize, 7, 1, 1, 1);


        gridLayout_23->addWidget(widgetRemesher, 1, 0, 1, 1);

        verticalSpacer_14 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_23->addItem(verticalSpacer_14, 2, 0, 1, 1);

        tabWidget->addTab(tab_6, QString());

        gridLayout_41->addWidget(tabWidget, 1, 0, 1, 1);

        groupBox_5 = new QGroupBox(PhysicsSubpanel_widget);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        QSizePolicy sizePolicy12(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy12.setHorizontalStretch(0);
        sizePolicy12.setVerticalStretch(0);
        sizePolicy12.setHeightForWidth(groupBox_5->sizePolicy().hasHeightForWidth());
        groupBox_5->setSizePolicy(sizePolicy12);
        groupBox_5->setMinimumSize(QSize(0, 200));
        gridLayout_19 = new QGridLayout(groupBox_5);
        gridLayout_19->setSpacing(5);
        gridLayout_19->setObjectName(QStringLiteral("gridLayout_19"));
        gridLayout_19->setContentsMargins(0, 2, 0, 0);
        listEqs = new QListWidget(groupBox_5);
        listEqs->setObjectName(QStringLiteral("listEqs"));
        sizePolicy8.setHeightForWidth(listEqs->sizePolicy().hasHeightForWidth());
        listEqs->setSizePolicy(sizePolicy8);
        listEqs->setMaximumSize(QSize(16777215, 16777215));
        listEqs->setAlternatingRowColors(true);

        gridLayout_19->addWidget(listEqs, 0, 2, 1, 1);

        listAvailableEqs = new QListWidget(groupBox_5);
        new QListWidgetItem(listAvailableEqs);
        new QListWidgetItem(listAvailableEqs);
        new QListWidgetItem(listAvailableEqs);
        new QListWidgetItem(listAvailableEqs);
        listAvailableEqs->setObjectName(QStringLiteral("listAvailableEqs"));
        sizePolicy8.setHeightForWidth(listAvailableEqs->sizePolicy().hasHeightForWidth());
        listAvailableEqs->setSizePolicy(sizePolicy8);
        listAvailableEqs->setMaximumSize(QSize(16777215, 16777215));
        listAvailableEqs->setAlternatingRowColors(true);

        gridLayout_19->addWidget(listAvailableEqs, 0, 0, 1, 1);

        gridLayout_9 = new QGridLayout();
        gridLayout_9->setSpacing(5);
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        verticalSpacer_6 = new QSpacerItem(20, 59, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_9->addItem(verticalSpacer_6, 4, 0, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_9->addItem(verticalSpacer_5, 2, 0, 1, 1);

        btnClearEq = new QPushButton(groupBox_5);
        btnClearEq->setObjectName(QStringLiteral("btnClearEq"));
        sizePolicy9.setHeightForWidth(btnClearEq->sizePolicy().hasHeightForWidth());
        btnClearEq->setSizePolicy(sizePolicy9);
        btnClearEq->setMaximumSize(QSize(27, 16777215));

        gridLayout_9->addWidget(btnClearEq, 3, 0, 1, 1);

        btnAddEq = new QPushButton(groupBox_5);
        btnAddEq->setObjectName(QStringLiteral("btnAddEq"));
        sizePolicy9.setHeightForWidth(btnAddEq->sizePolicy().hasHeightForWidth());
        btnAddEq->setSizePolicy(sizePolicy9);
        btnAddEq->setMaximumSize(QSize(27, 16777215));

        gridLayout_9->addWidget(btnAddEq, 1, 0, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 60, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_9->addItem(verticalSpacer_4, 0, 0, 1, 1);


        gridLayout_19->addLayout(gridLayout_9, 0, 1, 1, 1);


        gridLayout_41->addWidget(groupBox_5, 0, 0, 1, 1);

        btnResetEq = new QPushButton(PhysicsSubpanel_widget);
        btnResetEq->setObjectName(QStringLiteral("btnResetEq"));
        sizePolicy1.setHeightForWidth(btnResetEq->sizePolicy().hasHeightForWidth());
        btnResetEq->setSizePolicy(sizePolicy1);

        gridLayout_41->addWidget(btnResetEq, 2, 0, 1, 1, Qt::AlignRight);


        gridLayout_18->addLayout(gridLayout_41, 0, 0, 1, 1);

        Subpanel_toolBox->addItem(PhysicsSubpanel_widget, QStringLiteral("Physics"));
        SimulationParametrsSubpanel_widget = new QWidget();
        SimulationParametrsSubpanel_widget->setObjectName(QStringLiteral("SimulationParametrsSubpanel_widget"));
        SimulationParametrsSubpanel_widget->setGeometry(QRect(0, 0, 434, 609));
        gridLayout_33 = new QGridLayout(SimulationParametrsSubpanel_widget);
        gridLayout_33->setObjectName(QStringLiteral("gridLayout_33"));
        TimeControl_groupBox = new QGroupBox(SimulationParametrsSubpanel_widget);
        TimeControl_groupBox->setObjectName(QStringLiteral("TimeControl_groupBox"));
        gridLayout_27 = new QGridLayout(TimeControl_groupBox);
        gridLayout_27->setObjectName(QStringLiteral("gridLayout_27"));
        TimeStartFromPrev_checkBox = new QCheckBox(TimeControl_groupBox);
        TimeStartFromPrev_checkBox->setObjectName(QStringLiteral("TimeStartFromPrev_checkBox"));
        TimeStartFromPrev_checkBox->setChecked(false);

        gridLayout_27->addWidget(TimeStartFromPrev_checkBox, 0, 0, 1, 1);

        gridLayout_43 = new QGridLayout();
        gridLayout_43->setSpacing(5);
        gridLayout_43->setObjectName(QStringLiteral("gridLayout_43"));
        gridLayout_30 = new QGridLayout();
        gridLayout_30->setSpacing(5);
        gridLayout_30->setObjectName(QStringLiteral("gridLayout_30"));
        label_6 = new QLabel(TimeControl_groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));
        sizePolicy7.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy7);

        gridLayout_30->addWidget(label_6, 2, 0, 1, 1);

        label_3 = new QLabel(TimeControl_groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        sizePolicy7.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy7);

        gridLayout_30->addWidget(label_3, 1, 0, 1, 1);


        gridLayout_43->addLayout(gridLayout_30, 0, 0, 1, 1);

        gridLayout_34 = new QGridLayout();
        gridLayout_34->setSpacing(5);
        gridLayout_34->setObjectName(QStringLiteral("gridLayout_34"));
        TimeStepSize_lineEdit = new QLineEdit(TimeControl_groupBox);
        TimeStepSize_lineEdit->setObjectName(QStringLiteral("TimeStepSize_lineEdit"));
        TimeStepSize_lineEdit->setMaximumSize(QSize(16777215, 16777215));
        TimeStepSize_lineEdit->setInputMethodHints(Qt::ImhDigitsOnly);

        gridLayout_34->addWidget(TimeStepSize_lineEdit, 1, 0, 1, 1);

        TimeNumSteps_spinBox = new QSpinBox(TimeControl_groupBox);
        TimeNumSteps_spinBox->setObjectName(QStringLiteral("TimeNumSteps_spinBox"));
        sizePolicy6.setHeightForWidth(TimeNumSteps_spinBox->sizePolicy().hasHeightForWidth());
        TimeNumSteps_spinBox->setSizePolicy(sizePolicy6);
        TimeNumSteps_spinBox->setInputMethodHints(Qt::ImhDigitsOnly);
        TimeNumSteps_spinBox->setButtonSymbols(QAbstractSpinBox::NoButtons);
        TimeNumSteps_spinBox->setMinimum(1);
        TimeNumSteps_spinBox->setMaximum(9999999);
        TimeNumSteps_spinBox->setSingleStep(100);
        TimeNumSteps_spinBox->setValue(1000);

        gridLayout_34->addWidget(TimeNumSteps_spinBox, 0, 0, 1, 1);


        gridLayout_43->addLayout(gridLayout_34, 0, 1, 1, 1);


        gridLayout_27->addLayout(gridLayout_43, 1, 0, 1, 1);


        gridLayout_33->addWidget(TimeControl_groupBox, 0, 0, 1, 1);

        SimulationResultsOutput_groupBox = new QGroupBox(SimulationParametrsSubpanel_widget);
        SimulationResultsOutput_groupBox->setObjectName(QStringLiteral("SimulationResultsOutput_groupBox"));
        SimulationResultsOutput_groupBox->setFlat(false);
        SimulationResultsOutput_groupBox->setCheckable(false);
        gridLayout_28 = new QGridLayout(SimulationResultsOutput_groupBox);
        gridLayout_28->setObjectName(QStringLiteral("gridLayout_28"));
        Restart_frame = new QFrame(SimulationResultsOutput_groupBox);
        Restart_frame->setObjectName(QStringLiteral("Restart_frame"));
        Restart_frame->setFrameShape(QFrame::StyledPanel);
        Restart_frame->setFrameShadow(QFrame::Raised);
        gridLayout_3 = new QGridLayout(Restart_frame);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        RestartFiles_label = new QLabel(Restart_frame);
        RestartFiles_label->setObjectName(QStringLiteral("RestartFiles_label"));
        QFont font;
        font.setPointSize(13);
        font.setBold(false);
        font.setUnderline(false);
        font.setWeight(50);
        RestartFiles_label->setFont(font);
        RestartFiles_label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_3->addWidget(RestartFiles_label, 0, 0, 1, 2);

        RestartName_label = new QLabel(Restart_frame);
        RestartName_label->setObjectName(QStringLiteral("RestartName_label"));

        gridLayout_3->addWidget(RestartName_label, 1, 0, 1, 1);

        RestartName_lineEdit = new QLineEdit(Restart_frame);
        RestartName_lineEdit->setObjectName(QStringLiteral("RestartName_lineEdit"));

        gridLayout_3->addWidget(RestartName_lineEdit, 1, 1, 1, 2);

        RestartSaveIncr_label = new QLabel(Restart_frame);
        RestartSaveIncr_label->setObjectName(QStringLiteral("RestartSaveIncr_label"));
        sizePolicy2.setHeightForWidth(RestartSaveIncr_label->sizePolicy().hasHeightForWidth());
        RestartSaveIncr_label->setSizePolicy(sizePolicy2);

        gridLayout_3->addWidget(RestartSaveIncr_label, 2, 0, 1, 2);

        RestartSaveIncr_spinBox = new QSpinBox(Restart_frame);
        RestartSaveIncr_spinBox->setObjectName(QStringLiteral("RestartSaveIncr_spinBox"));
        sizePolicy12.setHeightForWidth(RestartSaveIncr_spinBox->sizePolicy().hasHeightForWidth());
        RestartSaveIncr_spinBox->setSizePolicy(sizePolicy12);
        RestartSaveIncr_spinBox->setButtonSymbols(QAbstractSpinBox::NoButtons);
        RestartSaveIncr_spinBox->setMinimum(1);
        RestartSaveIncr_spinBox->setMaximum(9999999);
        RestartSaveIncr_spinBox->setSingleStep(5);
        RestartSaveIncr_spinBox->setValue(10);

        gridLayout_3->addWidget(RestartSaveIncr_spinBox, 2, 2, 1, 2);

        RestartSaveStart_label = new QLabel(Restart_frame);
        RestartSaveStart_label->setObjectName(QStringLiteral("RestartSaveStart_label"));

        gridLayout_3->addWidget(RestartSaveStart_label, 3, 0, 1, 3);

        RestartSaveStart_spinBox = new QSpinBox(Restart_frame);
        RestartSaveStart_spinBox->setObjectName(QStringLiteral("RestartSaveStart_spinBox"));
        sizePolicy12.setHeightForWidth(RestartSaveStart_spinBox->sizePolicy().hasHeightForWidth());
        RestartSaveStart_spinBox->setSizePolicy(sizePolicy12);
        RestartSaveStart_spinBox->setButtonSymbols(QAbstractSpinBox::NoButtons);
        RestartSaveStart_spinBox->setMinimum(1);
        RestartSaveStart_spinBox->setMaximum(9999999);
        RestartSaveStart_spinBox->setSingleStep(10);
        RestartSaveStart_spinBox->setValue(1);

        gridLayout_3->addWidget(RestartSaveStart_spinBox, 3, 3, 1, 1);


        gridLayout_28->addWidget(Restart_frame, 0, 0, 1, 1);

        Vtk_frame = new QFrame(SimulationResultsOutput_groupBox);
        Vtk_frame->setObjectName(QStringLiteral("Vtk_frame"));
        Vtk_frame->setFrameShape(QFrame::StyledPanel);
        Vtk_frame->setFrameShadow(QFrame::Raised);
        gridLayout_15 = new QGridLayout(Vtk_frame);
        gridLayout_15->setObjectName(QStringLiteral("gridLayout_15"));
        VtkSave_checkBox = new QCheckBox(Vtk_frame);
        VtkSave_checkBox->setObjectName(QStringLiteral("VtkSave_checkBox"));
        QFont font1;
        font1.setBold(false);
        font1.setWeight(50);
        VtkSave_checkBox->setFont(font1);

        gridLayout_15->addWidget(VtkSave_checkBox, 0, 0, 1, 2);

        VtkName_label = new QLabel(Vtk_frame);
        VtkName_label->setObjectName(QStringLiteral("VtkName_label"));

        gridLayout_15->addWidget(VtkName_label, 1, 0, 1, 1);

        VtkName_lineEdit = new QLineEdit(Vtk_frame);
        VtkName_lineEdit->setObjectName(QStringLiteral("VtkName_lineEdit"));
        VtkName_lineEdit->setInputMethodHints(Qt::ImhDigitsOnly);

        gridLayout_15->addWidget(VtkName_lineEdit, 1, 1, 1, 2);

        VtkSaveIncr_label = new QLabel(Vtk_frame);
        VtkSaveIncr_label->setObjectName(QStringLiteral("VtkSaveIncr_label"));

        gridLayout_15->addWidget(VtkSaveIncr_label, 2, 0, 1, 2);

        VtkSaveIncr_spinBox = new QSpinBox(Vtk_frame);
        VtkSaveIncr_spinBox->setObjectName(QStringLiteral("VtkSaveIncr_spinBox"));
        sizePolicy12.setHeightForWidth(VtkSaveIncr_spinBox->sizePolicy().hasHeightForWidth());
        VtkSaveIncr_spinBox->setSizePolicy(sizePolicy12);
        VtkSaveIncr_spinBox->setButtonSymbols(QAbstractSpinBox::NoButtons);
        VtkSaveIncr_spinBox->setValue(1);

        gridLayout_15->addWidget(VtkSaveIncr_spinBox, 2, 2, 1, 1);


        gridLayout_28->addWidget(Vtk_frame, 1, 0, 1, 1);

        save_average = new QCheckBox(SimulationResultsOutput_groupBox);
        save_average->setObjectName(QStringLiteral("save_average"));
        save_average->setChecked(false);

        gridLayout_28->addWidget(save_average, 2, 0, 1, 1);


        gridLayout_33->addWidget(SimulationResultsOutput_groupBox, 1, 0, 1, 1);

        AdvancedOptions_groupBox = new QGroupBox(SimulationParametrsSubpanel_widget);
        AdvancedOptions_groupBox->setObjectName(QStringLiteral("AdvancedOptions_groupBox"));
        AdvancedOptions_groupBox->setCheckable(true);
        AdvancedOptions_groupBox->setChecked(false);
        gridLayout = new QGridLayout(AdvancedOptions_groupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_10 = new QLabel(AdvancedOptions_groupBox);
        label_10->setObjectName(QStringLiteral("label_10"));
        sizePolicy7.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy7);

        gridLayout->addWidget(label_10, 0, 0, 1, 1);

        rhoInf = new QDoubleSpinBox(AdvancedOptions_groupBox);
        rhoInf->setObjectName(QStringLiteral("rhoInf"));
        sizePolicy7.setHeightForWidth(rhoInf->sizePolicy().hasHeightForWidth());
        rhoInf->setSizePolicy(sizePolicy7);
        rhoInf->setButtonSymbols(QAbstractSpinBox::NoButtons);
        rhoInf->setMaximum(1);
        rhoInf->setSingleStep(0.1);
        rhoInf->setValue(0.2);

        gridLayout->addWidget(rhoInf, 0, 1, 1, 1);

        checkBoxRemeshing = new QCheckBox(AdvancedOptions_groupBox);
        checkBoxRemeshing->setObjectName(QStringLiteral("checkBoxRemeshing"));

        gridLayout->addWidget(checkBoxRemeshing, 1, 0, 1, 1);

        gridLayout_29 = new QGridLayout();
        gridLayout_29->setSpacing(5);
        gridLayout_29->setObjectName(QStringLiteral("gridLayout_29"));
        warn = new QCheckBox(AdvancedOptions_groupBox);
        warn->setObjectName(QStringLiteral("warn"));
        warn->setChecked(true);

        gridLayout_29->addWidget(warn, 0, 0, 1, 1);

        verb = new QCheckBox(AdvancedOptions_groupBox);
        verb->setObjectName(QStringLiteral("verb"));
        verb->setChecked(true);

        gridLayout_29->addWidget(verb, 0, 1, 1, 1);

        debug = new QCheckBox(AdvancedOptions_groupBox);
        debug->setObjectName(QStringLiteral("debug"));
        debug->setChecked(false);

        gridLayout_29->addWidget(debug, 0, 2, 1, 1);


        gridLayout->addLayout(gridLayout_29, 2, 0, 1, 2);


        gridLayout_33->addWidget(AdvancedOptions_groupBox, 2, 0, 1, 1);

        Subpanel_toolBox->addItem(SimulationParametrsSubpanel_widget, QStringLiteral("Simulation Parameters"));
        TimeControl_groupBox->raise();
        AdvancedOptions_groupBox->raise();
        SimulationResultsOutput_groupBox->raise();
        RunSimulation_widget = new QWidget();
        RunSimulation_widget->setObjectName(QStringLiteral("RunSimulation_widget"));
        RunSimulation_widget->setGeometry(QRect(0, 0, 449, 557));
        gridLayout_53 = new QGridLayout(RunSimulation_widget);
        gridLayout_53->setSpacing(5);
        gridLayout_53->setObjectName(QStringLiteral("gridLayout_53"));
        gridLayout_53->setContentsMargins(5, 0, 5, 0);
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_53->addItem(verticalSpacer, 3, 0, 1, 1);

        widgetRun = new QWidget(RunSimulation_widget);
        widgetRun->setObjectName(QStringLiteral("widgetRun"));
        gridLayout_42 = new QGridLayout(widgetRun);
        gridLayout_42->setSpacing(5);
        gridLayout_42->setObjectName(QStringLiteral("gridLayout_42"));
        gridLayout_42->setContentsMargins(0, 0, 0, 0);
        sliderNumProcs = new ctkSliderWidget(widgetRun);
        sliderNumProcs->setObjectName(QStringLiteral("sliderNumProcs"));

        gridLayout_42->addWidget(sliderNumProcs, 2, 1, 1, 1);

        btnCreateInputFile = new QPushButton(widgetRun);
        btnCreateInputFile->setObjectName(QStringLiteral("btnCreateInputFile"));

        gridLayout_42->addWidget(btnCreateInputFile, 0, 0, 1, 2);

        label_5 = new QLabel(widgetRun);
        label_5->setObjectName(QStringLiteral("label_5"));
        sizePolicy2.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy2);

        gridLayout_42->addWidget(label_5, 2, 0, 1, 1);

        btnRunSim = new QPushButton(widgetRun);
        btnRunSim->setObjectName(QStringLiteral("btnRunSim"));
        QSizePolicy sizePolicy13(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy13.setHorizontalStretch(2);
        sizePolicy13.setVerticalStretch(0);
        sizePolicy13.setHeightForWidth(btnRunSim->sizePolicy().hasHeightForWidth());
        btnRunSim->setSizePolicy(sizePolicy13);

        gridLayout_42->addWidget(btnRunSim, 6, 0, 1, 2);


        gridLayout_53->addWidget(widgetRun, 1, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_53->addItem(verticalSpacer_2, 4, 0, 1, 1);

        btnStopSim = new QPushButton(RunSimulation_widget);
        btnStopSim->setObjectName(QStringLiteral("btnStopSim"));

        gridLayout_53->addWidget(btnStopSim, 2, 0, 1, 1);

        Subpanel_toolBox->addItem(RunSimulation_widget, QStringLiteral("Run Simulation"));

        gridLayout_31->addWidget(Subpanel_toolBox, 0, 0, 1, 1);


        gridLayout_32->addWidget(Subpanel_Widget, 1, 0, 1, 1);

        QWidget::setTabOrder(Subpanel_toolBox, listAvailableEqs);
        QWidget::setTabOrder(listAvailableEqs, btnAddEq);
        QWidget::setTabOrder(btnAddEq, listEqs);
        QWidget::setTabOrder(listEqs, btnClearEq);
        QWidget::setTabOrder(btnClearEq, output);
        QWidget::setTabOrder(output, btnAddOutput);
        QWidget::setTabOrder(btnAddOutput, outputList);
        QWidget::setTabOrder(outputList, btnClearOutput);
        QWidget::setTabOrder(btnClearOutput, prop_1_box);
        QWidget::setTabOrder(prop_1_box, prop_2_box);
        QWidget::setTabOrder(prop_2_box, prop_3_box);
        QWidget::setTabOrder(prop_3_box, prop_4_box);
        QWidget::setTabOrder(prop_4_box, prop_5_box);
        QWidget::setTabOrder(prop_5_box, coupled);
        QWidget::setTabOrder(coupled, lineEditTol);
        QWidget::setTabOrder(lineEditTol, dBr);
        QWidget::setTabOrder(dBr, minItr);
        QWidget::setTabOrder(minItr, maxItr);
        QWidget::setTabOrder(maxItr, bcList);
        QWidget::setTabOrder(bcList, btnAddBC);
        QWidget::setTabOrder(btnAddBC, btnModifyBC);
        QWidget::setTabOrder(btnModifyBC, btnRemoveBC);
        QWidget::setTabOrder(btnRemoveBC, TimeStartFromPrev_checkBox);
        QWidget::setTabOrder(TimeStartFromPrev_checkBox, TimeNumSteps_spinBox);
        QWidget::setTabOrder(TimeNumSteps_spinBox, TimeStepSize_lineEdit);
        QWidget::setTabOrder(TimeStepSize_lineEdit, SimulationResultsOutput_groupBox);
        QWidget::setTabOrder(SimulationResultsOutput_groupBox, AdvancedOptions_groupBox);
        QWidget::setTabOrder(AdvancedOptions_groupBox, warn);
        QWidget::setTabOrder(warn, verb);
        QWidget::setTabOrder(verb, btnRunSim);

        retranslateUi(sv4guisvFSIView);

        tabWidget->setCurrentIndex(4);
        output->setCurrentRow(-1);
        listAvailableEqs->setCurrentRow(-1);


        QMetaObject::connectSlotsByName(sv4guisvFSIView);
    } // setupUi

    void retranslateUi(QWidget *sv4guisvFSIView)
    {
        sv4guisvFSIView->setWindowTitle(QApplication::translate("sv4guisvFSIView", "MainWindow", nullptr));
        btnLoadJob->setText(QApplication::translate("sv4guisvFSIView", "Load Job", nullptr));
        label_25->setText(QApplication::translate("sv4guisvFSIView", "Job Status:", nullptr));
        btnSave->setText(QApplication::translate("sv4guisvFSIView", "Save Job", nullptr));
        btnNewJob->setText(QApplication::translate("sv4guisvFSIView", "New Job", nullptr));
        labelJobName->setText(QString());
        loadMeshButton->setText(QApplication::translate("sv4guisvFSIView", "Load Mesh", nullptr));
        label_14->setText(QApplication::translate("sv4guisvFSIView", "Job Name:", nullptr));
        labelJobStatus->setText(QString());
        btnAddMeshComplete->setText(QApplication::translate("sv4guisvFSIView", "Add Mesh-Complete", nullptr));
        label->setText(QApplication::translate("sv4guisvFSIView", "Domain:", nullptr));
        btnDeleteDomain->setText(QApplication::translate("sv4guisvFSIView", "Delete Domain", nullptr));
        label_13->setText(QApplication::translate("sv4guisvFSIView", "Type:", nullptr));
        radioButtonFluid->setText(QApplication::translate("sv4guisvFSIView", "Fluid", nullptr));
        radioButtonSolid->setText(QApplication::translate("sv4guisvFSIView", "Solid", nullptr));
        label_7->setText(QApplication::translate("sv4guisvFSIView", "Face List:", nullptr));
#ifndef QT_NO_TOOLTIP
        faceList->setToolTip(QApplication::translate("sv4guisvFSIView", "List of added faces", nullptr));
#endif // QT_NO_TOOLTIP
        Subpanel_toolBox->setItemText(Subpanel_toolBox->indexOf(DomainsSubpanel_widget), QApplication::translate("sv4guisvFSIView", "Domains", nullptr));
        phys_prop_group_box->setTitle(QApplication::translate("sv4guisvFSIView", "Physical properties", nullptr));
        prop_1_txt->setText(QApplication::translate("sv4guisvFSIView", "Density", nullptr));
        prop_1_box->setText(QApplication::translate("sv4guisvFSIView", "1", nullptr));
        prop_2_txt->setText(QApplication::translate("sv4guisvFSIView", "Elasticity modulus", nullptr));
        prop_2_box->setText(QApplication::translate("sv4guisvFSIView", "1e+5", nullptr));
        prop_4_txt->setText(QApplication::translate("sv4guisvFSIView", "Viscosity", nullptr));
        prop_4_box->setText(QApplication::translate("sv4guisvFSIView", "0.04", nullptr));
        prop_5_txt->setText(QApplication::translate("sv4guisvFSIView", "Poisson ratio", nullptr));
        prop_5_box->setText(QApplication::translate("sv4guisvFSIView", "0.3", nullptr));
        prop_3_txt->setText(QApplication::translate("sv4guisvFSIView", "Solid Density", nullptr));
        prop_3_box->setText(QApplication::translate("sv4guisvFSIView", "1", nullptr));
        label_35->setText(QApplication::translate("sv4guisvFSIView", "Constitutive model", nullptr));
        comboBoxConstitutive->setItemText(0, QApplication::translate("sv4guisvFSIView", "stVK", nullptr));
        comboBoxConstitutive->setItemText(1, QApplication::translate("sv4guisvFSIView", "stVK85", nullptr));
        comboBoxConstitutive->setItemText(2, QApplication::translate("sv4guisvFSIView", "nHK", nullptr));

        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("sv4guisvFSIView", "Properties", nullptr));
        groupBox_6->setTitle(QApplication::translate("sv4guisvFSIView", "Add or remove outputs", nullptr));
#ifndef QT_NO_TOOLTIP
        output->setToolTip(QApplication::translate("sv4guisvFSIView", "List of possible outputs", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        btnAddOutput->setToolTip(QApplication::translate("sv4guisvFSIView", "Add an output", nullptr));
#endif // QT_NO_TOOLTIP
        btnAddOutput->setText(QApplication::translate("sv4guisvFSIView", ">", nullptr));
#ifndef QT_NO_TOOLTIP
        btnClearOutput->setToolTip(QApplication::translate("sv4guisvFSIView", "Remove an output", nullptr));
#endif // QT_NO_TOOLTIP
        btnClearOutput->setText(QApplication::translate("sv4guisvFSIView", "<", nullptr));
#ifndef QT_NO_TOOLTIP
        outputList->setToolTip(QApplication::translate("sv4guisvFSIView", "List of outputs to be saved", nullptr));
#endif // QT_NO_TOOLTIP
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("sv4guisvFSIView", "Output", nullptr));
        bc_box->setTitle(QApplication::translate("sv4guisvFSIView", "Boundary conditions", nullptr));
        QTableWidgetItem *___qtablewidgetitem = bcList->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("sv4guisvFSIView", "Face", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = bcList->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("sv4guisvFSIView", "BC", nullptr));
#ifndef QT_NO_TOOLTIP
        bcList->setToolTip(QApplication::translate("sv4guisvFSIView", "List of boundary conditions added to the current equation", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        btnAddBC->setToolTip(QApplication::translate("sv4guisvFSIView", "Add a new boundary condition", nullptr));
#endif // QT_NO_TOOLTIP
        btnAddBC->setText(QApplication::translate("sv4guisvFSIView", "Add", nullptr));
#ifndef QT_NO_TOOLTIP
        btnModifyBC->setToolTip(QApplication::translate("sv4guisvFSIView", "Modify the selected boundary condition", nullptr));
#endif // QT_NO_TOOLTIP
        btnModifyBC->setText(QApplication::translate("sv4guisvFSIView", "Modify", nullptr));
#ifndef QT_NO_TOOLTIP
        btnRemoveBC->setToolTip(QApplication::translate("sv4guisvFSIView", "Remove the selected boundary condition", nullptr));
#endif // QT_NO_TOOLTIP
        btnRemoveBC->setText(QApplication::translate("sv4guisvFSIView", "Remove", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("sv4guisvFSIView", "BCs", nullptr));
        eqAdvOptions->setTitle(QApplication::translate("sv4guisvFSIView", "Advanced options", nullptr));
        label_19->setText(QApplication::translate("sv4guisvFSIView", "Max iterations", nullptr));
        label_18->setText(QApplication::translate("sv4guisvFSIView", "Tolerance", nullptr));
        label_21->setText(QApplication::translate("sv4guisvFSIView", "Residual dB reduction", nullptr));
        label_20->setText(QApplication::translate("sv4guisvFSIView", "Min iterations", nullptr));
        labelBackflow->setText(QApplication::translate("sv4guisvFSIView", "Backflow stabilization", nullptr));
#ifndef QT_NO_TOOLTIP
        minItr->setToolTip(QApplication::translate("sv4guisvFSIView", "The min number of iterations to be performed", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        lineEditTol->setToolTip(QApplication::translate("sv4guisvFSIView", "Tolerance on the equation residual, measured relative to the first time step residual", nullptr));
#endif // QT_NO_TOOLTIP
        lineEditTol->setText(QApplication::translate("sv4guisvFSIView", "1e-4", nullptr));
#ifndef QT_NO_TOOLTIP
        maxItr->setToolTip(QApplication::translate("sv4guisvFSIView", "The max number of iterations to be performed", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        dBr->setToolTip(QApplication::translate("sv4guisvFSIView", "Minimum dB reduction in residual, measured relative to the first iteration residual", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        coupled->setToolTip(QApplication::translate("sv4guisvFSIView", "Solve this equation coupled", nullptr));
#endif // QT_NO_TOOLTIP
        coupled->setText(QApplication::translate("sv4guisvFSIView", "Coupled", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("sv4guisvFSIView", "Advanced", nullptr));
        label_17->setText(QApplication::translate("sv4guisvFSIView", "NS-GM Tolerance:", nullptr));
        label_23->setText(QApplication::translate("sv4guisvFSIView", "NS-CG Max Iterations:", nullptr));
        label_15->setText(QApplication::translate("sv4guisvFSIView", "NS-GM Max Iterations:", nullptr));
        lineEditNSGMMaxItr->setText(QApplication::translate("sv4guisvFSIView", "5", nullptr));
        lineEditNSGMTol->setText(QApplication::translate("sv4guisvFSIView", "1e-4", nullptr));
        lineEditNSCGMaxItr->setText(QApplication::translate("sv4guisvFSIView", "500", nullptr));
        label_24->setText(QApplication::translate("sv4guisvFSIView", "NS-CG Tolerance:", nullptr));
        lineEditNSCGTol->setText(QApplication::translate("sv4guisvFSIView", "1e-4", nullptr));
        lineEditLSTol->setText(QApplication::translate("sv4guisvFSIView", "1e-4", nullptr));
        label_2->setText(QApplication::translate("sv4guisvFSIView", "Type:", nullptr));
        lineEditLSAbsTol->setText(QApplication::translate("sv4guisvFSIView", "1e-4", nullptr));
        label_26->setText(QApplication::translate("sv4guisvFSIView", "Krylov Dimension:", nullptr));
        label_12->setText(QApplication::translate("sv4guisvFSIView", "Tolerance:", nullptr));
        label_27->setText(QApplication::translate("sv4guisvFSIView", "Absolute Tolerance:", nullptr));
        comboBoxLSType->setItemText(0, QApplication::translate("sv4guisvFSIView", "GMRES", nullptr));
        comboBoxLSType->setItemText(1, QApplication::translate("sv4guisvFSIView", "NS", nullptr));
        comboBoxLSType->setItemText(2, QApplication::translate("sv4guisvFSIView", "CG", nullptr));
        comboBoxLSType->setItemText(3, QApplication::translate("sv4guisvFSIView", "BICG", nullptr));

#ifndef QT_NO_TOOLTIP
        comboBoxLSType->setToolTip(QApplication::translate("sv4guisvFSIView", "The linear solver type.", nullptr));
#endif // QT_NO_TOOLTIP
        lineEditKrylovDim->setText(QApplication::translate("sv4guisvFSIView", "50", nullptr));
        label_11->setText(QApplication::translate("sv4guisvFSIView", "Max Iterations:", nullptr));
        lineEditLSMaxItr->setText(QApplication::translate("sv4guisvFSIView", "10", nullptr));
        label_36->setText(QApplication::translate("sv4guisvFSIView", "Preconditioner:", nullptr));
        comboBoxPreconditioner->setItemText(0, QApplication::translate("sv4guisvFSIView", "Default", nullptr));
        comboBoxPreconditioner->setItemText(1, QString());

        comboBoxPreconditioner->setCurrentText(QApplication::translate("sv4guisvFSIView", "Default", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("sv4guisvFSIView", "Linear Solver", nullptr));
        label_28->setText(QApplication::translate("sv4guisvFSIView", "Remesher", nullptr));
        comboBoxRemesher->setItemText(0, QApplication::translate("sv4guisvFSIView", "None", nullptr));
        comboBoxRemesher->setItemText(1, QApplication::translate("sv4guisvFSIView", "Tetgen", nullptr));

        label_32->setText(QApplication::translate("sv4guisvFSIView", "Frequency for copying data", nullptr));
        label_31->setText(QApplication::translate("sv4guisvFSIView", "Remesh frequency", nullptr));
        label_30->setText(QApplication::translate("sv4guisvFSIView", "Max radius ratio", nullptr));
        label_33->setText(QApplication::translate("sv4guisvFSIView", "Domain", nullptr));
        label_29->setText(QApplication::translate("sv4guisvFSIView", "Min dihedral angle", nullptr));
        label_34->setText(QApplication::translate("sv4guisvFSIView", "Max edge size", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_6), QApplication::translate("sv4guisvFSIView", "Remesher", nullptr));
        groupBox_5->setTitle(QApplication::translate("sv4guisvFSIView", "Add or remove equations", nullptr));
#ifndef QT_NO_TOOLTIP
        listEqs->setToolTip(QApplication::translate("sv4guisvFSIView", "List of equations to be solved", nullptr));
#endif // QT_NO_TOOLTIP

        const bool __sortingEnabled = listAvailableEqs->isSortingEnabled();
        listAvailableEqs->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listAvailableEqs->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("sv4guisvFSIView", "Incomp. fluid", nullptr));
        QListWidgetItem *___qlistwidgetitem1 = listAvailableEqs->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("sv4guisvFSIView", "Structure", nullptr));
        QListWidgetItem *___qlistwidgetitem2 = listAvailableEqs->item(2);
        ___qlistwidgetitem2->setText(QApplication::translate("sv4guisvFSIView", "FSI", nullptr));
        QListWidgetItem *___qlistwidgetitem3 = listAvailableEqs->item(3);
        ___qlistwidgetitem3->setText(QApplication::translate("sv4guisvFSIView", "Linear elasticity", nullptr));
        listAvailableEqs->setSortingEnabled(__sortingEnabled);

#ifndef QT_NO_TOOLTIP
        listAvailableEqs->setToolTip(QApplication::translate("sv4guisvFSIView", "List of available equations", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        btnClearEq->setToolTip(QApplication::translate("sv4guisvFSIView", "Remove an equation from the list", nullptr));
#endif // QT_NO_TOOLTIP
        btnClearEq->setText(QApplication::translate("sv4guisvFSIView", "<", nullptr));
#ifndef QT_NO_TOOLTIP
        btnAddEq->setToolTip(QApplication::translate("sv4guisvFSIView", "Add an equation to the list", nullptr));
#endif // QT_NO_TOOLTIP
        btnAddEq->setText(QApplication::translate("sv4guisvFSIView", ">", nullptr));
#ifndef QT_NO_TOOLTIP
        btnResetEq->setToolTip(QApplication::translate("sv4guisvFSIView", "Reset the current equation to the default settings", nullptr));
#endif // QT_NO_TOOLTIP
        btnResetEq->setText(QApplication::translate("sv4guisvFSIView", "Reset", nullptr));
        Subpanel_toolBox->setItemText(Subpanel_toolBox->indexOf(PhysicsSubpanel_widget), QApplication::translate("sv4guisvFSIView", "Physics", nullptr));
        TimeControl_groupBox->setTitle(QApplication::translate("sv4guisvFSIView", "Time control", nullptr));
#ifndef QT_NO_TOOLTIP
        TimeStartFromPrev_checkBox->setToolTip(QApplication::translate("sv4guisvFSIView", "Continue the last simulation ", nullptr));
#endif // QT_NO_TOOLTIP
        TimeStartFromPrev_checkBox->setText(QApplication::translate("sv4guisvFSIView", "Sta&rt from previous simulation", nullptr));
        label_6->setText(QApplication::translate("sv4guisvFSIView", "Time step size", nullptr));
        label_3->setText(QApplication::translate("sv4guisvFSIView", "Number of time steps", nullptr));
#ifndef QT_NO_TOOLTIP
        TimeStepSize_lineEdit->setToolTip(QApplication::translate("sv4guisvFSIView", "Time step size", nullptr));
#endif // QT_NO_TOOLTIP
        TimeStepSize_lineEdit->setText(QApplication::translate("sv4guisvFSIView", "1e-3", nullptr));
#ifndef QT_NO_TOOLTIP
        TimeNumSteps_spinBox->setToolTip(QApplication::translate("sv4guisvFSIView", "Total number of time steps", nullptr));
#endif // QT_NO_TOOLTIP
        SimulationResultsOutput_groupBox->setTitle(QApplication::translate("sv4guisvFSIView", "Simulation results output", nullptr));
        RestartFiles_label->setText(QApplication::translate("sv4guisvFSIView", "Restart files", nullptr));
        RestartName_label->setText(QApplication::translate("sv4guisvFSIView", "Name", nullptr));
#ifndef QT_NO_TOOLTIP
        RestartName_lineEdit->setToolTip(QApplication::translate("sv4guisvFSIView", "The prefix used to name simulation results bin files.", nullptr));
#endif // QT_NO_TOOLTIP
        RestartName_lineEdit->setText(QApplication::translate("sv4guisvFSIView", "result", nullptr));
        RestartSaveIncr_label->setText(QApplication::translate("sv4guisvFSIView", "Save increment", nullptr));
#ifndef QT_NO_TOOLTIP
        RestartSaveIncr_spinBox->setToolTip(QApplication::translate("sv4guisvFSIView", "<html><head/><body><p>The frequency used to save restart files in terns of a  time step increment.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        RestartSaveStart_label->setText(QApplication::translate("sv4guisvFSIView", "Save results aftet time step", nullptr));
#ifndef QT_NO_TOOLTIP
        RestartSaveStart_spinBox->setToolTip(QApplication::translate("sv4guisvFSIView", "<html><head/><body><p>Start saving results after the given time step.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        VtkSave_checkBox->setToolTip(QApplication::translate("sv4guisvFSIView", "If selected then save simulatiion results as VTK files.", nullptr));
#endif // QT_NO_TOOLTIP
        VtkSave_checkBox->setText(QApplication::translate("sv4guisvFSIView", "Save as VTK", nullptr));
        VtkName_label->setText(QApplication::translate("sv4guisvFSIView", "Name", nullptr));
#ifndef QT_NO_TOOLTIP
        VtkName_lineEdit->setToolTip(QApplication::translate("sv4guisvFSIView", "The prefix used to name simulation results VTK files.", nullptr));
#endif // QT_NO_TOOLTIP
        VtkName_lineEdit->setInputMask(QString());
        VtkName_lineEdit->setText(QApplication::translate("sv4guisvFSIView", "result", nullptr));
        VtkSaveIncr_label->setText(QApplication::translate("sv4guisvFSIView", "Save increment", nullptr));
#ifndef QT_NO_TOOLTIP
        VtkSaveIncr_spinBox->setToolTip(QApplication::translate("sv4guisvFSIView", "The frequency used to save VTK files in terns of a time step increment.", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        save_average->setToolTip(QApplication::translate("sv4guisvFSIView", "<html><head/><body><p>Save a single file containing average of previously saved results</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        save_average->setText(QApplication::translate("sv4guisvFSIView", "Time-averaged results", nullptr));
        AdvancedOptions_groupBox->setTitle(QApplication::translate("sv4guisvFSIView", "&Advanced options", nullptr));
        label_10->setText(QApplication::translate("sv4guisvFSIView", "Spectral radius of infinite time step", nullptr));
#ifndef QT_NO_TOOLTIP
        rhoInf->setToolTip(QApplication::translate("sv4guisvFSIView", "Spectral radius of infinite time step size", nullptr));
#endif // QT_NO_TOOLTIP
        checkBoxRemeshing->setText(QApplication::translate("sv4guisvFSIView", "Remeshing", nullptr));
#ifndef QT_NO_TOOLTIP
        warn->setToolTip(QApplication::translate("sv4guisvFSIView", "Output warnings", nullptr));
#endif // QT_NO_TOOLTIP
        warn->setText(QApplication::translate("sv4guisvFSIView", "Warning", nullptr));
#ifndef QT_NO_TOOLTIP
        verb->setToolTip(QApplication::translate("sv4guisvFSIView", "Output simulation status", nullptr));
#endif // QT_NO_TOOLTIP
        verb->setText(QApplication::translate("sv4guisvFSIView", "Verbose", nullptr));
#ifndef QT_NO_TOOLTIP
        debug->setToolTip(QApplication::translate("sv4guisvFSIView", "<html><head/><body><p>Output debugging information</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        debug->setText(QApplication::translate("sv4guisvFSIView", "Debug", nullptr));
        Subpanel_toolBox->setItemText(Subpanel_toolBox->indexOf(SimulationParametrsSubpanel_widget), QApplication::translate("sv4guisvFSIView", "Simulation Parameters", nullptr));
        btnCreateInputFile->setText(QApplication::translate("sv4guisvFSIView", "Create Input File", nullptr));
        label_5->setText(QApplication::translate("sv4guisvFSIView", "Number of Processes:", nullptr));
#ifndef QT_NO_TOOLTIP
        btnRunSim->setToolTip(QApplication::translate("sv4guisvFSIView", "Run the simulation using a single processor", nullptr));
#endif // QT_NO_TOOLTIP
        btnRunSim->setText(QApplication::translate("sv4guisvFSIView", "Run", nullptr));
        btnStopSim->setText(QApplication::translate("sv4guisvFSIView", "Stop", nullptr));
        Subpanel_toolBox->setItemText(Subpanel_toolBox->indexOf(RunSimulation_widget), QApplication::translate("sv4guisvFSIView", "Run Simulation", nullptr));
    } // retranslateUi

};

namespace Ui {
    class sv4guisvFSIView: public Ui_sv4guisvFSIView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SV4GUI_SVFSIVIEW_H
