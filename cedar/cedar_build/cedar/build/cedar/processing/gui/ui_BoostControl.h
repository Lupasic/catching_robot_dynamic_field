/********************************************************************************
** Form generated from reading UI file 'BoostControl.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOOSTCONTROL_H
#define UI_BOOSTCONTROL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "cedar/processing/gui/ElementTreeWidget.h"

QT_BEGIN_NAMESPACE

class Ui_BoostControl
{
public:
    QVBoxLayout *verticalLayout;
    cedar::proc::gui::ElementTreeWidget *mpBoostTree;

    void setupUi(QWidget *BoostControl)
    {
        if (BoostControl->objectName().isEmpty())
            BoostControl->setObjectName(QStringLiteral("BoostControl"));
        BoostControl->resize(382, 326);
        verticalLayout = new QVBoxLayout(BoostControl);
        verticalLayout->setContentsMargins(2, 2, 2, 2);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        mpBoostTree = new cedar::proc::gui::ElementTreeWidget(BoostControl);
        mpBoostTree->setObjectName(QStringLiteral("mpBoostTree"));
        mpBoostTree->header()->setStretchLastSection(false);

        verticalLayout->addWidget(mpBoostTree);


        retranslateUi(BoostControl);

        QMetaObject::connectSlotsByName(BoostControl);
    } // setupUi

    void retranslateUi(QWidget *BoostControl)
    {
        BoostControl->setWindowTitle(QApplication::translate("BoostControl", "Boost Control", 0));
        QTreeWidgetItem *___qtreewidgetitem = mpBoostTree->headerItem();
        ___qtreewidgetitem->setText(2, QApplication::translate("BoostControl", "Strength", 0));
        ___qtreewidgetitem->setText(1, QApplication::translate("BoostControl", "Active", 0));
        ___qtreewidgetitem->setText(0, QApplication::translate("BoostControl", "Boost", 0));
    } // retranslateUi

};

namespace Ui {
    class BoostControl: public Ui_BoostControl {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOOSTCONTROL_H
