/********************************************************************************
** Form generated from reading UI file 'sv4gui_ProjectCreate.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SV4GUI_PROJECTCREATE_H
#define UI_SV4GUI_PROJECTCREATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_sv4guiProjectCreate
{
public:
    QVBoxLayout *verticalLayout_2;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEditProjectName;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEditDir;
    QPushButton *btnBrowse;
    QDialogButtonBox *buttonBox;

    void setupUi(QWidget *sv4guiProjectCreate)
    {
        if (sv4guiProjectCreate->objectName().isEmpty())
            sv4guiProjectCreate->setObjectName(QStringLiteral("sv4guiProjectCreate"));
        sv4guiProjectCreate->setWindowModality(Qt::WindowModal);
        sv4guiProjectCreate->resize(561, 135);
        verticalLayout_2 = new QVBoxLayout(sv4guiProjectCreate);
        verticalLayout_2->setSpacing(16);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        widget = new QWidget(sv4guiProjectCreate);
        widget->setObjectName(QStringLiteral("widget"));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        widget_2 = new QWidget(widget);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        horizontalLayout = new QHBoxLayout(widget_2);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget_2);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        lineEditProjectName = new QLineEdit(widget_2);
        lineEditProjectName->setObjectName(QStringLiteral("lineEditProjectName"));

        horizontalLayout->addWidget(lineEditProjectName);


        verticalLayout->addWidget(widget_2);

        widget_3 = new QWidget(widget);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        horizontalLayout_2 = new QHBoxLayout(widget_3);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget_3);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        lineEditDir = new QLineEdit(widget_3);
        lineEditDir->setObjectName(QStringLiteral("lineEditDir"));

        horizontalLayout_2->addWidget(lineEditDir);

        btnBrowse = new QPushButton(widget_3);
        btnBrowse->setObjectName(QStringLiteral("btnBrowse"));

        horizontalLayout_2->addWidget(btnBrowse);


        verticalLayout->addWidget(widget_3);


        verticalLayout_2->addWidget(widget);

        buttonBox = new QDialogButtonBox(sv4guiProjectCreate);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(buttonBox);


        retranslateUi(sv4guiProjectCreate);

        QMetaObject::connectSlotsByName(sv4guiProjectCreate);
    } // setupUi

    void retranslateUi(QWidget *sv4guiProjectCreate)
    {
        sv4guiProjectCreate->setWindowTitle(QApplication::translate("sv4guiProjectCreate", "Create New Project", nullptr));
        label->setText(QApplication::translate("sv4guiProjectCreate", "Project Name:", nullptr));
        label_2->setText(QApplication::translate("sv4guiProjectCreate", "Create in:", nullptr));
        btnBrowse->setText(QApplication::translate("sv4guiProjectCreate", "Browse", nullptr));
    } // retranslateUi

};

namespace Ui {
    class sv4guiProjectCreate: public Ui_sv4guiProjectCreate {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SV4GUI_PROJECTCREATE_H
