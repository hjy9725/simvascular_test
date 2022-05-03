/********************************************************************************
** Form generated from reading UI file 'sv4gui_PathSmooth.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SV4GUI_PATHSMOOTH_H
#define UI_SV4GUI_PATHSMOOTH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_sv4guiPathSmooth
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *lineEditSubsample;
    QLabel *label_3;
    QLineEdit *lineEditNumber;
    QComboBox *comboBoxPointType;
    QLabel *label_2;
    QDialogButtonBox *buttonBox;

    void setupUi(QWidget *sv4guiPathSmooth)
    {
        if (sv4guiPathSmooth->objectName().isEmpty())
            sv4guiPathSmooth->setObjectName(QStringLiteral("sv4guiPathSmooth"));
        sv4guiPathSmooth->setWindowModality(Qt::WindowModal);
        sv4guiPathSmooth->resize(381, 165);
        verticalLayout = new QVBoxLayout(sv4guiPathSmooth);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        widget = new QWidget(sv4guiPathSmooth);
        widget->setObjectName(QStringLiteral("widget"));
        formLayout = new QFormLayout(widget);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        lineEditSubsample = new QLineEdit(widget);
        lineEditSubsample->setObjectName(QStringLiteral("lineEditSubsample"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEditSubsample);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        lineEditNumber = new QLineEdit(widget);
        lineEditNumber->setObjectName(QStringLiteral("lineEditNumber"));

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEditNumber);

        comboBoxPointType = new QComboBox(widget);
        comboBoxPointType->addItem(QString());
        comboBoxPointType->addItem(QString());
        comboBoxPointType->setObjectName(QStringLiteral("comboBoxPointType"));

        formLayout->setWidget(1, QFormLayout::FieldRole, comboBoxPointType);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);


        verticalLayout->addWidget(widget);

        buttonBox = new QDialogButtonBox(sv4guiPathSmooth);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(sv4guiPathSmooth);

        QMetaObject::connectSlotsByName(sv4guiPathSmooth);
    } // setupUi

    void retranslateUi(QWidget *sv4guiPathSmooth)
    {
        sv4guiPathSmooth->setWindowTitle(QApplication::translate("sv4guiPathSmooth", "Smooth Current Path", nullptr));
        label->setText(QApplication::translate("sv4guiPathSmooth", "Subsample:", nullptr));
        lineEditSubsample->setText(QString());
        label_3->setText(QApplication::translate("sv4guiPathSmooth", "Fourier Mode Number:", nullptr));
        lineEditNumber->setText(QApplication::translate("sv4guiPathSmooth", "10", nullptr));
        comboBoxPointType->setItemText(0, QApplication::translate("sv4guiPathSmooth", "Control Points", nullptr));
        comboBoxPointType->setItemText(1, QApplication::translate("sv4guiPathSmooth", "Path Points", nullptr));

        label_2->setText(QApplication::translate("sv4guiPathSmooth", "Based on:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class sv4guiPathSmooth: public Ui_sv4guiPathSmooth {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SV4GUI_PATHSMOOTH_H
