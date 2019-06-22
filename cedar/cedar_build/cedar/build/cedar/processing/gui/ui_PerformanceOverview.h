/********************************************************************************
** Form generated from reading UI file 'PerformanceOverview.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PERFORMANCEOVERVIEW_H
#define UI_PERFORMANCEOVERVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PerformanceOverview
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_2;
    QTableWidget *mpStepTimeOverview;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QCheckBox *mpAutoRefresh;
    QPushButton *mpRefreshButton;

    void setupUi(QDialog *PerformanceOverview)
    {
        if (PerformanceOverview->objectName().isEmpty())
            PerformanceOverview->setObjectName(QStringLiteral("PerformanceOverview"));
        PerformanceOverview->resize(625, 549);
        verticalLayout = new QVBoxLayout(PerformanceOverview);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tabWidget = new QTabWidget(PerformanceOverview);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        verticalLayout_2 = new QVBoxLayout(tab);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        mpStepTimeOverview = new QTableWidget(tab);
        if (mpStepTimeOverview->columnCount() < 5)
            mpStepTimeOverview->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        mpStepTimeOverview->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        mpStepTimeOverview->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        mpStepTimeOverview->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        mpStepTimeOverview->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        mpStepTimeOverview->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        mpStepTimeOverview->setObjectName(QStringLiteral("mpStepTimeOverview"));
        mpStepTimeOverview->setEditTriggers(QAbstractItemView::NoEditTriggers);
        mpStepTimeOverview->setSortingEnabled(true);
        mpStepTimeOverview->verticalHeader()->setVisible(false);

        verticalLayout_2->addWidget(mpStepTimeOverview);

        tabWidget->addTab(tab, QString());

        verticalLayout->addWidget(tabWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        mpAutoRefresh = new QCheckBox(PerformanceOverview);
        mpAutoRefresh->setObjectName(QStringLiteral("mpAutoRefresh"));
        mpAutoRefresh->setChecked(true);

        horizontalLayout->addWidget(mpAutoRefresh);

        mpRefreshButton = new QPushButton(PerformanceOverview);
        mpRefreshButton->setObjectName(QStringLiteral("mpRefreshButton"));

        horizontalLayout->addWidget(mpRefreshButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(PerformanceOverview);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(PerformanceOverview);
    } // setupUi

    void retranslateUi(QDialog *PerformanceOverview)
    {
        PerformanceOverview->setWindowTitle(QApplication::translate("PerformanceOverview", "Performance Overview", 0));
        QTableWidgetItem *___qtablewidgetitem = mpStepTimeOverview->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("PerformanceOverview", "Step", 0));
        QTableWidgetItem *___qtablewidgetitem1 = mpStepTimeOverview->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("PerformanceOverview", "steps missed", 0));
        QTableWidgetItem *___qtablewidgetitem2 = mpStepTimeOverview->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("PerformanceOverview", "compute call", 0));
        QTableWidgetItem *___qtablewidgetitem3 = mpStepTimeOverview->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("PerformanceOverview", "round time", 0));
        QTableWidgetItem *___qtablewidgetitem4 = mpStepTimeOverview->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("PerformanceOverview", "locking", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("PerformanceOverview", "Average Times", 0));
#ifndef QT_NO_TOOLTIP
        mpAutoRefresh->setToolTip(QApplication::translate("PerformanceOverview", "Automatically refreshes the overview.", 0));
#endif // QT_NO_TOOLTIP
        mpAutoRefresh->setText(QApplication::translate("PerformanceOverview", "auto refresh", 0));
        mpRefreshButton->setText(QApplication::translate("PerformanceOverview", "refresh", 0));
    } // retranslateUi

};

namespace Ui {
    class PerformanceOverview: public Ui_PerformanceOverview {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PERFORMANCEOVERVIEW_H
