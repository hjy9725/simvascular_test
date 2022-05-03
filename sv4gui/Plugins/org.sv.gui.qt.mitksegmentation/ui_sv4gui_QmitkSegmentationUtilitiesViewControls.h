/********************************************************************************
** Form generated from reading UI file 'sv4gui_QmitkSegmentationUtilitiesViewControls.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SV4GUI_QMITKSEGMENTATIONUTILITIESVIEWCONTROLS_H
#define UI_SV4GUI_QMITKSEGMENTATIONUTILITIESVIEWCONTROLS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QmitkSegmentationUtilitiesViewControls
{
public:
    QVBoxLayout *verticalLayout;
    QToolBox *toolBox;

    void setupUi(QWidget *QmitkSegmentationUtilitiesViewControls)
    {
        if (QmitkSegmentationUtilitiesViewControls->objectName().isEmpty())
            QmitkSegmentationUtilitiesViewControls->setObjectName(QStringLiteral("QmitkSegmentationUtilitiesViewControls"));
        QmitkSegmentationUtilitiesViewControls->resize(289, 418);
        QmitkSegmentationUtilitiesViewControls->setMinimumSize(QSize(0, 0));
        QmitkSegmentationUtilitiesViewControls->setStyleSheet(QStringLiteral("icon-size: 32px 32px"));
        verticalLayout = new QVBoxLayout(QmitkSegmentationUtilitiesViewControls);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        toolBox = new QToolBox(QmitkSegmentationUtilitiesViewControls);
        toolBox->setObjectName(QStringLiteral("toolBox"));

        verticalLayout->addWidget(toolBox);


        retranslateUi(QmitkSegmentationUtilitiesViewControls);

        toolBox->setCurrentIndex(-1);
        toolBox->layout()->setSpacing(0);


        QMetaObject::connectSlotsByName(QmitkSegmentationUtilitiesViewControls);
    } // setupUi

    void retranslateUi(QWidget *QmitkSegmentationUtilitiesViewControls)
    {
        QmitkSegmentationUtilitiesViewControls->setWindowTitle(QApplication::translate("QmitkSegmentationUtilitiesViewControls", "QmitkTemplate", nullptr));
#ifndef QT_NO_ACCESSIBILITY
        toolBox->setAccessibleName(QString());
#endif // QT_NO_ACCESSIBILITY
    } // retranslateUi

};

namespace Ui {
    class QmitkSegmentationUtilitiesViewControls: public Ui_QmitkSegmentationUtilitiesViewControls {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SV4GUI_QMITKSEGMENTATIONUTILITIESVIEWCONTROLS_H
