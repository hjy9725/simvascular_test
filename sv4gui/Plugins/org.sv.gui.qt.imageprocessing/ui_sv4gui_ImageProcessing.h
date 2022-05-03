/********************************************************************************
** Form generated from reading UI file 'sv4gui_ImageProcessing.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SV4GUI_IMAGEPROCESSING_H
#define UI_SV4GUI_IMAGEPROCESSING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_sv4guiImageProcessing
{
public:
    QVBoxLayout *verticalLayout_7;
    QWidget *widgetTop;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;
    QComboBox *InputImage_ComboBox;
    QWidget *ToolBoxEnclosewidget;
    QVBoxLayout *verticalLayout_2;
    QToolBox *toolBox;
    QWidget *SeedsPage;
    QVBoxLayout *verticalLayout_18;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout;
    QWidget *widget_12;
    QHBoxLayout *horizontalLayout_5;
    QLabel *ModelLabel;
    QDoubleSpinBox *SD_Size_DoubleSpinBox;
    QWidget *widget_16;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *SD_AddStart_PushButton;
    QPushButton *SD_AddEnd_PushButton;
    QPushButton *SD_Clear_PushButton;
    QSpacerItem *verticalSpacer_4;
    QWidget *LevelSetPage;
    QVBoxLayout *verticalLayout_3;
    QWidget *widget_4;
    QVBoxLayout *verticalLayout_5;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_2;
    QLabel *LS_UpThresh_Label;
    QDoubleSpinBox *LS_UpThresh_DoubleSpinBox;
    QWidget *widget_6;
    QHBoxLayout *horizontalLayout_11;
    QLabel *LS_LowThresh_Label;
    QDoubleSpinBox *LS_LowThresh_DoubleSpinBox;
    QWidget *widget_9;
    QHBoxLayout *horizontalLayout_12;
    QLabel *LS_GradMag_Label;
    QDoubleSpinBox *LS_GradMag_DoubleSpinBox;
    QWidget *widget_18;
    QHBoxLayout *horizontalLayout_13;
    QLabel *LS_PropScale_Label;
    QDoubleSpinBox *LS_PropScale_DoubleSpinBox;
    QWidget *widget_19;
    QHBoxLayout *horizontalLayout_14;
    QLabel *LS_AdvScale_Label;
    QDoubleSpinBox *LS_AdvScale_DoubleSpinBox;
    QWidget *widget_21;
    QHBoxLayout *horizontalLayout_16;
    QLabel *LS_CurvScale_Label;
    QDoubleSpinBox *LS_CurvScale_DoubleSpinBox;
    QWidget *widget_22;
    QHBoxLayout *horizontalLayout_17;
    QLabel *LS_NumIt_Label;
    QLineEdit *LS_NumItLineEdit;
    QWidget *widget_23;
    QHBoxLayout *horizontalLayout_18;
    QLabel *LS_IsoLevel_Label;
    QDoubleSpinBox *LS_IsoLevel_DoubleSpinBox;
    QPushButton *LS_Execute_PushButton;
    QWidget *widget_10;
    QHBoxLayout *horizontalLayout_6;
    QWidget *widgetVariable;
    QVBoxLayout *verticalLayout_6;
    QSpacerItem *verticalSpacer;
    QWidget *SurfacePage;
    QVBoxLayout *verticalLayout_11;
    QWidget *widget_7;
    QVBoxLayout *verticalLayout_12;
    QWidget *widgetRun;
    QGridLayout *gridLayout;
    QPushButton *SU_ComputeCenterlines_PushButton;
    QWidget *widget_15;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *verticalSpacer_2;
    QWidget *PathsPage;
    QVBoxLayout *verticalLayout_13;
    QWidget *widget_11;
    QVBoxLayout *verticalLayout_4;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *PT_DIstMult_Label;
    QLineEdit *PT_DistMult_LineEdit;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *PT_Tangent_Label;
    QDoubleSpinBox *PT_Tangent_DoubleSpinBox;
    QPushButton *PT_Extract_PushButton;
    QSpacerItem *verticalSpacer_3;

    void setupUi(QWidget *sv4guiImageProcessing)
    {
        if (sv4guiImageProcessing->objectName().isEmpty())
            sv4guiImageProcessing->setObjectName(QStringLiteral("sv4guiImageProcessing"));
        sv4guiImageProcessing->resize(417, 866);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(sv4guiImageProcessing->sizePolicy().hasHeightForWidth());
        sv4guiImageProcessing->setSizePolicy(sizePolicy);
        verticalLayout_7 = new QVBoxLayout(sv4guiImageProcessing);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        widgetTop = new QWidget(sv4guiImageProcessing);
        widgetTop->setObjectName(QStringLiteral("widgetTop"));
        horizontalLayout_4 = new QHBoxLayout(widgetTop);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label = new QLabel(widgetTop);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setLayoutDirection(Qt::LeftToRight);

        horizontalLayout_4->addWidget(label);

        InputImage_ComboBox = new QComboBox(widgetTop);
        InputImage_ComboBox->setObjectName(QStringLiteral("InputImage_ComboBox"));

        horizontalLayout_4->addWidget(InputImage_ComboBox);


        verticalLayout_7->addWidget(widgetTop);

        ToolBoxEnclosewidget = new QWidget(sv4guiImageProcessing);
        ToolBoxEnclosewidget->setObjectName(QStringLiteral("ToolBoxEnclosewidget"));
        verticalLayout_2 = new QVBoxLayout(ToolBoxEnclosewidget);
        verticalLayout_2->setSpacing(5);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        toolBox = new QToolBox(ToolBoxEnclosewidget);
        toolBox->setObjectName(QStringLiteral("toolBox"));
        SeedsPage = new QWidget();
        SeedsPage->setObjectName(QStringLiteral("SeedsPage"));
        SeedsPage->setGeometry(QRect(0, 0, 393, 652));
        verticalLayout_18 = new QVBoxLayout(SeedsPage);
        verticalLayout_18->setObjectName(QStringLiteral("verticalLayout_18"));
        widget_3 = new QWidget(SeedsPage);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        verticalLayout = new QVBoxLayout(widget_3);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        widget_12 = new QWidget(widget_3);
        widget_12->setObjectName(QStringLiteral("widget_12"));
        widget_12->setStyleSheet(QLatin1String("QWidget {\n"
"#background-color: rgb(225, 225, 225)\n"
"}"));
        horizontalLayout_5 = new QHBoxLayout(widget_12);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        ModelLabel = new QLabel(widget_12);
        ModelLabel->setObjectName(QStringLiteral("ModelLabel"));

        horizontalLayout_5->addWidget(ModelLabel);

        SD_Size_DoubleSpinBox = new QDoubleSpinBox(widget_12);
        SD_Size_DoubleSpinBox->setObjectName(QStringLiteral("SD_Size_DoubleSpinBox"));
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(SD_Size_DoubleSpinBox->sizePolicy().hasHeightForWidth());
        SD_Size_DoubleSpinBox->setSizePolicy(sizePolicy2);
        SD_Size_DoubleSpinBox->setButtonSymbols(QAbstractSpinBox::NoButtons);

        horizontalLayout_5->addWidget(SD_Size_DoubleSpinBox);


        verticalLayout->addWidget(widget_12);

        widget_16 = new QWidget(widget_3);
        widget_16->setObjectName(QStringLiteral("widget_16"));
        widget_16->setStyleSheet(QLatin1String("QWidget {\n"
"#background-color: rgb(225, 225, 225)\n"
"}"));
        horizontalLayout_8 = new QHBoxLayout(widget_16);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        SD_AddStart_PushButton = new QPushButton(widget_16);
        SD_AddStart_PushButton->setObjectName(QStringLiteral("SD_AddStart_PushButton"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(SD_AddStart_PushButton->sizePolicy().hasHeightForWidth());
        SD_AddStart_PushButton->setSizePolicy(sizePolicy3);

        horizontalLayout_8->addWidget(SD_AddStart_PushButton);

        SD_AddEnd_PushButton = new QPushButton(widget_16);
        SD_AddEnd_PushButton->setObjectName(QStringLiteral("SD_AddEnd_PushButton"));

        horizontalLayout_8->addWidget(SD_AddEnd_PushButton);

        SD_Clear_PushButton = new QPushButton(widget_16);
        SD_Clear_PushButton->setObjectName(QStringLiteral("SD_Clear_PushButton"));

        horizontalLayout_8->addWidget(SD_Clear_PushButton);


        verticalLayout->addWidget(widget_16);

        verticalSpacer_4 = new QSpacerItem(20, 489, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);


        verticalLayout_18->addWidget(widget_3);

        toolBox->addItem(SeedsPage, QStringLiteral("Seeds"));
        LevelSetPage = new QWidget();
        LevelSetPage->setObjectName(QStringLiteral("LevelSetPage"));
        LevelSetPage->setGeometry(QRect(0, 0, 393, 652));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(LevelSetPage->sizePolicy().hasHeightForWidth());
        LevelSetPage->setSizePolicy(sizePolicy4);
        verticalLayout_3 = new QVBoxLayout(LevelSetPage);
        verticalLayout_3->setSpacing(5);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        widget_4 = new QWidget(LevelSetPage);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        sizePolicy4.setHeightForWidth(widget_4->sizePolicy().hasHeightForWidth());
        widget_4->setSizePolicy(sizePolicy4);
        verticalLayout_5 = new QVBoxLayout(widget_4);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        widget_5 = new QWidget(widget_4);
        widget_5->setObjectName(QStringLiteral("widget_5"));
        sizePolicy4.setHeightForWidth(widget_5->sizePolicy().hasHeightForWidth());
        widget_5->setSizePolicy(sizePolicy4);
        horizontalLayout_2 = new QHBoxLayout(widget_5);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        LS_UpThresh_Label = new QLabel(widget_5);
        LS_UpThresh_Label->setObjectName(QStringLiteral("LS_UpThresh_Label"));
        sizePolicy1.setHeightForWidth(LS_UpThresh_Label->sizePolicy().hasHeightForWidth());
        LS_UpThresh_Label->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(LS_UpThresh_Label);

        LS_UpThresh_DoubleSpinBox = new QDoubleSpinBox(widget_5);
        LS_UpThresh_DoubleSpinBox->setObjectName(QStringLiteral("LS_UpThresh_DoubleSpinBox"));
        LS_UpThresh_DoubleSpinBox->setButtonSymbols(QAbstractSpinBox::NoButtons);
        LS_UpThresh_DoubleSpinBox->setMinimum(-1e+06);
        LS_UpThresh_DoubleSpinBox->setMaximum(1e+06);

        horizontalLayout_2->addWidget(LS_UpThresh_DoubleSpinBox);


        verticalLayout_5->addWidget(widget_5);

        widget_6 = new QWidget(widget_4);
        widget_6->setObjectName(QStringLiteral("widget_6"));
        sizePolicy4.setHeightForWidth(widget_6->sizePolicy().hasHeightForWidth());
        widget_6->setSizePolicy(sizePolicy4);
        horizontalLayout_11 = new QHBoxLayout(widget_6);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        LS_LowThresh_Label = new QLabel(widget_6);
        LS_LowThresh_Label->setObjectName(QStringLiteral("LS_LowThresh_Label"));
        sizePolicy1.setHeightForWidth(LS_LowThresh_Label->sizePolicy().hasHeightForWidth());
        LS_LowThresh_Label->setSizePolicy(sizePolicy1);

        horizontalLayout_11->addWidget(LS_LowThresh_Label);

        LS_LowThresh_DoubleSpinBox = new QDoubleSpinBox(widget_6);
        LS_LowThresh_DoubleSpinBox->setObjectName(QStringLiteral("LS_LowThresh_DoubleSpinBox"));
        LS_LowThresh_DoubleSpinBox->setButtonSymbols(QAbstractSpinBox::NoButtons);
        LS_LowThresh_DoubleSpinBox->setMinimum(-1e+06);
        LS_LowThresh_DoubleSpinBox->setMaximum(1e+06);

        horizontalLayout_11->addWidget(LS_LowThresh_DoubleSpinBox);


        verticalLayout_5->addWidget(widget_6);

        widget_9 = new QWidget(widget_4);
        widget_9->setObjectName(QStringLiteral("widget_9"));
        sizePolicy4.setHeightForWidth(widget_9->sizePolicy().hasHeightForWidth());
        widget_9->setSizePolicy(sizePolicy4);
        horizontalLayout_12 = new QHBoxLayout(widget_9);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        LS_GradMag_Label = new QLabel(widget_9);
        LS_GradMag_Label->setObjectName(QStringLiteral("LS_GradMag_Label"));
        sizePolicy1.setHeightForWidth(LS_GradMag_Label->sizePolicy().hasHeightForWidth());
        LS_GradMag_Label->setSizePolicy(sizePolicy1);

        horizontalLayout_12->addWidget(LS_GradMag_Label);

        LS_GradMag_DoubleSpinBox = new QDoubleSpinBox(widget_9);
        LS_GradMag_DoubleSpinBox->setObjectName(QStringLiteral("LS_GradMag_DoubleSpinBox"));
        LS_GradMag_DoubleSpinBox->setButtonSymbols(QAbstractSpinBox::NoButtons);
        LS_GradMag_DoubleSpinBox->setValue(0.2);

        horizontalLayout_12->addWidget(LS_GradMag_DoubleSpinBox);


        verticalLayout_5->addWidget(widget_9);

        widget_18 = new QWidget(widget_4);
        widget_18->setObjectName(QStringLiteral("widget_18"));
        sizePolicy4.setHeightForWidth(widget_18->sizePolicy().hasHeightForWidth());
        widget_18->setSizePolicy(sizePolicy4);
        horizontalLayout_13 = new QHBoxLayout(widget_18);
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        LS_PropScale_Label = new QLabel(widget_18);
        LS_PropScale_Label->setObjectName(QStringLiteral("LS_PropScale_Label"));
        sizePolicy1.setHeightForWidth(LS_PropScale_Label->sizePolicy().hasHeightForWidth());
        LS_PropScale_Label->setSizePolicy(sizePolicy1);

        horizontalLayout_13->addWidget(LS_PropScale_Label);

        LS_PropScale_DoubleSpinBox = new QDoubleSpinBox(widget_18);
        LS_PropScale_DoubleSpinBox->setObjectName(QStringLiteral("LS_PropScale_DoubleSpinBox"));
        LS_PropScale_DoubleSpinBox->setButtonSymbols(QAbstractSpinBox::NoButtons);
        LS_PropScale_DoubleSpinBox->setValue(0.7);

        horizontalLayout_13->addWidget(LS_PropScale_DoubleSpinBox);


        verticalLayout_5->addWidget(widget_18);

        widget_19 = new QWidget(widget_4);
        widget_19->setObjectName(QStringLiteral("widget_19"));
        sizePolicy4.setHeightForWidth(widget_19->sizePolicy().hasHeightForWidth());
        widget_19->setSizePolicy(sizePolicy4);
        horizontalLayout_14 = new QHBoxLayout(widget_19);
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        LS_AdvScale_Label = new QLabel(widget_19);
        LS_AdvScale_Label->setObjectName(QStringLiteral("LS_AdvScale_Label"));
        sizePolicy1.setHeightForWidth(LS_AdvScale_Label->sizePolicy().hasHeightForWidth());
        LS_AdvScale_Label->setSizePolicy(sizePolicy1);

        horizontalLayout_14->addWidget(LS_AdvScale_Label);

        LS_AdvScale_DoubleSpinBox = new QDoubleSpinBox(widget_19);
        LS_AdvScale_DoubleSpinBox->setObjectName(QStringLiteral("LS_AdvScale_DoubleSpinBox"));
        LS_AdvScale_DoubleSpinBox->setToolTipDuration(-2);
        LS_AdvScale_DoubleSpinBox->setButtonSymbols(QAbstractSpinBox::NoButtons);
        LS_AdvScale_DoubleSpinBox->setValue(0.7);

        horizontalLayout_14->addWidget(LS_AdvScale_DoubleSpinBox);


        verticalLayout_5->addWidget(widget_19);

        widget_21 = new QWidget(widget_4);
        widget_21->setObjectName(QStringLiteral("widget_21"));
        sizePolicy4.setHeightForWidth(widget_21->sizePolicy().hasHeightForWidth());
        widget_21->setSizePolicy(sizePolicy4);
        horizontalLayout_16 = new QHBoxLayout(widget_21);
        horizontalLayout_16->setObjectName(QStringLiteral("horizontalLayout_16"));
        LS_CurvScale_Label = new QLabel(widget_21);
        LS_CurvScale_Label->setObjectName(QStringLiteral("LS_CurvScale_Label"));
        sizePolicy1.setHeightForWidth(LS_CurvScale_Label->sizePolicy().hasHeightForWidth());
        LS_CurvScale_Label->setSizePolicy(sizePolicy1);

        horizontalLayout_16->addWidget(LS_CurvScale_Label);

        LS_CurvScale_DoubleSpinBox = new QDoubleSpinBox(widget_21);
        LS_CurvScale_DoubleSpinBox->setObjectName(QStringLiteral("LS_CurvScale_DoubleSpinBox"));
        LS_CurvScale_DoubleSpinBox->setButtonSymbols(QAbstractSpinBox::NoButtons);
        LS_CurvScale_DoubleSpinBox->setMaximum(96.99);
        LS_CurvScale_DoubleSpinBox->setValue(0.3);

        horizontalLayout_16->addWidget(LS_CurvScale_DoubleSpinBox);


        verticalLayout_5->addWidget(widget_21);

        widget_22 = new QWidget(widget_4);
        widget_22->setObjectName(QStringLiteral("widget_22"));
        sizePolicy4.setHeightForWidth(widget_22->sizePolicy().hasHeightForWidth());
        widget_22->setSizePolicy(sizePolicy4);
        horizontalLayout_17 = new QHBoxLayout(widget_22);
        horizontalLayout_17->setObjectName(QStringLiteral("horizontalLayout_17"));
        LS_NumIt_Label = new QLabel(widget_22);
        LS_NumIt_Label->setObjectName(QStringLiteral("LS_NumIt_Label"));
        sizePolicy1.setHeightForWidth(LS_NumIt_Label->sizePolicy().hasHeightForWidth());
        LS_NumIt_Label->setSizePolicy(sizePolicy1);

        horizontalLayout_17->addWidget(LS_NumIt_Label);

        LS_NumItLineEdit = new QLineEdit(widget_22);
        LS_NumItLineEdit->setObjectName(QStringLiteral("LS_NumItLineEdit"));

        horizontalLayout_17->addWidget(LS_NumItLineEdit);


        verticalLayout_5->addWidget(widget_22);

        widget_23 = new QWidget(widget_4);
        widget_23->setObjectName(QStringLiteral("widget_23"));
        sizePolicy4.setHeightForWidth(widget_23->sizePolicy().hasHeightForWidth());
        widget_23->setSizePolicy(sizePolicy4);
        horizontalLayout_18 = new QHBoxLayout(widget_23);
        horizontalLayout_18->setObjectName(QStringLiteral("horizontalLayout_18"));
        LS_IsoLevel_Label = new QLabel(widget_23);
        LS_IsoLevel_Label->setObjectName(QStringLiteral("LS_IsoLevel_Label"));
        sizePolicy1.setHeightForWidth(LS_IsoLevel_Label->sizePolicy().hasHeightForWidth());
        LS_IsoLevel_Label->setSizePolicy(sizePolicy1);

        horizontalLayout_18->addWidget(LS_IsoLevel_Label);

        LS_IsoLevel_DoubleSpinBox = new QDoubleSpinBox(widget_23);
        LS_IsoLevel_DoubleSpinBox->setObjectName(QStringLiteral("LS_IsoLevel_DoubleSpinBox"));
        LS_IsoLevel_DoubleSpinBox->setButtonSymbols(QAbstractSpinBox::NoButtons);

        horizontalLayout_18->addWidget(LS_IsoLevel_DoubleSpinBox);


        verticalLayout_5->addWidget(widget_23);

        LS_Execute_PushButton = new QPushButton(widget_4);
        LS_Execute_PushButton->setObjectName(QStringLiteral("LS_Execute_PushButton"));

        verticalLayout_5->addWidget(LS_Execute_PushButton);

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


        verticalLayout_5->addWidget(widget_10);


        verticalLayout_3->addWidget(widget_4);

        toolBox->addItem(LevelSetPage, QStringLiteral("Level Set"));
        SurfacePage = new QWidget();
        SurfacePage->setObjectName(QStringLiteral("SurfacePage"));
        SurfacePage->setGeometry(QRect(0, 0, 393, 652));
        verticalLayout_11 = new QVBoxLayout(SurfacePage);
        verticalLayout_11->setSpacing(5);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        verticalLayout_11->setContentsMargins(5, 0, 5, 5);
        widget_7 = new QWidget(SurfacePage);
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
        SU_ComputeCenterlines_PushButton = new QPushButton(widgetRun);
        SU_ComputeCenterlines_PushButton->setObjectName(QStringLiteral("SU_ComputeCenterlines_PushButton"));
#ifndef QT_NO_TOOLTIP
        SU_ComputeCenterlines_PushButton->setToolTip(QStringLiteral("Compute the centerlines for the current surface segmentation."));
#endif // QT_NO_TOOLTIP

        gridLayout->addWidget(SU_ComputeCenterlines_PushButton, 1, 0, 1, 2);

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

        toolBox->addItem(SurfacePage, QStringLiteral("Surface"));
        PathsPage = new QWidget();
        PathsPage->setObjectName(QStringLiteral("PathsPage"));
        PathsPage->setGeometry(QRect(0, 0, 393, 652));
        verticalLayout_13 = new QVBoxLayout(PathsPage);
        verticalLayout_13->setSpacing(5);
        verticalLayout_13->setObjectName(QStringLiteral("verticalLayout_13"));
        verticalLayout_13->setContentsMargins(5, 0, 5, 5);
        widget_11 = new QWidget(PathsPage);
        widget_11->setObjectName(QStringLiteral("widget_11"));
        verticalLayout_4 = new QVBoxLayout(widget_11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        widget = new QWidget(widget_11);
        widget->setObjectName(QStringLiteral("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        PT_DIstMult_Label = new QLabel(widget);
        PT_DIstMult_Label->setObjectName(QStringLiteral("PT_DIstMult_Label"));

        horizontalLayout->addWidget(PT_DIstMult_Label);

        PT_DistMult_LineEdit = new QLineEdit(widget);
        PT_DistMult_LineEdit->setObjectName(QStringLiteral("PT_DistMult_LineEdit"));

        horizontalLayout->addWidget(PT_DistMult_LineEdit);


        verticalLayout_4->addWidget(widget);

        widget_2 = new QWidget(widget_11);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        horizontalLayout_3 = new QHBoxLayout(widget_2);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        PT_Tangent_Label = new QLabel(widget_2);
        PT_Tangent_Label->setObjectName(QStringLiteral("PT_Tangent_Label"));

        horizontalLayout_3->addWidget(PT_Tangent_Label);

        PT_Tangent_DoubleSpinBox = new QDoubleSpinBox(widget_2);
        PT_Tangent_DoubleSpinBox->setObjectName(QStringLiteral("PT_Tangent_DoubleSpinBox"));
        QSizePolicy sizePolicy5(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(PT_Tangent_DoubleSpinBox->sizePolicy().hasHeightForWidth());
        PT_Tangent_DoubleSpinBox->setSizePolicy(sizePolicy5);
        PT_Tangent_DoubleSpinBox->setButtonSymbols(QAbstractSpinBox::NoButtons);

        horizontalLayout_3->addWidget(PT_Tangent_DoubleSpinBox);


        verticalLayout_4->addWidget(widget_2);

        PT_Extract_PushButton = new QPushButton(widget_11);
        PT_Extract_PushButton->setObjectName(QStringLiteral("PT_Extract_PushButton"));
        PT_Extract_PushButton->setEnabled(true);

        verticalLayout_4->addWidget(PT_Extract_PushButton);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_3);


        verticalLayout_13->addWidget(widget_11);

        toolBox->addItem(PathsPage, QStringLiteral("Paths"));

        verticalLayout_2->addWidget(toolBox);


        verticalLayout_7->addWidget(ToolBoxEnclosewidget);


        retranslateUi(sv4guiImageProcessing);

        toolBox->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(sv4guiImageProcessing);
    } // setupUi

    void retranslateUi(QWidget *sv4guiImageProcessing)
    {
        sv4guiImageProcessing->setWindowTitle(QApplication::translate("sv4guiImageProcessing", "Form", nullptr));
        label->setText(QApplication::translate("sv4guiImageProcessing", "Image", nullptr));
#ifndef QT_NO_TOOLTIP
        InputImage_ComboBox->setToolTip(QApplication::translate("sv4guiImageProcessing", "Select the image to segment.", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        toolBox->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        ModelLabel->setText(QApplication::translate("sv4guiImageProcessing", "Size", nullptr));
#ifndef QT_NO_TOOLTIP
        SD_Size_DoubleSpinBox->setToolTip(QApplication::translate("sv4guiImageProcessing", "Set the size of the spheres used to display seeds. The value is a multiple of the image voxel size.", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        SD_AddStart_PushButton->setToolTip(QApplication::translate("sv4guiImageProcessing", "Add a start seed at the location of the 2D crosshairs. A start seed can also be added by pressing the S key.", nullptr));
#endif // QT_NO_TOOLTIP
        SD_AddStart_PushButton->setText(QApplication::translate("sv4guiImageProcessing", "Add Start", nullptr));
#ifndef QT_NO_TOOLTIP
        SD_AddEnd_PushButton->setToolTip(QApplication::translate("sv4guiImageProcessing", "Add a start seed at the location of the 2D crosshairs. A start seed can also be added by pressing the S key.", nullptr));
#endif // QT_NO_TOOLTIP
        SD_AddEnd_PushButton->setText(QApplication::translate("sv4guiImageProcessing", "Add End", nullptr));
#ifndef QT_NO_TOOLTIP
        SD_Clear_PushButton->setToolTip(QApplication::translate("sv4guiImageProcessing", "Clear all seeds.", nullptr));
#endif // QT_NO_TOOLTIP
        SD_Clear_PushButton->setText(QApplication::translate("sv4guiImageProcessing", "Clear", nullptr));
        toolBox->setItemText(toolBox->indexOf(SeedsPage), QApplication::translate("sv4guiImageProcessing", "Seeds", nullptr));
        LS_UpThresh_Label->setText(QApplication::translate("sv4guiImageProcessing", "Upper threshold", nullptr));
#ifndef QT_NO_TOOLTIP
        LS_UpThresh_DoubleSpinBox->setToolTip(QApplication::translate("sv4guiImageProcessing", "The image upper threshold value.", nullptr));
#endif // QT_NO_TOOLTIP
        LS_LowThresh_Label->setText(QApplication::translate("sv4guiImageProcessing", "Lower threshold", nullptr));
#ifndef QT_NO_TOOLTIP
        LS_LowThresh_DoubleSpinBox->setToolTip(QApplication::translate("sv4guiImageProcessing", "The image lower threshold value.", nullptr));
#endif // QT_NO_TOOLTIP
        LS_GradMag_Label->setText(QApplication::translate("sv4guiImageProcessing", "Gradient magnitude SD", nullptr));
#ifndef QT_NO_TOOLTIP
        LS_GradMag_DoubleSpinBox->setToolTip(QApplication::translate("sv4guiImageProcessing", "The standard deviation value used for the Gaussian smoothing filter, measured in the units of image spacing.", nullptr));
#endif // QT_NO_TOOLTIP
        LS_PropScale_Label->setText(QApplication::translate("sv4guiImageProcessing", "Propagation weight", nullptr));
#ifndef QT_NO_TOOLTIP
        LS_PropScale_DoubleSpinBox->setToolTip(QApplication::translate("sv4guiImageProcessing", "The weight used to regulate surface inflation.", nullptr));
#endif // QT_NO_TOOLTIP
        LS_AdvScale_Label->setText(QApplication::translate("sv4guiImageProcessing", "Advection weight", nullptr));
#ifndef QT_NO_TOOLTIP
        LS_AdvScale_DoubleSpinBox->setToolTip(QApplication::translate("sv4guiImageProcessing", "The weight used to regulate the attraction of the surface towards the ridges of the image gradient magnitude.", nullptr));
#endif // QT_NO_TOOLTIP
        LS_CurvScale_Label->setText(QApplication::translate("sv4guiImageProcessing", "Curvature weight", nullptr));
#ifndef QT_NO_TOOLTIP
        LS_CurvScale_DoubleSpinBox->setToolTip(QApplication::translate("sv4guiImageProcessing", "The weight used to regulate the surface mean curvature smoothenss constraint.", nullptr));
#endif // QT_NO_TOOLTIP
        LS_NumIt_Label->setText(QApplication::translate("sv4guiImageProcessing", "Number of iterations", nullptr));
#ifndef QT_NO_TOOLTIP
        LS_NumItLineEdit->setToolTip(QApplication::translate("sv4guiImageProcessing", "The number of iterations to incrementally update (evolve in time) the level set function.", nullptr));
#endif // QT_NO_TOOLTIP
        LS_NumItLineEdit->setText(QApplication::translate("sv4guiImageProcessing", "100", nullptr));
        LS_IsoLevel_Label->setText(QApplication::translate("sv4guiImageProcessing", "Isosurface level", nullptr));
#ifndef QT_NO_TOOLTIP
        LS_IsoLevel_DoubleSpinBox->setToolTip(QApplication::translate("sv4guiImageProcessing", "The isolevel used to extract the segmentation surface from the level set function.", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        LS_Execute_PushButton->setToolTip(QApplication::translate("sv4guiImageProcessing", "Start the level set computation.", nullptr));
#endif // QT_NO_TOOLTIP
        LS_Execute_PushButton->setText(QApplication::translate("sv4guiImageProcessing", "Execute", nullptr));
        toolBox->setItemText(toolBox->indexOf(LevelSetPage), QApplication::translate("sv4guiImageProcessing", "Level Set", nullptr));
        SU_ComputeCenterlines_PushButton->setText(QApplication::translate("sv4guiImageProcessing", "Compute Centerlines", nullptr));
        toolBox->setItemText(toolBox->indexOf(SurfacePage), QApplication::translate("sv4guiImageProcessing", "Surface", nullptr));
        PT_DIstMult_Label->setText(QApplication::translate("sv4guiImageProcessing", "Distance multiplier", nullptr));
#ifndef QT_NO_TOOLTIP
        PT_DistMult_LineEdit->setToolTip(QApplication::translate("sv4guiImageProcessing", "The multiplicative factor used to sample centerline points for path control points.", nullptr));
#endif // QT_NO_TOOLTIP
        PT_Tangent_Label->setText(QApplication::translate("sv4guiImageProcessing", "Tangent change", nullptr));
#ifndef QT_NO_TOOLTIP
        PT_Tangent_DoubleSpinBox->setToolTip(QApplication::translate("sv4guiImageProcessing", "<html><head/><body><p>The maximum angle, in degrees, between centerlines tangents used to add a path control point. </p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        PT_Extract_PushButton->setToolTip(QApplication::translate("sv4guiImageProcessing", "Extract paths from centerlines.", nullptr));
#endif // QT_NO_TOOLTIP
        PT_Extract_PushButton->setText(QApplication::translate("sv4guiImageProcessing", "Extract", nullptr));
        toolBox->setItemText(toolBox->indexOf(PathsPage), QApplication::translate("sv4guiImageProcessing", "Paths", nullptr));
    } // retranslateUi

};

namespace Ui {
    class sv4guiImageProcessing: public Ui_sv4guiImageProcessing {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SV4GUI_IMAGEPROCESSING_H
