/********************************************************************************
** Form generated from reading UI file 'UiSettings.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UISETTINGS_H
#define UI_UISETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>
#include "cedar/auxiliaries/gui/BoolParameter.h"
#include "cedar/auxiliaries/gui/DoubleParameter.h"
#include "cedar/auxiliaries/gui/EnumParameter.h"
#include "cedar/auxiliaries/gui/UIntParameter.h"

QT_BEGIN_NAMESPACE

class Ui_UiSettings
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QFormLayout *formLayout;
    QLabel *label;
    cedar::aux::gui::BoolParameter *mpUseGraphicsEffectsEdit;
    QLabel *label_3;
    cedar::aux::gui::EnumParameter *mpStepDisplayMode;
    QLabel *label_7;
    cedar::aux::gui::BoolParameter *mpHighlightConnections;
    QLabel *label_8;
    cedar::aux::gui::UIntParameter *mpMaximumNumberOfLogMessages;
    QLabel *label_9;
    cedar::aux::gui::BoolParameter *mpHighlightHoveredConnection;
    QLabel *label_4;
    cedar::aux::gui::DoubleParameter *mpSnapGridSize;
    QLabel *label_41;
    cedar::aux::gui::BoolParameter *mpUseDynamicFieldIcons;
    QLabel *label_42;
    cedar::aux::gui::UIntParameter *mpAutoSaveInterval;
    QLabel *label_2;
    QGroupBox *groupBox_2;
    QFormLayout *formLayout_2;
    QLabel *label_43;
    cedar::aux::gui::DoubleParameter *mpGrowthFactor;
    QLabel *label_5;
    cedar::aux::gui::DoubleParameter *mpSensitivity;
    QLabel *label_6;
    cedar::aux::gui::BoolParameter *mpSlotGrowthEnabled;

    void setupUi(QWidget *UiSettings)
    {
        if (UiSettings->objectName().isEmpty())
            UiSettings->setObjectName(QStringLiteral("UiSettings"));
        UiSettings->resize(800, 571);
        gridLayout = new QGridLayout(UiSettings);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        groupBox = new QGroupBox(UiSettings);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        formLayout = new QFormLayout(groupBox);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        mpUseGraphicsEffectsEdit = new cedar::aux::gui::BoolParameter(groupBox);
        mpUseGraphicsEffectsEdit->setObjectName(QStringLiteral("mpUseGraphicsEffectsEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, mpUseGraphicsEffectsEdit);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        mpStepDisplayMode = new cedar::aux::gui::EnumParameter(groupBox);
        mpStepDisplayMode->setObjectName(QStringLiteral("mpStepDisplayMode"));

        formLayout->setWidget(1, QFormLayout::FieldRole, mpStepDisplayMode);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QStringLiteral("label_7"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_7);

        mpHighlightConnections = new cedar::aux::gui::BoolParameter(groupBox);
        mpHighlightConnections->setObjectName(QStringLiteral("mpHighlightConnections"));

        formLayout->setWidget(2, QFormLayout::FieldRole, mpHighlightConnections);

        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QStringLiteral("label_8"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_8);

        mpMaximumNumberOfLogMessages = new cedar::aux::gui::UIntParameter(groupBox);
        mpMaximumNumberOfLogMessages->setObjectName(QStringLiteral("mpMaximumNumberOfLogMessages"));

        formLayout->setWidget(4, QFormLayout::FieldRole, mpMaximumNumberOfLogMessages);

        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QStringLiteral("label_9"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_9);

        mpHighlightHoveredConnection = new cedar::aux::gui::BoolParameter(groupBox);
        mpHighlightHoveredConnection->setObjectName(QStringLiteral("mpHighlightHoveredConnection"));

        formLayout->setWidget(3, QFormLayout::FieldRole, mpHighlightHoveredConnection);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_4);

        mpSnapGridSize = new cedar::aux::gui::DoubleParameter(groupBox);
        mpSnapGridSize->setObjectName(QStringLiteral("mpSnapGridSize"));

        formLayout->setWidget(5, QFormLayout::FieldRole, mpSnapGridSize);

        label_41 = new QLabel(groupBox);
        label_41->setObjectName(QStringLiteral("label_41"));

        formLayout->setWidget(6, QFormLayout::LabelRole, label_41);

        mpUseDynamicFieldIcons = new cedar::aux::gui::BoolParameter(groupBox);
        mpUseDynamicFieldIcons->setObjectName(QStringLiteral("mpUseDynamicFieldIcons"));

        formLayout->setWidget(6, QFormLayout::FieldRole, mpUseDynamicFieldIcons);

        label_42 = new QLabel(groupBox);
        label_42->setObjectName(QStringLiteral("label_42"));

        formLayout->setWidget(7, QFormLayout::LabelRole, label_42);

        mpAutoSaveInterval = new cedar::aux::gui::UIntParameter(groupBox);
        mpAutoSaveInterval->setObjectName(QStringLiteral("mpAutoSaveInterval"));

        formLayout->setWidget(7, QFormLayout::FieldRole, mpAutoSaveInterval);


        gridLayout->addWidget(groupBox, 0, 0, 1, 1);

        label_2 = new QLabel(UiSettings);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        groupBox_2 = new QGroupBox(UiSettings);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        formLayout_2 = new QFormLayout(groupBox_2);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        label_43 = new QLabel(groupBox_2);
        label_43->setObjectName(QStringLiteral("label_43"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_43);

        mpGrowthFactor = new cedar::aux::gui::DoubleParameter(groupBox_2);
        mpGrowthFactor->setObjectName(QStringLiteral("mpGrowthFactor"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, mpGrowthFactor);

        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_5);

        mpSensitivity = new cedar::aux::gui::DoubleParameter(groupBox_2);
        mpSensitivity->setObjectName(QStringLiteral("mpSensitivity"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, mpSensitivity);

        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QStringLiteral("label_6"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_6);

        mpSlotGrowthEnabled = new cedar::aux::gui::BoolParameter(groupBox_2);
        mpSlotGrowthEnabled->setObjectName(QStringLiteral("mpSlotGrowthEnabled"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, mpSlotGrowthEnabled);


        gridLayout->addWidget(groupBox_2, 1, 0, 1, 1);

        gridLayout->setRowStretch(2, 1);

        retranslateUi(UiSettings);

        QMetaObject::connectSlotsByName(UiSettings);
    } // setupUi

    void retranslateUi(QWidget *UiSettings)
    {
        UiSettings->setWindowTitle(QApplication::translate("UiSettings", "UI Settings", 0));
        groupBox->setTitle(QApplication::translate("UiSettings", "Display Settings", 0));
#ifndef QT_NO_TOOLTIP
        label->setToolTip(QApplication::translate("UiSettings", "Note: these effects may lead to rendering errors. If you experience many such errors, disable these effects.", 0));
#endif // QT_NO_TOOLTIP
        label->setText(QApplication::translate("UiSettings", "Use Graphics Effects*", 0));
        label_3->setText(QApplication::translate("UiSettings", "Default step display mode", 0));
        label_7->setText(QApplication::translate("UiSettings", "Highlight connections of selected steps", 0));
        label_8->setText(QApplication::translate("UiSettings", "Maximum number of log messages", 0));
        label_9->setText(QApplication::translate("UiSettings", "Highlight connections when hovering over slots", 0));
        label_4->setText(QApplication::translate("UiSettings", "Snapgrid size", 0));
        label_41->setText(QApplication::translate("UiSettings", "Use Dynamic Field Icons", 0));
        label_42->setText(QApplication::translate("UiSettings", "Autosave Interval (seconds)", 0));
        label_2->setText(QApplication::translate("UiSettings", "* changes only take effect after a restart of the application", 0));
        groupBox_2->setTitle(QApplication::translate("UiSettings", "Slot item growth", 0));
        label_43->setText(QApplication::translate("UiSettings", "Growth factor", 0));
        label_5->setText(QApplication::translate("UiSettings", "Sensitivity", 0));
        label_6->setText(QApplication::translate("UiSettings", "Enabled", 0));
    } // retranslateUi

};

namespace Ui {
    class UiSettings: public Ui_UiSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UISETTINGS_H
