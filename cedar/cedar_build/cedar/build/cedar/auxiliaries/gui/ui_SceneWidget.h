/********************************************************************************
** Form generated from reading UI file 'SceneWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCENEWIDGET_H
#define UI_SCENEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SceneWidget
{
public:
    QGridLayout *mpGridLayout;
    QGroupBox *mpObjectSettingsBox;
    QGridLayout *gridLayout_2;
    QLabel *mpLabelLenght;
    QLabel *label_3;
    QLabel *mpLabelName_2;
    QComboBox *mpComboBoxName;
    QLabel *mpLabelHeight;
    QDoubleSpinBox *mpDoubleSpinBoxWidth;
    QDoubleSpinBox *mpDoubleSpinBoxThickness;
    QDoubleSpinBox *mpDoubleSpinBoxLength;
    QDoubleSpinBox *mpDoubleSpinBoxHeight;
    QLabel *mpLabelWidth;
    QLabel *mpLabelRadius;
    QPushButton *mpDeleteObjectPushButton;
    QDoubleSpinBox *mpDoubleSpinBoxRadius;
    QLabel *label_2;
    QGroupBox *mpLocalCoordinateFrameGroupBox;
    QVBoxLayout *mpRigidBodyWidgetLayout;
    QLabel *label;
    QGroupBox *groupBox2;
    QVBoxLayout *mpRigidBodyVisualizationWidgetLayout;

    void setupUi(QWidget *SceneWidget)
    {
        if (SceneWidget->objectName().isEmpty())
            SceneWidget->setObjectName(QStringLiteral("SceneWidget"));
        SceneWidget->resize(544, 639);
        SceneWidget->setFocusPolicy(Qt::StrongFocus);
        mpGridLayout = new QGridLayout(SceneWidget);
        mpGridLayout->setObjectName(QStringLiteral("mpGridLayout"));
        mpObjectSettingsBox = new QGroupBox(SceneWidget);
        mpObjectSettingsBox->setObjectName(QStringLiteral("mpObjectSettingsBox"));
        mpObjectSettingsBox->setEnabled(true);
        gridLayout_2 = new QGridLayout(mpObjectSettingsBox);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        mpLabelLenght = new QLabel(mpObjectSettingsBox);
        mpLabelLenght->setObjectName(QStringLiteral("mpLabelLenght"));

        gridLayout_2->addWidget(mpLabelLenght, 1, 0, 1, 1);

        label_3 = new QLabel(mpObjectSettingsBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_2->addWidget(label_3, 2, 3, 1, 1);

        mpLabelName_2 = new QLabel(mpObjectSettingsBox);
        mpLabelName_2->setObjectName(QStringLiteral("mpLabelName_2"));

        gridLayout_2->addWidget(mpLabelName_2, 0, 0, 1, 1);

        mpComboBoxName = new QComboBox(mpObjectSettingsBox);
        mpComboBoxName->setObjectName(QStringLiteral("mpComboBoxName"));

        gridLayout_2->addWidget(mpComboBoxName, 0, 1, 1, 6);

        mpLabelHeight = new QLabel(mpObjectSettingsBox);
        mpLabelHeight->setObjectName(QStringLiteral("mpLabelHeight"));

        gridLayout_2->addWidget(mpLabelHeight, 1, 5, 1, 1);

        mpDoubleSpinBoxWidth = new QDoubleSpinBox(mpObjectSettingsBox);
        mpDoubleSpinBoxWidth->setObjectName(QStringLiteral("mpDoubleSpinBoxWidth"));
        mpDoubleSpinBoxWidth->setMinimum(0.1);
        mpDoubleSpinBoxWidth->setMaximum(500);
        mpDoubleSpinBoxWidth->setSingleStep(0.1);
        mpDoubleSpinBoxWidth->setValue(1);

        gridLayout_2->addWidget(mpDoubleSpinBoxWidth, 1, 4, 1, 1);

        mpDoubleSpinBoxThickness = new QDoubleSpinBox(mpObjectSettingsBox);
        mpDoubleSpinBoxThickness->setObjectName(QStringLiteral("mpDoubleSpinBoxThickness"));
        mpDoubleSpinBoxThickness->setMinimum(0.1);
        mpDoubleSpinBoxThickness->setMaximum(100);
        mpDoubleSpinBoxThickness->setSingleStep(0.1);

        gridLayout_2->addWidget(mpDoubleSpinBoxThickness, 2, 4, 1, 1);

        mpDoubleSpinBoxLength = new QDoubleSpinBox(mpObjectSettingsBox);
        mpDoubleSpinBoxLength->setObjectName(QStringLiteral("mpDoubleSpinBoxLength"));
        mpDoubleSpinBoxLength->setMinimum(0.1);
        mpDoubleSpinBoxLength->setMaximum(500);
        mpDoubleSpinBoxLength->setSingleStep(0.1);
        mpDoubleSpinBoxLength->setValue(1);

        gridLayout_2->addWidget(mpDoubleSpinBoxLength, 1, 1, 1, 2);

        mpDoubleSpinBoxHeight = new QDoubleSpinBox(mpObjectSettingsBox);
        mpDoubleSpinBoxHeight->setObjectName(QStringLiteral("mpDoubleSpinBoxHeight"));
        mpDoubleSpinBoxHeight->setMinimum(0.1);
        mpDoubleSpinBoxHeight->setMaximum(500);
        mpDoubleSpinBoxHeight->setSingleStep(0.1);
        mpDoubleSpinBoxHeight->setValue(1);

        gridLayout_2->addWidget(mpDoubleSpinBoxHeight, 1, 6, 1, 1);

        mpLabelWidth = new QLabel(mpObjectSettingsBox);
        mpLabelWidth->setObjectName(QStringLiteral("mpLabelWidth"));

        gridLayout_2->addWidget(mpLabelWidth, 1, 3, 1, 1);

        mpLabelRadius = new QLabel(mpObjectSettingsBox);
        mpLabelRadius->setObjectName(QStringLiteral("mpLabelRadius"));

        gridLayout_2->addWidget(mpLabelRadius, 2, 0, 1, 1);

        mpDeleteObjectPushButton = new QPushButton(mpObjectSettingsBox);
        mpDeleteObjectPushButton->setObjectName(QStringLiteral("mpDeleteObjectPushButton"));

        gridLayout_2->addWidget(mpDeleteObjectPushButton, 3, 0, 1, 7);

        mpDoubleSpinBoxRadius = new QDoubleSpinBox(mpObjectSettingsBox);
        mpDoubleSpinBoxRadius->setObjectName(QStringLiteral("mpDoubleSpinBoxRadius"));
        mpDoubleSpinBoxRadius->setMinimum(0.1);
        mpDoubleSpinBoxRadius->setMaximum(500);
        mpDoubleSpinBoxRadius->setSingleStep(0.1);
        mpDoubleSpinBoxRadius->setValue(1);

        gridLayout_2->addWidget(mpDoubleSpinBoxRadius, 2, 1, 1, 2);

        gridLayout_2->setColumnStretch(0, 1);

        mpGridLayout->addWidget(mpObjectSettingsBox, 0, 0, 1, 2);

        label_2 = new QLabel(SceneWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        mpGridLayout->addWidget(label_2, 3, 0, 1, 1);

        mpLocalCoordinateFrameGroupBox = new QGroupBox(SceneWidget);
        mpLocalCoordinateFrameGroupBox->setObjectName(QStringLiteral("mpLocalCoordinateFrameGroupBox"));
        mpRigidBodyWidgetLayout = new QVBoxLayout(mpLocalCoordinateFrameGroupBox);
        mpRigidBodyWidgetLayout->setObjectName(QStringLiteral("mpRigidBodyWidgetLayout"));

        mpGridLayout->addWidget(mpLocalCoordinateFrameGroupBox, 4, 0, 1, 2);

        label = new QLabel(SceneWidget);
        label->setObjectName(QStringLiteral("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setText(QLatin1String("<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans'; font-size:10pt;\">Object visualization</span></p></body></html>"));
        label->setTextFormat(Qt::RichText);

        mpGridLayout->addWidget(label, 1, 0, 1, 2);

        groupBox2 = new QGroupBox(SceneWidget);
        groupBox2->setObjectName(QStringLiteral("groupBox2"));
        mpRigidBodyVisualizationWidgetLayout = new QVBoxLayout(groupBox2);
        mpRigidBodyVisualizationWidgetLayout->setObjectName(QStringLiteral("mpRigidBodyVisualizationWidgetLayout"));

        mpGridLayout->addWidget(groupBox2, 2, 0, 1, 2);


        retranslateUi(SceneWidget);

        QMetaObject::connectSlotsByName(SceneWidget);
    } // setupUi

    void retranslateUi(QWidget *SceneWidget)
    {
        SceneWidget->setWindowTitle(QApplication::translate("SceneWidget", "Form", 0));
        mpObjectSettingsBox->setTitle(QApplication::translate("SceneWidget", "Object Settings", 0));
        mpLabelLenght->setText(QApplication::translate("SceneWidget", "length", 0));
        label_3->setText(QApplication::translate("SceneWidget", "thickness", 0));
        mpLabelName_2->setText(QApplication::translate("SceneWidget", "Name", 0));
        mpLabelHeight->setText(QApplication::translate("SceneWidget", "height", 0));
        mpLabelWidth->setText(QApplication::translate("SceneWidget", "width", 0));
        mpLabelRadius->setText(QApplication::translate("SceneWidget", "radius", 0));
        mpDeleteObjectPushButton->setText(QApplication::translate("SceneWidget", "Delete Object", 0));
        label_2->setText(QApplication::translate("SceneWidget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans'; font-size:10pt;\">Local Coordinate Frame</span></p></body></html>", 0));
        mpLocalCoordinateFrameGroupBox->setTitle(QString());
        groupBox2->setTitle(QString());
    } // retranslateUi

};

namespace Ui {
    class SceneWidget: public Ui_SceneWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCENEWIDGET_H
