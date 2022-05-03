/********************************************************************************
** Form generated from reading UI file 'sv4gui_LevelSet2DWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SV4GUI_LEVELSET2DWIDGET_H
#define UI_SV4GUI_LEVELSET2DWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "ctkCollapsibleGroupBox.h"

QT_BEGIN_NAMESPACE

class Ui_sv4guiLevelSet2DWidget
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_5;
    QVBoxLayout *verticalLayout_4;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_3;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *label_4;
    QLabel *label_3;
    QLineEdit *lineRadius;
    QLineEdit *lineKthr;
    QLineEdit *lineAdv1;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineFeat1;
    ctkCollapsibleGroupBox *CollapsibleGroupBox;
    QGridLayout *gridLayout_2;
    QWidget *widget_4;
    QGridLayout *gridLayout_3;
    QLabel *label_5;
    QLineEdit *lineRise;
    QLineEdit *lineFall;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLineEdit *lineMaxIters1;
    QLineEdit *lineMaxErr1;
    QWidget *widget_6;
    QVBoxLayout *verticalLayout_6;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_5;
    QWidget *widget_8;
    QGridLayout *gridLayout_5;
    QLineEdit *lineKlow;
    QLabel *label_9;
    QLabel *label_10;
    QLineEdit *lineKupp;
    QLabel *label_11;
    QLineEdit *lineFeat2;
    QLabel *label_12;
    QLineEdit *lineAdv2;
    ctkCollapsibleGroupBox *CollapsibleGroupBox_2;
    QGridLayout *gridLayout_7;
    QWidget *widget_9;
    QGridLayout *gridLayout_8;
    QLabel *label_13;
    QLineEdit *lineMaxIters2;
    QLabel *label_14;
    QLineEdit *lineMaxErr2;
    QPushButton *doButton;

    void setupUi(QWidget *sv4guiLevelSet2DWidget)
    {
        if (sv4guiLevelSet2DWidget->objectName().isEmpty())
            sv4guiLevelSet2DWidget->setObjectName(QStringLiteral("sv4guiLevelSet2DWidget"));
        sv4guiLevelSet2DWidget->resize(324, 351);
        verticalLayout = new QVBoxLayout(sv4guiLevelSet2DWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        groupBox_5 = new QGroupBox(sv4guiLevelSet2DWidget);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        verticalLayout_4 = new QVBoxLayout(groupBox_5);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 5, 0, 0);
        widget_3 = new QWidget(groupBox_5);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        verticalLayout_2 = new QVBoxLayout(widget_3);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        groupBox_2 = new QGroupBox(widget_3);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        verticalLayout_3 = new QVBoxLayout(groupBox_2);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(5, 5, 5, 0);
        widget = new QWidget(groupBox_2);
        widget->setObjectName(QStringLiteral("widget"));
        gridLayout = new QGridLayout(widget);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 1, 2, 1, 1, Qt::AlignRight);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1, Qt::AlignRight);

        lineRadius = new QLineEdit(widget);
        lineRadius->setObjectName(QStringLiteral("lineRadius"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineRadius->sizePolicy().hasHeightForWidth());
        lineRadius->setSizePolicy(sizePolicy);

        gridLayout->addWidget(lineRadius, 0, 1, 1, 1);

        lineKthr = new QLineEdit(widget);
        lineKthr->setObjectName(QStringLiteral("lineKthr"));

        gridLayout->addWidget(lineKthr, 0, 3, 1, 1);

        lineAdv1 = new QLineEdit(widget);
        lineAdv1->setObjectName(QStringLiteral("lineAdv1"));

        gridLayout->addWidget(lineAdv1, 1, 3, 1, 1);

        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1, Qt::AlignRight);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 0, 2, 1, 1, Qt::AlignRight);

        lineFeat1 = new QLineEdit(widget);
        lineFeat1->setObjectName(QStringLiteral("lineFeat1"));

        gridLayout->addWidget(lineFeat1, 1, 1, 1, 1);


        verticalLayout_3->addWidget(widget);

        CollapsibleGroupBox = new ctkCollapsibleGroupBox(groupBox_2);
        CollapsibleGroupBox->setObjectName(QStringLiteral("CollapsibleGroupBox"));
        CollapsibleGroupBox->setFlat(false);
        CollapsibleGroupBox->setChecked(false);
        gridLayout_2 = new QGridLayout(CollapsibleGroupBox);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(5, 5, 5, 5);
        widget_4 = new QWidget(CollapsibleGroupBox);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        gridLayout_3 = new QGridLayout(widget_4);
        gridLayout_3->setSpacing(0);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(widget_4);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_3->addWidget(label_5, 1, 0, 1, 1);

        lineRise = new QLineEdit(widget_4);
        lineRise->setObjectName(QStringLiteral("lineRise"));

        gridLayout_3->addWidget(lineRise, 1, 1, 1, 1);

        lineFall = new QLineEdit(widget_4);
        lineFall->setObjectName(QStringLiteral("lineFall"));

        gridLayout_3->addWidget(lineFall, 1, 3, 1, 1);

        label_6 = new QLabel(widget_4);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_3->addWidget(label_6, 1, 2, 1, 1);

        label_7 = new QLabel(widget_4);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_3->addWidget(label_7, 2, 0, 1, 1);

        label_8 = new QLabel(widget_4);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout_3->addWidget(label_8, 2, 2, 1, 1, Qt::AlignRight);

        lineMaxIters1 = new QLineEdit(widget_4);
        lineMaxIters1->setObjectName(QStringLiteral("lineMaxIters1"));

        gridLayout_3->addWidget(lineMaxIters1, 2, 1, 1, 1);

        lineMaxErr1 = new QLineEdit(widget_4);
        lineMaxErr1->setObjectName(QStringLiteral("lineMaxErr1"));

        gridLayout_3->addWidget(lineMaxErr1, 2, 3, 1, 1);


        gridLayout_2->addWidget(widget_4, 0, 0, 1, 1);


        verticalLayout_3->addWidget(CollapsibleGroupBox);


        verticalLayout_2->addWidget(groupBox_2);


        verticalLayout_4->addWidget(widget_3);

        widget_6 = new QWidget(groupBox_5);
        widget_6->setObjectName(QStringLiteral("widget_6"));
        verticalLayout_6 = new QVBoxLayout(widget_6);
        verticalLayout_6->setSpacing(0);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(widget_6);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setCheckable(false);
        verticalLayout_5 = new QVBoxLayout(groupBox);
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(5, 5, 5, 5);
        widget_8 = new QWidget(groupBox);
        widget_8->setObjectName(QStringLiteral("widget_8"));
        gridLayout_5 = new QGridLayout(widget_8);
        gridLayout_5->setSpacing(0);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        lineKlow = new QLineEdit(widget_8);
        lineKlow->setObjectName(QStringLiteral("lineKlow"));

        gridLayout_5->addWidget(lineKlow, 0, 3, 1, 1);

        label_9 = new QLabel(widget_8);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout_5->addWidget(label_9, 0, 0, 1, 1, Qt::AlignRight);

        label_10 = new QLabel(widget_8);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout_5->addWidget(label_10, 0, 2, 1, 1, Qt::AlignRight);

        lineKupp = new QLineEdit(widget_8);
        lineKupp->setObjectName(QStringLiteral("lineKupp"));

        gridLayout_5->addWidget(lineKupp, 0, 1, 1, 1);

        label_11 = new QLabel(widget_8);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout_5->addWidget(label_11, 1, 0, 1, 1, Qt::AlignRight);

        lineFeat2 = new QLineEdit(widget_8);
        lineFeat2->setObjectName(QStringLiteral("lineFeat2"));

        gridLayout_5->addWidget(lineFeat2, 1, 1, 1, 1);

        label_12 = new QLabel(widget_8);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout_5->addWidget(label_12, 1, 2, 1, 1, Qt::AlignRight);

        lineAdv2 = new QLineEdit(widget_8);
        lineAdv2->setObjectName(QStringLiteral("lineAdv2"));

        gridLayout_5->addWidget(lineAdv2, 1, 3, 1, 1);


        verticalLayout_5->addWidget(widget_8);

        CollapsibleGroupBox_2 = new ctkCollapsibleGroupBox(groupBox);
        CollapsibleGroupBox_2->setObjectName(QStringLiteral("CollapsibleGroupBox_2"));
        CollapsibleGroupBox_2->setCheckable(true);
        CollapsibleGroupBox_2->setChecked(false);
        gridLayout_7 = new QGridLayout(CollapsibleGroupBox_2);
        gridLayout_7->setSpacing(0);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        gridLayout_7->setContentsMargins(5, 5, 5, 5);
        widget_9 = new QWidget(CollapsibleGroupBox_2);
        widget_9->setObjectName(QStringLiteral("widget_9"));
        gridLayout_8 = new QGridLayout(widget_9);
        gridLayout_8->setSpacing(0);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        gridLayout_8->setContentsMargins(0, 0, 0, 0);
        label_13 = new QLabel(widget_9);
        label_13->setObjectName(QStringLiteral("label_13"));

        gridLayout_8->addWidget(label_13, 0, 0, 1, 1);

        lineMaxIters2 = new QLineEdit(widget_9);
        lineMaxIters2->setObjectName(QStringLiteral("lineMaxIters2"));

        gridLayout_8->addWidget(lineMaxIters2, 0, 1, 1, 1);

        label_14 = new QLabel(widget_9);
        label_14->setObjectName(QStringLiteral("label_14"));

        gridLayout_8->addWidget(label_14, 0, 2, 1, 1);

        lineMaxErr2 = new QLineEdit(widget_9);
        lineMaxErr2->setObjectName(QStringLiteral("lineMaxErr2"));

        gridLayout_8->addWidget(lineMaxErr2, 0, 3, 1, 1);


        gridLayout_7->addWidget(widget_9, 0, 0, 1, 1);


        verticalLayout_5->addWidget(CollapsibleGroupBox_2);


        verticalLayout_6->addWidget(groupBox);


        verticalLayout_4->addWidget(widget_6);


        verticalLayout->addWidget(groupBox_5);

        doButton = new QPushButton(sv4guiLevelSet2DWidget);
        doButton->setObjectName(QStringLiteral("doButton"));

        verticalLayout->addWidget(doButton);


        retranslateUi(sv4guiLevelSet2DWidget);

        QMetaObject::connectSlotsByName(sv4guiLevelSet2DWidget);
    } // setupUi

    void retranslateUi(QWidget *sv4guiLevelSet2DWidget)
    {
        sv4guiLevelSet2DWidget->setWindowTitle(QApplication::translate("sv4guiLevelSet2DWidget", "Form", nullptr));
        groupBox_5->setTitle(QApplication::translate("sv4guiLevelSet2DWidget", "LevelSet", nullptr));
        groupBox_2->setTitle(QApplication::translate("sv4guiLevelSet2DWidget", "Stage 1", nullptr));
        label_4->setText(QApplication::translate("sv4guiLevelSet2DWidget", "   Blur Adv.", nullptr));
        label_3->setText(QApplication::translate("sv4guiLevelSet2DWidget", "Blur Feat.", nullptr));
        lineRadius->setText(QApplication::translate("sv4guiLevelSet2DWidget", "0.3", nullptr));
        lineKthr->setText(QApplication::translate("sv4guiLevelSet2DWidget", "0.6", nullptr));
        lineAdv1->setText(QApplication::translate("sv4guiLevelSet2DWidget", "0.0", nullptr));
        label->setText(QApplication::translate("sv4guiLevelSet2DWidget", "Seed radius", nullptr));
        label_2->setText(QApplication::translate("sv4guiLevelSet2DWidget", "Kthr", nullptr));
        lineFeat1->setText(QApplication::translate("sv4guiLevelSet2DWidget", "2.5", nullptr));
        CollapsibleGroupBox->setTitle(QApplication::translate("sv4guiLevelSet2DWidget", "Advanced  Paramters", nullptr));
        label_5->setText(QApplication::translate("sv4guiLevelSet2DWidget", "Exp. Rise", nullptr));
        lineRise->setText(QApplication::translate("sv4guiLevelSet2DWidget", "0.25", nullptr));
        lineFall->setText(QApplication::translate("sv4guiLevelSet2DWidget", "0.5", nullptr));
        label_6->setText(QApplication::translate("sv4guiLevelSet2DWidget", "   Exp. Fall", nullptr));
        label_7->setText(QApplication::translate("sv4guiLevelSet2DWidget", "Max Iters.", nullptr));
        label_8->setText(QApplication::translate("sv4guiLevelSet2DWidget", "Max Err.", nullptr));
        lineMaxIters1->setText(QApplication::translate("sv4guiLevelSet2DWidget", "2000", nullptr));
        lineMaxErr1->setText(QApplication::translate("sv4guiLevelSet2DWidget", "0.001", nullptr));
        groupBox->setTitle(QApplication::translate("sv4guiLevelSet2DWidget", "Stage 2", nullptr));
        lineKlow->setText(QApplication::translate("sv4guiLevelSet2DWidget", "0.09", nullptr));
        label_9->setText(QApplication::translate("sv4guiLevelSet2DWidget", "Kupp", nullptr));
        label_10->setText(QApplication::translate("sv4guiLevelSet2DWidget", "Klow", nullptr));
        lineKupp->setText(QApplication::translate("sv4guiLevelSet2DWidget", "0.8", nullptr));
        label_11->setText(QApplication::translate("sv4guiLevelSet2DWidget", "Blur Feat.", nullptr));
        lineFeat2->setText(QApplication::translate("sv4guiLevelSet2DWidget", "1.5", nullptr));
        label_12->setText(QApplication::translate("sv4guiLevelSet2DWidget", "Blur Adv.", nullptr));
        lineAdv2->setText(QApplication::translate("sv4guiLevelSet2DWidget", "0.0", nullptr));
        CollapsibleGroupBox_2->setTitle(QApplication::translate("sv4guiLevelSet2DWidget", "Advanced Parameters", nullptr));
        label_13->setText(QApplication::translate("sv4guiLevelSet2DWidget", "Max Iters.", nullptr));
        lineMaxIters2->setText(QApplication::translate("sv4guiLevelSet2DWidget", "1000", nullptr));
        label_14->setText(QApplication::translate("sv4guiLevelSet2DWidget", "    Max Err.", nullptr));
        lineMaxErr2->setText(QApplication::translate("sv4guiLevelSet2DWidget", "0.0005", nullptr));
        doButton->setText(QApplication::translate("sv4guiLevelSet2DWidget", "Create Contour", nullptr));
    } // retranslateUi

};

namespace Ui {
    class sv4guiLevelSet2DWidget: public Ui_sv4guiLevelSet2DWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SV4GUI_LEVELSET2DWIDGET_H
