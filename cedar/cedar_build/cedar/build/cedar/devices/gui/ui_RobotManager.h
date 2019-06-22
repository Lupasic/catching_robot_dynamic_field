/********************************************************************************
** Form generated from reading UI file 'RobotManager.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ROBOTMANAGER_H
#define UI_ROBOTMANAGER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "cedar/auxiliaries/gui/PropertyPane.h"

QT_BEGIN_NAMESPACE

class Ui_RobotManager
{
public:
    QGridLayout *gridLayout;
    QTabWidget *mpModeTab;
    QWidget *tab;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox_Robots;
    QFormLayout *formLayout_2;
    QListWidget *mpSimpleRobotIconList;
    QGroupBox *groupBox_Setup;
    QVBoxLayout *verticalLayout_6;
    QScrollArea *mpSimpleModeScrollArea;
    QWidget *mpSimpleRobotList;
    QHBoxLayout *mpSimpleRobotListLayout;
    QSpacerItem *horizontalSpacer;
    QWidget *mpAdvancedTab;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout;
    QComboBox *mpRobotSelector;
    QPushButton *mpAddRobotButton;
    QPushButton *mpLoadButton;
    QPushButton *mpRenameButton;
    QPushButton *mpSaveButton;
    QPushButton *mpRemoveButton;
    QTreeWidget *mpRobotTree;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_3;
    cedar::aux::gui::PropertyPane *mpPropertyPane;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *mpCloseButton;

    void setupUi(QWidget *RobotManager)
    {
        if (RobotManager->objectName().isEmpty())
            RobotManager->setObjectName(QStringLiteral("RobotManager"));
        RobotManager->resize(900, 1000);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(RobotManager->sizePolicy().hasHeightForWidth());
        RobotManager->setSizePolicy(sizePolicy);
        RobotManager->setMinimumSize(QSize(0, 0));
        gridLayout = new QGridLayout(RobotManager);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        mpModeTab = new QTabWidget(RobotManager);
        mpModeTab->setObjectName(QStringLiteral("mpModeTab"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mpModeTab->sizePolicy().hasHeightForWidth());
        mpModeTab->setSizePolicy(sizePolicy1);
        mpModeTab->setTabPosition(QTabWidget::South);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tab->setMinimumSize(QSize(800, 0));
        verticalLayout_2 = new QVBoxLayout(tab);
        verticalLayout_2->setSpacing(12);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        groupBox_Robots = new QGroupBox(tab);
        groupBox_Robots->setObjectName(QStringLiteral("groupBox_Robots"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(groupBox_Robots->sizePolicy().hasHeightForWidth());
        groupBox_Robots->setSizePolicy(sizePolicy2);
        groupBox_Robots->setMinimumSize(QSize(0, 200));
        formLayout_2 = new QFormLayout(groupBox_Robots);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        formLayout_2->setSizeConstraint(QLayout::SetNoConstraint);
        formLayout_2->setContentsMargins(-1, -1, -1, 9);
        mpSimpleRobotIconList = new QListWidget(groupBox_Robots);
        mpSimpleRobotIconList->setObjectName(QStringLiteral("mpSimpleRobotIconList"));
        sizePolicy2.setHeightForWidth(mpSimpleRobotIconList->sizePolicy().hasHeightForWidth());
        mpSimpleRobotIconList->setSizePolicy(sizePolicy2);
        mpSimpleRobotIconList->setMinimumSize(QSize(0, 160));
        mpSimpleRobotIconList->setMaximumSize(QSize(16777215, 100));
        mpSimpleRobotIconList->setAcceptDrops(true);
        mpSimpleRobotIconList->setEditTriggers(QAbstractItemView::NoEditTriggers);
        mpSimpleRobotIconList->setDragEnabled(true);
        mpSimpleRobotIconList->setDragDropMode(QAbstractItemView::DragDrop);
        mpSimpleRobotIconList->setIconSize(QSize(128, 128));
        mpSimpleRobotIconList->setTextElideMode(Qt::ElideMiddle);
        mpSimpleRobotIconList->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);
        mpSimpleRobotIconList->setMovement(QListView::Snap);
        mpSimpleRobotIconList->setFlow(QListView::LeftToRight);
        mpSimpleRobotIconList->setResizeMode(QListView::Adjust);
        mpSimpleRobotIconList->setViewMode(QListView::IconMode);
        mpSimpleRobotIconList->setUniformItemSizes(true);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, mpSimpleRobotIconList);


        verticalLayout_2->addWidget(groupBox_Robots);

        groupBox_Setup = new QGroupBox(tab);
        groupBox_Setup->setObjectName(QStringLiteral("groupBox_Setup"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(groupBox_Setup->sizePolicy().hasHeightForWidth());
        groupBox_Setup->setSizePolicy(sizePolicy3);
        groupBox_Setup->setMinimumSize(QSize(0, 450));
        verticalLayout_6 = new QVBoxLayout(groupBox_Setup);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setSizeConstraint(QLayout::SetMinimumSize);
        mpSimpleModeScrollArea = new QScrollArea(groupBox_Setup);
        mpSimpleModeScrollArea->setObjectName(QStringLiteral("mpSimpleModeScrollArea"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(mpSimpleModeScrollArea->sizePolicy().hasHeightForWidth());
        mpSimpleModeScrollArea->setSizePolicy(sizePolicy4);
        mpSimpleModeScrollArea->setMinimumSize(QSize(250, 0));
        mpSimpleModeScrollArea->setFrameShape(QFrame::NoFrame);
        mpSimpleModeScrollArea->setFrameShadow(QFrame::Plain);
        mpSimpleModeScrollArea->setLineWidth(0);
        mpSimpleModeScrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        mpSimpleModeScrollArea->setWidgetResizable(true);
        mpSimpleRobotList = new QWidget();
        mpSimpleRobotList->setObjectName(QStringLiteral("mpSimpleRobotList"));
        mpSimpleRobotList->setGeometry(QRect(0, 0, 836, 650));
        QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(mpSimpleRobotList->sizePolicy().hasHeightForWidth());
        mpSimpleRobotList->setSizePolicy(sizePolicy5);
        mpSimpleRobotList->setMinimumSize(QSize(0, 0));
        mpSimpleRobotListLayout = new QHBoxLayout(mpSimpleRobotList);
        mpSimpleRobotListLayout->setObjectName(QStringLiteral("mpSimpleRobotListLayout"));
        mpSimpleRobotListLayout->setSizeConstraint(QLayout::SetMinimumSize);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        mpSimpleRobotListLayout->addItem(horizontalSpacer);

        mpSimpleModeScrollArea->setWidget(mpSimpleRobotList);

        verticalLayout_6->addWidget(mpSimpleModeScrollArea);


        verticalLayout_2->addWidget(groupBox_Setup);

        mpModeTab->addTab(tab, QString());
        mpAdvancedTab = new QWidget();
        mpAdvancedTab->setObjectName(QStringLiteral("mpAdvancedTab"));
        gridLayout_2 = new QGridLayout(mpAdvancedTab);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        mpRobotSelector = new QComboBox(mpAdvancedTab);
        mpRobotSelector->setObjectName(QStringLiteral("mpRobotSelector"));

        horizontalLayout->addWidget(mpRobotSelector);

        mpAddRobotButton = new QPushButton(mpAdvancedTab);
        mpAddRobotButton->setObjectName(QStringLiteral("mpAddRobotButton"));

        horizontalLayout->addWidget(mpAddRobotButton);

        mpLoadButton = new QPushButton(mpAdvancedTab);
        mpLoadButton->setObjectName(QStringLiteral("mpLoadButton"));
        mpLoadButton->setEnabled(false);

        horizontalLayout->addWidget(mpLoadButton);

        mpRenameButton = new QPushButton(mpAdvancedTab);
        mpRenameButton->setObjectName(QStringLiteral("mpRenameButton"));
        mpRenameButton->setEnabled(false);

        horizontalLayout->addWidget(mpRenameButton);

        mpSaveButton = new QPushButton(mpAdvancedTab);
        mpSaveButton->setObjectName(QStringLiteral("mpSaveButton"));
        mpSaveButton->setEnabled(false);

        horizontalLayout->addWidget(mpSaveButton);

        mpRemoveButton = new QPushButton(mpAdvancedTab);
        mpRemoveButton->setObjectName(QStringLiteral("mpRemoveButton"));
        mpRemoveButton->setEnabled(false);

        horizontalLayout->addWidget(mpRemoveButton);

        horizontalLayout->setStretch(0, 1);

        gridLayout_2->addLayout(horizontalLayout, 0, 0, 1, 2);

        mpRobotTree = new QTreeWidget(mpAdvancedTab);
        mpRobotTree->setObjectName(QStringLiteral("mpRobotTree"));

        gridLayout_2->addWidget(mpRobotTree, 1, 0, 1, 1);

        groupBox = new QGroupBox(mpAdvancedTab);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout_3 = new QGridLayout(groupBox);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        mpPropertyPane = new cedar::aux::gui::PropertyPane(groupBox);
        mpPropertyPane->setObjectName(QStringLiteral("mpPropertyPane"));

        gridLayout_3->addWidget(mpPropertyPane, 0, 0, 1, 1);


        gridLayout_2->addWidget(groupBox, 1, 1, 1, 1);

        gridLayout_2->setColumnStretch(0, 1);
        gridLayout_2->setColumnStretch(1, 1);
        mpModeTab->addTab(mpAdvancedTab, QString());

        gridLayout->addWidget(mpModeTab, 0, 0, 1, 2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 0, 1, 1);

        mpCloseButton = new QPushButton(RobotManager);
        mpCloseButton->setObjectName(QStringLiteral("mpCloseButton"));

        gridLayout->addWidget(mpCloseButton, 1, 1, 1, 1);


        retranslateUi(RobotManager);

        mpModeTab->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(RobotManager);
    } // setupUi

    void retranslateUi(QWidget *RobotManager)
    {
        RobotManager->setWindowTitle(QApplication::translate("RobotManager", "Robot Manager", 0));
        groupBox_Robots->setTitle(QApplication::translate("RobotManager", "Robots", 0));
        groupBox_Setup->setTitle(QApplication::translate("RobotManager", "Setup Area", 0));
        mpModeTab->setTabText(mpModeTab->indexOf(tab), QApplication::translate("RobotManager", "visual", 0));
        mpAddRobotButton->setText(QApplication::translate("RobotManager", "add robot", 0));
#ifndef QT_NO_TOOLTIP
        mpLoadButton->setToolTip(QApplication::translate("RobotManager", "Loads a specific configuration for the currently selected robot.", 0));
#endif // QT_NO_TOOLTIP
        mpLoadButton->setText(QApplication::translate("RobotManager", "load", 0));
        mpRenameButton->setText(QApplication::translate("RobotManager", "rename", 0));
        mpSaveButton->setText(QApplication::translate("RobotManager", "save ...", 0));
        mpRemoveButton->setText(QApplication::translate("RobotManager", "remove", 0));
        QTreeWidgetItem *___qtreewidgetitem = mpRobotTree->headerItem();
        ___qtreewidgetitem->setText(1, QApplication::translate("RobotManager", "Info", 0));
        ___qtreewidgetitem->setText(0, QApplication::translate("RobotManager", "Part", 0));
        groupBox->setTitle(QApplication::translate("RobotManager", "Item Configuration", 0));
        mpModeTab->setTabText(mpModeTab->indexOf(mpAdvancedTab), QApplication::translate("RobotManager", "advanced", 0));
        mpCloseButton->setText(QApplication::translate("RobotManager", "Done", 0));
    } // retranslateUi

};

namespace Ui {
    class RobotManager: public Ui_RobotManager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ROBOTMANAGER_H
