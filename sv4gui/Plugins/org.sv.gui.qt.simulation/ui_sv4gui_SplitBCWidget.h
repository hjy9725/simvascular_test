/********************************************************************************
** Form generated from reading UI file 'sv4gui_SplitBCWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SV4GUI_SPLITBCWIDGET_H
#define UI_SV4GUI_SPLITBCWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_sv4guiSplitBCWidget
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget_5;
    QGridLayout *gridLayout_2;
    QLabel *labelBCType;
    QLabel *labelMurray;
    QLabel *labelTarget;
    QLabel *label_8;
    QLabel *labelRatio;
    QLineEdit *lineEditTotalValue;
    QLineEdit *lineEditMurrayCoefficient;
    QLineEdit *lineEditRatio;
    QSpacerItem *verticalSpacer;
    QWidget *widget_2;
    QGridLayout *gridLayout;
    QDialogButtonBox *buttonBox;

    void setupUi(QWidget *sv4guiSplitBCWidget)
    {
        if (sv4guiSplitBCWidget->objectName().isEmpty())
            sv4guiSplitBCWidget->setObjectName(QStringLiteral("sv4guiSplitBCWidget"));
        sv4guiSplitBCWidget->resize(338, 200);
        sv4guiSplitBCWidget->setContextMenuPolicy(Qt::CustomContextMenu);
        verticalLayout = new QVBoxLayout(sv4guiSplitBCWidget);
        verticalLayout->setSpacing(5);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        widget_5 = new QWidget(sv4guiSplitBCWidget);
        widget_5->setObjectName(QStringLiteral("widget_5"));
        gridLayout_2 = new QGridLayout(widget_5);
        gridLayout_2->setSpacing(5);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(5, 5, 5, 5);
        labelBCType = new QLabel(widget_5);
        labelBCType->setObjectName(QStringLiteral("labelBCType"));

        gridLayout_2->addWidget(labelBCType, 0, 1, 1, 1);

        labelMurray = new QLabel(widget_5);
        labelMurray->setObjectName(QStringLiteral("labelMurray"));

        gridLayout_2->addWidget(labelMurray, 2, 0, 1, 1);

        labelTarget = new QLabel(widget_5);
        labelTarget->setObjectName(QStringLiteral("labelTarget"));

        gridLayout_2->addWidget(labelTarget, 1, 0, 1, 1);

        label_8 = new QLabel(widget_5);
        label_8->setObjectName(QStringLiteral("label_8"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(label_8, 0, 0, 1, 1);

        labelRatio = new QLabel(widget_5);
        labelRatio->setObjectName(QStringLiteral("labelRatio"));

        gridLayout_2->addWidget(labelRatio, 3, 0, 1, 1);

        lineEditTotalValue = new QLineEdit(widget_5);
        lineEditTotalValue->setObjectName(QStringLiteral("lineEditTotalValue"));

        gridLayout_2->addWidget(lineEditTotalValue, 1, 1, 1, 1);

        lineEditMurrayCoefficient = new QLineEdit(widget_5);
        lineEditMurrayCoefficient->setObjectName(QStringLiteral("lineEditMurrayCoefficient"));

        gridLayout_2->addWidget(lineEditMurrayCoefficient, 2, 1, 1, 1);

        lineEditRatio = new QLineEdit(widget_5);
        lineEditRatio->setObjectName(QStringLiteral("lineEditRatio"));

        gridLayout_2->addWidget(lineEditRatio, 3, 1, 1, 1);


        verticalLayout->addWidget(widget_5);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        widget_2 = new QWidget(sv4guiSplitBCWidget);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        gridLayout = new QGridLayout(widget_2);
        gridLayout->setSpacing(5);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(5, 5, -1, 5);
        buttonBox = new QDialogButtonBox(widget_2);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 0, 0, 1, 1);


        verticalLayout->addWidget(widget_2);


        retranslateUi(sv4guiSplitBCWidget);

        QMetaObject::connectSlotsByName(sv4guiSplitBCWidget);
    } // setupUi

    void retranslateUi(QWidget *sv4guiSplitBCWidget)
    {
        sv4guiSplitBCWidget->setWindowTitle(QApplication::translate("sv4guiSplitBCWidget", "Split BC", nullptr));
        labelBCType->setText(QString());
        labelMurray->setText(QApplication::translate("sv4guiSplitBCWidget", "Murray's Law Coefficient:", nullptr));
        labelTarget->setText(QApplication::translate("sv4guiSplitBCWidget", "Total Resistance:", nullptr));
        label_8->setText(QApplication::translate("sv4guiSplitBCWidget", "BC Type:", nullptr));
        labelRatio->setText(QApplication::translate("sv4guiSplitBCWidget", "Ratio(R:R:R):", nullptr));
        lineEditMurrayCoefficient->setText(QApplication::translate("sv4guiSplitBCWidget", "2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class sv4guiSplitBCWidget: public Ui_sv4guiSplitBCWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SV4GUI_SPLITBCWIDGET_H
