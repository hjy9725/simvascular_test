/********************************************************************************
** Form generated from reading UI file 'sv4gui_CapSelectionWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SV4GUI_CAPSELECTIONWIDGET_H
#define UI_SV4GUI_CAPSELECTIONWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_sv4guiCapSelectionWidget
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QTableView *tableView;
    QWidget *widget_2;
    QGridLayout *gridLayout;
    QDialogButtonBox *buttonBox;

    void setupUi(QWidget *sv4guiCapSelectionWidget)
    {
        if (sv4guiCapSelectionWidget->objectName().isEmpty())
            sv4guiCapSelectionWidget->setObjectName(QStringLiteral("sv4guiCapSelectionWidget"));
        sv4guiCapSelectionWidget->resize(483, 711);
        sv4guiCapSelectionWidget->setContextMenuPolicy(Qt::CustomContextMenu);
        verticalLayout = new QVBoxLayout(sv4guiCapSelectionWidget);
        verticalLayout->setSpacing(5);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(5, 5, 5, 5);
        widget_3 = new QWidget(sv4guiCapSelectionWidget);
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
        tableView->setSelectionMode(QAbstractItemView::SingleSelection);
        tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableView->setSortingEnabled(true);

        verticalLayout_2->addWidget(tableView);


        verticalLayout->addWidget(widget_3);

        widget_2 = new QWidget(sv4guiCapSelectionWidget);
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


        retranslateUi(sv4guiCapSelectionWidget);

        QMetaObject::connectSlotsByName(sv4guiCapSelectionWidget);
    } // setupUi

    void retranslateUi(QWidget *sv4guiCapSelectionWidget)
    {
        sv4guiCapSelectionWidget->setWindowTitle(QApplication::translate("sv4guiCapSelectionWidget", "Create Solid Model", nullptr));
        label->setText(QApplication::translate("sv4guiCapSelectionWidget", "Choose Cap to use as Centerlines Source Seed:", nullptr));
#ifndef QT_NO_TOOLTIP
        tableView->setToolTip(QApplication::translate("sv4guiCapSelectionWidget", "<html><head/><body><p>Select the cap to use as source for the centerline extraction. All other caps will be used as targets. Typically, the source corresponds to the inlet and the targets to the outlets.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class sv4guiCapSelectionWidget: public Ui_sv4guiCapSelectionWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SV4GUI_CAPSELECTIONWIDGET_H
