/********************************************************************************
** Form generated from reading UI file 'sv4gui_AboutDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SV4GUI_ABOUTDIALOG_H
#define UI_SV4GUI_ABOUTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_sv4guiAboutDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QLabel *m_LogoLabel;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *m_VersionLabel;
    QLabel *M_DescriptionLabel;
    QLabel *m_ToolkitVersionsLabel;
    QScrollArea *scrollArea;
    QWidget *m_ScrollArea;
    QGridLayout *gridLayout;
    QLabel *m_AboutLabel;
    QDialogButtonBox *m_ButtonBox;

    void setupUi(QDialog *sv4guiAboutDialog)
    {
        if (sv4guiAboutDialog->objectName().isEmpty())
            sv4guiAboutDialog->setObjectName(QStringLiteral("sv4guiAboutDialog"));
        sv4guiAboutDialog->resize(664, 465);
        sv4guiAboutDialog->setAutoFillBackground(false);
        verticalLayout_2 = new QVBoxLayout(sv4guiAboutDialog);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        m_LogoLabel = new QLabel(sv4guiAboutDialog);
        m_LogoLabel->setObjectName(QStringLiteral("m_LogoLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(m_LogoLabel->sizePolicy().hasHeightForWidth());
        m_LogoLabel->setSizePolicy(sizePolicy);
        m_LogoLabel->setMaximumSize(QSize(350, 75));
        m_LogoLabel->setScaledContents(true);
        m_LogoLabel->setOpenExternalLinks(true);

        verticalLayout_2->addWidget(m_LogoLabel);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 10, -1, 10);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        m_VersionLabel = new QLabel(sv4guiAboutDialog);
        m_VersionLabel->setObjectName(QStringLiteral("m_VersionLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(m_VersionLabel->sizePolicy().hasHeightForWidth());
        m_VersionLabel->setSizePolicy(sizePolicy1);
        m_VersionLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        verticalLayout->addWidget(m_VersionLabel);

        M_DescriptionLabel = new QLabel(sv4guiAboutDialog);
        M_DescriptionLabel->setObjectName(QStringLiteral("M_DescriptionLabel"));

        verticalLayout->addWidget(M_DescriptionLabel);

        m_ToolkitVersionsLabel = new QLabel(sv4guiAboutDialog);
        m_ToolkitVersionsLabel->setObjectName(QStringLiteral("m_ToolkitVersionsLabel"));

        verticalLayout->addWidget(m_ToolkitVersionsLabel);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_2->addLayout(horizontalLayout);

        scrollArea = new QScrollArea(sv4guiAboutDialog);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        m_ScrollArea = new QWidget();
        m_ScrollArea->setObjectName(QStringLiteral("m_ScrollArea"));
        m_ScrollArea->setGeometry(QRect(0, 0, 638, 275));
        gridLayout = new QGridLayout(m_ScrollArea);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        m_AboutLabel = new QLabel(m_ScrollArea);
        m_AboutLabel->setObjectName(QStringLiteral("m_AboutLabel"));
        m_AboutLabel->setWordWrap(true);
        m_AboutLabel->setOpenExternalLinks(true);

        gridLayout->addWidget(m_AboutLabel, 0, 1, 1, 1);

        scrollArea->setWidget(m_ScrollArea);

        verticalLayout_2->addWidget(scrollArea);

        m_ButtonBox = new QDialogButtonBox(sv4guiAboutDialog);
        m_ButtonBox->setObjectName(QStringLiteral("m_ButtonBox"));
        m_ButtonBox->setStandardButtons(QDialogButtonBox::Close);

        verticalLayout_2->addWidget(m_ButtonBox);


        retranslateUi(sv4guiAboutDialog);

        QMetaObject::connectSlotsByName(sv4guiAboutDialog);
    } // setupUi

    void retranslateUi(QDialog *sv4guiAboutDialog)
    {
        sv4guiAboutDialog->setWindowTitle(QApplication::translate("sv4guiAboutDialog", "SimVascular", nullptr));
        m_LogoLabel->setText(QApplication::translate("sv4guiAboutDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><a href=\"http://www.simvascular.org/\"><span style=\" text-decoration: underline; color:#0000ff;\"><img src=\":/org.sv.gui.qt.welcomescreen/pics/svLogo.png\" /></span></a></p></body></html>", nullptr));
        m_VersionLabel->setText(QApplication::translate("sv4guiAboutDialog", "Version: ", nullptr));
        M_DescriptionLabel->setText(QApplication::translate("sv4guiAboutDialog", "Description: Open Source Software Package for Cardiovascular Modeling and Simulation", nullptr));
        m_ToolkitVersionsLabel->setText(QApplication::translate("sv4guiAboutDialog", "Major third-party packages: MITK x.x.x, VTK x.x.x, ITK x.x.x, Qt x.x.x", nullptr));
        m_AboutLabel->setText(QApplication::translate("sv4guiAboutDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.Helvetica Neue DeskInterface'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Ubuntu'; font-size:10pt; font-weight:600;\">General Information</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Ubuntu'; font-size:11pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:8pt;\">SimVascular has been developed by Cardiovascular Biomechan"
                        "ics Computation Lab (</span><a href=\"http://www.mitk.org/\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:8pt; text-decoration: underline; color:#0000ff;\">http://cbcl.stanford.edu</span></a><span style=\" font-family:'MS Shell Dlg 2'; font-size:8pt;\">, Stanford Medicine),  Shadden Lab (</span><a href=\"http://www.mitk.org/\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:8pt; text-decoration: underline; color:#0000ff;\">http://shaddenlab.berkeley.edu/</span></a><span style=\" font-family:'MS Shell Dlg 2'; font-size:8pt;\">, UC Berkeley), and Open Source Medical Software Corporation.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-size:8pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:8pt;\">Documentati"
                        "on is available at </span><a href=\"http://www.mitk.org/\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:8pt; text-decoration: underline; color:#0000ff;\">http://www.simvascular.org</span></a></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-size:8pt; text-decoration: underline; color:#0000ff;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:8pt;\">Software installers are available at </span><a href=\"http://www.mitk.org/\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:8pt; text-decoration: underline; color:#0000ff;\">http://simtk.org/projects/simvascular</span></a></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; "
                        "font-family:'MS Shell Dlg 2'; font-size:8pt; text-decoration: underline; color:#0000ff;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:8pt;\">Source code is available at </span><a href=\"http://www.mitk.org/\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:8pt; text-decoration: underline; color:#0000ff;\">http://github.com/SimVascular/SimVascular</span></a></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-size:8pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:8pt;\">To contact the SimVacular Development team, see </span><a href=\"http://www.mitk.org/wiki/Contact\"><span style=\""
                        " font-family:'MS Shell Dlg 2'; font-size:8pt; text-decoration: underline; color:#0000ff;\">http://simvascular.github.io/#contact</span></a><span style=\" font-family:'MS Shell Dlg 2'; font-size:8pt;\">.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Ubuntu'; font-size:11pt;\"><br /></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class sv4guiAboutDialog: public Ui_sv4guiAboutDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SV4GUI_ABOUTDIALOG_H
