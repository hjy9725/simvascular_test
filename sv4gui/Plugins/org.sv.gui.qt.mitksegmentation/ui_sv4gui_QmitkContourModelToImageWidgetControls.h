/********************************************************************************
** Form generated from reading UI file 'sv4gui_QmitkContourModelToImageWidgetControls.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SV4GUI_QMITKCONTOURMODELTOIMAGEWIDGETCONTROLS_H
#define UI_SV4GUI_QMITKCONTOURMODELTOIMAGEWIDGETCONTROLS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "sv4gui_QmitkDataSelectionWidget.h"

QT_BEGIN_NAMESPACE

class Ui_QmitkContourModelToImageWidgetControls
{
public:
    QVBoxLayout *verticalLayout;
    QmitkDataSelectionWidget *dataSelectionWidget;
    QPushButton *btnProcess;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *QmitkContourModelToImageWidgetControls)
    {
        if (QmitkContourModelToImageWidgetControls->objectName().isEmpty())
            QmitkContourModelToImageWidgetControls->setObjectName(QStringLiteral("QmitkContourModelToImageWidgetControls"));
        QmitkContourModelToImageWidgetControls->resize(180, 154);
        verticalLayout = new QVBoxLayout(QmitkContourModelToImageWidgetControls);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        dataSelectionWidget = new QmitkDataSelectionWidget(QmitkContourModelToImageWidgetControls);
        dataSelectionWidget->setObjectName(QStringLiteral("dataSelectionWidget"));

        verticalLayout->addWidget(dataSelectionWidget);

        btnProcess = new QPushButton(QmitkContourModelToImageWidgetControls);
        btnProcess->setObjectName(QStringLiteral("btnProcess"));

        verticalLayout->addWidget(btnProcess);

        verticalSpacer = new QSpacerItem(20, 273, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(QmitkContourModelToImageWidgetControls);

        QMetaObject::connectSlotsByName(QmitkContourModelToImageWidgetControls);
    } // setupUi

    void retranslateUi(QWidget *QmitkContourModelToImageWidgetControls)
    {
        btnProcess->setText(QApplication::translate("QmitkContourModelToImageWidgetControls", "Process", nullptr));
        Q_UNUSED(QmitkContourModelToImageWidgetControls);
    } // retranslateUi

};

namespace Ui {
    class QmitkContourModelToImageWidgetControls: public Ui_QmitkContourModelToImageWidgetControls {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SV4GUI_QMITKCONTOURMODELTOIMAGEWIDGETCONTROLS_H
