/********************************************************************************
** Form generated from reading UI file 'sv4gui_SimulationPreferencePage.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SV4GUI_SIMULATIONPREFERENCEPAGE_H
#define UI_SV4GUI_SIMULATIONPREFERENCEPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_sv4guiSimulationPreferencePage
{
public:
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_4;
    QFrame *frame_7;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLineEdit *lineEditFlowsolverNOMPIPath;
    QToolButton *toolButtonFlowsolverNOMPI;
    QFrame *frame_5;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLineEdit *lineEditFlowsolverPath;
    QToolButton *toolButtonFlowsolver;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *lineEditPresolverPath;
    QToolButton *toolButtonPresolver;
    QFrame *frame_6;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QLineEdit *lineEditPostsolverPath;
    QToolButton *toolButtonPostsolver;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout;
    QCheckBox *checkBoxUseCustom;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_4;
    QLineEdit *lineEditCustomTemplatePath;
    QToolButton *toolButtonCustomTemplate;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *sv4guiSimulationPreferencePage)
    {
        if (sv4guiSimulationPreferencePage->objectName().isEmpty())
            sv4guiSimulationPreferencePage->setObjectName(QStringLiteral("sv4guiSimulationPreferencePage"));
        sv4guiSimulationPreferencePage->resize(436, 470);
        verticalLayout_2 = new QVBoxLayout(sv4guiSimulationPreferencePage);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        groupBox_2 = new QGroupBox(sv4guiSimulationPreferencePage);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        verticalLayout_4 = new QVBoxLayout(groupBox_2);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        frame_7 = new QFrame(groupBox_2);
        frame_7->setObjectName(QStringLiteral("frame_7"));
        horizontalLayout_5 = new QHBoxLayout(frame_7);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_5 = new QLabel(frame_7);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setMinimumSize(QSize(90, 0));
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_5->addWidget(label_5);

        lineEditFlowsolverNOMPIPath = new QLineEdit(frame_7);
        lineEditFlowsolverNOMPIPath->setObjectName(QStringLiteral("lineEditFlowsolverNOMPIPath"));

        horizontalLayout_5->addWidget(lineEditFlowsolverNOMPIPath);

        toolButtonFlowsolverNOMPI = new QToolButton(frame_7);
        toolButtonFlowsolverNOMPI->setObjectName(QStringLiteral("toolButtonFlowsolverNOMPI"));

        horizontalLayout_5->addWidget(toolButtonFlowsolverNOMPI);


        verticalLayout_4->addWidget(frame_7);

        frame_5 = new QFrame(groupBox_2);
        frame_5->setObjectName(QStringLiteral("frame_5"));
        horizontalLayout_3 = new QHBoxLayout(frame_5);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_2 = new QLabel(frame_5);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMinimumSize(QSize(90, 0));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(label_2);

        lineEditFlowsolverPath = new QLineEdit(frame_5);
        lineEditFlowsolverPath->setObjectName(QStringLiteral("lineEditFlowsolverPath"));

        horizontalLayout_3->addWidget(lineEditFlowsolverPath);

        toolButtonFlowsolver = new QToolButton(frame_5);
        toolButtonFlowsolver->setObjectName(QStringLiteral("toolButtonFlowsolver"));

        horizontalLayout_3->addWidget(toolButtonFlowsolver);


        verticalLayout_4->addWidget(frame_5);

        frame_2 = new QFrame(groupBox_2);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        horizontalLayout_2 = new QHBoxLayout(frame_2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label = new QLabel(frame_2);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(90, 0));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label);

        lineEditPresolverPath = new QLineEdit(frame_2);
        lineEditPresolverPath->setObjectName(QStringLiteral("lineEditPresolverPath"));

        horizontalLayout_2->addWidget(lineEditPresolverPath);

        toolButtonPresolver = new QToolButton(frame_2);
        toolButtonPresolver->setObjectName(QStringLiteral("toolButtonPresolver"));

        horizontalLayout_2->addWidget(toolButtonPresolver);


        verticalLayout_4->addWidget(frame_2);

        frame_6 = new QFrame(groupBox_2);
        frame_6->setObjectName(QStringLiteral("frame_6"));
        horizontalLayout_4 = new QHBoxLayout(frame_6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_3 = new QLabel(frame_6);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMinimumSize(QSize(90, 0));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(label_3);

        lineEditPostsolverPath = new QLineEdit(frame_6);
        lineEditPostsolverPath->setObjectName(QStringLiteral("lineEditPostsolverPath"));

        horizontalLayout_4->addWidget(lineEditPostsolverPath);

        toolButtonPostsolver = new QToolButton(frame_6);
        toolButtonPostsolver->setObjectName(QStringLiteral("toolButtonPostsolver"));

        horizontalLayout_4->addWidget(toolButtonPostsolver);


        verticalLayout_4->addWidget(frame_6);


        verticalLayout_2->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(sv4guiSimulationPreferencePage);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        verticalLayout = new QVBoxLayout(groupBox_3);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        checkBoxUseCustom = new QCheckBox(groupBox_3);
        checkBoxUseCustom->setObjectName(QStringLiteral("checkBoxUseCustom"));

        verticalLayout->addWidget(checkBoxUseCustom);

        frame = new QFrame(groupBox_3);
        frame->setObjectName(QStringLiteral("frame"));
        horizontalLayout_6 = new QHBoxLayout(frame);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_4 = new QLabel(frame);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMinimumSize(QSize(90, 0));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_6->addWidget(label_4);

        lineEditCustomTemplatePath = new QLineEdit(frame);
        lineEditCustomTemplatePath->setObjectName(QStringLiteral("lineEditCustomTemplatePath"));

        horizontalLayout_6->addWidget(lineEditCustomTemplatePath);

        toolButtonCustomTemplate = new QToolButton(frame);
        toolButtonCustomTemplate->setObjectName(QStringLiteral("toolButtonCustomTemplate"));

        horizontalLayout_6->addWidget(toolButtonCustomTemplate);


        verticalLayout->addWidget(frame);


        verticalLayout_2->addWidget(groupBox_3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        retranslateUi(sv4guiSimulationPreferencePage);

        QMetaObject::connectSlotsByName(sv4guiSimulationPreferencePage);
    } // setupUi

    void retranslateUi(QWidget *sv4guiSimulationPreferencePage)
    {
        sv4guiSimulationPreferencePage->setWindowTitle(QApplication::translate("sv4guiSimulationPreferencePage", "Form", nullptr));
        groupBox_2->setTitle(QApplication::translate("sv4guiSimulationPreferencePage", "Solver Executables", nullptr));
        label_5->setText(QApplication::translate("sv4guiSimulationPreferencePage", "svSolver no MPI:", nullptr));
        toolButtonFlowsolverNOMPI->setText(QApplication::translate("sv4guiSimulationPreferencePage", "...", nullptr));
        label_2->setText(QApplication::translate("sv4guiSimulationPreferencePage", "svSolver w/ MPI:", nullptr));
        toolButtonFlowsolver->setText(QApplication::translate("sv4guiSimulationPreferencePage", "...", nullptr));
        label->setText(QApplication::translate("sv4guiSimulationPreferencePage", "svPre:", nullptr));
        toolButtonPresolver->setText(QApplication::translate("sv4guiSimulationPreferencePage", "...", nullptr));
        label_3->setText(QApplication::translate("sv4guiSimulationPreferencePage", "svPost:", nullptr));
        toolButtonPostsolver->setText(QApplication::translate("sv4guiSimulationPreferencePage", "...", nullptr));
        groupBox_3->setTitle(QApplication::translate("sv4guiSimulationPreferencePage", "Advanced Solver Options", nullptr));
        checkBoxUseCustom->setText(QApplication::translate("sv4guiSimulationPreferencePage", "Use  Solver Input Custom Template", nullptr));
        label_4->setText(QApplication::translate("sv4guiSimulationPreferencePage", "Custom Template: ", nullptr));
        toolButtonCustomTemplate->setText(QApplication::translate("sv4guiSimulationPreferencePage", "...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class sv4guiSimulationPreferencePage: public Ui_sv4guiSimulationPreferencePage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SV4GUI_SIMULATIONPREFERENCEPAGE_H
