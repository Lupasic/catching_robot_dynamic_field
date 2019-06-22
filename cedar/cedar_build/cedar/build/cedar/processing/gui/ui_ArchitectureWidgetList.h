/********************************************************************************
** Form generated from reading UI file 'ArchitectureWidgetList.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ARCHITECTUREWIDGETLIST_H
#define UI_ARCHITECTUREWIDGETLIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ArchitectureWidgetList
{
public:
    QVBoxLayout *verticalLayout;
    QTableWidget *mpTable;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *mpAddButton;
    QPushButton *mpRemoveButton;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *mpOkButon;
    QPushButton *mpCancelButton;
    QSpacerItem *horizontalSpacer;

    void setupUi(QDialog *ArchitectureWidgetList)
    {
        if (ArchitectureWidgetList->objectName().isEmpty())
            ArchitectureWidgetList->setObjectName(QStringLiteral("ArchitectureWidgetList"));
        ArchitectureWidgetList->resize(562, 423);
        verticalLayout = new QVBoxLayout(ArchitectureWidgetList);
        verticalLayout->setContentsMargins(2, 2, 2, 2);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        mpTable = new QTableWidget(ArchitectureWidgetList);
        if (mpTable->columnCount() < 2)
            mpTable->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        mpTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        mpTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        mpTable->setObjectName(QStringLiteral("mpTable"));
        mpTable->setAlternatingRowColors(true);
        mpTable->setSelectionBehavior(QAbstractItemView::SelectRows);
        mpTable->horizontalHeader()->setStretchLastSection(true);
        mpTable->verticalHeader()->setVisible(false);

        verticalLayout->addWidget(mpTable);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        mpAddButton = new QPushButton(ArchitectureWidgetList);
        mpAddButton->setObjectName(QStringLiteral("mpAddButton"));

        horizontalLayout->addWidget(mpAddButton);

        mpRemoveButton = new QPushButton(ArchitectureWidgetList);
        mpRemoveButton->setObjectName(QStringLiteral("mpRemoveButton"));

        horizontalLayout->addWidget(mpRemoveButton);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        mpOkButon = new QPushButton(ArchitectureWidgetList);
        mpOkButon->setObjectName(QStringLiteral("mpOkButon"));

        horizontalLayout->addWidget(mpOkButon);

        mpCancelButton = new QPushButton(ArchitectureWidgetList);
        mpCancelButton->setObjectName(QStringLiteral("mpCancelButton"));

        horizontalLayout->addWidget(mpCancelButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(ArchitectureWidgetList);
        QObject::connect(mpOkButon, SIGNAL(clicked()), ArchitectureWidgetList, SLOT(accept()));
        QObject::connect(mpCancelButton, SIGNAL(clicked()), ArchitectureWidgetList, SLOT(reject()));

        QMetaObject::connectSlotsByName(ArchitectureWidgetList);
    } // setupUi

    void retranslateUi(QDialog *ArchitectureWidgetList)
    {
        ArchitectureWidgetList->setWindowTitle(QApplication::translate("ArchitectureWidgetList", "Architecture Widget List", 0));
        QTableWidgetItem *___qtablewidgetitem = mpTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("ArchitectureWidgetList", "name", 0));
        QTableWidgetItem *___qtablewidgetitem1 = mpTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("ArchitectureWidgetList", "path", 0));
        mpAddButton->setText(QApplication::translate("ArchitectureWidgetList", "add", 0));
        mpRemoveButton->setText(QApplication::translate("ArchitectureWidgetList", "remove", 0));
        mpOkButon->setText(QApplication::translate("ArchitectureWidgetList", "ok", 0));
        mpCancelButton->setText(QApplication::translate("ArchitectureWidgetList", "cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class ArchitectureWidgetList: public Ui_ArchitectureWidgetList {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ARCHITECTUREWIDGETLIST_H
