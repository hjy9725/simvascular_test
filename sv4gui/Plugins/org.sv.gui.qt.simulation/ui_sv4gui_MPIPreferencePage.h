/********************************************************************************
** Form generated from reading UI file 'sv4gui_MPIPreferencePage.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SV4GUI_MPIPREFERENCEPAGE_H
#define UI_SV4GUI_MPIPREFERENCEPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
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

class Ui_sv4guiMPIPreferencePage
{
public:
    QVBoxLayout *verticalLayout_3;
    QFrame *frame;
    QGridLayout *gridLayout;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_2;
    QWidget *widget_6;
    QGridLayout *gridLayout_5;
    QLabel *label_5;
    QToolButton *toolButtonMPIExec;
    QLineEdit *lineEditMPIExecPath;
    QLabel *labelMPIImplementation;
    QLineEdit *MpiImplementationLineEdit;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *sv4guiMPIPreferencePage)
    {
        if (sv4guiMPIPreferencePage->objectName().isEmpty())
            sv4guiMPIPreferencePage->setObjectName(QStringLiteral("sv4guiMPIPreferencePage"));
        sv4guiMPIPreferencePage->resize(553, 444);
        verticalLayout_3 = new QVBoxLayout(sv4guiMPIPreferencePage);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        frame = new QFrame(sv4guiMPIPreferencePage);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Plain);
        gridLayout = new QGridLayout(frame);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        widget_3 = new QWidget(frame);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        horizontalLayout_2 = new QHBoxLayout(widget_3);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);

        gridLayout->addWidget(widget_3, 0, 0, 1, 1);

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
        lineEditMPIExecPath->setStyleSheet(QLatin1String("QLineEdit {\n"
"    background-color: rgb(220,220,220);\n"
"}"));

        gridLayout_5->addWidget(lineEditMPIExecPath, 1, 1, 1, 1);


        gridLayout->addWidget(widget_6, 1, 0, 1, 2);

        labelMPIImplementation = new QLabel(frame);
        labelMPIImplementation->setObjectName(QStringLiteral("labelMPIImplementation"));

        gridLayout->addWidget(labelMPIImplementation, 2, 0, 1, 1);

        MpiImplementationLineEdit = new QLineEdit(frame);
        MpiImplementationLineEdit->setObjectName(QStringLiteral("MpiImplementationLineEdit"));
        MpiImplementationLineEdit->setStyleSheet(QLatin1String("QLineEdit {\n"
"\n"
"background-color: rgb(220,220,220);\n"
"\n"
"\n"
"\n"
"}"));

        gridLayout->addWidget(MpiImplementationLineEdit, 2, 1, 1, 1);


        verticalLayout_3->addWidget(frame);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);


        retranslateUi(sv4guiMPIPreferencePage);

        QMetaObject::connectSlotsByName(sv4guiMPIPreferencePage);
    } // setupUi

    void retranslateUi(QWidget *sv4guiMPIPreferencePage)
    {
        sv4guiMPIPreferencePage->setWindowTitle(QApplication::translate("sv4guiMPIPreferencePage", "Form", nullptr));
#ifndef QT_NO_TOOLTIP
        sv4guiMPIPreferencePage->setToolTip(QApplication::translate("sv4guiMPIPreferencePage", "<html><head/><body><p>The MPI preferences page is used to display the location of the mpiexec program and its implementation (OpenMPI or MPICH). The location of the mpiexec program can be set using the file browser.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        label_5->setText(QApplication::translate("sv4guiMPIPreferencePage", "mpiexec", nullptr));
#ifndef QT_NO_TOOLTIP
        toolButtonMPIExec->setToolTip(QApplication::translate("sv4guiMPIPreferencePage", "Display a file browser to select the mpiexec path.", nullptr));
#endif // QT_NO_TOOLTIP
        toolButtonMPIExec->setText(QApplication::translate("sv4guiMPIPreferencePage", "...", nullptr));
#ifndef QT_NO_TOOLTIP
        lineEditMPIExecPath->setToolTip(QApplication::translate("sv4guiMPIPreferencePage", "This text box displays the path to the mpiexec binary. \n"
"The absolute path to the executable is displayed and may be different than what was selected. ", nullptr));
#endif // QT_NO_TOOLTIP
        lineEditMPIExecPath->setText(QString());
        labelMPIImplementation->setText(QApplication::translate("sv4guiMPIPreferencePage", "MPI Implementation", nullptr));
#ifndef QT_NO_TOOLTIP
        MpiImplementationLineEdit->setToolTip(QApplication::translate("sv4guiMPIPreferencePage", "The text box displays the MPI implementation of the mpiexec program.", nullptr));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class sv4guiMPIPreferencePage: public Ui_sv4guiMPIPreferencePage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SV4GUI_MPIPREFERENCEPAGE_H
