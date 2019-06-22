/********************************************************************************
** Form generated from reading UI file 'SettingsWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGSWIDGET_H
#define UI_SETTINGSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "cedar/auxiliaries/gui/DirectoryParameter.h"
#include "cedar/auxiliaries/gui/EnumParameter.h"
#include "cedar/auxiliaries/gui/StringParameter.h"

QT_BEGIN_NAMESPACE

class Ui_SettingsWidget
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_2;
    QFormLayout *formLayout_2;
    QLabel *label_3;
    cedar::aux::gui::DirectoryParameter *mpRecorderWorkspaceEdit;
    QLabel *label_4;
    cedar::aux::gui::EnumParameter *mpRecordingFormatSelector;
    QGroupBox *groupBox;
    QFormLayout *formLayout;
    QLabel *label;
    QComboBox *mpDefault2dMatDataPlot;
    QGroupBox *groupBox_net;
    QFormLayout *formLayout_net;
    QLabel *label_net;
    cedar::aux::gui::StringParameter *mpYarpConfigString;
    QSpacerItem *verticalSpacer;
    QLabel *label_2;

    void setupUi(QWidget *SettingsWidget)
    {
        if (SettingsWidget->objectName().isEmpty())
            SettingsWidget->setObjectName(QStringLiteral("SettingsWidget"));
        SettingsWidget->resize(475, 492);
        verticalLayout = new QVBoxLayout(SettingsWidget);
        verticalLayout->setSpacing(3);
        verticalLayout->setContentsMargins(3, 3, 3, 3);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupBox_2 = new QGroupBox(SettingsWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        formLayout_2 = new QFormLayout(groupBox_2);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        formLayout_2->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_3);

        mpRecorderWorkspaceEdit = new cedar::aux::gui::DirectoryParameter(groupBox_2);
        mpRecorderWorkspaceEdit->setObjectName(QStringLiteral("mpRecorderWorkspaceEdit"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, mpRecorderWorkspaceEdit);

        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_4);

        mpRecordingFormatSelector = new cedar::aux::gui::EnumParameter(groupBox_2);
        mpRecordingFormatSelector->setObjectName(QStringLiteral("mpRecordingFormatSelector"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, mpRecordingFormatSelector);


        verticalLayout->addWidget(groupBox_2);

        groupBox = new QGroupBox(SettingsWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        formLayout = new QFormLayout(groupBox);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        mpDefault2dMatDataPlot = new QComboBox(groupBox);
        mpDefault2dMatDataPlot->setObjectName(QStringLiteral("mpDefault2dMatDataPlot"));

        formLayout->setWidget(0, QFormLayout::FieldRole, mpDefault2dMatDataPlot);


        verticalLayout->addWidget(groupBox);

        groupBox_net = new QGroupBox(SettingsWidget);
        groupBox_net->setObjectName(QStringLiteral("groupBox_net"));
        formLayout_net = new QFormLayout(groupBox_net);
        formLayout_net->setObjectName(QStringLiteral("formLayout_net"));
        label_net = new QLabel(groupBox_net);
        label_net->setObjectName(QStringLiteral("label_net"));

        formLayout_net->setWidget(0, QFormLayout::LabelRole, label_net);

        mpYarpConfigString = new cedar::aux::gui::StringParameter(groupBox_net);
        mpYarpConfigString->setObjectName(QStringLiteral("mpYarpConfigString"));

        formLayout_net->setWidget(0, QFormLayout::FieldRole, mpYarpConfigString);


        verticalLayout->addWidget(groupBox_net);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        label_2 = new QLabel(SettingsWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        verticalLayout->setStretch(2, 1);

        retranslateUi(SettingsWidget);

        QMetaObject::connectSlotsByName(SettingsWidget);
    } // setupUi

    void retranslateUi(QWidget *SettingsWidget)
    {
        SettingsWidget->setWindowTitle(QApplication::translate("SettingsWidget", "Form", 0));
        groupBox_2->setTitle(QApplication::translate("SettingsWidget", "Recorder Settings", 0));
        label_3->setText(QApplication::translate("SettingsWidget", "Recorder workspace", 0));
        label_4->setText(QApplication::translate("SettingsWidget", "Recording format", 0));
        groupBox->setTitle(QApplication::translate("SettingsWidget", "Plot settings", 0));
        label->setText(QApplication::translate("SettingsWidget", "Default 2d mat data plot", 0));
        groupBox_net->setTitle(QApplication::translate("SettingsWidget", "Yarp Settings", 0));
        label_net->setText(QApplication::translate("SettingsWidget", "Yarp Server IP Port", 0));
        label_2->setText(QApplication::translate("SettingsWidget", "* changes only take effect after a restart of the application", 0));
    } // retranslateUi

};

namespace Ui {
    class SettingsWidget: public Ui_SettingsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSWIDGET_H
