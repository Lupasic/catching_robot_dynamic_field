/********************************************************************************
** Form generated from reading UI file 'OneTimeMessageDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ONETIMEMESSAGEDIALOG_H
#define UI_ONETIMEMESSAGEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_OneTimeMessageDialog
{
public:
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *mpTitleLabel;
    QTextEdit *mpMessageText;
    QHBoxLayout *horizontalLayout;
    QPushButton *mpPreviousButton;
    QSpacerItem *horizontalSpacer;
    QLabel *mpPlaceLabel;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *mpNextButton;
    QDialogButtonBox *mpButtonBox;

    void setupUi(QDialog *OneTimeMessageDialog)
    {
        if (OneTimeMessageDialog->objectName().isEmpty())
            OneTimeMessageDialog->setObjectName(QStringLiteral("OneTimeMessageDialog"));
        OneTimeMessageDialog->resize(451, 491);
        OneTimeMessageDialog->setSizeGripEnabled(true);
        OneTimeMessageDialog->setModal(true);
        verticalLayout = new QVBoxLayout(OneTimeMessageDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        mpTitleLabel = new QLabel(OneTimeMessageDialog);
        mpTitleLabel->setObjectName(QStringLiteral("mpTitleLabel"));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        mpTitleLabel->setFont(font);

        verticalLayout_2->addWidget(mpTitleLabel);

        mpMessageText = new QTextEdit(OneTimeMessageDialog);
        mpMessageText->setObjectName(QStringLiteral("mpMessageText"));
        mpMessageText->setReadOnly(true);

        verticalLayout_2->addWidget(mpMessageText);


        verticalLayout->addLayout(verticalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        mpPreviousButton = new QPushButton(OneTimeMessageDialog);
        mpPreviousButton->setObjectName(QStringLiteral("mpPreviousButton"));

        horizontalLayout->addWidget(mpPreviousButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        mpPlaceLabel = new QLabel(OneTimeMessageDialog);
        mpPlaceLabel->setObjectName(QStringLiteral("mpPlaceLabel"));

        horizontalLayout->addWidget(mpPlaceLabel);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        mpNextButton = new QPushButton(OneTimeMessageDialog);
        mpNextButton->setObjectName(QStringLiteral("mpNextButton"));

        horizontalLayout->addWidget(mpNextButton);


        verticalLayout->addLayout(horizontalLayout);

        mpButtonBox = new QDialogButtonBox(OneTimeMessageDialog);
        mpButtonBox->setObjectName(QStringLiteral("mpButtonBox"));
        mpButtonBox->setStandardButtons(QDialogButtonBox::Ok);

        verticalLayout->addWidget(mpButtonBox);


        retranslateUi(OneTimeMessageDialog);
        QObject::connect(mpButtonBox, SIGNAL(accepted()), OneTimeMessageDialog, SLOT(accept()));

        QMetaObject::connectSlotsByName(OneTimeMessageDialog);
    } // setupUi

    void retranslateUi(QDialog *OneTimeMessageDialog)
    {
        OneTimeMessageDialog->setWindowTitle(QApplication::translate("OneTimeMessageDialog", "Messages", 0));
        mpTitleLabel->setText(QApplication::translate("OneTimeMessageDialog", "No messages", 0));
        mpMessageText->setHtml(QApplication::translate("OneTimeMessageDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">There are currently no messages to show.</p></body></html>", 0));
        mpPreviousButton->setText(QApplication::translate("OneTimeMessageDialog", "<<", 0));
        mpPlaceLabel->setText(QApplication::translate("OneTimeMessageDialog", "n/a", 0));
        mpNextButton->setText(QApplication::translate("OneTimeMessageDialog", ">>", 0));
    } // retranslateUi

};

namespace Ui {
    class OneTimeMessageDialog: public Ui_OneTimeMessageDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ONETIMEMESSAGEDIALOG_H
