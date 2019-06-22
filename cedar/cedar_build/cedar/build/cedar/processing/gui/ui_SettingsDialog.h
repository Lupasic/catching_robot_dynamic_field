/********************************************************************************
** Form generated from reading UI file 'SettingsDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGSDIALOG_H
#define UI_SETTINGSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include "cedar/auxiliaries/gui/SettingsWidget.h"
#include "cedar/processing/gui/StepManager.h"
#include "cedar/processing/gui/UiSettings.h"

QT_BEGIN_NAMESPACE

class Ui_SettingsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *mpTab;
    cedar::aux::gui::SettingsWidget *mpAuxSettingsTab;
    cedar::proc::gui::UiSettings *mpUiSettingsTab;
    cedar::proc::gui::StepManager *mpStepManageTab;
    QDialogButtonBox *mpDialogButtons;

    void setupUi(QDialog *SettingsDialog)
    {
        if (SettingsDialog->objectName().isEmpty())
            SettingsDialog->setObjectName(QStringLiteral("SettingsDialog"));
        SettingsDialog->resize(700, 491);
        SettingsDialog->setSizeGripEnabled(true);
        SettingsDialog->setModal(true);
        verticalLayout = new QVBoxLayout(SettingsDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        mpTab = new QTabWidget(SettingsDialog);
        mpTab->setObjectName(QStringLiteral("mpTab"));
        mpAuxSettingsTab = new cedar::aux::gui::SettingsWidget();
        mpAuxSettingsTab->setObjectName(QStringLiteral("mpAuxSettingsTab"));
        mpTab->addTab(mpAuxSettingsTab, QString());
        mpUiSettingsTab = new cedar::proc::gui::UiSettings();
        mpUiSettingsTab->setObjectName(QStringLiteral("mpUiSettingsTab"));
        mpTab->addTab(mpUiSettingsTab, QString());
        mpStepManageTab = new cedar::proc::gui::StepManager();
        mpStepManageTab->setObjectName(QStringLiteral("mpStepManageTab"));
        mpTab->addTab(mpStepManageTab, QString());

        verticalLayout->addWidget(mpTab);

        mpDialogButtons = new QDialogButtonBox(SettingsDialog);
        mpDialogButtons->setObjectName(QStringLiteral("mpDialogButtons"));
        mpDialogButtons->setOrientation(Qt::Horizontal);
        mpDialogButtons->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(mpDialogButtons);


        retranslateUi(SettingsDialog);
        QObject::connect(mpDialogButtons, SIGNAL(accepted()), SettingsDialog, SLOT(accept()));
        QObject::connect(mpDialogButtons, SIGNAL(rejected()), SettingsDialog, SLOT(reject()));

        mpTab->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(SettingsDialog);
    } // setupUi

    void retranslateUi(QDialog *SettingsDialog)
    {
        SettingsDialog->setWindowTitle(QApplication::translate("SettingsDialog", "Settings", 0));
        mpTab->setTabText(mpTab->indexOf(mpAuxSettingsTab), QApplication::translate("SettingsDialog", "auxiliaries", 0));
        mpTab->setTabText(mpTab->indexOf(mpUiSettingsTab), QApplication::translate("SettingsDialog", "user interface", 0));
        mpTab->setTabText(mpTab->indexOf(mpStepManageTab), QApplication::translate("SettingsDialog", "manage steps", 0));
    } // retranslateUi

};

namespace Ui {
    class SettingsDialog: public Ui_SettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSDIALOG_H
