/********************************************************************************
** Form generated from reading UI file 'SceneControl.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCENECONTROL_H
#define UI_SCENECONTROL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>
#include "cedar/auxiliaries/gui/Viewer.h"

QT_BEGIN_NAMESPACE

class Ui_SceneControl
{
public:
    QHBoxLayout *horizontalLayout;
    cedar::aux::gui::Viewer *mpView;

    void setupUi(QWidget *SceneControl)
    {
        if (SceneControl->objectName().isEmpty())
            SceneControl->setObjectName(QStringLiteral("SceneControl"));
        SceneControl->resize(741, 369);
        SceneControl->setFocusPolicy(Qt::StrongFocus);
        horizontalLayout = new QHBoxLayout(SceneControl);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        mpView = new cedar::aux::gui::Viewer(SceneControl);
        mpView->setObjectName(QStringLiteral("mpView"));

        horizontalLayout->addWidget(mpView);


        retranslateUi(SceneControl);

        QMetaObject::connectSlotsByName(SceneControl);
    } // setupUi

    void retranslateUi(QWidget *SceneControl)
    {
        SceneControl->setWindowTitle(QApplication::translate("SceneControl", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class SceneControl: public Ui_SceneControl {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCENECONTROL_H
