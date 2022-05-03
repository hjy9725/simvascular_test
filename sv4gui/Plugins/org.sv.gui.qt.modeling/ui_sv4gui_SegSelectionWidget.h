/********************************************************************************
** Form generated from reading UI file 'sv4gui_SegSelectionWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SV4GUI_SEGSELECTIONWIDGET_H
#define UI_SV4GUI_SEGSELECTIONWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_sv4guiSegSelectionWidget
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QTableView *tableView;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *labelNumSampling;
    QLineEdit *lineEditNumSampling;
    QWidget *widget_4;
    QVBoxLayout *verticalLayout_3;
    QCheckBox *checkboxUseUniform;
    QPushButton *btnUniformParameters;
    QWidget *widget_2;
    QGridLayout *gridLayout;
    QDialogButtonBox *buttonBox;

    void setupUi(QWidget *sv4guiSegSelectionWidget)
    {
        if (sv4guiSegSelectionWidget->objectName().isEmpty())
            sv4guiSegSelectionWidget->setObjectName(QStringLiteral("sv4guiSegSelectionWidget"));
        sv4guiSegSelectionWidget->resize(483, 711);
        sv4guiSegSelectionWidget->setContextMenuPolicy(Qt::CustomContextMenu);
        verticalLayout = new QVBoxLayout(sv4guiSegSelectionWidget);
        verticalLayout->setSpacing(5);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(5, 5, 5, 5);
        widget_3 = new QWidget(sv4guiSegSelectionWidget);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        verticalLayout_2 = new QVBoxLayout(widget_3);
        verticalLayout_2->setSpacing(5);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(5, 5, 5, 5);
        label = new QLabel(widget_3);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_2->addWidget(label);

        tableView = new QTableView(widget_3);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setContextMenuPolicy(Qt::CustomContextMenu);
        tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableView->setSortingEnabled(true);

        verticalLayout_2->addWidget(tableView);


        verticalLayout->addWidget(widget_3);

        widget = new QWidget(sv4guiSegSelectionWidget);
        widget->setObjectName(QStringLiteral("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(5);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(5, 5, 5, 5);
        labelNumSampling = new QLabel(widget);
        labelNumSampling->setObjectName(QStringLiteral("labelNumSampling"));

        horizontalLayout->addWidget(labelNumSampling);

        lineEditNumSampling = new QLineEdit(widget);
        lineEditNumSampling->setObjectName(QStringLiteral("lineEditNumSampling"));

        horizontalLayout->addWidget(lineEditNumSampling);


        verticalLayout->addWidget(widget);

        widget_4 = new QWidget(sv4guiSegSelectionWidget);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        verticalLayout_3 = new QVBoxLayout(widget_4);
        verticalLayout_3->setSpacing(5);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(5, 5, 5, 5);
        checkboxUseUniform = new QCheckBox(widget_4);
        checkboxUseUniform->setObjectName(QStringLiteral("checkboxUseUniform"));
        checkboxUseUniform->setChecked(false);

        verticalLayout_3->addWidget(checkboxUseUniform);

        btnUniformParameters = new QPushButton(widget_4);
        btnUniformParameters->setObjectName(QStringLiteral("btnUniformParameters"));

        verticalLayout_3->addWidget(btnUniformParameters);


        verticalLayout->addWidget(widget_4);

        widget_2 = new QWidget(sv4guiSegSelectionWidget);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        gridLayout = new QGridLayout(widget_2);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setHorizontalSpacing(5);
        gridLayout->setContentsMargins(5, 5, 5, 5);
        buttonBox = new QDialogButtonBox(widget_2);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 0, 0, 1, 1);


        verticalLayout->addWidget(widget_2);

        QWidget::setTabOrder(tableView, lineEditNumSampling);

        retranslateUi(sv4guiSegSelectionWidget);

        QMetaObject::connectSlotsByName(sv4guiSegSelectionWidget);
    } // setupUi

    void retranslateUi(QWidget *sv4guiSegSelectionWidget)
    {
        sv4guiSegSelectionWidget->setWindowTitle(QApplication::translate("sv4guiSegSelectionWidget", "Create Solid Model", nullptr));
        label->setText(QApplication::translate("sv4guiSegSelectionWidget", "Choose Segmentations for Model Creation:", nullptr));
        labelNumSampling->setText(QApplication::translate("sv4guiSegSelectionWidget", "Number of Sampling Points:", nullptr));
        lineEditNumSampling->setText(QString());
        lineEditNumSampling->setPlaceholderText(QString());
        checkboxUseUniform->setText(QApplication::translate("sv4guiSegSelectionWidget", "Use Uniform Lofting Parameters (Optional)", nullptr));
        btnUniformParameters->setText(QApplication::translate("sv4guiSegSelectionWidget", "Set Uniform Lofting Parameters", nullptr));
    } // retranslateUi

};

namespace Ui {
    class sv4guiSegSelectionWidget: public Ui_sv4guiSegSelectionWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SV4GUI_SEGSELECTIONWIDGET_H
