/********************************************************************************
** Form generated from reading UI file 'sv4gui_svFSIBCWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SV4GUI_SVFSIBCWIDGET_H
#define UI_SV4GUI_SVFSIBCWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QToolButton>

QT_BEGIN_NAMESPACE

class Ui_sv4guisvFSIBCWidget
{
public:
    QGridLayout *gridLayout_14;
    QGridLayout *gridLayout_13;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_2;
    QListWidget *faceList;
    QLabel *flsp_label;
    QLineEdit *flsp;
    QGridLayout *gridLayout_12;
    QGridLayout *gridLayout_8;
    QGroupBox *bcGrp_B;
    QGridLayout *gridLayout;
    QComboBox *bcGrp;
    QGroupBox *directionalBc_box;
    QGridLayout *gridLayout_3;
    QSpinBox *directionalBc;
    QGroupBox *profile_box;
    QGridLayout *gridLayout_5;
    QFrame *line_5;
    QGroupBox *flat_profile;
    QCheckBox *zero_out_perimeter;
    QCheckBox *impose_flux;
    QFrame *line_4;
    QGroupBox *parabolic_profile;
    QGroupBox *user_defined_profile;
    QGridLayout *gridLayout_11;
    QLabel *label_3;
    QLineEdit *lineEditProfile;
    QToolButton *btnProfile;
    QCheckBox *checkBoxImposeIntegral;
    QGridLayout *gridLayout_16;
    QLabel *label_4;
    QLineEdit *lineEditDirection;
    QGroupBox *time_dependance_box;
    QGridLayout *gridLayout_10;
    QGroupBox *resistance_box;
    QGridLayout *gridLayout_9;
    QLineEdit *resistance_value;
    QLabel *prop_4_txt_2;
    QGroupBox *steady_box;
    QGridLayout *gridLayout_6;
    QLineEdit *steady_value;
    QLabel *prop_4_txt;
    QGroupBox *coupled_box;
    QFrame *line_3;
    QGroupBox *general_box;
    QGridLayout *gridLayout_4;
    QLabel *label_2;
    QLineEdit *lineEditGeneral;
    QToolButton *btnGeneral;
    QGroupBox *projection_box;
    QGridLayout *gridLayout_15;
    QComboBox *comboBoxProjection;
    QFrame *line_2;
    QGroupBox *unsteady_box;
    QGridLayout *gridLayout_7;
    QLabel *label;
    QLineEdit *lineEditTemporal;
    QToolButton *btnTemporal;
    QFrame *line;
    QSpacerItem *verticalSpacer_2;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *sv4guisvFSIBCWidget)
    {
        if (sv4guisvFSIBCWidget->objectName().isEmpty())
            sv4guisvFSIBCWidget->setObjectName(QStringLiteral("sv4guisvFSIBCWidget"));
        sv4guisvFSIBCWidget->resize(502, 828);
        gridLayout_14 = new QGridLayout(sv4guisvFSIBCWidget);
        gridLayout_14->setSpacing(5);
        gridLayout_14->setObjectName(QStringLiteral("gridLayout_14"));
        gridLayout_14->setContentsMargins(5, 5, 5, 5);
        gridLayout_13 = new QGridLayout();
        gridLayout_13->setSpacing(5);
        gridLayout_13->setObjectName(QStringLiteral("gridLayout_13"));
        groupBox_3 = new QGroupBox(sv4guisvFSIBCWidget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox_3->sizePolicy().hasHeightForWidth());
        groupBox_3->setSizePolicy(sizePolicy);
        gridLayout_2 = new QGridLayout(groupBox_3);
        gridLayout_2->setSpacing(5);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 5, 0, 0);
        faceList = new QListWidget(groupBox_3);
        faceList->setObjectName(QStringLiteral("faceList"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(faceList->sizePolicy().hasHeightForWidth());
        faceList->setSizePolicy(sizePolicy1);
        faceList->setMaximumSize(QSize(16777215, 16777215));
        faceList->setAlternatingRowColors(true);
        faceList->setSelectionMode(QAbstractItemView::ExtendedSelection);

        gridLayout_2->addWidget(faceList, 0, 0, 1, 1);

        flsp_label = new QLabel(groupBox_3);
        flsp_label->setObjectName(QStringLiteral("flsp_label"));

        gridLayout_2->addWidget(flsp_label, 1, 0, 1, 1);

        flsp = new QLineEdit(groupBox_3);
        flsp->setObjectName(QStringLiteral("flsp"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(1);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(flsp->sizePolicy().hasHeightForWidth());
        flsp->setSizePolicy(sizePolicy2);

        gridLayout_2->addWidget(flsp, 2, 0, 1, 1);


        gridLayout_13->addWidget(groupBox_3, 0, 0, 1, 1);

        gridLayout_12 = new QGridLayout();
        gridLayout_12->setObjectName(QStringLiteral("gridLayout_12"));
        gridLayout_12->setHorizontalSpacing(5);
        gridLayout_12->setVerticalSpacing(15);
        gridLayout_12->setContentsMargins(-1, -1, -1, 0);
        gridLayout_8 = new QGridLayout();
        gridLayout_8->setSpacing(5);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        bcGrp_B = new QGroupBox(sv4guisvFSIBCWidget);
        bcGrp_B->setObjectName(QStringLiteral("bcGrp_B"));
        bcGrp_B->setEnabled(true);
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(25);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(bcGrp_B->sizePolicy().hasHeightForWidth());
        bcGrp_B->setSizePolicy(sizePolicy3);
        gridLayout = new QGridLayout(bcGrp_B);
        gridLayout->setSpacing(5);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 5, 0, 0);
        bcGrp = new QComboBox(bcGrp_B);
        bcGrp->addItem(QString());
        bcGrp->addItem(QString());
        bcGrp->setObjectName(QStringLiteral("bcGrp"));
        bcGrp->setEnabled(false);

        gridLayout->addWidget(bcGrp, 0, 0, 1, 1);


        gridLayout_8->addWidget(bcGrp_B, 0, 0, 1, 1);

        directionalBc_box = new QGroupBox(sv4guisvFSIBCWidget);
        directionalBc_box->setObjectName(QStringLiteral("directionalBc_box"));
        directionalBc_box->setEnabled(true);
        sizePolicy3.setHeightForWidth(directionalBc_box->sizePolicy().hasHeightForWidth());
        directionalBc_box->setSizePolicy(sizePolicy3);
        directionalBc_box->setFlat(false);
        directionalBc_box->setCheckable(true);
        directionalBc_box->setChecked(false);
        gridLayout_3 = new QGridLayout(directionalBc_box);
        gridLayout_3->setSpacing(5);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 5, 0, 0);
        directionalBc = new QSpinBox(directionalBc_box);
        directionalBc->setObjectName(QStringLiteral("directionalBc"));
        directionalBc->setMinimum(1);
        directionalBc->setMaximum(3);
        directionalBc->setValue(1);

        gridLayout_3->addWidget(directionalBc, 0, 0, 1, 1);


        gridLayout_8->addWidget(directionalBc_box, 0, 1, 1, 1);


        gridLayout_12->addLayout(gridLayout_8, 0, 0, 1, 1);

        profile_box = new QGroupBox(sv4guisvFSIBCWidget);
        profile_box->setObjectName(QStringLiteral("profile_box"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(1);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(profile_box->sizePolicy().hasHeightForWidth());
        profile_box->setSizePolicy(sizePolicy4);
        gridLayout_5 = new QGridLayout(profile_box);
        gridLayout_5->setSpacing(5);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 10, 0, 0);
        line_5 = new QFrame(profile_box);
        line_5->setObjectName(QStringLiteral("line_5"));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);

        gridLayout_5->addWidget(line_5, 6, 0, 1, 1);

        flat_profile = new QGroupBox(profile_box);
        flat_profile->setObjectName(QStringLiteral("flat_profile"));
        flat_profile->setMaximumSize(QSize(16777215, 20));
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        font.setKerning(true);
        flat_profile->setFont(font);
        flat_profile->setCheckable(true);
        flat_profile->setChecked(true);

        gridLayout_5->addWidget(flat_profile, 3, 0, 1, 1);

        zero_out_perimeter = new QCheckBox(profile_box);
        zero_out_perimeter->setObjectName(QStringLiteral("zero_out_perimeter"));

        gridLayout_5->addWidget(zero_out_perimeter, 0, 0, 1, 1);

        impose_flux = new QCheckBox(profile_box);
        impose_flux->setObjectName(QStringLiteral("impose_flux"));

        gridLayout_5->addWidget(impose_flux, 1, 0, 1, 1);

        line_4 = new QFrame(profile_box);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        gridLayout_5->addWidget(line_4, 2, 0, 1, 1);

        parabolic_profile = new QGroupBox(profile_box);
        parabolic_profile->setObjectName(QStringLiteral("parabolic_profile"));
        parabolic_profile->setMaximumSize(QSize(16777215, 20));
        parabolic_profile->setCheckable(true);
        parabolic_profile->setChecked(false);

        gridLayout_5->addWidget(parabolic_profile, 4, 0, 1, 1);

        user_defined_profile = new QGroupBox(profile_box);
        user_defined_profile->setObjectName(QStringLiteral("user_defined_profile"));
        sizePolicy4.setHeightForWidth(user_defined_profile->sizePolicy().hasHeightForWidth());
        user_defined_profile->setSizePolicy(sizePolicy4);
        user_defined_profile->setCheckable(true);
        user_defined_profile->setChecked(false);
        gridLayout_11 = new QGridLayout(user_defined_profile);
        gridLayout_11->setObjectName(QStringLiteral("gridLayout_11"));
        gridLayout_11->setHorizontalSpacing(5);
        gridLayout_11->setVerticalSpacing(0);
        gridLayout_11->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(user_defined_profile);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_11->addWidget(label_3, 0, 0, 1, 1);

        lineEditProfile = new QLineEdit(user_defined_profile);
        lineEditProfile->setObjectName(QStringLiteral("lineEditProfile"));
        sizePolicy2.setHeightForWidth(lineEditProfile->sizePolicy().hasHeightForWidth());
        lineEditProfile->setSizePolicy(sizePolicy2);

        gridLayout_11->addWidget(lineEditProfile, 1, 0, 1, 1);

        btnProfile = new QToolButton(user_defined_profile);
        btnProfile->setObjectName(QStringLiteral("btnProfile"));

        gridLayout_11->addWidget(btnProfile, 1, 1, 1, 1);


        gridLayout_5->addWidget(user_defined_profile, 5, 0, 1, 1);

        checkBoxImposeIntegral = new QCheckBox(profile_box);
        checkBoxImposeIntegral->setObjectName(QStringLiteral("checkBoxImposeIntegral"));

        gridLayout_5->addWidget(checkBoxImposeIntegral, 7, 0, 1, 1);

        gridLayout_16 = new QGridLayout();
        gridLayout_16->setSpacing(5);
        gridLayout_16->setObjectName(QStringLiteral("gridLayout_16"));
        label_4 = new QLabel(profile_box);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_16->addWidget(label_4, 0, 0, 1, 1);

        lineEditDirection = new QLineEdit(profile_box);
        lineEditDirection->setObjectName(QStringLiteral("lineEditDirection"));

        gridLayout_16->addWidget(lineEditDirection, 0, 1, 1, 1);


        gridLayout_5->addLayout(gridLayout_16, 8, 0, 1, 1);


        gridLayout_12->addWidget(profile_box, 3, 0, 1, 1);

        time_dependance_box = new QGroupBox(sv4guisvFSIBCWidget);
        time_dependance_box->setObjectName(QStringLiteral("time_dependance_box"));
        sizePolicy4.setHeightForWidth(time_dependance_box->sizePolicy().hasHeightForWidth());
        time_dependance_box->setSizePolicy(sizePolicy4);
        gridLayout_10 = new QGridLayout(time_dependance_box);
        gridLayout_10->setSpacing(5);
        gridLayout_10->setObjectName(QStringLiteral("gridLayout_10"));
        gridLayout_10->setContentsMargins(0, 10, 0, 0);
        resistance_box = new QGroupBox(time_dependance_box);
        resistance_box->setObjectName(QStringLiteral("resistance_box"));
        resistance_box->setCheckable(true);
        resistance_box->setChecked(false);
        gridLayout_9 = new QGridLayout(resistance_box);
        gridLayout_9->setSpacing(5);
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        gridLayout_9->setContentsMargins(0, 2, 0, 0);
        resistance_value = new QLineEdit(resistance_box);
        resistance_value->setObjectName(QStringLiteral("resistance_value"));
        QSizePolicy sizePolicy5(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(resistance_value->sizePolicy().hasHeightForWidth());
        resistance_value->setSizePolicy(sizePolicy5);
        resistance_value->setInputMethodHints(Qt::ImhPreferNumbers);

        gridLayout_9->addWidget(resistance_value, 0, 1, 1, 1);

        prop_4_txt_2 = new QLabel(resistance_box);
        prop_4_txt_2->setObjectName(QStringLiteral("prop_4_txt_2"));
        QSizePolicy sizePolicy6(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(prop_4_txt_2->sizePolicy().hasHeightForWidth());
        prop_4_txt_2->setSizePolicy(sizePolicy6);
        prop_4_txt_2->setMinimumSize(QSize(0, 27));

        gridLayout_9->addWidget(prop_4_txt_2, 0, 0, 1, 1);


        gridLayout_10->addWidget(resistance_box, 3, 0, 1, 1);

        steady_box = new QGroupBox(time_dependance_box);
        steady_box->setObjectName(QStringLiteral("steady_box"));
        steady_box->setCheckable(true);
        gridLayout_6 = new QGridLayout(steady_box);
        gridLayout_6->setSpacing(5);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        gridLayout_6->setContentsMargins(0, 2, 0, 0);
        steady_value = new QLineEdit(steady_box);
        steady_value->setObjectName(QStringLiteral("steady_value"));
        sizePolicy5.setHeightForWidth(steady_value->sizePolicy().hasHeightForWidth());
        steady_value->setSizePolicy(sizePolicy5);
        steady_value->setInputMethodHints(Qt::ImhFormattedNumbersOnly);

        gridLayout_6->addWidget(steady_value, 0, 1, 1, 1);

        prop_4_txt = new QLabel(steady_box);
        prop_4_txt->setObjectName(QStringLiteral("prop_4_txt"));
        sizePolicy6.setHeightForWidth(prop_4_txt->sizePolicy().hasHeightForWidth());
        prop_4_txt->setSizePolicy(sizePolicy6);
        prop_4_txt->setMinimumSize(QSize(0, 27));

        gridLayout_6->addWidget(prop_4_txt, 0, 0, 1, 1);


        gridLayout_10->addWidget(steady_box, 0, 0, 1, 1);

        coupled_box = new QGroupBox(time_dependance_box);
        coupled_box->setObjectName(QStringLiteral("coupled_box"));
        coupled_box->setMaximumSize(QSize(16777215, 20));
        coupled_box->setCheckable(true);
        coupled_box->setChecked(false);

        gridLayout_10->addWidget(coupled_box, 4, 0, 1, 1);

        line_3 = new QFrame(time_dependance_box);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        gridLayout_10->addWidget(line_3, 5, 0, 1, 1);

        general_box = new QGroupBox(time_dependance_box);
        general_box->setObjectName(QStringLiteral("general_box"));
        general_box->setCheckable(true);
        general_box->setChecked(false);
        gridLayout_4 = new QGridLayout(general_box);
        gridLayout_4->setSpacing(5);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 2, 0, 0);
        label_2 = new QLabel(general_box);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_4->addWidget(label_2, 0, 0, 1, 1);

        lineEditGeneral = new QLineEdit(general_box);
        lineEditGeneral->setObjectName(QStringLiteral("lineEditGeneral"));
        sizePolicy2.setHeightForWidth(lineEditGeneral->sizePolicy().hasHeightForWidth());
        lineEditGeneral->setSizePolicy(sizePolicy2);

        gridLayout_4->addWidget(lineEditGeneral, 1, 0, 1, 1);

        btnGeneral = new QToolButton(general_box);
        btnGeneral->setObjectName(QStringLiteral("btnGeneral"));

        gridLayout_4->addWidget(btnGeneral, 1, 1, 1, 1);


        gridLayout_10->addWidget(general_box, 6, 0, 1, 1);

        projection_box = new QGroupBox(time_dependance_box);
        projection_box->setObjectName(QStringLiteral("projection_box"));
        projection_box->setCheckable(true);
        projection_box->setChecked(false);
        gridLayout_15 = new QGridLayout(projection_box);
        gridLayout_15->setSpacing(5);
        gridLayout_15->setObjectName(QStringLiteral("gridLayout_15"));
        gridLayout_15->setContentsMargins(0, 2, 0, 0);
        comboBoxProjection = new QComboBox(projection_box);
        comboBoxProjection->setObjectName(QStringLiteral("comboBoxProjection"));

        gridLayout_15->addWidget(comboBoxProjection, 0, 0, 1, 1);


        gridLayout_10->addWidget(projection_box, 8, 0, 1, 1);

        line_2 = new QFrame(time_dependance_box);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout_10->addWidget(line_2, 2, 0, 1, 1);

        unsteady_box = new QGroupBox(time_dependance_box);
        unsteady_box->setObjectName(QStringLiteral("unsteady_box"));
        sizePolicy4.setHeightForWidth(unsteady_box->sizePolicy().hasHeightForWidth());
        unsteady_box->setSizePolicy(sizePolicy4);
        unsteady_box->setCheckable(true);
        unsteady_box->setChecked(false);
        gridLayout_7 = new QGridLayout(unsteady_box);
        gridLayout_7->setSpacing(5);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        gridLayout_7->setContentsMargins(0, 2, 0, 0);
        label = new QLabel(unsteady_box);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_7->addWidget(label, 0, 0, 1, 1);

        lineEditTemporal = new QLineEdit(unsteady_box);
        lineEditTemporal->setObjectName(QStringLiteral("lineEditTemporal"));
        sizePolicy2.setHeightForWidth(lineEditTemporal->sizePolicy().hasHeightForWidth());
        lineEditTemporal->setSizePolicy(sizePolicy2);

        gridLayout_7->addWidget(lineEditTemporal, 1, 0, 1, 1);

        btnTemporal = new QToolButton(unsteady_box);
        btnTemporal->setObjectName(QStringLiteral("btnTemporal"));

        gridLayout_7->addWidget(btnTemporal, 1, 1, 1, 1);


        gridLayout_10->addWidget(unsteady_box, 1, 0, 1, 1);

        line = new QFrame(time_dependance_box);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_10->addWidget(line, 7, 0, 1, 1);


        gridLayout_12->addWidget(time_dependance_box, 1, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_12->addItem(verticalSpacer_2, 4, 0, 1, 1);


        gridLayout_13->addLayout(gridLayout_12, 0, 1, 1, 1);


        gridLayout_14->addLayout(gridLayout_13, 0, 0, 1, 1);

        buttonBox = new QDialogButtonBox(sv4guisvFSIBCWidget);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok|QDialogButtonBox::Reset);

        gridLayout_14->addWidget(buttonBox, 1, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
        flsp_label->setBuddy(btnGeneral);
        label_3->setBuddy(btnTemporal);
        prop_4_txt_2->setBuddy(steady_value);
        prop_4_txt->setBuddy(steady_value);
        label_2->setBuddy(btnGeneral);
        label->setBuddy(btnTemporal);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(bcGrp, directionalBc_box);
        QWidget::setTabOrder(directionalBc_box, directionalBc);
        QWidget::setTabOrder(directionalBc, buttonBox);

        retranslateUi(sv4guisvFSIBCWidget);

        bcGrp->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(sv4guisvFSIBCWidget);
    } // setupUi

    void retranslateUi(QDialog *sv4guisvFSIBCWidget)
    {
        sv4guisvFSIBCWidget->setWindowTitle(QApplication::translate("sv4guisvFSIBCWidget", "Set Boundary Conditions", nullptr));
        groupBox_3->setTitle(QApplication::translate("sv4guisvFSIBCWidget", "Face list", nullptr));
#ifndef QT_NO_TOOLTIP
        faceList->setToolTip(QApplication::translate("sv4guisvFSIBCWidget", "List of added faces", nullptr));
#endif // QT_NO_TOOLTIP
        flsp_label->setText(QApplication::translate("sv4guisvFSIBCWidget", "Search pattern:", nullptr));
        bcGrp_B->setTitle(QApplication::translate("sv4guisvFSIBCWidget", "BC Type", nullptr));
        bcGrp->setItemText(0, QApplication::translate("sv4guisvFSIBCWidget", "Dirichlet", nullptr));
        bcGrp->setItemText(1, QApplication::translate("sv4guisvFSIBCWidget", "Neumann", nullptr));

#ifndef QT_NO_STATUSTIP
        bcGrp->setStatusTip(QApplication::translate("sv4guisvFSIBCWidget", "Prescribed (Dirichlet) or Weakly imposed (Neumann) BC", nullptr));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_STATUSTIP
        directionalBc_box->setStatusTip(QApplication::translate("sv4guisvFSIBCWidget", "Apply BC only in particular direction", nullptr));
#endif // QT_NO_STATUSTIP
        directionalBc_box->setTitle(QApplication::translate("sv4guisvFSIBCWidget", "Directional BC", nullptr));
#ifndef QT_NO_STATUSTIP
        directionalBc->setStatusTip(QApplication::translate("sv4guisvFSIBCWidget", "The direction to apply BC (1: X, 2: Y, 3: Z)", nullptr));
#endif // QT_NO_STATUSTIP
        profile_box->setTitle(QApplication::translate("sv4guisvFSIBCWidget", "Profile", nullptr));
        flat_profile->setTitle(QApplication::translate("sv4guisvFSIBCWidget", "F&lat", nullptr));
        zero_out_perimeter->setText(QApplication::translate("sv4guisvFSIBCWidget", "&Zero out perimeter", nullptr));
        impose_flux->setText(QApplication::translate("sv4guisvFSIBCWidget", "&Impose flux", nullptr));
        parabolic_profile->setTitle(QApplication::translate("sv4guisvFSIBCWidget", "&Parabolic", nullptr));
        user_defined_profile->setTitle(QApplication::translate("sv4guisvFSIBCWidget", "User &defined", nullptr));
        label_3->setText(QApplication::translate("sv4guisvFSIBCWidget", "S&patial profile file path", nullptr));
#ifndef QT_NO_STATUSTIP
        btnProfile->setStatusTip(QApplication::translate("sv4guisvFSIBCWidget", "Browse for the file containing rows of\\n <t> <value>", nullptr));
#endif // QT_NO_STATUSTIP
        btnProfile->setText(QApplication::translate("sv4guisvFSIBCWidget", "...", nullptr));
        checkBoxImposeIntegral->setText(QApplication::translate("sv4guisvFSIBCWidget", "Impose on state variable integral", nullptr));
        label_4->setText(QApplication::translate("sv4guisvFSIBCWidget", "Effective direction:", nullptr));
        time_dependance_box->setTitle(QApplication::translate("sv4guisvFSIBCWidget", "Time dependance", nullptr));
        resistance_box->setTitle(QApplication::translate("sv4guisvFSIBCWidget", "Resistance", nullptr));
#ifndef QT_NO_STATUSTIP
        resistance_value->setStatusTip(QApplication::translate("sv4guisvFSIBCWidget", "The average nodal value", nullptr));
#endif // QT_NO_STATUSTIP
        resistance_value->setText(QApplication::translate("sv4guisvFSIBCWidget", "0.0", nullptr));
        prop_4_txt_2->setText(QApplication::translate("sv4guisvFSIBCWidget", "&Value:", nullptr));
        steady_box->setTitle(QApplication::translate("sv4guisvFSIBCWidget", "Steady", nullptr));
#ifndef QT_NO_STATUSTIP
        steady_value->setStatusTip(QApplication::translate("sv4guisvFSIBCWidget", "The average nodal value", nullptr));
#endif // QT_NO_STATUSTIP
        steady_value->setText(QApplication::translate("sv4guisvFSIBCWidget", "0.0", nullptr));
        prop_4_txt->setText(QApplication::translate("sv4guisvFSIBCWidget", "Value:", nullptr));
#ifndef QT_NO_STATUSTIP
        coupled_box->setStatusTip(QApplication::translate("sv4guisvFSIBCWidget", "Couple to BC (will be referenced in cplBC library)", nullptr));
#endif // QT_NO_STATUSTIP
        coupled_box->setTitle(QApplication::translate("sv4guisvFSIBCWidget", "Coupled", nullptr));
#ifndef QT_NO_STATUSTIP
        general_box->setStatusTip(QApplication::translate("sv4guisvFSIBCWidget", "Imposed moving on the boundaries (Only for FSI eqaution)", nullptr));
#endif // QT_NO_STATUSTIP
        general_box->setTitle(QApplication::translate("sv4guisvFSIBCWidget", "General", nullptr));
        label_2->setText(QApplication::translate("sv4guisvFSIBCWidget", "Temporal /spatial values file:", nullptr));
#ifndef QT_NO_STATUSTIP
        btnGeneral->setStatusTip(QApplication::translate("sv4guisvFSIBCWidget", "Browse for the file containing nodal position history", nullptr));
#endif // QT_NO_STATUSTIP
        btnGeneral->setText(QApplication::translate("sv4guisvFSIBCWidget", "...", nullptr));
        projection_box->setTitle(QApplication::translate("sv4guisvFSIBCWidget", "Projection", nullptr));
        unsteady_box->setTitle(QApplication::translate("sv4guisvFSIBCWidget", "&Unsteady", nullptr));
        label->setText(QApplication::translate("sv4guisvFSIBCWidget", "&Temporal values file:", nullptr));
#ifndef QT_NO_STATUSTIP
        btnTemporal->setStatusTip(QApplication::translate("sv4guisvFSIBCWidget", "Browse for the file containing rows of\\n <t> <value>", nullptr));
#endif // QT_NO_STATUSTIP
        btnTemporal->setText(QApplication::translate("sv4guisvFSIBCWidget", "...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class sv4guisvFSIBCWidget: public Ui_sv4guisvFSIBCWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SV4GUI_SVFSIBCWIDGET_H
