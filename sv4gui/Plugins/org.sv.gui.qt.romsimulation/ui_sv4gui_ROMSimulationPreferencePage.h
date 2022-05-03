/********************************************************************************
** Form generated from reading UI file 'sv4gui_ROMSimulationPreferencePage.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SV4GUI_ROMSIMULATIONPREFERENCEPAGE_H
#define UI_SV4GUI_ROMSIMULATIONPREFERENCEPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_sv4guiROMSimulationPreferencePage
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QVBoxLayout *verticalLayout_3;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *checkBoxUseMPI;
    QWidget *widget_6;
    QGridLayout *gridLayout_5;
    QLabel *label_5;
    QToolButton *toolButtonMPIExec;
    QLineEdit *lineEditMPIExecPath;
    QFrame *frame_4;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget_2;
    QGridLayout *gridLayout_3;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QCheckBox *checkBoxUseCustom;
    QWidget *widget_5;
    QGridLayout *gridLayout_4;
    QLineEdit *lineEditCustomTemplatePath;
    QLabel *label_4;
    QToolButton *toolButtonCustomTemplate;
    QFrame *frame_3;
    QGridLayout *gridLayout_2;
    QToolButton *toolButtonFlowsolver;
    QLineEdit *lineEditFlowsolverPath;
    QLineEdit *lineEditPostsolverPath;
    QToolButton *toolButtonPostsolver;
    QLabel *label_3;
    QLabel *label_2;
    QLabel *label;
    QLineEdit *lineEditPresolverPath;
    QToolButton *toolButtonPresolver;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *sv4guiROMSimulationPreferencePage)
    {
        if (sv4guiROMSimulationPreferencePage->objectName().isEmpty())
            sv4guiROMSimulationPreferencePage->setObjectName(QStringLiteral("sv4guiROMSimulationPreferencePage"));
        sv4guiROMSimulationPreferencePage->resize(553, 341);
        verticalLayout = new QVBoxLayout(sv4guiROMSimulationPreferencePage);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        frame = new QFrame(sv4guiROMSimulationPreferencePage);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(frame);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(5, 5, 5, 5);
        widget_3 = new QWidget(frame);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        horizontalLayout_2 = new QHBoxLayout(widget_3);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        checkBoxUseMPI = new QCheckBox(widget_3);
        checkBoxUseMPI->setObjectName(QStringLiteral("checkBoxUseMPI"));
        checkBoxUseMPI->setChecked(true);

        horizontalLayout_2->addWidget(checkBoxUseMPI);


        verticalLayout_3->addWidget(widget_3);

        widget_6 = new QWidget(frame);
        widget_6->setObjectName(QStringLiteral("widget_6"));
        gridLayout_5 = new QGridLayout(widget_6);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(widget_6);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_5->addWidget(label_5, 1, 0, 1, 1);

        toolButtonMPIExec = new QToolButton(widget_6);
        toolButtonMPIExec->setObjectName(QStringLiteral("toolButtonMPIExec"));

        gridLayout_5->addWidget(toolButtonMPIExec, 1, 2, 1, 1);

        lineEditMPIExecPath = new QLineEdit(widget_6);
        lineEditMPIExecPath->setObjectName(QStringLiteral("lineEditMPIExecPath"));

        gridLayout_5->addWidget(lineEditMPIExecPath, 1, 1, 1, 1);


        verticalLayout_3->addWidget(widget_6);


        verticalLayout->addWidget(frame);

        frame_4 = new QFrame(sv4guiROMSimulationPreferencePage);
        frame_4->setObjectName(QStringLiteral("frame_4"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame_4);
        verticalLayout_2->setSpacing(5);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(5, 5, 5, 5);
        widget_2 = new QWidget(frame_4);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        gridLayout_3 = new QGridLayout(widget_2);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);

        verticalLayout_2->addWidget(widget_2);

        widget = new QWidget(frame_4);
        widget->setObjectName(QStringLiteral("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        checkBoxUseCustom = new QCheckBox(widget);
        checkBoxUseCustom->setObjectName(QStringLiteral("checkBoxUseCustom"));

        horizontalLayout->addWidget(checkBoxUseCustom);


        verticalLayout_2->addWidget(widget);

        widget_5 = new QWidget(frame_4);
        widget_5->setObjectName(QStringLiteral("widget_5"));
        gridLayout_4 = new QGridLayout(widget_5);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        lineEditCustomTemplatePath = new QLineEdit(widget_5);
        lineEditCustomTemplatePath->setObjectName(QStringLiteral("lineEditCustomTemplatePath"));

        gridLayout_4->addWidget(lineEditCustomTemplatePath, 1, 1, 1, 1);

        label_4 = new QLabel(widget_5);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_4->addWidget(label_4, 1, 0, 1, 1);

        toolButtonCustomTemplate = new QToolButton(widget_5);
        toolButtonCustomTemplate->setObjectName(QStringLiteral("toolButtonCustomTemplate"));

        gridLayout_4->addWidget(toolButtonCustomTemplate, 1, 2, 1, 1);


        verticalLayout_2->addWidget(widget_5);


        verticalLayout->addWidget(frame_4);

        frame_3 = new QFrame(sv4guiROMSimulationPreferencePage);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frame_3);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(5, 5, 5, 5);
        toolButtonFlowsolver = new QToolButton(frame_3);
        toolButtonFlowsolver->setObjectName(QStringLiteral("toolButtonFlowsolver"));

        gridLayout_2->addWidget(toolButtonFlowsolver, 1, 2, 1, 1);

        lineEditFlowsolverPath = new QLineEdit(frame_3);
        lineEditFlowsolverPath->setObjectName(QStringLiteral("lineEditFlowsolverPath"));

        gridLayout_2->addWidget(lineEditFlowsolverPath, 1, 1, 1, 1);

        lineEditPostsolverPath = new QLineEdit(frame_3);
        lineEditPostsolverPath->setObjectName(QStringLiteral("lineEditPostsolverPath"));

        gridLayout_2->addWidget(lineEditPostsolverPath, 2, 1, 1, 1);

        toolButtonPostsolver = new QToolButton(frame_3);
        toolButtonPostsolver->setObjectName(QStringLiteral("toolButtonPostsolver"));

        gridLayout_2->addWidget(toolButtonPostsolver, 2, 2, 1, 1);

        label_3 = new QLabel(frame_3);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_2->addWidget(label_3, 2, 0, 1, 1);

        label_2 = new QLabel(frame_3);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        label = new QLabel(frame_3);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        lineEditPresolverPath = new QLineEdit(frame_3);
        lineEditPresolverPath->setObjectName(QStringLiteral("lineEditPresolverPath"));

        gridLayout_2->addWidget(lineEditPresolverPath, 0, 1, 1, 1);

        toolButtonPresolver = new QToolButton(frame_3);
        toolButtonPresolver->setObjectName(QStringLiteral("toolButtonPresolver"));

        gridLayout_2->addWidget(toolButtonPresolver, 0, 2, 1, 1);


        verticalLayout->addWidget(frame_3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(sv4guiROMSimulationPreferencePage);

        QMetaObject::connectSlotsByName(sv4guiROMSimulationPreferencePage);
    } // setupUi

    void retranslateUi(QWidget *sv4guiROMSimulationPreferencePage)
    {
        sv4guiROMSimulationPreferencePage->setWindowTitle(QApplication::translate("sv4guiROMSimulationPreferencePage", "Form", nullptr));
        checkBoxUseMPI->setText(QApplication::translate("sv4guiROMSimulationPreferencePage", "Use MPI   ", nullptr));
        label_5->setText(QApplication::translate("sv4guiROMSimulationPreferencePage", "MPIExec:", nullptr));
        toolButtonMPIExec->setText(QApplication::translate("sv4guiROMSimulationPreferencePage", "...", nullptr));
        lineEditMPIExecPath->setText(QString());
        checkBoxUseCustom->setText(QApplication::translate("sv4guiROMSimulationPreferencePage", "Use  Solver Input Custom Template", nullptr));
        label_4->setText(QApplication::translate("sv4guiROMSimulationPreferencePage", "Custom Template: ", nullptr));
        toolButtonCustomTemplate->setText(QApplication::translate("sv4guiROMSimulationPreferencePage", "...", nullptr));
        toolButtonFlowsolver->setText(QApplication::translate("sv4guiROMSimulationPreferencePage", "...", nullptr));
        toolButtonPostsolver->setText(QApplication::translate("sv4guiROMSimulationPreferencePage", "...", nullptr));
        label_3->setText(QApplication::translate("sv4guiROMSimulationPreferencePage", "Postsolver:", nullptr));
        label_2->setText(QApplication::translate("sv4guiROMSimulationPreferencePage", "Flowsolver:", nullptr));
        label->setText(QApplication::translate("sv4guiROMSimulationPreferencePage", "Presolver:", nullptr));
        toolButtonPresolver->setText(QApplication::translate("sv4guiROMSimulationPreferencePage", "...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class sv4guiROMSimulationPreferencePage: public Ui_sv4guiROMSimulationPreferencePage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SV4GUI_ROMSIMULATIONPREFERENCEPAGE_H
