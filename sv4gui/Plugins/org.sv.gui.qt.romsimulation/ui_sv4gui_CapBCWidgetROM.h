/********************************************************************************
** Form generated from reading UI file 'sv4gui_CapBCWidgetROM.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SV4GUI_CAPBCWIDGETROM_H
#define UI_SV4GUI_CAPBCWIDGETROM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_sv4guiCapBCWidgetROM
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_8;
    QLabel *labelFaceName;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *comboBoxBCType;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QGridLayout *gridLayout_2;
    QLabel *label_3;
    QLineEdit *lineEditPointNumber;
    QSpacerItem *verticalSpacer;
    QLabel *label_2;
    QComboBox *comboBoxShape;
    QCheckBox *checkBoxFlip;
    QLabel *label_4;
    QLineEdit *lineEditModeNumber;
    QLabel *label_9;
    QLineEdit *lineEditPeriod;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_5;
    QLabel *labelLoadFile;
    QToolButton *toolButtonBrowse;
    QWidget *page_2;
    QGridLayout *gridLayout_3;
    QLabel *label_7;
    QLineEdit *lineEditPressure;
    QLabel *labelBCValues;
    QLineEdit *lineEditBCValues;
    QSpacerItem *verticalSpacer_2;
    QWidget *widgetPressure;
    QGridLayout *gridLayout_4;
    QLabel *labelPeriodCOR;
    QLineEdit *lineEditPressurePeriod;
    QLabel *label_10;
    QLineEdit *lineEditPressureScaling;
    QWidget *widgetPressureFile;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_6;
    QLabel *labelLoadPressureFile;
    QToolButton *toolButtonBrowsePressureFile;
    QWidget *widget_2;
    QGridLayout *gridLayout;
    QDialogButtonBox *buttonBox;

    void setupUi(QWidget *sv4guiCapBCWidgetROM)
    {
        if (sv4guiCapBCWidgetROM->objectName().isEmpty())
            sv4guiCapBCWidgetROM->setObjectName(QStringLiteral("sv4guiCapBCWidgetROM"));
        sv4guiCapBCWidgetROM->resize(338, 332);
        sv4guiCapBCWidgetROM->setContextMenuPolicy(Qt::CustomContextMenu);
        verticalLayout = new QVBoxLayout(sv4guiCapBCWidgetROM);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        widget_5 = new QWidget(sv4guiCapBCWidgetROM);
        widget_5->setObjectName(QStringLiteral("widget_5"));
        horizontalLayout_3 = new QHBoxLayout(widget_5);
        horizontalLayout_3->setSpacing(5);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(5, 5, 5, 5);
        label_8 = new QLabel(widget_5);
        label_8->setObjectName(QStringLiteral("label_8"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(label_8);

        labelFaceName = new QLabel(widget_5);
        labelFaceName->setObjectName(QStringLiteral("labelFaceName"));

        horizontalLayout_3->addWidget(labelFaceName);


        verticalLayout->addWidget(widget_5);

        widget_3 = new QWidget(sv4guiCapBCWidgetROM);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        horizontalLayout = new QHBoxLayout(widget_3);
        horizontalLayout->setSpacing(5);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(5, 5, 5, 5);
        label = new QLabel(widget_3);
        label->setObjectName(QStringLiteral("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(label);

        comboBoxBCType = new QComboBox(widget_3);
        comboBoxBCType->addItem(QString());
        comboBoxBCType->addItem(QString());
        comboBoxBCType->addItem(QString());
        comboBoxBCType->addItem(QString());
        comboBoxBCType->setObjectName(QStringLiteral("comboBoxBCType"));

        horizontalLayout->addWidget(comboBoxBCType);


        verticalLayout->addWidget(widget_3);

        widget = new QWidget(sv4guiCapBCWidgetROM);
        widget->setObjectName(QStringLiteral("widget"));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        stackedWidget = new QStackedWidget(widget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        gridLayout_2 = new QGridLayout(page);
        gridLayout_2->setSpacing(5);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(5, 5, 5, 5);
        label_3 = new QLabel(page);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_2->addWidget(label_3, 1, 0, 1, 1);

        lineEditPointNumber = new QLineEdit(page);
        lineEditPointNumber->setObjectName(QStringLiteral("lineEditPointNumber"));

        gridLayout_2->addWidget(lineEditPointNumber, 1, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 9, 0, 1, 2);

        label_2 = new QLabel(page);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_2->addWidget(label_2, 0, 0, 1, 1);

        comboBoxShape = new QComboBox(page);
        comboBoxShape->addItem(QString());
        comboBoxShape->addItem(QString());
        comboBoxShape->addItem(QString());
        comboBoxShape->setObjectName(QStringLiteral("comboBoxShape"));

        gridLayout_2->addWidget(comboBoxShape, 0, 1, 1, 1);

        checkBoxFlip = new QCheckBox(page);
        checkBoxFlip->setObjectName(QStringLiteral("checkBoxFlip"));

        gridLayout_2->addWidget(checkBoxFlip, 6, 0, 1, 2);

        label_4 = new QLabel(page);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_2->addWidget(label_4, 3, 0, 1, 1);

        lineEditModeNumber = new QLineEdit(page);
        lineEditModeNumber->setObjectName(QStringLiteral("lineEditModeNumber"));

        gridLayout_2->addWidget(lineEditModeNumber, 3, 1, 1, 1);

        label_9 = new QLabel(page);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout_2->addWidget(label_9, 5, 0, 1, 1);

        lineEditPeriod = new QLineEdit(page);
        lineEditPeriod->setObjectName(QStringLiteral("lineEditPeriod"));
        lineEditPeriod->setEnabled(true);

        gridLayout_2->addWidget(lineEditPeriod, 5, 1, 1, 1);

        widget_4 = new QWidget(page);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        horizontalLayout_2 = new QHBoxLayout(widget_4);
        horizontalLayout_2->setSpacing(5);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(widget_4);
        label_5->setObjectName(QStringLiteral("label_5"));
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(label_5);

        labelLoadFile = new QLabel(widget_4);
        labelLoadFile->setObjectName(QStringLiteral("labelLoadFile"));

        horizontalLayout_2->addWidget(labelLoadFile);

        toolButtonBrowse = new QToolButton(widget_4);
        toolButtonBrowse->setObjectName(QStringLiteral("toolButtonBrowse"));

        horizontalLayout_2->addWidget(toolButtonBrowse);


        gridLayout_2->addWidget(widget_4, 4, 0, 1, 2);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        gridLayout_3 = new QGridLayout(page_2);
        gridLayout_3->setSpacing(5);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(5, 5, 5, 5);
        label_7 = new QLabel(page_2);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_3->addWidget(label_7, 1, 0, 1, 1);

        lineEditPressure = new QLineEdit(page_2);
        lineEditPressure->setObjectName(QStringLiteral("lineEditPressure"));

        gridLayout_3->addWidget(lineEditPressure, 1, 1, 1, 1);

        labelBCValues = new QLabel(page_2);
        labelBCValues->setObjectName(QStringLiteral("labelBCValues"));

        gridLayout_3->addWidget(labelBCValues, 0, 0, 1, 1);

        lineEditBCValues = new QLineEdit(page_2);
        lineEditBCValues->setObjectName(QStringLiteral("lineEditBCValues"));

        gridLayout_3->addWidget(lineEditBCValues, 0, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_2, 6, 0, 1, 2);

        widgetPressure = new QWidget(page_2);
        widgetPressure->setObjectName(QStringLiteral("widgetPressure"));
        gridLayout_4 = new QGridLayout(widgetPressure);
        gridLayout_4->setSpacing(5);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        labelPeriodCOR = new QLabel(widgetPressure);
        labelPeriodCOR->setObjectName(QStringLiteral("labelPeriodCOR"));

        gridLayout_4->addWidget(labelPeriodCOR, 1, 0, 1, 1);

        lineEditPressurePeriod = new QLineEdit(widgetPressure);
        lineEditPressurePeriod->setObjectName(QStringLiteral("lineEditPressurePeriod"));

        gridLayout_4->addWidget(lineEditPressurePeriod, 1, 1, 1, 1);

        label_10 = new QLabel(widgetPressure);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout_4->addWidget(label_10, 2, 0, 1, 1);

        lineEditPressureScaling = new QLineEdit(widgetPressure);
        lineEditPressureScaling->setObjectName(QStringLiteral("lineEditPressureScaling"));

        gridLayout_4->addWidget(lineEditPressureScaling, 2, 1, 1, 1);

        widgetPressureFile = new QWidget(widgetPressure);
        widgetPressureFile->setObjectName(QStringLiteral("widgetPressureFile"));
        horizontalLayout_4 = new QHBoxLayout(widgetPressureFile);
        horizontalLayout_4->setSpacing(5);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(widgetPressureFile);
        label_6->setObjectName(QStringLiteral("label_6"));
        sizePolicy.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy);

        horizontalLayout_4->addWidget(label_6);

        labelLoadPressureFile = new QLabel(widgetPressureFile);
        labelLoadPressureFile->setObjectName(QStringLiteral("labelLoadPressureFile"));

        horizontalLayout_4->addWidget(labelLoadPressureFile);

        toolButtonBrowsePressureFile = new QToolButton(widgetPressureFile);
        toolButtonBrowsePressureFile->setObjectName(QStringLiteral("toolButtonBrowsePressureFile"));

        horizontalLayout_4->addWidget(toolButtonBrowsePressureFile);


        gridLayout_4->addWidget(widgetPressureFile, 0, 0, 1, 2);


        gridLayout_3->addWidget(widgetPressure, 2, 0, 1, 2);

        stackedWidget->addWidget(page_2);

        verticalLayout_2->addWidget(stackedWidget);


        verticalLayout->addWidget(widget);

        widget_2 = new QWidget(sv4guiCapBCWidgetROM);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        gridLayout = new QGridLayout(widget_2);
        gridLayout->setSpacing(5);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(5, 5, -1, 5);
        buttonBox = new QDialogButtonBox(widget_2);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 0, 0, 1, 1);


        verticalLayout->addWidget(widget_2);


        retranslateUi(sv4guiCapBCWidgetROM);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(sv4guiCapBCWidgetROM);
    } // setupUi

    void retranslateUi(QWidget *sv4guiCapBCWidgetROM)
    {
        sv4guiCapBCWidgetROM->setWindowTitle(QApplication::translate("sv4guiCapBCWidgetROM", "Set Inlet/Outlet BCs", nullptr));
        label_8->setText(QApplication::translate("sv4guiCapBCWidgetROM", "Face Name:", nullptr));
        labelFaceName->setText(QString());
        label->setText(QApplication::translate("sv4guiCapBCWidgetROM", "BC Type: ", nullptr));
        comboBoxBCType->setItemText(0, QApplication::translate("sv4guiCapBCWidgetROM", "Coronary", nullptr));
        comboBoxBCType->setItemText(1, QApplication::translate("sv4guiCapBCWidgetROM", "Prescribed Velocities", nullptr));
        comboBoxBCType->setItemText(2, QApplication::translate("sv4guiCapBCWidgetROM", "Resistance", nullptr));
        comboBoxBCType->setItemText(3, QApplication::translate("sv4guiCapBCWidgetROM", "RCR", nullptr));

        label_3->setText(QApplication::translate("sv4guiCapBCWidgetROM", "Point Number: ", nullptr));
        lineEditPointNumber->setText(QApplication::translate("sv4guiCapBCWidgetROM", "201", nullptr));
        label_2->setText(QApplication::translate("sv4guiCapBCWidgetROM", "Analytic Shape: ", nullptr));
        comboBoxShape->setItemText(0, QApplication::translate("sv4guiCapBCWidgetROM", "parabolic", nullptr));
        comboBoxShape->setItemText(1, QApplication::translate("sv4guiCapBCWidgetROM", "plug", nullptr));
        comboBoxShape->setItemText(2, QApplication::translate("sv4guiCapBCWidgetROM", "womersley", nullptr));

        checkBoxFlip->setText(QApplication::translate("sv4guiCapBCWidgetROM", "Flip Normal", nullptr));
        label_4->setText(QApplication::translate("sv4guiCapBCWidgetROM", "Fourier Modes: ", nullptr));
        lineEditModeNumber->setText(QApplication::translate("sv4guiCapBCWidgetROM", "10", nullptr));
        label_9->setText(QApplication::translate("sv4guiCapBCWidgetROM", "Period:", nullptr));
        label_5->setText(QApplication::translate("sv4guiCapBCWidgetROM", "Flow rate (from File):  ", nullptr));
        labelLoadFile->setText(QString());
        toolButtonBrowse->setText(QApplication::translate("sv4guiCapBCWidgetROM", "...", nullptr));
        label_7->setText(QApplication::translate("sv4guiCapBCWidgetROM", "Distal Pressure:", nullptr));
        lineEditPressure->setText(QApplication::translate("sv4guiCapBCWidgetROM", "0", nullptr));
        labelBCValues->setText(QApplication::translate("sv4guiCapBCWidgetROM", "BC Values: ", nullptr));
        lineEditBCValues->setText(QApplication::translate("sv4guiCapBCWidgetROM", "0", nullptr));
        labelPeriodCOR->setText(QApplication::translate("sv4guiCapBCWidgetROM", "P<sub>im</sub> Period:", nullptr));
        label_10->setText(QApplication::translate("sv4guiCapBCWidgetROM", "P<sub>im</sub> Scaling:", nullptr));
        label_6->setText(QApplication::translate("sv4guiCapBCWidgetROM", "P<sub>im</sub> (from file):", nullptr));
        labelLoadPressureFile->setText(QString());
        toolButtonBrowsePressureFile->setText(QApplication::translate("sv4guiCapBCWidgetROM", "...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class sv4guiCapBCWidgetROM: public Ui_sv4guiCapBCWidgetROM {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SV4GUI_CAPBCWIDGETROM_H
