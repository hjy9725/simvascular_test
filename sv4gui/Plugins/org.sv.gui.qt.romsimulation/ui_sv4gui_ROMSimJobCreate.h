/********************************************************************************
** Form generated from reading UI file 'sv4gui_ROMSimJobCreate.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SV4GUI_ROMSIMJOBCREATE_H
#define UI_SV4GUI_ROMSIMJOBCREATE_H

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

class Ui_sv4guiROMSimJobCreate
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QFormLayout *formLayout;
    QLabel *label;
    QComboBox *comboBox;
    QLabel *label_2;
    QLineEdit *lineEditJobName;
    QDialogButtonBox *buttonBox;

    void setupUi(QWidget *sv4guiROMSimJobCreate)
    {
        if (sv4guiROMSimJobCreate->objectName().isEmpty())
            sv4guiROMSimJobCreate->setObjectName(QStringLiteral("sv4guiROMSimJobCreate"));
        sv4guiROMSimJobCreate->setWindowModality(Qt::WindowModal);
        sv4guiROMSimJobCreate->resize(391, 139);
        verticalLayout = new QVBoxLayout(sv4guiROMSimJobCreate);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        widget = new QWidget(sv4guiROMSimJobCreate);
        widget->setObjectName(QStringLiteral("widget"));
        formLayout = new QFormLayout(widget);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        comboBox = new QComboBox(widget);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        formLayout->setWidget(0, QFormLayout::FieldRole, comboBox);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        lineEditJobName = new QLineEdit(widget);
        lineEditJobName->setObjectName(QStringLiteral("lineEditJobName"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEditJobName);


        verticalLayout->addWidget(widget);

        buttonBox = new QDialogButtonBox(sv4guiROMSimJobCreate);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(sv4guiROMSimJobCreate);

        QMetaObject::connectSlotsByName(sv4guiROMSimJobCreate);
    } // setupUi

    void retranslateUi(QWidget *sv4guiROMSimJobCreate)
    {
        sv4guiROMSimJobCreate->setWindowTitle(QApplication::translate("sv4guiROMSimJobCreate", "Create ROM Simulation Job", nullptr));
        label->setText(QApplication::translate("sv4guiROMSimJobCreate", "Select Model:", nullptr));
        label_2->setText(QApplication::translate("sv4guiROMSimJobCreate", "Job Name:", nullptr));
        lineEditJobName->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class sv4guiROMSimJobCreate: public Ui_sv4guiROMSimJobCreate {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SV4GUI_ROMSIMJOBCREATE_H
