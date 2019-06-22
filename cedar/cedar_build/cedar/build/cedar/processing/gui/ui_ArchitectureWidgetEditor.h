/********************************************************************************
** Form generated from reading UI file 'ArchitectureWidgetEditor.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ARCHITECTUREWIDGETEDITOR_H
#define UI_ARCHITECTUREWIDGETEDITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "cedar/auxiliaries/gui/Configurable.h"

QT_BEGIN_NAMESPACE

class Ui_ArchitectureWidgetEditor
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *mpAddButton;
    QLineEdit *mpLineEdit;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *mpRemoveButton;
    QPushButton *mpOkButton;
    QSplitter *mpSplitter;
    QTableWidget *mpTable;
    cedar::aux::gui::Configurable *mpConfigurationEditor;

    void setupUi(QWidget *ArchitectureWidgetEditor)
    {
        if (ArchitectureWidgetEditor->objectName().isEmpty())
            ArchitectureWidgetEditor->setObjectName(QStringLiteral("ArchitectureWidgetEditor"));
        ArchitectureWidgetEditor->resize(562, 423);
        verticalLayout = new QVBoxLayout(ArchitectureWidgetEditor);
        verticalLayout->setContentsMargins(2, 2, 2, 2);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        mpAddButton = new QPushButton(ArchitectureWidgetEditor);
        mpAddButton->setObjectName(QStringLiteral("mpAddButton"));

        horizontalLayout->addWidget(mpAddButton);

        mpLineEdit = new QLineEdit(ArchitectureWidgetEditor);
        mpLineEdit->setObjectName(QStringLiteral("mpLineEdit"));

        horizontalLayout->addWidget(mpLineEdit);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        mpRemoveButton = new QPushButton(ArchitectureWidgetEditor);
        mpRemoveButton->setObjectName(QStringLiteral("mpRemoveButton"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/cedar/auxiliaries/gui/trashcan.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mpRemoveButton->setIcon(icon);

        horizontalLayout->addWidget(mpRemoveButton);

        mpOkButton = new QPushButton(ArchitectureWidgetEditor);
        mpOkButton->setObjectName(QStringLiteral("mpOkButton"));

        horizontalLayout->addWidget(mpOkButton);


        verticalLayout->addLayout(horizontalLayout);

        mpSplitter = new QSplitter(ArchitectureWidgetEditor);
        mpSplitter->setObjectName(QStringLiteral("mpSplitter"));
        mpSplitter->setOrientation(Qt::Horizontal);
        mpTable = new QTableWidget(mpSplitter);
        if (mpTable->columnCount() < 1)
            mpTable->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        mpTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        mpTable->setObjectName(QStringLiteral("mpTable"));
        mpTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        mpTable->setAlternatingRowColors(true);
        mpTable->setSelectionBehavior(QAbstractItemView::SelectRows);
        mpSplitter->addWidget(mpTable);
        mpTable->horizontalHeader()->setStretchLastSection(true);
        mpTable->verticalHeader()->setVisible(false);
        mpConfigurationEditor = new cedar::aux::gui::Configurable(mpSplitter);
        mpConfigurationEditor->setObjectName(QStringLiteral("mpConfigurationEditor"));
        mpSplitter->addWidget(mpConfigurationEditor);

        verticalLayout->addWidget(mpSplitter);

        verticalLayout->setStretch(1, 1);

        retranslateUi(ArchitectureWidgetEditor);

        QMetaObject::connectSlotsByName(ArchitectureWidgetEditor);
    } // setupUi

    void retranslateUi(QWidget *ArchitectureWidgetEditor)
    {
        ArchitectureWidgetEditor->setWindowTitle(QApplication::translate("ArchitectureWidgetEditor", "Architecture Script Editor", 0));
        mpAddButton->setText(QApplication::translate("ArchitectureWidgetEditor", "add", 0));
        mpLineEdit->setPlaceholderText (QApplication::translate("ArchitectureWidgetEditor", "myNewWidgetName", 0));
        mpRemoveButton->setText(QString());
        mpOkButton->setText(QApplication::translate("ArchitectureWidgetEditor", "Save", 0));
        QTableWidgetItem *___qtablewidgetitem = mpTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("ArchitectureWidgetEditor", "name", 0));
    } // retranslateUi

};

namespace Ui {
    class ArchitectureWidgetEditor: public Ui_ArchitectureWidgetEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ARCHITECTUREWIDGETEDITOR_H
