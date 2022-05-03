/********************************************************************************
** Form generated from reading UI file 'sv4gui_ContourGroupCreate.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SV4GUI_CONTOURGROUPCREATE_H
#define UI_SV4GUI_CONTOURGROUPCREATE_H

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

class Ui_sv4guiContourGroupCreate
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QFormLayout *formLayout;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEditGroupName;
    QComboBox *comboBox;
    QLabel *label_3;
    QDialogButtonBox *buttonBox;

    void setupUi(QWidget *sv4guiContourGroupCreate)
    {
        if (sv4guiContourGroupCreate->objectName().isEmpty())
            sv4guiContourGroupCreate->setObjectName(QStringLiteral("sv4guiContourGroupCreate"));
        sv4guiContourGroupCreate->setWindowModality(Qt::WindowModal);
        sv4guiContourGroupCreate->resize(377, 156);
        verticalLayout = new QVBoxLayout(sv4guiContourGroupCreate);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        widget = new QWidget(sv4guiContourGroupCreate);
        widget->setObjectName(QStringLiteral("widget"));
        formLayout = new QFormLayout(widget);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        lineEditGroupName = new QLineEdit(widget);
        lineEditGroupName->setObjectName(QStringLiteral("lineEditGroupName"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEditGroupName);

        comboBox = new QComboBox(widget);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        formLayout->setWidget(0, QFormLayout::FieldRole, comboBox);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(2, QFormLayout::FieldRole, label_3);


        verticalLayout->addWidget(widget);

        buttonBox = new QDialogButtonBox(sv4guiContourGroupCreate);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(sv4guiContourGroupCreate);

        QMetaObject::connectSlotsByName(sv4guiContourGroupCreate);
    } // setupUi

    void retranslateUi(QWidget *sv4guiContourGroupCreate)
    {
        sv4guiContourGroupCreate->setWindowTitle(QApplication::translate("sv4guiContourGroupCreate", "Create Contour Group", nullptr));
        label->setText(QApplication::translate("sv4guiContourGroupCreate", "Select Path:", nullptr));
        label_2->setText(QApplication::translate("sv4guiContourGroupCreate", "Group Name:", nullptr));
        lineEditGroupName->setText(QString());
        label_3->setText(QApplication::translate("sv4guiContourGroupCreate", "(Using path name by default)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class sv4guiContourGroupCreate: public Ui_sv4guiContourGroupCreate {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SV4GUI_CONTOURGROUPCREATE_H
