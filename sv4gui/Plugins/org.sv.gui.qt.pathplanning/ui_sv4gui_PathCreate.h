/********************************************************************************
** Form generated from reading UI file 'sv4gui_PathCreate.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SV4GUI_PATHCREATE_H
#define UI_SV4GUI_PATHCREATE_H

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

class Ui_sv4guiPathCreate
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *lineEditPathName;
    QLabel *label_2;
    QComboBox *comboBoxSubdivisionType;
    QLabel *labelNumberSpacing;
    QLineEdit *lineEditNumber;
    QDialogButtonBox *buttonBox;

    void setupUi(QWidget *sv4guiPathCreate)
    {
        if (sv4guiPathCreate->objectName().isEmpty())
            sv4guiPathCreate->setObjectName(QStringLiteral("sv4guiPathCreate"));
        sv4guiPathCreate->setWindowModality(Qt::WindowModal);
        sv4guiPathCreate->resize(369, 175);
        verticalLayout = new QVBoxLayout(sv4guiPathCreate);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        widget = new QWidget(sv4guiPathCreate);
        widget->setObjectName(QStringLiteral("widget"));
        formLayout = new QFormLayout(widget);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        lineEditPathName = new QLineEdit(widget);
        lineEditPathName->setObjectName(QStringLiteral("lineEditPathName"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEditPathName);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        comboBoxSubdivisionType = new QComboBox(widget);
        comboBoxSubdivisionType->addItem(QString());
        comboBoxSubdivisionType->addItem(QString());
        comboBoxSubdivisionType->addItem(QString());
        comboBoxSubdivisionType->setObjectName(QStringLiteral("comboBoxSubdivisionType"));

        formLayout->setWidget(1, QFormLayout::FieldRole, comboBoxSubdivisionType);

        labelNumberSpacing = new QLabel(widget);
        labelNumberSpacing->setObjectName(QStringLiteral("labelNumberSpacing"));

        formLayout->setWidget(2, QFormLayout::LabelRole, labelNumberSpacing);

        lineEditNumber = new QLineEdit(widget);
        lineEditNumber->setObjectName(QStringLiteral("lineEditNumber"));
        lineEditNumber->setEnabled(true);

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEditNumber);


        verticalLayout->addWidget(widget);

        buttonBox = new QDialogButtonBox(sv4guiPathCreate);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(sv4guiPathCreate);

        comboBoxSubdivisionType->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(sv4guiPathCreate);
    } // setupUi

    void retranslateUi(QWidget *sv4guiPathCreate)
    {
        sv4guiPathCreate->setWindowTitle(QApplication::translate("sv4guiPathCreate", "Create New Path", nullptr));
        label->setText(QApplication::translate("sv4guiPathCreate", "Path Name:", nullptr));
        label_2->setText(QApplication::translate("sv4guiPathCreate", "Subdivision Type:", nullptr));
        comboBoxSubdivisionType->setItemText(0, QApplication::translate("sv4guiPathCreate", "Total Number", nullptr));
        comboBoxSubdivisionType->setItemText(1, QApplication::translate("sv4guiPathCreate", "Subdivison Number", nullptr));
        comboBoxSubdivisionType->setItemText(2, QApplication::translate("sv4guiPathCreate", "Spacing Based", nullptr));

        labelNumberSpacing->setText(QApplication::translate("sv4guiPathCreate", "Number: ", nullptr));
        lineEditNumber->setText(QApplication::translate("sv4guiPathCreate", "100", nullptr));
    } // retranslateUi

};

namespace Ui {
    class sv4guiPathCreate: public Ui_sv4guiPathCreate {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SV4GUI_PATHCREATE_H
