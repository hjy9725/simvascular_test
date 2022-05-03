/********************************************************************************
** Form generated from reading UI file 'sv4gui_QmitkImageMaskingWidgetControls.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SV4GUI_QMITKIMAGEMASKINGWIDGETCONTROLS_H
#define UI_SV4GUI_QMITKIMAGEMASKINGWIDGETCONTROLS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "sv4gui_QmitkDataSelectionWidget.h"

QT_BEGIN_NAMESPACE

class Ui_QmitkImageMaskingWidgetControls
{
public:
    QVBoxLayout *verticalLayout;
    QmitkDataSelectionWidget *dataSelectionWidget;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *rbMaskImage;
    QRadioButton *rbMaskSurface;
    QPushButton *btnMaskImage;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *QmitkImageMaskingWidgetControls)
    {
        if (QmitkImageMaskingWidgetControls->objectName().isEmpty())
            QmitkImageMaskingWidgetControls->setObjectName(QStringLiteral("QmitkImageMaskingWidgetControls"));
        QmitkImageMaskingWidgetControls->resize(139, 143);
        verticalLayout = new QVBoxLayout(QmitkImageMaskingWidgetControls);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        dataSelectionWidget = new QmitkDataSelectionWidget(QmitkImageMaskingWidgetControls);
        dataSelectionWidget->setObjectName(QStringLiteral("dataSelectionWidget"));

        verticalLayout->addWidget(dataSelectionWidget);

        groupBox = new QGroupBox(QmitkImageMaskingWidgetControls);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        rbMaskImage = new QRadioButton(groupBox);
        rbMaskImage->setObjectName(QStringLiteral("rbMaskImage"));
        rbMaskImage->setChecked(true);

        verticalLayout_2->addWidget(rbMaskImage);

        rbMaskSurface = new QRadioButton(groupBox);
        rbMaskSurface->setObjectName(QStringLiteral("rbMaskSurface"));

        verticalLayout_2->addWidget(rbMaskSurface);


        verticalLayout->addWidget(groupBox);

        btnMaskImage = new QPushButton(QmitkImageMaskingWidgetControls);
        btnMaskImage->setObjectName(QStringLiteral("btnMaskImage"));

        verticalLayout->addWidget(btnMaskImage);

        verticalSpacer = new QSpacerItem(20, 273, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(QmitkImageMaskingWidgetControls);

        QMetaObject::connectSlotsByName(QmitkImageMaskingWidgetControls);
    } // setupUi

    void retranslateUi(QWidget *QmitkImageMaskingWidgetControls)
    {
        groupBox->setTitle(QApplication::translate("QmitkImageMaskingWidgetControls", "Masking Mode", nullptr));
        rbMaskImage->setText(QApplication::translate("QmitkImageMaskingWidgetControls", "Image Masking", nullptr));
        rbMaskSurface->setText(QApplication::translate("QmitkImageMaskingWidgetControls", "Surface Masking", nullptr));
        btnMaskImage->setText(QApplication::translate("QmitkImageMaskingWidgetControls", "Mask", nullptr));
        Q_UNUSED(QmitkImageMaskingWidgetControls);
    } // retranslateUi

};

namespace Ui {
    class QmitkImageMaskingWidgetControls: public Ui_QmitkImageMaskingWidgetControls {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SV4GUI_QMITKIMAGEMASKINGWIDGETCONTROLS_H
