/********************************************************************************
** Form generated from reading UI file 'ArchitectureScriptEditor.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ARCHITECTURESCRIPTEDITOR_H
#define UI_ARCHITECTURESCRIPTEDITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "cedar/auxiliaries/gui/Configurable.h"

QT_BEGIN_NAMESPACE

class Ui_ArchitectureScriptEditor
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QComboBox *mpTypeSelector;
    QPushButton *mpAddButton;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *mpRemoveButton;
    QSplitter *splitter;
    QTableWidget *mpScriptList;
    cedar::aux::gui::Configurable *mpConfigurationEditor;

    void setupUi(QWidget *ArchitectureScriptEditor)
    {
        if (ArchitectureScriptEditor->objectName().isEmpty())
            ArchitectureScriptEditor->setObjectName(QStringLiteral("ArchitectureScriptEditor"));
        ArchitectureScriptEditor->resize(562, 423);
        verticalLayout = new QVBoxLayout(ArchitectureScriptEditor);
        verticalLayout->setContentsMargins(2, 2, 2, 2);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        mpTypeSelector = new QComboBox(ArchitectureScriptEditor);
        mpTypeSelector->setObjectName(QStringLiteral("mpTypeSelector"));

        horizontalLayout->addWidget(mpTypeSelector);

        mpAddButton = new QPushButton(ArchitectureScriptEditor);
        mpAddButton->setObjectName(QStringLiteral("mpAddButton"));

        horizontalLayout->addWidget(mpAddButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        mpRemoveButton = new QPushButton(ArchitectureScriptEditor);
        mpRemoveButton->setObjectName(QStringLiteral("mpRemoveButton"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/cedar/auxiliaries/gui/trashcan.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mpRemoveButton->setIcon(icon);

        horizontalLayout->addWidget(mpRemoveButton);


        verticalLayout->addLayout(horizontalLayout);

        splitter = new QSplitter(ArchitectureScriptEditor);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        mpScriptList = new QTableWidget(splitter);
        if (mpScriptList->columnCount() < 4)
            mpScriptList->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        mpScriptList->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        mpScriptList->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        mpScriptList->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        mpScriptList->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        mpScriptList->setObjectName(QStringLiteral("mpScriptList"));
        mpScriptList->setEditTriggers(QAbstractItemView::NoEditTriggers);
        mpScriptList->setAlternatingRowColors(true);
        mpScriptList->setSelectionBehavior(QAbstractItemView::SelectRows);
        splitter->addWidget(mpScriptList);
        mpScriptList->horizontalHeader()->setStretchLastSection(true);
        mpScriptList->verticalHeader()->setVisible(false);
        mpConfigurationEditor = new cedar::aux::gui::Configurable(splitter);
        mpConfigurationEditor->setObjectName(QStringLiteral("mpConfigurationEditor"));
        splitter->addWidget(mpConfigurationEditor);

        verticalLayout->addWidget(splitter);

        verticalLayout->setStretch(1, 1);

        retranslateUi(ArchitectureScriptEditor);

        QMetaObject::connectSlotsByName(ArchitectureScriptEditor);
    } // setupUi

    void retranslateUi(QWidget *ArchitectureScriptEditor)
    {
        ArchitectureScriptEditor->setWindowTitle(QApplication::translate("ArchitectureScriptEditor", "Architecture Script Editor", 0));
        mpAddButton->setText(QApplication::translate("ArchitectureScriptEditor", "add", 0));
        mpRemoveButton->setText(QString());
        QTableWidgetItem *___qtablewidgetitem = mpScriptList->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("ArchitectureScriptEditor", "name", 0));
        QTableWidgetItem *___qtablewidgetitem1 = mpScriptList->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("ArchitectureScriptEditor", "controls", 0));
        QTableWidgetItem *___qtablewidgetitem2 = mpScriptList->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("ArchitectureScriptEditor", "status", 0));
        QTableWidgetItem *___qtablewidgetitem3 = mpScriptList->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("ArchitectureScriptEditor", "type", 0));
    } // retranslateUi

};

namespace Ui {
    class ArchitectureScriptEditor: public Ui_ArchitectureScriptEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ARCHITECTURESCRIPTEDITOR_H
