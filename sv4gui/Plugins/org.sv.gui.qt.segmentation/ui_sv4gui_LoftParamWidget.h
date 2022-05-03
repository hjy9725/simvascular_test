/********************************************************************************
** Form generated from reading UI file 'sv4gui_LoftParamWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SV4GUI_LOFTPARAMWIDGET_H
#define UI_SV4GUI_LOFTPARAMWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_sv4guiLoftParamWidget
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget_3;
    QFormLayout *formLayout_2;
    QLabel *label_3;
    QComboBox *comboBoxMethod;
    QStackedWidget *stackedWidget;
    QWidget *page_2;
    QVBoxLayout *verticalLayout_6;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_4;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_4;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_5;
    QLineEdit *NURBSLoftingUDegree;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_6;
    QComboBox *NURBSLoftingUKnotSpanType;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_7;
    QComboBox *NURBSLoftingUParametricSpanType;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_5;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_8;
    QLineEdit *NURBSLoftingVDegree;
    QWidget *widget_6;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_9;
    QComboBox *NURBSLoftingVKnotSpanType;
    QWidget *widget_7;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_10;
    QComboBox *NURBSLoftingVParametricSpanType;
    QWidget *page;
    QVBoxLayout *verticalLayout_2;
    QFrame *frame;
    QFormLayout *formLayout;
    QLabel *label;
    QSpinBox *spinBoxSampling;
    QLabel *label_2;
    QSpinBox *spinBoxNumPerSeg;
    QCheckBox *checkBoxUseLinearSample;
    QSpinBox *spinBoxLinearFactor;
    QCheckBox *checkBoxUseFFT;
    QSpinBox *spinBoxNumModes;
    QLabel *label_11;
    QSpacerItem *verticalSpacer;
    QWidget *widgetButtonGroup;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnApply;
    QPushButton *btnOK;
    QPushButton *btnClose;

    void setupUi(QWidget *sv4guiLoftParamWidget)
    {
        if (sv4guiLoftParamWidget->objectName().isEmpty())
            sv4guiLoftParamWidget->setObjectName(QStringLiteral("sv4guiLoftParamWidget"));
        sv4guiLoftParamWidget->resize(472, 474);
        verticalLayout = new QVBoxLayout(sv4guiLoftParamWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        widget_3 = new QWidget(sv4guiLoftParamWidget);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        formLayout_2 = new QFormLayout(widget_3);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        label_3 = new QLabel(widget_3);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_3);

        comboBoxMethod = new QComboBox(widget_3);
        comboBoxMethod->addItem(QString());
        comboBoxMethod->addItem(QString());
        comboBoxMethod->setObjectName(QStringLiteral("comboBoxMethod"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, comboBoxMethod);


        verticalLayout->addWidget(widget_3);

        stackedWidget = new QStackedWidget(sv4guiLoftParamWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        verticalLayout_6 = new QVBoxLayout(page_2);
        verticalLayout_6->setSpacing(5);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        frame_2 = new QFrame(page_2);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(frame_2);
        verticalLayout_3->setSpacing(5);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(5, 5, 5, 5);
        label_4 = new QLabel(frame_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setEnabled(true);

        verticalLayout_3->addWidget(label_4);

        groupBox = new QGroupBox(frame_2);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout_4 = new QVBoxLayout(groupBox);
        verticalLayout_4->setSpacing(5);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(5, 5, 5, 5);
        widget_2 = new QWidget(groupBox);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setSpacing(5);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(widget_2);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_2->addWidget(label_5);

        NURBSLoftingUDegree = new QLineEdit(widget_2);
        NURBSLoftingUDegree->setObjectName(QStringLiteral("NURBSLoftingUDegree"));
        NURBSLoftingUDegree->setMaximumSize(QSize(30, 16777215));
        NURBSLoftingUDegree->setFrame(true);
        NURBSLoftingUDegree->setDragEnabled(false);

        horizontalLayout_2->addWidget(NURBSLoftingUDegree);


        verticalLayout_4->addWidget(widget_2);

        widget = new QWidget(groupBox);
        widget->setObjectName(QStringLiteral("widget"));
        horizontalLayout_3 = new QHBoxLayout(widget);
        horizontalLayout_3->setSpacing(5);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(widget);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_3->addWidget(label_6);

        NURBSLoftingUKnotSpanType = new QComboBox(widget);
        NURBSLoftingUKnotSpanType->addItem(QString());
        NURBSLoftingUKnotSpanType->addItem(QString());
        NURBSLoftingUKnotSpanType->addItem(QString());
        NURBSLoftingUKnotSpanType->setObjectName(QStringLiteral("NURBSLoftingUKnotSpanType"));

        horizontalLayout_3->addWidget(NURBSLoftingUKnotSpanType);


        verticalLayout_4->addWidget(widget);

        widget_5 = new QWidget(groupBox);
        widget_5->setObjectName(QStringLiteral("widget_5"));
        horizontalLayout_5 = new QHBoxLayout(widget_5);
        horizontalLayout_5->setSpacing(5);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(widget_5);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_5->addWidget(label_7);

        NURBSLoftingUParametricSpanType = new QComboBox(widget_5);
        NURBSLoftingUParametricSpanType->addItem(QString());
        NURBSLoftingUParametricSpanType->addItem(QString());
        NURBSLoftingUParametricSpanType->addItem(QString());
        NURBSLoftingUParametricSpanType->setObjectName(QStringLiteral("NURBSLoftingUParametricSpanType"));

        horizontalLayout_5->addWidget(NURBSLoftingUParametricSpanType);


        verticalLayout_4->addWidget(widget_5);


        verticalLayout_3->addWidget(groupBox);

        groupBox_2 = new QGroupBox(frame_2);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        verticalLayout_5 = new QVBoxLayout(groupBox_2);
        verticalLayout_5->setSpacing(5);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(5, 5, 5, 5);
        widget_4 = new QWidget(groupBox_2);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        horizontalLayout_4 = new QHBoxLayout(widget_4);
        horizontalLayout_4->setSpacing(5);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(widget_4);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_4->addWidget(label_8);

        NURBSLoftingVDegree = new QLineEdit(widget_4);
        NURBSLoftingVDegree->setObjectName(QStringLiteral("NURBSLoftingVDegree"));
        NURBSLoftingVDegree->setMaximumSize(QSize(30, 16777215));

        horizontalLayout_4->addWidget(NURBSLoftingVDegree);


        verticalLayout_5->addWidget(widget_4);

        widget_6 = new QWidget(groupBox_2);
        widget_6->setObjectName(QStringLiteral("widget_6"));
        horizontalLayout_6 = new QHBoxLayout(widget_6);
        horizontalLayout_6->setSpacing(5);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(widget_6);
        label_9->setObjectName(QStringLiteral("label_9"));

        horizontalLayout_6->addWidget(label_9);

        NURBSLoftingVKnotSpanType = new QComboBox(widget_6);
        NURBSLoftingVKnotSpanType->addItem(QString());
        NURBSLoftingVKnotSpanType->addItem(QString());
        NURBSLoftingVKnotSpanType->addItem(QString());
        NURBSLoftingVKnotSpanType->setObjectName(QStringLiteral("NURBSLoftingVKnotSpanType"));
        NURBSLoftingVKnotSpanType->setEditable(false);

        horizontalLayout_6->addWidget(NURBSLoftingVKnotSpanType);


        verticalLayout_5->addWidget(widget_6);

        widget_7 = new QWidget(groupBox_2);
        widget_7->setObjectName(QStringLiteral("widget_7"));
        horizontalLayout_7 = new QHBoxLayout(widget_7);
        horizontalLayout_7->setSpacing(5);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_10 = new QLabel(widget_7);
        label_10->setObjectName(QStringLiteral("label_10"));

        horizontalLayout_7->addWidget(label_10);

        NURBSLoftingVParametricSpanType = new QComboBox(widget_7);
        NURBSLoftingVParametricSpanType->addItem(QString());
        NURBSLoftingVParametricSpanType->addItem(QString());
        NURBSLoftingVParametricSpanType->addItem(QString());
        NURBSLoftingVParametricSpanType->setObjectName(QStringLiteral("NURBSLoftingVParametricSpanType"));

        horizontalLayout_7->addWidget(NURBSLoftingVParametricSpanType);


        verticalLayout_5->addWidget(widget_7);


        verticalLayout_3->addWidget(groupBox_2);


        verticalLayout_6->addWidget(frame_2);

        stackedWidget->addWidget(page_2);
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        verticalLayout_2 = new QVBoxLayout(page);
        verticalLayout_2->setSpacing(5);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(page);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        formLayout = new QFormLayout(frame);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(-1, 9, -1, -1);
        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label);

        spinBoxSampling = new QSpinBox(frame);
        spinBoxSampling->setObjectName(QStringLiteral("spinBoxSampling"));
        spinBoxSampling->setMaximum(199);
        spinBoxSampling->setValue(60);

        formLayout->setWidget(1, QFormLayout::FieldRole, spinBoxSampling);

        label_2 = new QLabel(frame);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_2);

        spinBoxNumPerSeg = new QSpinBox(frame);
        spinBoxNumPerSeg->setObjectName(QStringLiteral("spinBoxNumPerSeg"));
        spinBoxNumPerSeg->setValue(12);

        formLayout->setWidget(2, QFormLayout::FieldRole, spinBoxNumPerSeg);

        checkBoxUseLinearSample = new QCheckBox(frame);
        checkBoxUseLinearSample->setObjectName(QStringLiteral("checkBoxUseLinearSample"));
        checkBoxUseLinearSample->setChecked(true);

        formLayout->setWidget(3, QFormLayout::LabelRole, checkBoxUseLinearSample);

        spinBoxLinearFactor = new QSpinBox(frame);
        spinBoxLinearFactor->setObjectName(QStringLiteral("spinBoxLinearFactor"));
        spinBoxLinearFactor->setValue(10);

        formLayout->setWidget(3, QFormLayout::FieldRole, spinBoxLinearFactor);

        checkBoxUseFFT = new QCheckBox(frame);
        checkBoxUseFFT->setObjectName(QStringLiteral("checkBoxUseFFT"));

        formLayout->setWidget(4, QFormLayout::LabelRole, checkBoxUseFFT);

        spinBoxNumModes = new QSpinBox(frame);
        spinBoxNumModes->setObjectName(QStringLiteral("spinBoxNumModes"));
        spinBoxNumModes->setValue(20);

        formLayout->setWidget(4, QFormLayout::FieldRole, spinBoxNumModes);

        label_11 = new QLabel(frame);
        label_11->setObjectName(QStringLiteral("label_11"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_11);


        verticalLayout_2->addWidget(frame);

        stackedWidget->addWidget(page);

        verticalLayout->addWidget(stackedWidget);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        widgetButtonGroup = new QWidget(sv4guiLoftParamWidget);
        widgetButtonGroup->setObjectName(QStringLiteral("widgetButtonGroup"));
        horizontalLayout = new QHBoxLayout(widgetButtonGroup);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        btnApply = new QPushButton(widgetButtonGroup);
        btnApply->setObjectName(QStringLiteral("btnApply"));

        horizontalLayout->addWidget(btnApply);

        btnOK = new QPushButton(widgetButtonGroup);
        btnOK->setObjectName(QStringLiteral("btnOK"));

        horizontalLayout->addWidget(btnOK);

        btnClose = new QPushButton(widgetButtonGroup);
        btnClose->setObjectName(QStringLiteral("btnClose"));

        horizontalLayout->addWidget(btnClose);


        verticalLayout->addWidget(widgetButtonGroup);


        retranslateUi(sv4guiLoftParamWidget);

        stackedWidget->setCurrentIndex(0);
        NURBSLoftingUKnotSpanType->setCurrentIndex(2);
        NURBSLoftingUParametricSpanType->setCurrentIndex(2);
        NURBSLoftingVKnotSpanType->setCurrentIndex(1);
        NURBSLoftingVParametricSpanType->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(sv4guiLoftParamWidget);
    } // setupUi

    void retranslateUi(QWidget *sv4guiLoftParamWidget)
    {
        sv4guiLoftParamWidget->setWindowTitle(QApplication::translate("sv4guiLoftParamWidget", "Lofting Parameters", nullptr));
        label_3->setText(QApplication::translate("sv4guiLoftParamWidget", "Use Lofting Method:", nullptr));
        comboBoxMethod->setItemText(0, QApplication::translate("sv4guiLoftParamWidget", "nurbs", nullptr));
        comboBoxMethod->setItemText(1, QApplication::translate("sv4guiLoftParamWidget", "spline", nullptr));

        label_4->setText(QApplication::translate("sv4guiLoftParamWidget", "NURBS Lofting Options:", nullptr));
        groupBox->setTitle(QApplication::translate("sv4guiLoftParamWidget", "Longitudinal Direction:", nullptr));
        label_5->setText(QApplication::translate("sv4guiLoftParamWidget", "Degree:", nullptr));
        NURBSLoftingUDegree->setText(QApplication::translate("sv4guiLoftParamWidget", "2", nullptr));
        NURBSLoftingUDegree->setPlaceholderText(QApplication::translate("sv4guiLoftParamWidget", "3", nullptr));
        label_6->setText(QApplication::translate("sv4guiLoftParamWidget", "Knot Span Type:", nullptr));
        NURBSLoftingUKnotSpanType->setItemText(0, QApplication::translate("sv4guiLoftParamWidget", "equal", nullptr));
        NURBSLoftingUKnotSpanType->setItemText(1, QApplication::translate("sv4guiLoftParamWidget", "average", nullptr));
        NURBSLoftingUKnotSpanType->setItemText(2, QApplication::translate("sv4guiLoftParamWidget", "derivative", nullptr));

        label_7->setText(QApplication::translate("sv4guiLoftParamWidget", "Parametric Span Type:", nullptr));
        NURBSLoftingUParametricSpanType->setItemText(0, QApplication::translate("sv4guiLoftParamWidget", "equal", nullptr));
        NURBSLoftingUParametricSpanType->setItemText(1, QApplication::translate("sv4guiLoftParamWidget", "chord", nullptr));
        NURBSLoftingUParametricSpanType->setItemText(2, QApplication::translate("sv4guiLoftParamWidget", "centripetal", nullptr));

        groupBox_2->setTitle(QApplication::translate("sv4guiLoftParamWidget", "Circumferential Direction:", nullptr));
        label_8->setText(QApplication::translate("sv4guiLoftParamWidget", "Degree:", nullptr));
        NURBSLoftingVDegree->setText(QApplication::translate("sv4guiLoftParamWidget", "2", nullptr));
        NURBSLoftingVDegree->setPlaceholderText(QApplication::translate("sv4guiLoftParamWidget", "3", nullptr));
        label_9->setText(QApplication::translate("sv4guiLoftParamWidget", "Knot Span Type:", nullptr));
        NURBSLoftingVKnotSpanType->setItemText(0, QApplication::translate("sv4guiLoftParamWidget", "equal", nullptr));
        NURBSLoftingVKnotSpanType->setItemText(1, QApplication::translate("sv4guiLoftParamWidget", "average", nullptr));
        NURBSLoftingVKnotSpanType->setItemText(2, QApplication::translate("sv4guiLoftParamWidget", "derivative", nullptr));

        label_10->setText(QApplication::translate("sv4guiLoftParamWidget", "Parametric Span Type:", nullptr));
        NURBSLoftingVParametricSpanType->setItemText(0, QApplication::translate("sv4guiLoftParamWidget", "equal", nullptr));
        NURBSLoftingVParametricSpanType->setItemText(1, QApplication::translate("sv4guiLoftParamWidget", "chord", nullptr));
        NURBSLoftingVParametricSpanType->setItemText(2, QApplication::translate("sv4guiLoftParamWidget", "centripetal", nullptr));

        label->setText(QApplication::translate("sv4guiLoftParamWidget", "Sampling:", nullptr));
        label_2->setText(QApplication::translate("sv4guiLoftParamWidget", "Number of Points Per Segment:", nullptr));
        checkBoxUseLinearSample->setText(QApplication::translate("sv4guiLoftParamWidget", "Linear Sample along Lenght  Factor:", nullptr));
        checkBoxUseFFT->setText(QApplication::translate("sv4guiLoftParamWidget", "Use FFT                              Num Modes:", nullptr));
        label_11->setText(QApplication::translate("sv4guiLoftParamWidget", "Spline Lofting Options", nullptr));
        btnApply->setText(QApplication::translate("sv4guiLoftParamWidget", "Apply", nullptr));
        btnOK->setText(QApplication::translate("sv4guiLoftParamWidget", "OK", nullptr));
        btnClose->setText(QApplication::translate("sv4guiLoftParamWidget", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class sv4guiLoftParamWidget: public Ui_sv4guiLoftParamWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SV4GUI_LOFTPARAMWIDGET_H
