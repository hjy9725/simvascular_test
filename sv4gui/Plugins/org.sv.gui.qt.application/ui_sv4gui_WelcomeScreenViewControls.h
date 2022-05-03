/********************************************************************************
** Form generated from reading UI file 'sv4gui_WelcomeScreenViewControls.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SV4GUI_WELCOMESCREENVIEWCONTROLS_H
#define UI_SV4GUI_WELCOMESCREENVIEWCONTROLS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_svWelcomeScreenViewControls
{
public:
    QGridLayout *gridLayout;
    QGridLayout *m_WebViewLayout;

    void setupUi(QWidget *svWelcomeScreenViewControls)
    {
        if (svWelcomeScreenViewControls->objectName().isEmpty())
            svWelcomeScreenViewControls->setObjectName(QStringLiteral("svWelcomeScreenViewControls"));
        svWelcomeScreenViewControls->resize(458, 398);
        svWelcomeScreenViewControls->setMinimumSize(QSize(0, 0));
        gridLayout = new QGridLayout(svWelcomeScreenViewControls);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        m_WebViewLayout = new QGridLayout();
        m_WebViewLayout->setSpacing(6);
        m_WebViewLayout->setObjectName(QStringLiteral("m_WebViewLayout"));

        gridLayout->addLayout(m_WebViewLayout, 0, 0, 1, 1);


        retranslateUi(svWelcomeScreenViewControls);

        QMetaObject::connectSlotsByName(svWelcomeScreenViewControls);
    } // setupUi

    void retranslateUi(QWidget *svWelcomeScreenViewControls)
    {
        svWelcomeScreenViewControls->setWindowTitle(QApplication::translate("svWelcomeScreenViewControls", "QmitkTemplate", nullptr));
    } // retranslateUi

};

namespace Ui {
    class svWelcomeScreenViewControls: public Ui_svWelcomeScreenViewControls {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SV4GUI_WELCOMESCREENVIEWCONTROLS_H
