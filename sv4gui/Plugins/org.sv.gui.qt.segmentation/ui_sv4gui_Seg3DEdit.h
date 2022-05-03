/********************************************************************************
** Form generated from reading UI file 'sv4gui_Seg3DEdit.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SV4GUI_SEG3DEDIT_H
#define UI_SV4GUI_SEG3DEDIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "ctkRangeWidget.h"

QT_BEGIN_NAMESPACE

class Ui_sv4guiSeg3DEdit
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget_5;
    QGridLayout *gridLayout;
    QLabel *label_16;
    QLabel *labelSegName;
    QFrame *line;
    QWidget *widget_7;
    QHBoxLayout *horizontalLayout_9;
    QCheckBox *checkBoxShowSeeds;
    QLabel *label_2;
    QFrame *line_3;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget;
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    ctkRangeWidget *widgetThresholdCF;
    QPushButton *btnCreateCF;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *sv4guiSeg3DEdit)
    {
        if (sv4guiSeg3DEdit->objectName().isEmpty())
            sv4guiSeg3DEdit->setObjectName(QStringLiteral("sv4guiSeg3DEdit"));
        sv4guiSeg3DEdit->resize(367, 557);
        verticalLayout = new QVBoxLayout(sv4guiSeg3DEdit);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(5, 5, 5, 0);
        widget_5 = new QWidget(sv4guiSeg3DEdit);
        widget_5->setObjectName(QStringLiteral("widget_5"));
        gridLayout = new QGridLayout(widget_5);
        gridLayout->setSpacing(5);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 5, 0, 5);
        label_16 = new QLabel(widget_5);
        label_16->setObjectName(QStringLiteral("label_16"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_16->sizePolicy().hasHeightForWidth());
        label_16->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_16, 0, 0, 1, 1);

        labelSegName = new QLabel(widget_5);
        labelSegName->setObjectName(QStringLiteral("labelSegName"));

        gridLayout->addWidget(labelSegName, 0, 1, 1, 1);


        verticalLayout->addWidget(widget_5);

        line = new QFrame(sv4guiSeg3DEdit);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShadow(QFrame::Plain);
        line->setLineWidth(2);
        line->setMidLineWidth(1);
        line->setFrameShape(QFrame::HLine);

        verticalLayout->addWidget(line);

        widget_7 = new QWidget(sv4guiSeg3DEdit);
        widget_7->setObjectName(QStringLiteral("widget_7"));
        horizontalLayout_9 = new QHBoxLayout(widget_7);
        horizontalLayout_9->setSpacing(0);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(0, 3, 0, 3);
        checkBoxShowSeeds = new QCheckBox(widget_7);
        checkBoxShowSeeds->setObjectName(QStringLiteral("checkBoxShowSeeds"));

        horizontalLayout_9->addWidget(checkBoxShowSeeds);


        verticalLayout->addWidget(widget_7);

        label_2 = new QLabel(sv4guiSeg3DEdit);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font;
        font.setPointSize(9);
        label_2->setFont(font);

        verticalLayout->addWidget(label_2);

        line_3 = new QFrame(sv4guiSeg3DEdit);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_3);

        tabWidget = new QTabWidget(sv4guiSeg3DEdit);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        verticalLayout_2 = new QVBoxLayout(tab);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(tab);
        widget->setObjectName(QStringLiteral("widget"));
        verticalLayout_3 = new QVBoxLayout(widget);
        verticalLayout_3->setSpacing(5);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(5, 5, 5, 5);
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_3->addWidget(label);

        widgetThresholdCF = new ctkRangeWidget(widget);
        widgetThresholdCF->setObjectName(QStringLiteral("widgetThresholdCF"));

        verticalLayout_3->addWidget(widgetThresholdCF);

        btnCreateCF = new QPushButton(widget);
        btnCreateCF->setObjectName(QStringLiteral("btnCreateCF"));

        verticalLayout_3->addWidget(btnCreateCF);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);


        verticalLayout_2->addWidget(widget);

        tabWidget->addTab(tab, QString());

        verticalLayout->addWidget(tabWidget);


        retranslateUi(sv4guiSeg3DEdit);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(sv4guiSeg3DEdit);
    } // setupUi

    void retranslateUi(QWidget *sv4guiSeg3DEdit)
    {
        sv4guiSeg3DEdit->setWindowTitle(QApplication::translate("sv4guiSeg3DEdit", "Form", nullptr));
        label_16->setText(QApplication::translate("sv4guiSeg3DEdit", "3D Segmentation:", nullptr));
        labelSegName->setText(QString());
        checkBoxShowSeeds->setText(QApplication::translate("sv4guiSeg3DEdit", "Show Seeds", nullptr));
        label_2->setText(QApplication::translate("sv4guiSeg3DEdit", "Move the cursor to the 3D view window.\n"
"Press key \"S\" to add a normal/start seed (green sphere).\n"
"Press key \"E\" to add an end seed (blue sphere).\n"
"\n"
"Delete: move the cursor to a seed and press key \"Delete\".", nullptr));
        label->setText(QApplication::translate("sv4guiSeg3DEdit", "Threshold Values:", nullptr));
#ifndef QT_NO_TOOLTIP
        widgetThresholdCF->setToolTip(QApplication::translate("sv4guiSeg3DEdit", "Specify the lower and upper threshold values.", nullptr));
#endif // QT_NO_TOOLTIP
        btnCreateCF->setText(QApplication::translate("sv4guiSeg3DEdit", "Segment", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("sv4guiSeg3DEdit", "Colliding Fronts", nullptr));
    } // retranslateUi

};

namespace Ui {
    class sv4guiSeg3DEdit: public Ui_sv4guiSeg3DEdit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SV4GUI_SEG3DEDIT_H
