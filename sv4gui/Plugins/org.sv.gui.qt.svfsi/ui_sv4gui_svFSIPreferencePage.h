/********************************************************************************
** Form generated from reading UI file 'sv4gui_svFSIPreferencePage.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SV4GUI_SVFSIPREFERENCEPAGE_H
#define UI_SV4GUI_SVFSIPREFERENCEPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_sv4guisvFSIPreferencePage
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frame_3;
    QGridLayout *gridLayout_2;
    QToolButton *toolButtonFlowsolver;
    QLabel *label_2;
    QLineEdit *lineEditFlowsolverPath;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *sv4guisvFSIPreferencePage)
    {
        if (sv4guisvFSIPreferencePage->objectName().isEmpty())
            sv4guisvFSIPreferencePage->setObjectName(QStringLiteral("sv4guisvFSIPreferencePage"));
        sv4guisvFSIPreferencePage->resize(553, 341);
        verticalLayout = new QVBoxLayout(sv4guisvFSIPreferencePage);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        frame_3 = new QFrame(sv4guisvFSIPreferencePage);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frame_3);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(5, 5, 5, 5);
        toolButtonFlowsolver = new QToolButton(frame_3);
        toolButtonFlowsolver->setObjectName(QStringLiteral("toolButtonFlowsolver"));

        gridLayout_2->addWidget(toolButtonFlowsolver, 0, 2, 1, 1);

        label_2 = new QLabel(frame_3);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_2->addWidget(label_2, 0, 0, 1, 1);

        lineEditFlowsolverPath = new QLineEdit(frame_3);
        lineEditFlowsolverPath->setObjectName(QStringLiteral("lineEditFlowsolverPath"));

        gridLayout_2->addWidget(lineEditFlowsolverPath, 0, 1, 1, 1);


        verticalLayout->addWidget(frame_3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(sv4guisvFSIPreferencePage);

        QMetaObject::connectSlotsByName(sv4guisvFSIPreferencePage);
    } // setupUi

    void retranslateUi(QWidget *sv4guisvFSIPreferencePage)
    {
        sv4guisvFSIPreferencePage->setWindowTitle(QApplication::translate("sv4guisvFSIPreferencePage", "Form", nullptr));
        toolButtonFlowsolver->setText(QApplication::translate("sv4guisvFSIPreferencePage", "...", nullptr));
        label_2->setText(QApplication::translate("sv4guisvFSIPreferencePage", "svFSI Solver:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class sv4guisvFSIPreferencePage: public Ui_sv4guisvFSIPreferencePage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SV4GUI_SVFSIPREFERENCEPAGE_H
