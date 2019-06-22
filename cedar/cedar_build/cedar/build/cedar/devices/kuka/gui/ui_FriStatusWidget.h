/********************************************************************************
** Form generated from reading UI file 'FriStatusWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRISTATUSWIDGET_H
#define UI_FRISTATUSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FriStatusWidget
{
public:
    QGridLayout *gridLayout;
    QLabel *mpLabelQuality;
    QLabel *mpLabelSampleTime;
    QLabel *mpLabelStateData;
    QLabel *mpLabelQualData;
    QLabel *mpLabelSampleTimeData;
    QLabel *mpLabelState;
    QHBoxLayout *horizontalLayout;
    QLabel *mpLabelPower;
    QLabel *mpLabelPowerData;
    QHBoxLayout *horizontalLayout1;
    QLabel *mpLabelControlScheme;
    QLabel *mpLabelControlSchemeData;

    void setupUi(QWidget *FriStatusWidget)
    {
        if (FriStatusWidget->objectName().isEmpty())
            FriStatusWidget->setObjectName(QStringLiteral("FriStatusWidget"));
        FriStatusWidget->resize(331, 154);
        FriStatusWidget->setFocusPolicy(Qt::StrongFocus);
        gridLayout = new QGridLayout(FriStatusWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        mpLabelQuality = new QLabel(FriStatusWidget);
        mpLabelQuality->setObjectName(QStringLiteral("mpLabelQuality"));

        gridLayout->addWidget(mpLabelQuality, 3, 0, 1, 1);

        mpLabelSampleTime = new QLabel(FriStatusWidget);
        mpLabelSampleTime->setObjectName(QStringLiteral("mpLabelSampleTime"));
        mpLabelSampleTime->setEnabled(true);

        gridLayout->addWidget(mpLabelSampleTime, 4, 0, 1, 1);

        mpLabelStateData = new QLabel(FriStatusWidget);
        mpLabelStateData->setObjectName(QStringLiteral("mpLabelStateData"));

        gridLayout->addWidget(mpLabelStateData, 1, 1, 1, 1);

        mpLabelQualData = new QLabel(FriStatusWidget);
        mpLabelQualData->setObjectName(QStringLiteral("mpLabelQualData"));

        gridLayout->addWidget(mpLabelQualData, 3, 1, 1, 1);

        mpLabelSampleTimeData = new QLabel(FriStatusWidget);
        mpLabelSampleTimeData->setObjectName(QStringLiteral("mpLabelSampleTimeData"));

        gridLayout->addWidget(mpLabelSampleTimeData, 4, 1, 1, 1);

        mpLabelState = new QLabel(FriStatusWidget);
        mpLabelState->setObjectName(QStringLiteral("mpLabelState"));

        gridLayout->addWidget(mpLabelState, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        mpLabelPower = new QLabel(FriStatusWidget);
        mpLabelPower->setObjectName(QStringLiteral("mpLabelPower"));

        horizontalLayout->addWidget(mpLabelPower);


        gridLayout->addLayout(horizontalLayout, 5, 0, 1, 1);

        mpLabelPowerData = new QLabel(FriStatusWidget);
        mpLabelPowerData->setObjectName(QStringLiteral("mpLabelPowerData"));

        gridLayout->addWidget(mpLabelPowerData, 5, 1, 1, 1);

        horizontalLayout1 = new QHBoxLayout();
        horizontalLayout1->setObjectName(QStringLiteral("horizontalLayout1"));
        mpLabelControlScheme = new QLabel(FriStatusWidget);
        mpLabelControlScheme->setObjectName(QStringLiteral("mpLabelControlScheme"));

        horizontalLayout1->addWidget(mpLabelControlScheme);


        gridLayout->addLayout(horizontalLayout1, 6, 0, 1, 1);

        mpLabelControlSchemeData = new QLabel(FriStatusWidget);
        mpLabelControlSchemeData->setObjectName(QStringLiteral("mpLabelControlSchemeData"));

        gridLayout->addWidget(mpLabelControlSchemeData, 6, 1, 1, 1);


        retranslateUi(FriStatusWidget);

        QMetaObject::connectSlotsByName(FriStatusWidget);
    } // setupUi

    void retranslateUi(QWidget *FriStatusWidget)
    {
        FriStatusWidget->setWindowTitle(QApplication::translate("FriStatusWidget", "FRI Status information", 0));
        mpLabelQuality->setText(QApplication::translate("FriStatusWidget", "FRI_QUALITY", 0));
        mpLabelSampleTime->setText(QApplication::translate("FriStatusWidget", "Sample time", 0));
        mpLabelStateData->setText(QApplication::translate("FriStatusWidget", "OFF (0)", 0));
        mpLabelQualData->setText(QApplication::translate("FriStatusWidget", "BAD (0)", 0));
        mpLabelSampleTimeData->setText(QApplication::translate("FriStatusWidget", "0.02s", 0));
        mpLabelState->setText(QApplication::translate("FriStatusWidget", "FRI_STATE", 0));
        mpLabelPower->setText(QApplication::translate("FriStatusWidget", "Drives", 0));
        mpLabelPowerData->setText(QApplication::translate("FriStatusWidget", "off", 0));
        mpLabelControlScheme->setText(QApplication::translate("FriStatusWidget", "Control Scheme", 0));
        mpLabelControlSchemeData->setText(QApplication::translate("FriStatusWidget", "uninitialized", 0));
    } // retranslateUi

};

namespace Ui {
    class FriStatusWidget: public Ui_FriStatusWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRISTATUSWIDGET_H
