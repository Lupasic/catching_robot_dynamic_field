/********************************************************************************
** Form generated from reading UI file 'ArchitectureConsistencyCheck.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ARCHITECTURECONSISTENCYCHECK_H
#define UI_ARCHITECTURECONSISTENCYCHECK_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ConsistencyCheck
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTableWidget *mpIssueTable;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *mpRecheckBtn;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *ConsistencyCheck)
    {
        if (ConsistencyCheck->objectName().isEmpty())
            ConsistencyCheck->setObjectName(QStringLiteral("ConsistencyCheck"));
        ConsistencyCheck->resize(400, 300);
        verticalLayout = new QVBoxLayout(ConsistencyCheck);
        verticalLayout->setContentsMargins(2, 2, 2, 2);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(ConsistencyCheck);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        mpIssueTable = new QTableWidget(ConsistencyCheck);
        if (mpIssueTable->columnCount() < 2)
            mpIssueTable->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        mpIssueTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        mpIssueTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        mpIssueTable->setObjectName(QStringLiteral("mpIssueTable"));
        mpIssueTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        mpIssueTable->setAlternatingRowColors(true);
        mpIssueTable->setSelectionMode(QAbstractItemView::SingleSelection);
        mpIssueTable->setSelectionBehavior(QAbstractItemView::SelectRows);
        mpIssueTable->horizontalHeader()->setStretchLastSection(true);
        mpIssueTable->verticalHeader()->setVisible(false);

        verticalLayout->addWidget(mpIssueTable);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        mpRecheckBtn = new QPushButton(ConsistencyCheck);
        mpRecheckBtn->setObjectName(QStringLiteral("mpRecheckBtn"));

        horizontalLayout->addWidget(mpRecheckBtn);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(ConsistencyCheck);

        QMetaObject::connectSlotsByName(ConsistencyCheck);
    } // setupUi

    void retranslateUi(QWidget *ConsistencyCheck)
    {
        ConsistencyCheck->setWindowTitle(QApplication::translate("ConsistencyCheck", "Architecture Consistency Check", 0));
        label->setText(QApplication::translate("ConsistencyCheck", "Double-Click on an item to jump to the location in the scene.", 0));
        QTableWidgetItem *___qtablewidgetitem = mpIssueTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("ConsistencyCheck", "#", 0));
        QTableWidgetItem *___qtablewidgetitem1 = mpIssueTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("ConsistencyCheck", "Issue", 0));
        mpRecheckBtn->setText(QApplication::translate("ConsistencyCheck", "recheck", 0));
    } // retranslateUi

};

namespace Ui {
    class ConsistencyCheck: public Ui_ConsistencyCheck {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ARCHITECTURECONSISTENCYCHECK_H
