/********************************************************************************
** Form generated from reading UI file 'sv4gui_PathEdit.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SV4GUI_PATHEDIT_H
#define UI_SV4GUI_PATHEDIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <sv4gui_ResliceSlider.h>

QT_BEGIN_NAMESPACE

class Ui_sv4guiPathEdit
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget_3;
    QGridLayout *gridLayout;
    QLabel *label_6;
    QLabel *labelPathPointNumber;
    QLabel *label_4;
    QLabel *labelPathName;
    QPushButton *btnChange;
    QPushButton *btnNewPath;
    QFrame *line;
    QWidget *widget_4;
    QGridLayout *gridLayout_2;
    sv4guiResliceSlider *resliceSlider;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QFrame *line_2;
    QWidget *widget_6;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QListWidget *listWidget;
    QWidget *widget_5;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QComboBox *comboBoxAddingMode;
    QLabel *label_3;
    QPushButton *buttonAdd;
    QPushButton *buttonAddManually;
    QLabel *label_5;
    QPushButton *buttonDelete;
    QLabel *label_7;
    QPushButton *btnSmooth;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *sv4guiPathEdit)
    {
        if (sv4guiPathEdit->objectName().isEmpty())
            sv4guiPathEdit->setObjectName(QStringLiteral("sv4guiPathEdit"));
        sv4guiPathEdit->resize(394, 695);
        sv4guiPathEdit->setMinimumSize(QSize(0, 0));
        verticalLayout = new QVBoxLayout(sv4guiPathEdit);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(5, 5, 5, 0);
        widget_3 = new QWidget(sv4guiPathEdit);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        gridLayout = new QGridLayout(widget_3);
        gridLayout->setSpacing(5);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 5);
        label_6 = new QLabel(widget_3);
        label_6->setObjectName(QStringLiteral("label_6"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_6, 0, 0, 1, 1);

        labelPathPointNumber = new QLabel(widget_3);
        labelPathPointNumber->setObjectName(QStringLiteral("labelPathPointNumber"));

        gridLayout->addWidget(labelPathPointNumber, 1, 1, 1, 1);

        label_4 = new QLabel(widget_3);
        label_4->setObjectName(QStringLiteral("label_4"));
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_4, 1, 0, 1, 1);

        labelPathName = new QLabel(widget_3);
        labelPathName->setObjectName(QStringLiteral("labelPathName"));

        gridLayout->addWidget(labelPathName, 0, 1, 1, 1);

        btnChange = new QPushButton(widget_3);
        btnChange->setObjectName(QStringLiteral("btnChange"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(btnChange->sizePolicy().hasHeightForWidth());
        btnChange->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(btnChange, 1, 2, 1, 1);

        btnNewPath = new QPushButton(widget_3);
        btnNewPath->setObjectName(QStringLiteral("btnNewPath"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(btnNewPath->sizePolicy().hasHeightForWidth());
        btnNewPath->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(btnNewPath, 0, 2, 1, 1);


        verticalLayout->addWidget(widget_3);

        line = new QFrame(sv4guiPathEdit);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShadow(QFrame::Plain);
        line->setLineWidth(2);
        line->setMidLineWidth(1);
        line->setFrameShape(QFrame::HLine);

        verticalLayout->addWidget(line);

        widget_4 = new QWidget(sv4guiPathEdit);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        gridLayout_2 = new QGridLayout(widget_4);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 2, 0, 3);
        resliceSlider = new sv4guiResliceSlider(widget_4);
        resliceSlider->setObjectName(QStringLiteral("resliceSlider"));

        gridLayout_2->addWidget(resliceSlider, 0, 0, 1, 1);


        verticalLayout->addWidget(widget_4);

        widget = new QWidget(sv4guiPathEdit);
        widget->setObjectName(QStringLiteral("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);

        verticalLayout->addWidget(widget);

        line_2 = new QFrame(sv4guiPathEdit);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_2);

        widget_6 = new QWidget(sv4guiPathEdit);
        widget_6->setObjectName(QStringLiteral("widget_6"));
        horizontalLayout_3 = new QHBoxLayout(widget_6);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 3, 0, 2);
        label_2 = new QLabel(widget_6);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_3->addWidget(label_2);


        verticalLayout->addWidget(widget_6);

        widget_2 = new QWidget(sv4guiPathEdit);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setSpacing(5);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        listWidget = new QListWidget(widget_2);
        listWidget->setObjectName(QStringLiteral("listWidget"));

        horizontalLayout_2->addWidget(listWidget);

        widget_5 = new QWidget(widget_2);
        widget_5->setObjectName(QStringLiteral("widget_5"));
        verticalLayout_2 = new QVBoxLayout(widget_5);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget_5);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_2->addWidget(label);

        comboBoxAddingMode = new QComboBox(widget_5);
        comboBoxAddingMode->addItem(QString());
        comboBoxAddingMode->addItem(QString());
        comboBoxAddingMode->addItem(QString());
        comboBoxAddingMode->addItem(QString());
        comboBoxAddingMode->addItem(QString());
        comboBoxAddingMode->setObjectName(QStringLiteral("comboBoxAddingMode"));

        verticalLayout_2->addWidget(comboBoxAddingMode);

        label_3 = new QLabel(widget_5);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_2->addWidget(label_3);

        buttonAdd = new QPushButton(widget_5);
        buttonAdd->setObjectName(QStringLiteral("buttonAdd"));

        verticalLayout_2->addWidget(buttonAdd);

        buttonAddManually = new QPushButton(widget_5);
        buttonAddManually->setObjectName(QStringLiteral("buttonAddManually"));

        verticalLayout_2->addWidget(buttonAddManually);

        label_5 = new QLabel(widget_5);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout_2->addWidget(label_5);

        buttonDelete = new QPushButton(widget_5);
        buttonDelete->setObjectName(QStringLiteral("buttonDelete"));

        verticalLayout_2->addWidget(buttonDelete);

        label_7 = new QLabel(widget_5);
        label_7->setObjectName(QStringLiteral("label_7"));

        verticalLayout_2->addWidget(label_7);

        btnSmooth = new QPushButton(widget_5);
        btnSmooth->setObjectName(QStringLiteral("btnSmooth"));

        verticalLayout_2->addWidget(btnSmooth);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        horizontalLayout_2->addWidget(widget_5);


        verticalLayout->addWidget(widget_2);


        retranslateUi(sv4guiPathEdit);

        QMetaObject::connectSlotsByName(sv4guiPathEdit);
    } // setupUi

    void retranslateUi(QWidget *sv4guiPathEdit)
    {
        sv4guiPathEdit->setWindowTitle(QApplication::translate("sv4guiPathEdit", "Edit Path", nullptr));
        label_6->setText(QApplication::translate("sv4guiPathEdit", "Current Path:", nullptr));
        labelPathPointNumber->setText(QString());
        label_4->setText(QApplication::translate("sv4guiPathEdit", "Path Point Number:", nullptr));
        labelPathName->setText(QString());
        btnChange->setText(QApplication::translate("sv4guiPathEdit", "Change Type", nullptr));
        btnNewPath->setText(QApplication::translate("sv4guiPathEdit", "New Path", nullptr));
        label_2->setText(QApplication::translate("sv4guiPathEdit", "Control Point List:", nullptr));
#ifndef QT_NO_TOOLTIP
        listWidget->setToolTip(QApplication::translate("sv4guiPathEdit", "To interactively modify the path in Display window:\n"
"Ctrl + left click to add a control point\n"
"Left click and hold to drag a control point\n"
"Right click to remove a control point ", nullptr));
#endif // QT_NO_TOOLTIP
        label->setText(QApplication::translate("sv4guiPathEdit", "Adding Mode:", nullptr));
        comboBoxAddingMode->setItemText(0, QString());
        comboBoxAddingMode->setItemText(1, QString());
        comboBoxAddingMode->setItemText(2, QString());
        comboBoxAddingMode->setItemText(3, QString());
        comboBoxAddingMode->setItemText(4, QString());

#ifndef QT_NO_TOOLTIP
        comboBoxAddingMode->setToolTip(QApplication::translate("sv4guiPathEdit", "Choose a mode for how to add a new control point", nullptr));
#endif // QT_NO_TOOLTIP
        label_3->setText(QString());
#ifndef QT_NO_TOOLTIP
        buttonAdd->setToolTip(QApplication::translate("sv4guiPathEdit", "Add the crosshair center as a new control point\n"
"(Shortcut: Ctrl+A)", nullptr));
#endif // QT_NO_TOOLTIP
        buttonAdd->setText(QApplication::translate("sv4guiPathEdit", "Add", nullptr));
#ifndef QT_NO_TOOLTIP
        buttonAddManually->setToolTip(QApplication::translate("sv4guiPathEdit", "Add a control point by providing coordinates", nullptr));
#endif // QT_NO_TOOLTIP
        buttonAddManually->setText(QApplication::translate("sv4guiPathEdit", "Add Manually", nullptr));
        label_5->setText(QString());
#ifndef QT_NO_TOOLTIP
        buttonDelete->setToolTip(QApplication::translate("sv4guiPathEdit", "Delete the selected point\n"
"(Shortcut: Ctrl+D)", nullptr));
#endif // QT_NO_TOOLTIP
        buttonDelete->setText(QApplication::translate("sv4guiPathEdit", "Delete", nullptr));
        label_7->setText(QString());
#ifndef QT_NO_TOOLTIP
        btnSmooth->setToolTip(QApplication::translate("sv4guiPathEdit", "Smooth the path by Fourier transform", nullptr));
#endif // QT_NO_TOOLTIP
        btnSmooth->setText(QApplication::translate("sv4guiPathEdit", "Smooth", nullptr));
    } // retranslateUi

};

namespace Ui {
    class sv4guiPathEdit: public Ui_sv4guiPathEdit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SV4GUI_PATHEDIT_H
