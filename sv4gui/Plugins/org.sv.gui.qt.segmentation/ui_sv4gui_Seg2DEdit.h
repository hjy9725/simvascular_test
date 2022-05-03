/********************************************************************************
** Form generated from reading UI file 'sv4gui_Seg2DEdit.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SV4GUI_SEG2DEDIT_H
#define UI_SV4GUI_SEG2DEDIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <sv4gui_ResliceSlider.h>
#include "ctkSliderWidget.h"

QT_BEGIN_NAMESPACE

class Ui_sv4guiSeg2DEdit
{
public:
    QHBoxLayout *horizontalLayout_11;
    QTabWidget *tabWidget;
    QWidget *SinglePathTab;
    QVBoxLayout *verticalLayout_5;
    QWidget *widget_8;
    QVBoxLayout *verticalLayout_4;
    QWidget *widget_4;
    QGridLayout *gridLayout_2;
    QCheckBox *checkBoxShowPath;
    QLabel *label_6;
    QLabel *labelPathName;
    QFrame *line_2;
    QWidget *widget_5;
    QGridLayout *gridLayout;
    QLabel *label_16;
    QLabel *labelGroupName;
    QPushButton *btnNewGroup;
    QFrame *line_3;
    QWidget *widget_7;
    QHBoxLayout *horizontalLayout_9;
    QCheckBox *checkBoxLoftingPreview;
    QPushButton *btnLoftingOptions;
    QFrame *line;
    QWidget *widget_6;
    QHBoxLayout *horizontalLayout_8;
    sv4guiResliceSlider *resliceSlider;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout;
    QWidget *widget;
    QVBoxLayout *verticalLayout_3;
    QWidget *paramWidget;
    QVBoxLayout *paramLayout;
    QFrame *lsParamWidgetContainer;
    QFrame *thresholdWidgetContainer;
    QHBoxLayout *horizontalLayout_7;
    QGroupBox *thresholdParamWidget;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *checkBoxPresetThreshold;
    ctkSliderWidget *sliderThreshold;
    QFrame *line_4;
    QWidget *smoothWidget;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *checkBoxSmooth;
    QSpinBox *spinBoxSmoothNumber;
    QWidget *splineWidget;
    QHBoxLayout *horizontalLayout_4;
    QCheckBox *checkBoxSpline;
    QSpinBox *spinBoxControlNumber;
    QWidget *batchWidget;
    QHBoxLayout *horizontalLayout_5;
    QCheckBox *checkBoxBatch;
    QLineEdit *lineEditBatchList;
    QFrame *line_5;
    QLabel *label;
    QListWidget *listWidget;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout_2;
    QPushButton *btnLevelSet;
    QPushButton *btnThreshold;
    QPushButton *btnML;
    QLabel *label_2;
    QPushButton *btnCircle;
    QPushButton *btnEllipse;
    QPushButton *btnSplinePoly;
    QPushButton *btnPolygon;
    QLabel *label_3;
    QPushButton *btnSmooth;
    QLabel *label_4;
    QPushButton *btnCopy;
    QPushButton *btnPaste;
    QLabel *label_5;
    QPushButton *btnDelete;
    QSpacerItem *verticalSpacer;
    QWidget *MultiVesselTab;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_7;
    QCheckBox *selectAllPathsCheckBox;
    QListWidget *pathList;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_6;
    QWidget *widget_10;
    QHBoxLayout *horizontalLayout_6;
    QLabel *intervalLabel;
    QSpinBox *intervalEdit;
    QWidget *widget_11;
    QHBoxLayout *horizontalLayout_10;
    QLabel *fourierLabel;
    QSpinBox *fourierEdit;
    QPushButton *multiSegButton;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *sv4guiSeg2DEdit)
    {
        if (sv4guiSeg2DEdit->objectName().isEmpty())
            sv4guiSeg2DEdit->setObjectName(QStringLiteral("sv4guiSeg2DEdit"));
        sv4guiSeg2DEdit->resize(446, 740);
        horizontalLayout_11 = new QHBoxLayout(sv4guiSeg2DEdit);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        tabWidget = new QTabWidget(sv4guiSeg2DEdit);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        SinglePathTab = new QWidget();
        SinglePathTab->setObjectName(QStringLiteral("SinglePathTab"));
        verticalLayout_5 = new QVBoxLayout(SinglePathTab);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        widget_8 = new QWidget(SinglePathTab);
        widget_8->setObjectName(QStringLiteral("widget_8"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget_8->sizePolicy().hasHeightForWidth());
        widget_8->setSizePolicy(sizePolicy);
        verticalLayout_4 = new QVBoxLayout(widget_8);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        widget_4 = new QWidget(widget_8);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        gridLayout_2 = new QGridLayout(widget_4);
        gridLayout_2->setSpacing(5);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 5, 0, 5);
        checkBoxShowPath = new QCheckBox(widget_4);
        checkBoxShowPath->setObjectName(QStringLiteral("checkBoxShowPath"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(checkBoxShowPath->sizePolicy().hasHeightForWidth());
        checkBoxShowPath->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(checkBoxShowPath, 0, 2, 1, 1);

        label_6 = new QLabel(widget_4);
        label_6->setObjectName(QStringLiteral("label_6"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy2);

        gridLayout_2->addWidget(label_6, 0, 0, 1, 1);

        labelPathName = new QLabel(widget_4);
        labelPathName->setObjectName(QStringLiteral("labelPathName"));

        gridLayout_2->addWidget(labelPathName, 0, 1, 1, 1);


        verticalLayout_4->addWidget(widget_4);

        line_2 = new QFrame(widget_8);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_4->addWidget(line_2);

        widget_5 = new QWidget(widget_8);
        widget_5->setObjectName(QStringLiteral("widget_5"));
        gridLayout = new QGridLayout(widget_5);
        gridLayout->setSpacing(5);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 5, 0, 5);
        label_16 = new QLabel(widget_5);
        label_16->setObjectName(QStringLiteral("label_16"));
        sizePolicy2.setHeightForWidth(label_16->sizePolicy().hasHeightForWidth());
        label_16->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(label_16, 0, 0, 1, 1);

        labelGroupName = new QLabel(widget_5);
        labelGroupName->setObjectName(QStringLiteral("labelGroupName"));

        gridLayout->addWidget(labelGroupName, 0, 1, 1, 1);

        btnNewGroup = new QPushButton(widget_5);
        btnNewGroup->setObjectName(QStringLiteral("btnNewGroup"));
        sizePolicy1.setHeightForWidth(btnNewGroup->sizePolicy().hasHeightForWidth());
        btnNewGroup->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(btnNewGroup, 0, 2, 1, 1);


        verticalLayout_4->addWidget(widget_5);

        line_3 = new QFrame(widget_8);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        verticalLayout_4->addWidget(line_3);

        widget_7 = new QWidget(widget_8);
        widget_7->setObjectName(QStringLiteral("widget_7"));
        horizontalLayout_9 = new QHBoxLayout(widget_7);
        horizontalLayout_9->setSpacing(0);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(0, 3, 0, 3);
        checkBoxLoftingPreview = new QCheckBox(widget_7);
        checkBoxLoftingPreview->setObjectName(QStringLiteral("checkBoxLoftingPreview"));

        horizontalLayout_9->addWidget(checkBoxLoftingPreview);

        btnLoftingOptions = new QPushButton(widget_7);
        btnLoftingOptions->setObjectName(QStringLiteral("btnLoftingOptions"));
        sizePolicy1.setHeightForWidth(btnLoftingOptions->sizePolicy().hasHeightForWidth());
        btnLoftingOptions->setSizePolicy(sizePolicy1);

        horizontalLayout_9->addWidget(btnLoftingOptions);


        verticalLayout_4->addWidget(widget_7);

        line = new QFrame(widget_8);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShadow(QFrame::Plain);
        line->setLineWidth(2);
        line->setMidLineWidth(1);
        line->setFrameShape(QFrame::HLine);

        verticalLayout_4->addWidget(line);

        widget_6 = new QWidget(widget_8);
        widget_6->setObjectName(QStringLiteral("widget_6"));
        horizontalLayout_8 = new QHBoxLayout(widget_6);
        horizontalLayout_8->setSpacing(0);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 2);
        resliceSlider = new sv4guiResliceSlider(widget_6);
        resliceSlider->setObjectName(QStringLiteral("resliceSlider"));

        horizontalLayout_8->addWidget(resliceSlider);


        verticalLayout_4->addWidget(widget_6);

        widget_2 = new QWidget(widget_8);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        horizontalLayout = new QHBoxLayout(widget_2);
        horizontalLayout->setSpacing(5);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 3, 0, 5);
        widget = new QWidget(widget_2);
        widget->setObjectName(QStringLiteral("widget"));
        verticalLayout_3 = new QVBoxLayout(widget);
        verticalLayout_3->setSpacing(2);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        paramWidget = new QWidget(widget);
        paramWidget->setObjectName(QStringLiteral("paramWidget"));
        paramLayout = new QVBoxLayout(paramWidget);
        paramLayout->setSpacing(30);
        paramLayout->setObjectName(QStringLiteral("paramLayout"));
        paramLayout->setContentsMargins(0, 0, 0, 0);
        lsParamWidgetContainer = new QFrame(paramWidget);
        lsParamWidgetContainer->setObjectName(QStringLiteral("lsParamWidgetContainer"));
        lsParamWidgetContainer->setFrameShape(QFrame::StyledPanel);
        lsParamWidgetContainer->setFrameShadow(QFrame::Raised);

        paramLayout->addWidget(lsParamWidgetContainer);

        thresholdWidgetContainer = new QFrame(paramWidget);
        thresholdWidgetContainer->setObjectName(QStringLiteral("thresholdWidgetContainer"));
        thresholdWidgetContainer->setFrameShape(QFrame::StyledPanel);
        thresholdWidgetContainer->setFrameShadow(QFrame::Raised);
        horizontalLayout_7 = new QHBoxLayout(thresholdWidgetContainer);
        horizontalLayout_7->setSpacing(0);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        thresholdParamWidget = new QGroupBox(thresholdWidgetContainer);
        thresholdParamWidget->setObjectName(QStringLiteral("thresholdParamWidget"));
        thresholdParamWidget->setFlat(false);
        horizontalLayout_2 = new QHBoxLayout(thresholdParamWidget);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 2, 0, 0);
        checkBoxPresetThreshold = new QCheckBox(thresholdParamWidget);
        checkBoxPresetThreshold->setObjectName(QStringLiteral("checkBoxPresetThreshold"));

        horizontalLayout_2->addWidget(checkBoxPresetThreshold);

        sliderThreshold = new ctkSliderWidget(thresholdParamWidget);
        sliderThreshold->setObjectName(QStringLiteral("sliderThreshold"));
        sliderThreshold->setEnabled(true);
        sliderThreshold->setProperty("decimals", QVariant(1));
        sliderThreshold->setProperty("tickInterval", QVariant(0));

        horizontalLayout_2->addWidget(sliderThreshold);


        horizontalLayout_7->addWidget(thresholdParamWidget);


        paramLayout->addWidget(thresholdWidgetContainer);


        verticalLayout_3->addWidget(paramWidget);

        line_4 = new QFrame(widget);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setLineWidth(0);
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line_4);

        smoothWidget = new QWidget(widget);
        smoothWidget->setObjectName(QStringLiteral("smoothWidget"));
        horizontalLayout_3 = new QHBoxLayout(smoothWidget);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        checkBoxSmooth = new QCheckBox(smoothWidget);
        checkBoxSmooth->setObjectName(QStringLiteral("checkBoxSmooth"));

        horizontalLayout_3->addWidget(checkBoxSmooth);

        spinBoxSmoothNumber = new QSpinBox(smoothWidget);
        spinBoxSmoothNumber->setObjectName(QStringLiteral("spinBoxSmoothNumber"));
        spinBoxSmoothNumber->setMinimum(1);
        spinBoxSmoothNumber->setMaximum(12);
        spinBoxSmoothNumber->setValue(4);

        horizontalLayout_3->addWidget(spinBoxSmoothNumber);


        verticalLayout_3->addWidget(smoothWidget);

        splineWidget = new QWidget(widget);
        splineWidget->setObjectName(QStringLiteral("splineWidget"));
        horizontalLayout_4 = new QHBoxLayout(splineWidget);
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        checkBoxSpline = new QCheckBox(splineWidget);
        checkBoxSpline->setObjectName(QStringLiteral("checkBoxSpline"));

        horizontalLayout_4->addWidget(checkBoxSpline);

        spinBoxControlNumber = new QSpinBox(splineWidget);
        spinBoxControlNumber->setObjectName(QStringLiteral("spinBoxControlNumber"));
        spinBoxControlNumber->setMinimum(5);
        spinBoxControlNumber->setMaximum(40);
        spinBoxControlNumber->setValue(10);

        horizontalLayout_4->addWidget(spinBoxControlNumber);


        verticalLayout_3->addWidget(splineWidget);

        batchWidget = new QWidget(widget);
        batchWidget->setObjectName(QStringLiteral("batchWidget"));
        horizontalLayout_5 = new QHBoxLayout(batchWidget);
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        checkBoxBatch = new QCheckBox(batchWidget);
        checkBoxBatch->setObjectName(QStringLiteral("checkBoxBatch"));

        horizontalLayout_5->addWidget(checkBoxBatch);

        lineEditBatchList = new QLineEdit(batchWidget);
        lineEditBatchList->setObjectName(QStringLiteral("lineEditBatchList"));

        horizontalLayout_5->addWidget(lineEditBatchList);


        verticalLayout_3->addWidget(batchWidget);

        line_5 = new QFrame(widget);
        line_5->setObjectName(QStringLiteral("line_5"));
        line_5->setLineWidth(0);
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line_5);

        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_3->addWidget(label);

        listWidget = new QListWidget(widget);
        listWidget->setObjectName(QStringLiteral("listWidget"));

        verticalLayout_3->addWidget(listWidget);


        horizontalLayout->addWidget(widget);

        widget_3 = new QWidget(widget_2);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        verticalLayout_2 = new QVBoxLayout(widget_3);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        btnLevelSet = new QPushButton(widget_3);
        btnLevelSet->setObjectName(QStringLiteral("btnLevelSet"));
        btnLevelSet->setCheckable(false);

        verticalLayout_2->addWidget(btnLevelSet);

        btnThreshold = new QPushButton(widget_3);
        btnThreshold->setObjectName(QStringLiteral("btnThreshold"));

        verticalLayout_2->addWidget(btnThreshold);

        btnML = new QPushButton(widget_3);
        btnML->setObjectName(QStringLiteral("btnML"));

        verticalLayout_2->addWidget(btnML);

        label_2 = new QLabel(widget_3);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_2->addWidget(label_2);

        btnCircle = new QPushButton(widget_3);
        btnCircle->setObjectName(QStringLiteral("btnCircle"));
        btnCircle->setContextMenuPolicy(Qt::CustomContextMenu);
        btnCircle->setCheckable(false);
        btnCircle->setChecked(false);

        verticalLayout_2->addWidget(btnCircle);

        btnEllipse = new QPushButton(widget_3);
        btnEllipse->setObjectName(QStringLiteral("btnEllipse"));
        btnEllipse->setContextMenuPolicy(Qt::CustomContextMenu);

        verticalLayout_2->addWidget(btnEllipse);

        btnSplinePoly = new QPushButton(widget_3);
        btnSplinePoly->setObjectName(QStringLiteral("btnSplinePoly"));
        btnSplinePoly->setContextMenuPolicy(Qt::CustomContextMenu);

        verticalLayout_2->addWidget(btnSplinePoly);

        btnPolygon = new QPushButton(widget_3);
        btnPolygon->setObjectName(QStringLiteral("btnPolygon"));
        btnPolygon->setContextMenuPolicy(Qt::CustomContextMenu);

        verticalLayout_2->addWidget(btnPolygon);

        label_3 = new QLabel(widget_3);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_2->addWidget(label_3);

        btnSmooth = new QPushButton(widget_3);
        btnSmooth->setObjectName(QStringLiteral("btnSmooth"));

        verticalLayout_2->addWidget(btnSmooth);

        label_4 = new QLabel(widget_3);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout_2->addWidget(label_4);

        btnCopy = new QPushButton(widget_3);
        btnCopy->setObjectName(QStringLiteral("btnCopy"));

        verticalLayout_2->addWidget(btnCopy);

        btnPaste = new QPushButton(widget_3);
        btnPaste->setObjectName(QStringLiteral("btnPaste"));

        verticalLayout_2->addWidget(btnPaste);

        label_5 = new QLabel(widget_3);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout_2->addWidget(label_5);

        btnDelete = new QPushButton(widget_3);
        btnDelete->setObjectName(QStringLiteral("btnDelete"));

        verticalLayout_2->addWidget(btnDelete);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        btnCircle->raise();
        btnLevelSet->raise();
        btnEllipse->raise();
        btnPolygon->raise();
        btnSplinePoly->raise();
        btnDelete->raise();
        btnThreshold->raise();
        btnSmooth->raise();
        btnCopy->raise();
        btnPaste->raise();
        label_2->raise();
        label_3->raise();
        label_4->raise();
        label_5->raise();
        btnML->raise();

        horizontalLayout->addWidget(widget_3);


        verticalLayout_4->addWidget(widget_2);


        verticalLayout_5->addWidget(widget_8);

        tabWidget->addTab(SinglePathTab, QString());
        MultiVesselTab = new QWidget();
        MultiVesselTab->setObjectName(QStringLiteral("MultiVesselTab"));
        verticalLayout = new QVBoxLayout(MultiVesselTab);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupBox = new QGroupBox(MultiVesselTab);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout_7 = new QVBoxLayout(groupBox);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        selectAllPathsCheckBox = new QCheckBox(groupBox);
        selectAllPathsCheckBox->setObjectName(QStringLiteral("selectAllPathsCheckBox"));

        verticalLayout_7->addWidget(selectAllPathsCheckBox);

        pathList = new QListWidget(groupBox);
        pathList->setObjectName(QStringLiteral("pathList"));

        verticalLayout_7->addWidget(pathList);


        verticalLayout->addWidget(groupBox);

        groupBox_3 = new QGroupBox(MultiVesselTab);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        verticalLayout_6 = new QVBoxLayout(groupBox_3);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        widget_10 = new QWidget(groupBox_3);
        widget_10->setObjectName(QStringLiteral("widget_10"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(widget_10->sizePolicy().hasHeightForWidth());
        widget_10->setSizePolicy(sizePolicy3);
        horizontalLayout_6 = new QHBoxLayout(widget_10);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        intervalLabel = new QLabel(widget_10);
        intervalLabel->setObjectName(QStringLiteral("intervalLabel"));
        intervalLabel->setMinimumSize(QSize(20, 0));

        horizontalLayout_6->addWidget(intervalLabel);

        intervalEdit = new QSpinBox(widget_10);
        intervalEdit->setObjectName(QStringLiteral("intervalEdit"));
        intervalEdit->setMinimum(1);
        intervalEdit->setMaximum(999);
        intervalEdit->setValue(10);

        horizontalLayout_6->addWidget(intervalEdit);


        verticalLayout_6->addWidget(widget_10);

        widget_11 = new QWidget(groupBox_3);
        widget_11->setObjectName(QStringLiteral("widget_11"));
        sizePolicy3.setHeightForWidth(widget_11->sizePolicy().hasHeightForWidth());
        widget_11->setSizePolicy(sizePolicy3);
        horizontalLayout_10 = new QHBoxLayout(widget_11);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        fourierLabel = new QLabel(widget_11);
        fourierLabel->setObjectName(QStringLiteral("fourierLabel"));
        fourierLabel->setMinimumSize(QSize(20, 0));

        horizontalLayout_10->addWidget(fourierLabel);

        fourierEdit = new QSpinBox(widget_11);
        fourierEdit->setObjectName(QStringLiteral("fourierEdit"));
        fourierEdit->setMinimum(1);
        fourierEdit->setMaximum(10);
        fourierEdit->setValue(3);

        horizontalLayout_10->addWidget(fourierEdit);


        verticalLayout_6->addWidget(widget_11);


        verticalLayout->addWidget(groupBox_3);

        multiSegButton = new QPushButton(MultiVesselTab);
        multiSegButton->setObjectName(QStringLiteral("multiSegButton"));

        verticalLayout->addWidget(multiSegButton);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        tabWidget->addTab(MultiVesselTab, QString());

        horizontalLayout_11->addWidget(tabWidget);


        retranslateUi(sv4guiSeg2DEdit);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(sv4guiSeg2DEdit);
    } // setupUi

    void retranslateUi(QWidget *sv4guiSeg2DEdit)
    {
        sv4guiSeg2DEdit->setWindowTitle(QApplication::translate("sv4guiSeg2DEdit", "Form", nullptr));
        checkBoxShowPath->setText(QApplication::translate("sv4guiSeg2DEdit", "Show Path", nullptr));
        label_6->setText(QApplication::translate("sv4guiSeg2DEdit", "Path:", nullptr));
        labelPathName->setText(QString());
        label_16->setText(QApplication::translate("sv4guiSeg2DEdit", "Contour Group:", nullptr));
        labelGroupName->setText(QString());
        btnNewGroup->setText(QApplication::translate("sv4guiSeg2DEdit", "New Group", nullptr));
#ifndef QT_NO_TOOLTIP
        checkBoxLoftingPreview->setToolTip(QApplication::translate("sv4guiSeg2DEdit", "Switch on to create a lofted surface from the group", nullptr));
#endif // QT_NO_TOOLTIP
        checkBoxLoftingPreview->setText(QApplication::translate("sv4guiSeg2DEdit", "Lofting Preview", nullptr));
        btnLoftingOptions->setText(QApplication::translate("sv4guiSeg2DEdit", "Lofting Parameters...", nullptr));
        thresholdParamWidget->setTitle(QApplication::translate("sv4guiSeg2DEdit", "Threshold", nullptr));
#ifndef QT_NO_TOOLTIP
        checkBoxPresetThreshold->setToolTip(QApplication::translate("sv4guiSeg2DEdit", "switch on to use a specified value to create a contour.", nullptr));
#endif // QT_NO_TOOLTIP
        checkBoxPresetThreshold->setText(QApplication::translate("sv4guiSeg2DEdit", " Preset", nullptr));
#ifndef QT_NO_TOOLTIP
        checkBoxSmooth->setToolTip(QApplication::translate("sv4guiSeg2DEdit", "Switch on to smooth a contour after created by levelset or threshold", nullptr));
#endif // QT_NO_TOOLTIP
        checkBoxSmooth->setText(QApplication::translate("sv4guiSeg2DEdit", "Smooth   Fourier Number:", nullptr));
#ifndef QT_NO_TOOLTIP
        checkBoxSpline->setToolTip(QApplication::translate("sv4guiSeg2DEdit", "Switch on to  converte a contour to a SplinePolygon smooth  after created by levelset or threshold", nullptr));
#endif // QT_NO_TOOLTIP
        checkBoxSpline->setText(QApplication::translate("sv4guiSeg2DEdit", "Convert to Spline   Ctrl No.:", nullptr));
#ifndef QT_NO_TOOLTIP
        checkBoxBatch->setToolTip(QApplication::translate("sv4guiSeg2DEdit", "Switch on to enable batch segmentation by levelset or threshold", nullptr));
#endif // QT_NO_TOOLTIP
        checkBoxBatch->setText(QApplication::translate("sv4guiSeg2DEdit", "Batch Mode  List:", nullptr));
        label->setText(QApplication::translate("sv4guiSeg2DEdit", "Contour List:", nullptr));
#ifndef QT_NO_TOOLTIP
        btnLevelSet->setToolTip(QApplication::translate("sv4guiSeg2DEdit", "Click to show the levelset parameter panel.\n"
"Click again to create a contour by levelset.\n"
"(Shortcut: Ctrl+L)", nullptr));
#endif // QT_NO_TOOLTIP
        btnLevelSet->setText(QApplication::translate("sv4guiSeg2DEdit", "LevelSet", nullptr));
#ifndef QT_NO_TOOLTIP
        btnThreshold->setToolTip(QApplication::translate("sv4guiSeg2DEdit", "Click to show the threshold parameter panel.\n"
"\n"
"Click again and the button becomes blue (active for interaction). \n"
"Then, you need to move the cursor to a 2D view window, click and hold the left moust button, move up/down, then release to finish a contour.\n"
"\n"
"If \"Preset\" on,  a contour is created with a specified threshold value, you click the button.\n"
"\n"
"(Shortcut: Ctrl+T)", nullptr));
#endif // QT_NO_TOOLTIP
        btnThreshold->setText(QApplication::translate("sv4guiSeg2DEdit", "Threshold", nullptr));
        btnML->setText(QApplication::translate("sv4guiSeg2DEdit", "Mach. Learning", nullptr));
        label_2->setText(QString());
#ifndef QT_NO_TOOLTIP
        btnCircle->setToolTip(QApplication::translate("sv4guiSeg2DEdit", "Interactive method:\n"
"Click and the button becomes blue (active for interaction).\n"
"Then, you need to move the cursor to a 2D view window, click and move to create a contour.\n"
"\n"
"Manual method:\n"
"Right click and manually provide center coordiantes and radius.", nullptr));
#endif // QT_NO_TOOLTIP
        btnCircle->setText(QApplication::translate("sv4guiSeg2DEdit", "Circle", nullptr));
#ifndef QT_NO_TOOLTIP
        btnEllipse->setToolTip(QApplication::translate("sv4guiSeg2DEdit", "Interactive method:\n"
"Click and the button becomes blue (active for interaction).\n"
"Then, you need to move the cursor to a 2D view window, click and move to create a contour.\n"
"\n"
"Manual method:\n"
"Right click and manually provide center coordiantes and semi-axis lengths.", nullptr));
#endif // QT_NO_TOOLTIP
        btnEllipse->setText(QApplication::translate("sv4guiSeg2DEdit", "Ellipse", nullptr));
#ifndef QT_NO_TOOLTIP
        btnSplinePoly->setToolTip(QApplication::translate("sv4guiSeg2DEdit", "Interactive method:\n"
"Click and the button becomes blue (active for interaction). \n"
"Then, you need to move the cursor to a 2D view window, click and move to add control points, double click or press \"F\" to finish.\n"
"\n"
"Manual method:\n"
"Right click and manually provide coordiantes for control points.", nullptr));
#endif // QT_NO_TOOLTIP
        btnSplinePoly->setText(QApplication::translate("sv4guiSeg2DEdit", "SplinePoly", nullptr));
#ifndef QT_NO_TOOLTIP
        btnPolygon->setToolTip(QApplication::translate("sv4guiSeg2DEdit", "Interactive method:\n"
"Click and the button becomes blue (active for interaction). \n"
"Then, you need to move the cursor to a 2D view window, click and move to add control points, double click or press \"F\" to finish.\n"
"\n"
"Manual method:\n"
"Right click and manually provide coordiantes for control points.", nullptr));
#endif // QT_NO_TOOLTIP
        btnPolygon->setText(QApplication::translate("sv4guiSeg2DEdit", "Polygon", nullptr));
        label_3->setText(QString());
#ifndef QT_NO_TOOLTIP
        btnSmooth->setToolTip(QApplication::translate("sv4guiSeg2DEdit", "Smooth the selected contour using the specified Fourier number.", nullptr));
#endif // QT_NO_TOOLTIP
        btnSmooth->setText(QApplication::translate("sv4guiSeg2DEdit", "Smooth", nullptr));
        label_4->setText(QString());
#ifndef QT_NO_TOOLTIP
        btnCopy->setToolTip(QApplication::translate("sv4guiSeg2DEdit", "Copy the selected contour.\n"
"(Shortcut: Ctrl+C)", nullptr));
#endif // QT_NO_TOOLTIP
        btnCopy->setText(QApplication::translate("sv4guiSeg2DEdit", "Copy", nullptr));
#ifndef QT_NO_TOOLTIP
        btnPaste->setToolTip(QApplication::translate("sv4guiSeg2DEdit", "Paste to the current location along the path.\n"
"(Shortcut: Ctrl+V)", nullptr));
#endif // QT_NO_TOOLTIP
        btnPaste->setText(QApplication::translate("sv4guiSeg2DEdit", "Paste", nullptr));
        label_5->setText(QString());
#ifndef QT_NO_TOOLTIP
        btnDelete->setToolTip(QApplication::translate("sv4guiSeg2DEdit", "Delete the selected contour.\n"
"(Shortcut: Ctrl+D)\n"
"\n"
"You can also move the cursor to a 2D view and click.\n"
"Then, press key Delete to remove the shown contour.", nullptr));
#endif // QT_NO_TOOLTIP
        btnDelete->setText(QApplication::translate("sv4guiSeg2DEdit", "Delete", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(SinglePathTab), QApplication::translate("sv4guiSeg2DEdit", "Single-Path", nullptr));
        groupBox->setTitle(QApplication::translate("sv4guiSeg2DEdit", "Select Paths", nullptr));
        selectAllPathsCheckBox->setText(QApplication::translate("sv4guiSeg2DEdit", "use all paths", nullptr));
        groupBox_3->setTitle(QApplication::translate("sv4guiSeg2DEdit", "Parameters", nullptr));
        intervalLabel->setText(QApplication::translate("sv4guiSeg2DEdit", "Interval:", nullptr));
        fourierLabel->setText(QApplication::translate("sv4guiSeg2DEdit", "Fourier Modes:", nullptr));
        multiSegButton->setText(QApplication::translate("sv4guiSeg2DEdit", "Segment Using Machine Learning", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(MultiVesselTab), QApplication::translate("sv4guiSeg2DEdit", "Multi-vessel Path", nullptr));
    } // retranslateUi

};

namespace Ui {
    class sv4guiSeg2DEdit: public Ui_sv4guiSeg2DEdit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SV4GUI_SEG2DEDIT_H
