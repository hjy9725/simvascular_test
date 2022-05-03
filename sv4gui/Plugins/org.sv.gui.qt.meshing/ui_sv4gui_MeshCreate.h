/********************************************************************************
** Form generated from reading UI file 'sv4gui_MeshCreate.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SV4GUI_MESHCREATE_H
#define UI_SV4GUI_MESHCREATE_H

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

class Ui_sv4guiMeshCreate
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QFormLayout *formLayout;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEditMeshName;
    QComboBox *comboBox;
    QLabel *label_3;
    QLabel *label_4;
    QComboBox *comboBoxMeshType;
    QDialogButtonBox *buttonBox;

    void setupUi(QWidget *sv4guiMeshCreate)
    {
        if (sv4guiMeshCreate->objectName().isEmpty())
            sv4guiMeshCreate->setObjectName(QStringLiteral("sv4guiMeshCreate"));
        sv4guiMeshCreate->setWindowModality(Qt::WindowModal);
        sv4guiMeshCreate->resize(391, 187);
        verticalLayout = new QVBoxLayout(sv4guiMeshCreate);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        widget = new QWidget(sv4guiMeshCreate);
        widget->setObjectName(QStringLiteral("widget"));
        formLayout = new QFormLayout(widget);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_2);

        lineEditMeshName = new QLineEdit(widget);
        lineEditMeshName->setObjectName(QStringLiteral("lineEditMeshName"));

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEditMeshName);

        comboBox = new QComboBox(widget);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        formLayout->setWidget(0, QFormLayout::FieldRole, comboBox);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(3, QFormLayout::FieldRole, label_3);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_4);

        comboBoxMeshType = new QComboBox(widget);
        comboBoxMeshType->setObjectName(QStringLiteral("comboBoxMeshType"));

        formLayout->setWidget(1, QFormLayout::FieldRole, comboBoxMeshType);


        verticalLayout->addWidget(widget);

        buttonBox = new QDialogButtonBox(sv4guiMeshCreate);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(sv4guiMeshCreate);

        QMetaObject::connectSlotsByName(sv4guiMeshCreate);
    } // setupUi

    void retranslateUi(QWidget *sv4guiMeshCreate)
    {
        sv4guiMeshCreate->setWindowTitle(QApplication::translate("sv4guiMeshCreate", "Create Mesh", nullptr));
        label->setText(QApplication::translate("sv4guiMeshCreate", "Select Model:", nullptr));
        label_2->setText(QApplication::translate("sv4guiMeshCreate", "Mesh Name:", nullptr));
        lineEditMeshName->setText(QString());
        label_3->setText(QApplication::translate("sv4guiMeshCreate", "(Using model name by default)", nullptr));
        label_4->setText(QApplication::translate("sv4guiMeshCreate", "Mesh Type:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class sv4guiMeshCreate: public Ui_sv4guiMeshCreate {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SV4GUI_MESHCREATE_H
