/********************************************************************************
** Form generated from reading UI file 'GroupParameterDesigner.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GROUPPARAMETERDESIGNER_H
#define UI_GROUPPARAMETERDESIGNER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GroupParameterDesigner
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QComboBox *mpTypeSelector;
    QPushButton *mpAddParameterButton;
    QTreeWidget *mpParameterDisplay;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *mpDeleteSelected;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *GroupParameterDesigner)
    {
        if (GroupParameterDesigner->objectName().isEmpty())
            GroupParameterDesigner->setObjectName(QStringLiteral("GroupParameterDesigner"));
        GroupParameterDesigner->resize(537, 443);
        verticalLayout = new QVBoxLayout(GroupParameterDesigner);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        mpTypeSelector = new QComboBox(GroupParameterDesigner);
        mpTypeSelector->setObjectName(QStringLiteral("mpTypeSelector"));

        horizontalLayout->addWidget(mpTypeSelector);

        mpAddParameterButton = new QPushButton(GroupParameterDesigner);
        mpAddParameterButton->setObjectName(QStringLiteral("mpAddParameterButton"));

        horizontalLayout->addWidget(mpAddParameterButton);

        horizontalLayout->setStretch(0, 1);

        verticalLayout->addLayout(horizontalLayout);

        mpParameterDisplay = new QTreeWidget(GroupParameterDesigner);
        mpParameterDisplay->setObjectName(QStringLiteral("mpParameterDisplay"));
        mpParameterDisplay->setAlternatingRowColors(true);

        verticalLayout->addWidget(mpParameterDisplay);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        mpDeleteSelected = new QPushButton(GroupParameterDesigner);
        mpDeleteSelected->setObjectName(QStringLiteral("mpDeleteSelected"));

        horizontalLayout_2->addWidget(mpDeleteSelected);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(GroupParameterDesigner);

        QMetaObject::connectSlotsByName(GroupParameterDesigner);
    } // setupUi

    void retranslateUi(QWidget *GroupParameterDesigner)
    {
        GroupParameterDesigner->setWindowTitle(QApplication::translate("GroupParameterDesigner", "Form", 0));
        mpAddParameterButton->setText(QApplication::translate("GroupParameterDesigner", "add", 0));
        QTreeWidgetItem *___qtreewidgetitem = mpParameterDisplay->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("GroupParameterDesigner", "name", 0));
        mpDeleteSelected->setText(QApplication::translate("GroupParameterDesigner", "delete selected", 0));
    } // retranslateUi

};

namespace Ui {
    class GroupParameterDesigner: public Ui_GroupParameterDesigner {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GROUPPARAMETERDESIGNER_H
