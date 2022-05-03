/********************************************************************************
** Form generated from reading UI file 'sv4gui_SimulationView.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SV4GUI_SIMULATIONVIEW_H
#define UI_SV4GUI_SIMULATIONVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "ctkSliderWidget.h"

QT_BEGIN_NAMESPACE

class Ui_sv4guiSimulationView
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widgetTop;
    QGridLayout *gridLayout_6;
    QLabel *label_4;
    QLabel *labelJobName;
    QLabel *label_2;
    QLabel *label;
    QLabel *labelModelName;
    QPushButton *btnSave;
    QLabel *labelJobStatus;
    QCheckBox *checkBoxShowModel;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_2;
    QToolBox *toolBox;
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
    QVBoxLayout *verticalLayout_4;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QComboBox *comboBoxWallType;
    QWidget *widgetConstant;
    QVBoxLayout *verticalLayout_5;
    QWidget *widgetThicknessE;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_5;
    QLineEdit *lineEditThickness;
    QLabel *label_6;
    QLineEdit *lineEditE;
    QWidget *widget_8;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_7;
    QLineEdit *lineEditNu;
    QLabel *label_8;
    QLineEdit *lineEditKcons;
    QWidget *widget_9;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_19;
    QLineEdit *lineEditWallDensity;
    QLabel *label_9;
    QLineEdit *lineEditPressure;
    QWidget *widget_10;
    QHBoxLayout *horizontalLayout_6;
    QWidget *widgetVariable;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_10;
    QTableView *tableViewVar;
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
    QWidget *widget_15;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_18;
    QComboBox *comboBoxMeshName;
    QPushButton *btnCreateAllFiles;
    QPushButton *btnImportFiles;
    QCheckBox *UseMpiCheckBox;
    QLabel *NumberProcessesLabel;
    ctkSliderWidget *sliderNumProcs;
    QLabel *StartingStepLabel;
    QLineEdit *lineEditStartStepNum;
    QPushButton *btnRunJob;
    QSpacerItem *verticalSpacer_2;
    QWidget *page_6;
    QVBoxLayout *verticalLayout_13;
    QWidget *widget_11;
    QVBoxLayout *verticalLayout_14;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout_16;
    QWidget *widget_17;
    QHBoxLayout *horizontalLayout;
    QLabel *label_20;
    QWidget *widget;
    QGridLayout *gridLayout_5;
    QToolButton *toolButtonResultDir;
    QLineEdit *lineEditResultDir;
    QFrame *frame_13;
    QVBoxLayout *verticalLayout_15;
    QLabel *label_13;
    QWidget *widget_14;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_14;
    QLineEdit *lineEditStart;
    QLabel *label_15;
    QLineEdit *lineEditStop;
    QLabel *label_16;
    QLineEdit *lineEditIncrement;
    QFrame *frame_15;
    QGridLayout *gridLayout_2;
    QCheckBox *checkBoxToRestart;
    QCheckBox *checkBoxSingleFile;
    QLabel *label_17;
    QCheckBox *checkBoxVolume;
    QCheckBox *checkBoxSurface;
    QFrame *frame_3;
    QVBoxLayout *verticalLayout_17;
    QCheckBox *checkBoxCalculateFlows;
    QWidget *widgetCalculateFlows;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_21;
    QComboBox *comboBoxSimUnits;
    QCheckBox *checkBoxSkipWalls;
    QWidget *widget_13;
    QHBoxLayout *horizontalLayout_9;
    QPushButton *btnExportResults;
    QSpacerItem *verticalSpacer_3;

    void setupUi(QWidget *sv4guiSimulationView)
    {
        if (sv4guiSimulationView->objectName().isEmpty())
            sv4guiSimulationView->setObjectName(QStringLiteral("sv4guiSimulationView"));
        sv4guiSimulationView->resize(417, 866);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(sv4guiSimulationView->sizePolicy().hasHeightForWidth());
        sv4guiSimulationView->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(sv4guiSimulationView);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(5, 5, 5, 0);
        widgetTop = new QWidget(sv4guiSimulationView);
        widgetTop->setObjectName(QStringLiteral("widgetTop"));
        gridLayout_6 = new QGridLayout(widgetTop);
        gridLayout_6->setSpacing(5);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        gridLayout_6->setContentsMargins(0, 0, 0, 5);
        label_4 = new QLabel(widgetTop);
        label_4->setObjectName(QStringLiteral("label_4"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy1);

        gridLayout_6->addWidget(label_4, 2, 0, 1, 1);

        labelJobName = new QLabel(widgetTop);
        labelJobName->setObjectName(QStringLiteral("labelJobName"));

        gridLayout_6->addWidget(labelJobName, 0, 1, 1, 1);

        label_2 = new QLabel(widgetTop);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_6->addWidget(label_2, 1, 0, 1, 1);

        label = new QLabel(widgetTop);
        label->setObjectName(QStringLiteral("label"));
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setLayoutDirection(Qt::LeftToRight);

        gridLayout_6->addWidget(label, 0, 0, 1, 1);

        labelModelName = new QLabel(widgetTop);
        labelModelName->setObjectName(QStringLiteral("labelModelName"));

        gridLayout_6->addWidget(labelModelName, 1, 1, 1, 1);

        btnSave = new QPushButton(widgetTop);
        btnSave->setObjectName(QStringLiteral("btnSave"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(btnSave->sizePolicy().hasHeightForWidth());
        btnSave->setSizePolicy(sizePolicy2);

        gridLayout_6->addWidget(btnSave, 0, 2, 1, 1);

        labelJobStatus = new QLabel(widgetTop);
        labelJobStatus->setObjectName(QStringLiteral("labelJobStatus"));

        gridLayout_6->addWidget(labelJobStatus, 2, 1, 1, 2);

        checkBoxShowModel = new QCheckBox(widgetTop);
        checkBoxShowModel->setObjectName(QStringLiteral("checkBoxShowModel"));
        sizePolicy2.setHeightForWidth(checkBoxShowModel->sizePolicy().hasHeightForWidth());
        checkBoxShowModel->setSizePolicy(sizePolicy2);

        gridLayout_6->addWidget(checkBoxShowModel, 1, 2, 1, 1);


        verticalLayout->addWidget(widgetTop);

        widget_2 = new QWidget(sv4guiSimulationView);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        verticalLayout_2 = new QVBoxLayout(widget_2);
        verticalLayout_2->setSpacing(5);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        toolBox = new QToolBox(widget_2);
        toolBox->setObjectName(QStringLiteral("toolBox"));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        page->setGeometry(QRect(0, 0, 407, 586));
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
        page_2->setGeometry(QRect(0, 0, 407, 586));
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
        page_3->setGeometry(QRect(0, 0, 407, 586));
        verticalLayout_3 = new QVBoxLayout(page_3);
        verticalLayout_3->setSpacing(5);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        widget_4 = new QWidget(page_3);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        verticalLayout_4 = new QVBoxLayout(widget_4);
        verticalLayout_4->setSpacing(5);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(5, 0, 5, 5);
        widget_5 = new QWidget(widget_4);
        widget_5->setObjectName(QStringLiteral("widget_5"));
        sizePolicy.setHeightForWidth(widget_5->sizePolicy().hasHeightForWidth());
        widget_5->setSizePolicy(sizePolicy);
        horizontalLayout_2 = new QHBoxLayout(widget_5);
        horizontalLayout_2->setSpacing(5);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(widget_5);
        label_3->setObjectName(QStringLiteral("label_3"));
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(label_3);

        comboBoxWallType = new QComboBox(widget_5);
        comboBoxWallType->addItem(QString());
        comboBoxWallType->addItem(QString());
        comboBoxWallType->addItem(QString());
        comboBoxWallType->setObjectName(QStringLiteral("comboBoxWallType"));

        horizontalLayout_2->addWidget(comboBoxWallType);


        verticalLayout_4->addWidget(widget_5);

        widgetConstant = new QWidget(widget_4);
        widgetConstant->setObjectName(QStringLiteral("widgetConstant"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(widgetConstant->sizePolicy().hasHeightForWidth());
        widgetConstant->setSizePolicy(sizePolicy3);
        verticalLayout_5 = new QVBoxLayout(widgetConstant);
        verticalLayout_5->setSpacing(5);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        widgetThicknessE = new QWidget(widgetConstant);
        widgetThicknessE->setObjectName(QStringLiteral("widgetThicknessE"));
        horizontalLayout_3 = new QHBoxLayout(widgetThicknessE);
        horizontalLayout_3->setSpacing(5);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(widgetThicknessE);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_3->addWidget(label_5);

        lineEditThickness = new QLineEdit(widgetThicknessE);
        lineEditThickness->setObjectName(QStringLiteral("lineEditThickness"));

        horizontalLayout_3->addWidget(lineEditThickness);

        label_6 = new QLabel(widgetThicknessE);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_3->addWidget(label_6);

        lineEditE = new QLineEdit(widgetThicknessE);
        lineEditE->setObjectName(QStringLiteral("lineEditE"));

        horizontalLayout_3->addWidget(lineEditE);


        verticalLayout_5->addWidget(widgetThicknessE);

        widget_8 = new QWidget(widgetConstant);
        widget_8->setObjectName(QStringLiteral("widget_8"));
        horizontalLayout_4 = new QHBoxLayout(widget_8);
        horizontalLayout_4->setSpacing(5);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(widget_8);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_4->addWidget(label_7);

        lineEditNu = new QLineEdit(widget_8);
        lineEditNu->setObjectName(QStringLiteral("lineEditNu"));

        horizontalLayout_4->addWidget(lineEditNu);

        label_8 = new QLabel(widget_8);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_4->addWidget(label_8);

        lineEditKcons = new QLineEdit(widget_8);
        lineEditKcons->setObjectName(QStringLiteral("lineEditKcons"));

        horizontalLayout_4->addWidget(lineEditKcons);

        lineEditNu->raise();
        label_7->raise();
        label_8->raise();
        lineEditKcons->raise();

        verticalLayout_5->addWidget(widget_8);

        widget_9 = new QWidget(widgetConstant);
        widget_9->setObjectName(QStringLiteral("widget_9"));
        horizontalLayout_5 = new QHBoxLayout(widget_9);
        horizontalLayout_5->setSpacing(5);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_19 = new QLabel(widget_9);
        label_19->setObjectName(QStringLiteral("label_19"));

        horizontalLayout_5->addWidget(label_19);

        lineEditWallDensity = new QLineEdit(widget_9);
        lineEditWallDensity->setObjectName(QStringLiteral("lineEditWallDensity"));

        horizontalLayout_5->addWidget(lineEditWallDensity);

        label_9 = new QLabel(widget_9);
        label_9->setObjectName(QStringLiteral("label_9"));

        horizontalLayout_5->addWidget(label_9);

        lineEditPressure = new QLineEdit(widget_9);
        lineEditPressure->setObjectName(QStringLiteral("lineEditPressure"));

        horizontalLayout_5->addWidget(lineEditPressure);


        verticalLayout_5->addWidget(widget_9);


        verticalLayout_4->addWidget(widgetConstant);

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
        label_10 = new QLabel(widgetVariable);
        label_10->setObjectName(QStringLiteral("label_10"));

        verticalLayout_6->addWidget(label_10);

        tableViewVar = new QTableView(widgetVariable);
        tableViewVar->setObjectName(QStringLiteral("tableViewVar"));
        tableViewVar->setContextMenuPolicy(Qt::CustomContextMenu);
        tableViewVar->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableViewVar->setSortingEnabled(true);

        verticalLayout_6->addWidget(tableViewVar);


        horizontalLayout_6->addWidget(widgetVariable);

        verticalSpacer = new QSpacerItem(0, 459, QSizePolicy::Minimum, QSizePolicy::Expanding);

        horizontalLayout_6->addItem(verticalSpacer);


        verticalLayout_4->addWidget(widget_10);


        verticalLayout_3->addWidget(widget_4);

        toolBox->addItem(page_3, QStringLiteral("Wall Properties"));
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        page_4->setGeometry(QRect(0, 0, 407, 586));
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
        page_5->setGeometry(QRect(0, 0, 407, 586));
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
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        widget_15 = new QWidget(widgetRun);
        widget_15->setObjectName(QStringLiteral("widget_15"));
        horizontalLayout_7 = new QHBoxLayout(widget_15);
        horizontalLayout_7->setSpacing(5);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_18 = new QLabel(widget_15);
        label_18->setObjectName(QStringLiteral("label_18"));
        sizePolicy1.setHeightForWidth(label_18->sizePolicy().hasHeightForWidth());
        label_18->setSizePolicy(sizePolicy1);

        horizontalLayout_7->addWidget(label_18);

        comboBoxMeshName = new QComboBox(widget_15);
        comboBoxMeshName->setObjectName(QStringLiteral("comboBoxMeshName"));

        horizontalLayout_7->addWidget(comboBoxMeshName);


        gridLayout->addWidget(widget_15, 0, 0, 1, 3);

        btnCreateAllFiles = new QPushButton(widgetRun);
        btnCreateAllFiles->setObjectName(QStringLiteral("btnCreateAllFiles"));

        gridLayout->addWidget(btnCreateAllFiles, 1, 0, 1, 3);

        btnImportFiles = new QPushButton(widgetRun);
        btnImportFiles->setObjectName(QStringLiteral("btnImportFiles"));

        gridLayout->addWidget(btnImportFiles, 2, 0, 1, 3);

        UseMpiCheckBox = new QCheckBox(widgetRun);
        UseMpiCheckBox->setObjectName(QStringLiteral("UseMpiCheckBox"));

        gridLayout->addWidget(UseMpiCheckBox, 3, 0, 1, 1);

        NumberProcessesLabel = new QLabel(widgetRun);
        NumberProcessesLabel->setObjectName(QStringLiteral("NumberProcessesLabel"));

        gridLayout->addWidget(NumberProcessesLabel, 3, 1, 1, 2);

        sliderNumProcs = new ctkSliderWidget(widgetRun);
        sliderNumProcs->setObjectName(QStringLiteral("sliderNumProcs"));
        sliderNumProcs->setProperty("decimals", QVariant(0));
        sliderNumProcs->setProperty("pageStep", QVariant(40));
        sliderNumProcs->setProperty("minimum", QVariant(1));
        sliderNumProcs->setProperty("maximum", QVariant(64));

        gridLayout->addWidget(sliderNumProcs, 3, 3, 1, 1);

        StartingStepLabel = new QLabel(widgetRun);
        StartingStepLabel->setObjectName(QStringLiteral("StartingStepLabel"));

        gridLayout->addWidget(StartingStepLabel, 4, 0, 1, 2);

        lineEditStartStepNum = new QLineEdit(widgetRun);
        lineEditStartStepNum->setObjectName(QStringLiteral("lineEditStartStepNum"));

        gridLayout->addWidget(lineEditStartStepNum, 4, 2, 1, 2);

        btnRunJob = new QPushButton(widgetRun);
        btnRunJob->setObjectName(QStringLiteral("btnRunJob"));

        gridLayout->addWidget(btnRunJob, 5, 0, 1, 1);


        verticalLayout_12->addWidget(widgetRun);

        verticalSpacer_2 = new QSpacerItem(17, 553, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_12->addItem(verticalSpacer_2);


        verticalLayout_11->addWidget(widget_7);

        toolBox->addItem(page_5, QStringLiteral("Create Files and Run Simulation"));
        page_6 = new QWidget();
        page_6->setObjectName(QStringLiteral("page_6"));
        page_6->setGeometry(QRect(0, 0, 407, 586));
        verticalLayout_13 = new QVBoxLayout(page_6);
        verticalLayout_13->setSpacing(5);
        verticalLayout_13->setObjectName(QStringLiteral("verticalLayout_13"));
        verticalLayout_13->setContentsMargins(5, 0, 5, 5);
        widget_11 = new QWidget(page_6);
        widget_11->setObjectName(QStringLiteral("widget_11"));
        verticalLayout_14 = new QVBoxLayout(widget_11);
        verticalLayout_14->setSpacing(5);
        verticalLayout_14->setObjectName(QStringLiteral("verticalLayout_14"));
        verticalLayout_14->setContentsMargins(0, 0, 0, 0);
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


        verticalLayout_14->addWidget(frame_2);

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

        label_16 = new QLabel(widget_14);
        label_16->setObjectName(QStringLiteral("label_16"));

        horizontalLayout_8->addWidget(label_16);

        lineEditIncrement = new QLineEdit(widget_14);
        lineEditIncrement->setObjectName(QStringLiteral("lineEditIncrement"));

        horizontalLayout_8->addWidget(lineEditIncrement);


        verticalLayout_15->addWidget(widget_14);


        verticalLayout_14->addWidget(frame_13);

        frame_15 = new QFrame(widget_11);
        frame_15->setObjectName(QStringLiteral("frame_15"));
        frame_15->setFrameShape(QFrame::StyledPanel);
        frame_15->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frame_15);
        gridLayout_2->setSpacing(5);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(5, 5, 5, 5);
        checkBoxToRestart = new QCheckBox(frame_15);
        checkBoxToRestart->setObjectName(QStringLiteral("checkBoxToRestart"));

        gridLayout_2->addWidget(checkBoxToRestart, 2, 1, 1, 1);

        checkBoxSingleFile = new QCheckBox(frame_15);
        checkBoxSingleFile->setObjectName(QStringLiteral("checkBoxSingleFile"));

        gridLayout_2->addWidget(checkBoxSingleFile, 2, 0, 1, 1);

        label_17 = new QLabel(frame_15);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setFont(font);

        gridLayout_2->addWidget(label_17, 0, 0, 1, 1);

        checkBoxVolume = new QCheckBox(frame_15);
        checkBoxVolume->setObjectName(QStringLiteral("checkBoxVolume"));
        checkBoxVolume->setChecked(true);

        gridLayout_2->addWidget(checkBoxVolume, 1, 0, 1, 1);

        checkBoxSurface = new QCheckBox(frame_15);
        checkBoxSurface->setObjectName(QStringLiteral("checkBoxSurface"));
        checkBoxSurface->setChecked(true);

        gridLayout_2->addWidget(checkBoxSurface, 1, 1, 1, 1);

        frame_3 = new QFrame(frame_15);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        verticalLayout_17 = new QVBoxLayout(frame_3);
        verticalLayout_17->setSpacing(5);
        verticalLayout_17->setObjectName(QStringLiteral("verticalLayout_17"));
        verticalLayout_17->setContentsMargins(0, 5, 0, 5);
        checkBoxCalculateFlows = new QCheckBox(frame_3);
        checkBoxCalculateFlows->setObjectName(QStringLiteral("checkBoxCalculateFlows"));
        checkBoxCalculateFlows->setChecked(true);

        verticalLayout_17->addWidget(checkBoxCalculateFlows);

        widgetCalculateFlows = new QWidget(frame_3);
        widgetCalculateFlows->setObjectName(QStringLiteral("widgetCalculateFlows"));
        horizontalLayout_10 = new QHBoxLayout(widgetCalculateFlows);
        horizontalLayout_10->setSpacing(5);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(0, 0, 0, 0);
        label_21 = new QLabel(widgetCalculateFlows);
        label_21->setObjectName(QStringLiteral("label_21"));
        sizePolicy1.setHeightForWidth(label_21->sizePolicy().hasHeightForWidth());
        label_21->setSizePolicy(sizePolicy1);

        horizontalLayout_10->addWidget(label_21);

        comboBoxSimUnits = new QComboBox(widgetCalculateFlows);
        comboBoxSimUnits->addItem(QString());
        comboBoxSimUnits->addItem(QString());
        comboBoxSimUnits->setObjectName(QStringLiteral("comboBoxSimUnits"));

        horizontalLayout_10->addWidget(comboBoxSimUnits);

        checkBoxSkipWalls = new QCheckBox(widgetCalculateFlows);
        checkBoxSkipWalls->setObjectName(QStringLiteral("checkBoxSkipWalls"));
        checkBoxSkipWalls->setChecked(true);

        horizontalLayout_10->addWidget(checkBoxSkipWalls);


        verticalLayout_17->addWidget(widgetCalculateFlows);


        gridLayout_2->addWidget(frame_3, 3, 0, 1, 2);


        verticalLayout_14->addWidget(frame_15);

        widget_13 = new QWidget(widget_11);
        widget_13->setObjectName(QStringLiteral("widget_13"));
        horizontalLayout_9 = new QHBoxLayout(widget_13);
        horizontalLayout_9->setSpacing(5);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(5, 5, 5, 5);
        btnExportResults = new QPushButton(widget_13);
        btnExportResults->setObjectName(QStringLiteral("btnExportResults"));

        horizontalLayout_9->addWidget(btnExportResults);


        verticalLayout_14->addWidget(widget_13);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_14->addItem(verticalSpacer_3);


        verticalLayout_13->addWidget(widget_11);

        toolBox->addItem(page_6, QStringLiteral("Convert Results"));

        verticalLayout_2->addWidget(toolBox);


        verticalLayout->addWidget(widget_2);


        retranslateUi(sv4guiSimulationView);

        toolBox->setCurrentIndex(4);


        QMetaObject::connectSlotsByName(sv4guiSimulationView);
    } // setupUi

    void retranslateUi(QWidget *sv4guiSimulationView)
    {
        sv4guiSimulationView->setWindowTitle(QApplication::translate("sv4guiSimulationView", "Form", nullptr));
        label_4->setText(QApplication::translate("sv4guiSimulationView", "Job Status:", nullptr));
        labelJobName->setText(QString());
        label_2->setText(QApplication::translate("sv4guiSimulationView", "Model Used:", nullptr));
        label->setText(QApplication::translate("sv4guiSimulationView", "Job Name:", nullptr));
        labelModelName->setText(QString());
        btnSave->setText(QApplication::translate("sv4guiSimulationView", "Save to Manager", nullptr));
        labelJobStatus->setText(QString());
        checkBoxShowModel->setText(QApplication::translate("sv4guiSimulationView", "Show Model", nullptr));
        toolBox->setItemText(toolBox->indexOf(page), QApplication::translate("sv4guiSimulationView", "Basic Parameters", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_2), QApplication::translate("sv4guiSimulationView", "Inlet and Outlet BCs", nullptr));
        label_3->setText(QApplication::translate("sv4guiSimulationView", "Type: ", nullptr));
        comboBoxWallType->setItemText(0, QApplication::translate("sv4guiSimulationView", "Rigid", nullptr));
        comboBoxWallType->setItemText(1, QApplication::translate("sv4guiSimulationView", "Deformable(Constant)", nullptr));
        comboBoxWallType->setItemText(2, QApplication::translate("sv4guiSimulationView", "Deformable(Variable)", nullptr));

        label_5->setText(QApplication::translate("sv4guiSimulationView", "Thickness:", nullptr));
        label_6->setText(QApplication::translate("sv4guiSimulationView", "Elastic Modulus:", nullptr));
        label_7->setText(QApplication::translate("sv4guiSimulationView", "Poisson Ratio:", nullptr));
        lineEditNu->setText(QApplication::translate("sv4guiSimulationView", "0.5", nullptr));
        label_8->setText(QApplication::translate("sv4guiSimulationView", "Shear Constant:", nullptr));
        lineEditKcons->setText(QApplication::translate("sv4guiSimulationView", "0.833333", nullptr));
        label_19->setText(QApplication::translate("sv4guiSimulationView", "Density:", nullptr));
        label_9->setText(QApplication::translate("sv4guiSimulationView", "Pressure:", nullptr));
        label_10->setText(QApplication::translate("sv4guiSimulationView", "Variable Properties:", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_3), QApplication::translate("sv4guiSimulationView", "Wall Properties", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_4), QApplication::translate("sv4guiSimulationView", "Solver Parameters", nullptr));
        label_18->setText(QApplication::translate("sv4guiSimulationView", "Choose Mesh: ", nullptr));
        btnCreateAllFiles->setText(QApplication::translate("sv4guiSimulationView", "Create Data Files for Simulation", nullptr));
        btnImportFiles->setText(QApplication::translate("sv4guiSimulationView", "Import Extra Files (Optional) ...", nullptr));
        UseMpiCheckBox->setText(QApplication::translate("sv4guiSimulationView", "Use MPI", nullptr));
        NumberProcessesLabel->setText(QApplication::translate("sv4guiSimulationView", "Number of Processes:", nullptr));
        StartingStepLabel->setText(QApplication::translate("sv4guiSimulationView", "Starting Step Number:", nullptr));
#ifndef QT_NO_TOOLTIP
        lineEditStartStepNum->setToolTip(QApplication::translate("sv4guiSimulationView", "The time step from which to restart a simulation. Leave blank to continue a simulation from the last completed time step. ", nullptr));
#endif // QT_NO_TOOLTIP
        lineEditStartStepNum->setText(QString());
        btnRunJob->setText(QApplication::translate("sv4guiSimulationView", "Run Simulation", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_5), QApplication::translate("sv4guiSimulationView", "Create Files and Run Simulation", nullptr));
        label_20->setText(QApplication::translate("sv4guiSimulationView", "Result Dir (containing restart files):", nullptr));
        toolButtonResultDir->setText(QApplication::translate("sv4guiSimulationView", "...", nullptr));
#ifndef QT_NO_TOOLTIP
        lineEditResultDir->setToolTip(QApplication::translate("sv4guiSimulationView", "The directory which contains the restart files output from simulation", nullptr));
#endif // QT_NO_TOOLTIP
        label_13->setText(QApplication::translate("sv4guiSimulationView", "Steps:", nullptr));
        label_14->setText(QApplication::translate("sv4guiSimulationView", "Start:", nullptr));
        label_15->setText(QApplication::translate("sv4guiSimulationView", "Stop:", nullptr));
        label_16->setText(QApplication::translate("sv4guiSimulationView", "Increment:", nullptr));
        checkBoxToRestart->setText(QApplication::translate("sv4guiSimulationView", "Last Step to restart.x.0", nullptr));
        checkBoxSingleFile->setText(QApplication::translate("sv4guiSimulationView", "As Single File", nullptr));
        label_17->setText(QApplication::translate("sv4guiSimulationView", "Options:", nullptr));
        checkBoxVolume->setText(QApplication::translate("sv4guiSimulationView", "Volume Mesh", nullptr));
        checkBoxSurface->setText(QApplication::translate("sv4guiSimulationView", "Surface Mesh", nullptr));
        checkBoxCalculateFlows->setText(QApplication::translate("sv4guiSimulationView", "Calculate Flows", nullptr));
        label_21->setText(QApplication::translate("sv4guiSimulationView", "Sim Units", nullptr));
        comboBoxSimUnits->setItemText(0, QApplication::translate("sv4guiSimulationView", "cm", nullptr));
        comboBoxSimUnits->setItemText(1, QApplication::translate("sv4guiSimulationView", "mm", nullptr));

        checkBoxSkipWalls->setText(QApplication::translate("sv4guiSimulationView", "Skip Walls", nullptr));
        btnExportResults->setText(QApplication::translate("sv4guiSimulationView", "Convert ...", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_6), QApplication::translate("sv4guiSimulationView", "Convert Results", nullptr));
    } // retranslateUi

};

namespace Ui {
    class sv4guiSimulationView: public Ui_sv4guiSimulationView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SV4GUI_SIMULATIONVIEW_H
