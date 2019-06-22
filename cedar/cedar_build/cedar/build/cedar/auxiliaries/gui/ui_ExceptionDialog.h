/********************************************************************************
** Form generated from reading UI file 'ExceptionDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXCEPTIONDIALOG_H
#define UI_EXCEPTIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ExceptionDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *mpIcon;
    QLabel *mpExceptionInfo;
    QTextBrowser *mpDetails;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *mpDetailsButton;
    QPushButton *mpOkButton;

    void setupUi(QDialog *ExceptionDialog)
    {
        if (ExceptionDialog->objectName().isEmpty())
            ExceptionDialog->setObjectName(QStringLiteral("ExceptionDialog"));
        ExceptionDialog->resize(614, 174);
        verticalLayout_2 = new QVBoxLayout(ExceptionDialog);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        mpIcon = new QLabel(ExceptionDialog);
        mpIcon->setObjectName(QStringLiteral("mpIcon"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mpIcon->sizePolicy().hasHeightForWidth());
        mpIcon->setSizePolicy(sizePolicy);
        mpIcon->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        horizontalLayout_2->addWidget(mpIcon);

        mpExceptionInfo = new QLabel(ExceptionDialog);
        mpExceptionInfo->setObjectName(QStringLiteral("mpExceptionInfo"));
        sizePolicy.setHeightForWidth(mpExceptionInfo->sizePolicy().hasHeightForWidth());
        mpExceptionInfo->setSizePolicy(sizePolicy);
        mpExceptionInfo->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        mpExceptionInfo->setWordWrap(true);

        horizontalLayout_2->addWidget(mpExceptionInfo);

        horizontalLayout_2->setStretch(1, 1);

        verticalLayout_2->addLayout(horizontalLayout_2);

        mpDetails = new QTextBrowser(ExceptionDialog);
        mpDetails->setObjectName(QStringLiteral("mpDetails"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mpDetails->sizePolicy().hasHeightForWidth());
        mpDetails->setSizePolicy(sizePolicy1);

        verticalLayout_2->addWidget(mpDetails);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        mpDetailsButton = new QPushButton(ExceptionDialog);
        mpDetailsButton->setObjectName(QStringLiteral("mpDetailsButton"));

        horizontalLayout->addWidget(mpDetailsButton);

        mpOkButton = new QPushButton(ExceptionDialog);
        mpOkButton->setObjectName(QStringLiteral("mpOkButton"));

        horizontalLayout->addWidget(mpOkButton);


        verticalLayout_2->addLayout(horizontalLayout);

        verticalLayout_2->setStretch(0, 1);
        verticalLayout_2->setStretch(1, 1);

        retranslateUi(ExceptionDialog);
        QObject::connect(mpDetailsButton, SIGNAL(clicked()), mpDetails, SLOT(show()));
        QObject::connect(mpOkButton, SIGNAL(clicked()), ExceptionDialog, SLOT(accept()));

        QMetaObject::connectSlotsByName(ExceptionDialog);
    } // setupUi

    void retranslateUi(QDialog *ExceptionDialog)
    {
        ExceptionDialog->setWindowTitle(QApplication::translate("ExceptionDialog", "Exception", 0));
        mpIcon->setText(QApplication::translate("ExceptionDialog", "ICON", 0));
        mpExceptionInfo->setText(QApplication::translate("ExceptionDialog", "This is where the exception goes.", 0));
        mpDetailsButton->setText(QApplication::translate("ExceptionDialog", "show details", 0));
        mpOkButton->setText(QApplication::translate("ExceptionDialog", "ok", 0));
    } // retranslateUi

};

namespace Ui {
    class ExceptionDialog: public Ui_ExceptionDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXCEPTIONDIALOG_H
