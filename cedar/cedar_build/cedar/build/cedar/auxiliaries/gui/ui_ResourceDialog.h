/********************************************************************************
** Form generated from reading UI file 'ResourceDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESOURCEDIALOG_H
#define UI_RESOURCEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ResourceDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTreeWidget *mpResourceList;
    QLineEdit *mpSelectedText;
    QDialogButtonBox *mpButtons;

    void setupUi(QDialog *ResourceDialog)
    {
        if (ResourceDialog->objectName().isEmpty())
            ResourceDialog->setObjectName(QStringLiteral("ResourceDialog"));
        ResourceDialog->resize(400, 300);
        verticalLayout = new QVBoxLayout(ResourceDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        mpResourceList = new QTreeWidget(ResourceDialog);
        mpResourceList->setObjectName(QStringLiteral("mpResourceList"));
        mpResourceList->setHeaderHidden(true);

        verticalLayout->addWidget(mpResourceList);

        mpSelectedText = new QLineEdit(ResourceDialog);
        mpSelectedText->setObjectName(QStringLiteral("mpSelectedText"));
        mpSelectedText->setReadOnly(false);

        verticalLayout->addWidget(mpSelectedText);

        mpButtons = new QDialogButtonBox(ResourceDialog);
        mpButtons->setObjectName(QStringLiteral("mpButtons"));
        mpButtons->setOrientation(Qt::Horizontal);
        mpButtons->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Open);
        mpButtons->setCenterButtons(false);

        verticalLayout->addWidget(mpButtons);


        retranslateUi(ResourceDialog);
        QObject::connect(mpButtons, SIGNAL(accepted()), ResourceDialog, SLOT(accept()));
        QObject::connect(mpButtons, SIGNAL(rejected()), ResourceDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(ResourceDialog);
    } // setupUi

    void retranslateUi(QDialog *ResourceDialog)
    {
        ResourceDialog->setWindowTitle(QApplication::translate("ResourceDialog", "Dialog", 0));
        QTreeWidgetItem *___qtreewidgetitem = mpResourceList->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("ResourceDialog", "Resources", 0));
    } // retranslateUi

};

namespace Ui {
    class ResourceDialog: public Ui_ResourceDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESOURCEDIALOG_H
