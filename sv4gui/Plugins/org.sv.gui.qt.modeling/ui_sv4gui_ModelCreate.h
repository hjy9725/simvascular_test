/********************************************************************************
** Form generated from reading UI file 'sv4gui_ModelCreate.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SV4GUI_MODELCREATE_H
#define UI_SV4GUI_MODELCREATE_H

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

class Ui_sv4guiModelCreate
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *lineEditModelName;
    QLabel *label_2;
    QComboBox *comboBoxType;
    QDialogButtonBox *buttonBox;

    void setupUi(QWidget *sv4guiModelCreate)
    {
        if (sv4guiModelCreate->objectName().isEmpty())
            sv4guiModelCreate->setObjectName(QStringLiteral("sv4guiModelCreate"));
        sv4guiModelCreate->setWindowModality(Qt::WindowModal);
        sv4guiModelCreate->resize(369, 134);
        verticalLayout = new QVBoxLayout(sv4guiModelCreate);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        widget = new QWidget(sv4guiModelCreate);
        widget->setObjectName(QStringLiteral("widget"));
        formLayout = new QFormLayout(widget);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label);

        lineEditModelName = new QLineEdit(widget);
        lineEditModelName->setObjectName(QStringLiteral("lineEditModelName"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEditModelName);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        comboBoxType = new QComboBox(widget);
        comboBoxType->setObjectName(QStringLiteral("comboBoxType"));

        formLayout->setWidget(0, QFormLayout::FieldRole, comboBoxType);


        verticalLayout->addWidget(widget);

        buttonBox = new QDialogButtonBox(sv4guiModelCreate);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(sv4guiModelCreate);

        QMetaObject::connectSlotsByName(sv4guiModelCreate);
    } // setupUi

    void retranslateUi(QWidget *sv4guiModelCreate)
    {
        sv4guiModelCreate->setWindowTitle(QApplication::translate("sv4guiModelCreate", "Create New Model", nullptr));
        label->setText(QApplication::translate("sv4guiModelCreate", "Model Name:", nullptr));
        label_2->setText(QApplication::translate("sv4guiModelCreate", "Model Type:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class sv4guiModelCreate: public Ui_sv4guiModelCreate {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SV4GUI_MODELCREATE_H
