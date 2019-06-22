/********************************************************************************
** Form generated from reading UI file 'Ide.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IDE_H
#define UI_IDE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <cedar/processing/gui/View.h>
#include "cedar/auxiliaries/gui/Configurable.h"
#include "cedar/auxiliaries/gui/Log.h"
#include "cedar/auxiliaries/gui/SceneControl.h"
#include "cedar/processing/gui/CommentWidget.h"
#include "cedar/processing/gui/ElementList.h"
#include "cedar/processing/gui/RecorderWidget.h"

QT_BEGIN_NAMESPACE

class Ui_Ide
{
public:
    QAction *mpActionNew;
    QAction *mpActionSave;
    QAction *mpActionSaveAs;
    QAction *mpActionLoad;
    QAction *mpActionExit;
    QAction *mpActionManagePlugins;
    QAction *mpActionStartPauseSimulation;
    QAction *mpActionLoadPlugin;
    QAction *mpActionShowHideGrid;
    QAction *mpRecentFiles;
    QAction *mpActionSettings;
    QAction *mpActionAbout;
    QAction *mpActionBrakeAllRobots;
    QAction *mpActionExportSVG;
    QAction *mpActionShowRobotManager;
    QAction *mpActionAddGlobalSceneViewer;
    QAction *mpActionDuplicate;
    QAction *mpActionSelectAll;
    QAction *mpActionToggleTriggerVisibility;
    QAction *mpActionTriggerSmartHide;
    QAction *mpThreadsSingleStep;
    QAction *mpActionToggleSmartConnections;
    QAction *mpActionClosePlots;
    QAction *mpActionRecord;
    QAction *mpActionSnapshot;
    QAction *mpActionToggleVisibilityOfPlots;
    QAction *mpActionNewPlotGroup;
    QAction *mpActionRenamePlotGroup;
    QAction *mpActionDisplayPlotGroup;
    QAction *mpActionDeletePlotGroup;
    QAction *mpActionPerformanceOverview;
    QAction *mpActionExperiments;
    QAction *mpActionCopy;
    QAction *mpActionPasteConfiguration;
    QAction *mpActionParameterLinker;
    QAction *mpActionSaveSerializableData;
    QAction *mpActionLoadSerializableData;
    QAction *mpActionFind;
    QAction *actionNone;
    QAction *mpActionResetSimulation;
    QAction *mpActionEditPlotGroup;
    QAction *mpActionToggleTriggerColor;
    QAction *mpActionDummy;
    QAction *mpActionShowRecentNotifications;
    QAction *mpActionLockUIPositions;
    QAction *mpActionOpenRobotManager;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_2;
    cedar::proc::gui::View *mpProcessingDrawer;
    QWidget *tabVisualisation;
    QGridLayout *gridLayout_3;
    cedar::aux::gui::SceneControl *mpSceneControl;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuSimulation;
    QMenu *menuRobots;
    QMenu *mpMenuWindows;
    QMenu *mpMenuArchitecturePlots;
    QMenu *menuHelp;
    QMenu *menuEdit;
    QMenu *menuView;
    QMenu *mpToolsMenu;
    QMenu *mpMenuArchitectureScripts;
    QStatusBar *mpStatusBar;
    QDockWidget *mpItemsWidget;
    QWidget *dockWidgetContents_2;
    QHBoxLayout *horizontalLayout;
    cedar::proc::gui::ElementList *mpCategoryList;
    QDockWidget *mpLogWidget;
    QWidget *dockWidgetContents_3;
    QHBoxLayout *horizontalLayout_2;
    cedar::aux::gui::Log *mpLog;
    QDockWidget *mpPropertiesWidget;
    QWidget *dockWidgetContents_5;
    QVBoxLayout *verticalLayout_2;
    QTabWidget *tabWidget_2;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_6;
    cedar::aux::gui::Configurable *mpPropertyTable;
    QWidget *tab_2_5;
    QVBoxLayout *verticalLayout_3;
    QScrollArea *scrollArea1;
    cedar::proc::gui::CommentWidget *mpCommentWidget;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout_31;
    QScrollArea *scrollArea2;
    cedar::proc::gui::RecorderWidget *mpRecorderWidget;
    QToolBar *mpToolBar;

    void setupUi(QMainWindow *Ide)
    {
        if (Ide->objectName().isEmpty())
            Ide->setObjectName(QStringLiteral("Ide"));
        Ide->resize(983, 762);
        QIcon icon;
        icon.addFile(QStringLiteral(":/processing_ide_app_icon_48.png"), QSize(), QIcon::Normal, QIcon::Off);
        Ide->setWindowIcon(icon);
        mpActionNew = new QAction(Ide);
        mpActionNew->setObjectName(QStringLiteral("mpActionNew"));
        mpActionSave = new QAction(Ide);
        mpActionSave->setObjectName(QStringLiteral("mpActionSave"));
        mpActionSave->setEnabled(false);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/toolbaricons/save.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mpActionSave->setIcon(icon1);
        mpActionSaveAs = new QAction(Ide);
        mpActionSaveAs->setObjectName(QStringLiteral("mpActionSaveAs"));
        mpActionLoad = new QAction(Ide);
        mpActionLoad->setObjectName(QStringLiteral("mpActionLoad"));
        mpActionExit = new QAction(Ide);
        mpActionExit->setObjectName(QStringLiteral("mpActionExit"));
        mpActionManagePlugins = new QAction(Ide);
        mpActionManagePlugins->setObjectName(QStringLiteral("mpActionManagePlugins"));
        mpActionStartPauseSimulation = new QAction(Ide);
        mpActionStartPauseSimulation->setObjectName(QStringLiteral("mpActionStartPauseSimulation"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/cedar/auxiliaries/gui/start.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mpActionStartPauseSimulation->setIcon(icon2);
        mpActionLoadPlugin = new QAction(Ide);
        mpActionLoadPlugin->setObjectName(QStringLiteral("mpActionLoadPlugin"));
        mpActionShowHideGrid = new QAction(Ide);
        mpActionShowHideGrid->setObjectName(QStringLiteral("mpActionShowHideGrid"));
        mpActionShowHideGrid->setCheckable(true);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/toolbaricons/grid.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mpActionShowHideGrid->setIcon(icon3);
        mpRecentFiles = new QAction(Ide);
        mpRecentFiles->setObjectName(QStringLiteral("mpRecentFiles"));
        mpActionSettings = new QAction(Ide);
        mpActionSettings->setObjectName(QStringLiteral("mpActionSettings"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/menus/settings.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mpActionSettings->setIcon(icon4);
        mpActionAbout = new QAction(Ide);
        mpActionAbout->setObjectName(QStringLiteral("mpActionAbout"));
        mpActionBrakeAllRobots = new QAction(Ide);
        mpActionBrakeAllRobots->setObjectName(QStringLiteral("mpActionBrakeAllRobots"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/toolbaricons/brakeall.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mpActionBrakeAllRobots->setIcon(icon5);
        mpActionExportSVG = new QAction(Ide);
        mpActionExportSVG->setObjectName(QStringLiteral("mpActionExportSVG"));
        mpActionShowRobotManager = new QAction(Ide);
        mpActionShowRobotManager->setObjectName(QStringLiteral("mpActionShowRobotManager"));
        mpActionAddGlobalSceneViewer = new QAction(Ide);
        mpActionAddGlobalSceneViewer->setObjectName(QStringLiteral("mpActionAddGlobalSceneViewer"));
        mpActionDuplicate = new QAction(Ide);
        mpActionDuplicate->setObjectName(QStringLiteral("mpActionDuplicate"));
        mpActionSelectAll = new QAction(Ide);
        mpActionSelectAll->setObjectName(QStringLiteral("mpActionSelectAll"));
        mpActionToggleTriggerVisibility = new QAction(Ide);
        mpActionToggleTriggerVisibility->setObjectName(QStringLiteral("mpActionToggleTriggerVisibility"));
        mpActionToggleTriggerVisibility->setCheckable(true);
        mpActionToggleTriggerVisibility->setChecked(false);
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/toolbaricons/hide_triggers.svg"), QSize(), QIcon::Normal, QIcon::Off);
        icon6.addFile(QStringLiteral(":/toolbaricons/show_triggers.svg"), QSize(), QIcon::Normal, QIcon::On);
        mpActionToggleTriggerVisibility->setIcon(icon6);
        mpActionTriggerSmartHide = new QAction(Ide);
        mpActionTriggerSmartHide->setObjectName(QStringLiteral("mpActionTriggerSmartHide"));
        mpActionTriggerSmartHide->setEnabled(false);
        mpThreadsSingleStep = new QAction(Ide);
        mpThreadsSingleStep->setObjectName(QStringLiteral("mpThreadsSingleStep"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/cedar/auxiliaries/gui/singleStep.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mpThreadsSingleStep->setIcon(icon7);
        mpActionToggleSmartConnections = new QAction(Ide);
        mpActionToggleSmartConnections->setObjectName(QStringLiteral("mpActionToggleSmartConnections"));
        mpActionToggleSmartConnections->setCheckable(true);
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/toolbaricons/standard_connections.svg"), QSize(), QIcon::Normal, QIcon::Off);
        icon8.addFile(QStringLiteral(":/toolbaricons/smart_connections.svg"), QSize(), QIcon::Normal, QIcon::On);
        mpActionToggleSmartConnections->setIcon(icon8);
        mpActionClosePlots = new QAction(Ide);
        mpActionClosePlots->setObjectName(QStringLiteral("mpActionClosePlots"));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/toolbaricons/close_all_plots.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mpActionClosePlots->setIcon(icon9);
        mpActionRecord = new QAction(Ide);
        mpActionRecord->setObjectName(QStringLiteral("mpActionRecord"));
        mpActionRecord->setCheckable(true);
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/cedar/auxiliaries/gui/record.svg"), QSize(), QIcon::Normal, QIcon::Off);
        icon10.addFile(QStringLiteral(":/cedar/auxiliaries/gui/recordStop.svg"), QSize(), QIcon::Normal, QIcon::On);
        icon10.addFile(QStringLiteral(":/cedar/auxiliaries/gui/record.svg"), QSize(), QIcon::Active, QIcon::Off);
        icon10.addFile(QStringLiteral(":/cedar/auxiliaries/gui/recordStop.svg"), QSize(), QIcon::Active, QIcon::On);
        icon10.addFile(QStringLiteral(":/cedar/auxiliaries/gui/recordStop.svg"), QSize(), QIcon::Selected, QIcon::On);
        mpActionRecord->setIcon(icon10);
#ifndef QT_NO_TOOLTIP
        mpActionRecord->setToolTip(QStringLiteral("Record all registered slots."));
#endif // QT_NO_TOOLTIP
        mpActionSnapshot = new QAction(Ide);
        mpActionSnapshot->setObjectName(QStringLiteral("mpActionSnapshot"));
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/toolbaricons/snapshot.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mpActionSnapshot->setIcon(icon11);
        mpActionToggleVisibilityOfPlots = new QAction(Ide);
        mpActionToggleVisibilityOfPlots->setObjectName(QStringLiteral("mpActionToggleVisibilityOfPlots"));
        mpActionToggleVisibilityOfPlots->setCheckable(true);
        QIcon icon12;
        icon12.addFile(QStringLiteral(":/toolbaricons/toggle_visibility_of_plots.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mpActionToggleVisibilityOfPlots->setIcon(icon12);
        mpActionNewPlotGroup = new QAction(Ide);
        mpActionNewPlotGroup->setObjectName(QStringLiteral("mpActionNewPlotGroup"));
        QIcon icon13;
        icon13.addFile(QStringLiteral(":/toolbaricons/new.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mpActionNewPlotGroup->setIcon(icon13);
        mpActionRenamePlotGroup = new QAction(Ide);
        mpActionRenamePlotGroup->setObjectName(QStringLiteral("mpActionRenamePlotGroup"));
        QIcon icon14;
        icon14.addFile(QStringLiteral(":/toolbaricons/edit.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mpActionRenamePlotGroup->setIcon(icon14);
        mpActionDisplayPlotGroup = new QAction(Ide);
        mpActionDisplayPlotGroup->setObjectName(QStringLiteral("mpActionDisplayPlotGroup"));
        mpActionDisplayPlotGroup->setCheckable(true);
        QIcon icon15;
        icon15.addFile(QStringLiteral(":/toolbaricons/display.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mpActionDisplayPlotGroup->setIcon(icon15);
        mpActionDeletePlotGroup = new QAction(Ide);
        mpActionDeletePlotGroup->setObjectName(QStringLiteral("mpActionDeletePlotGroup"));
        QIcon icon16;
        icon16.addFile(QStringLiteral(":/toolbaricons/trash.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mpActionDeletePlotGroup->setIcon(icon16);
        mpActionPerformanceOverview = new QAction(Ide);
        mpActionPerformanceOverview->setObjectName(QStringLiteral("mpActionPerformanceOverview"));
        mpActionExperiments = new QAction(Ide);
        mpActionExperiments->setObjectName(QStringLiteral("mpActionExperiments"));
        mpActionCopy = new QAction(Ide);
        mpActionCopy->setObjectName(QStringLiteral("mpActionCopy"));
        mpActionPasteConfiguration = new QAction(Ide);
        mpActionPasteConfiguration->setObjectName(QStringLiteral("mpActionPasteConfiguration"));
        mpActionParameterLinker = new QAction(Ide);
        mpActionParameterLinker->setObjectName(QStringLiteral("mpActionParameterLinker"));
        mpActionSaveSerializableData = new QAction(Ide);
        mpActionSaveSerializableData->setObjectName(QStringLiteral("mpActionSaveSerializableData"));
        mpActionLoadSerializableData = new QAction(Ide);
        mpActionLoadSerializableData->setObjectName(QStringLiteral("mpActionLoadSerializableData"));
        mpActionFind = new QAction(Ide);
        mpActionFind->setObjectName(QStringLiteral("mpActionFind"));
        actionNone = new QAction(Ide);
        actionNone->setObjectName(QStringLiteral("actionNone"));
        actionNone->setEnabled(false);
        mpActionResetSimulation = new QAction(Ide);
        mpActionResetSimulation->setObjectName(QStringLiteral("mpActionResetSimulation"));
        QIcon icon17;
        icon17.addFile(QStringLiteral(":/cedar/auxiliaries/gui/reset.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mpActionResetSimulation->setIcon(icon17);
        mpActionEditPlotGroup = new QAction(Ide);
        mpActionEditPlotGroup->setObjectName(QStringLiteral("mpActionEditPlotGroup"));
        QIcon icon18;
        icon18.addFile(QStringLiteral(":/toolbaricons/store_plotgroup.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mpActionEditPlotGroup->setIcon(icon18);
        mpActionToggleTriggerColor = new QAction(Ide);
        mpActionToggleTriggerColor->setObjectName(QStringLiteral("mpActionToggleTriggerColor"));
        mpActionToggleTriggerColor->setCheckable(true);
        QIcon icon19;
        icon19.addFile(QStringLiteral(":/toolbaricons/show_trigger_colors.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mpActionToggleTriggerColor->setIcon(icon19);
        mpActionDummy = new QAction(Ide);
        mpActionDummy->setObjectName(QStringLiteral("mpActionDummy"));
        mpActionShowRecentNotifications = new QAction(Ide);
        mpActionShowRecentNotifications->setObjectName(QStringLiteral("mpActionShowRecentNotifications"));
        mpActionLockUIPositions = new QAction(Ide);
        mpActionLockUIPositions->setObjectName(QStringLiteral("mpActionLockUIPositions"));
        mpActionLockUIPositions->setCheckable(true);
        QIcon icon20;
        icon20.addFile(QStringLiteral(":/cedar/auxiliaries/gui/lock_unlocked.svg"), QSize(), QIcon::Normal, QIcon::Off);
        icon20.addFile(QStringLiteral(":/cedar/auxiliaries/gui/lock_locked.svg"), QSize(), QIcon::Normal, QIcon::On);
        mpActionLockUIPositions->setIcon(icon20);
        mpActionOpenRobotManager = new QAction(Ide);
        mpActionOpenRobotManager->setObjectName(QStringLiteral("mpActionOpenRobotManager"));
        QIcon icon21;
        icon21.addFile(QStringLiteral(":/toolbaricons/robot_manager.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mpActionOpenRobotManager->setIcon(icon21);
        centralwidget = new QWidget(Ide);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setTabShape(QTabWidget::Triangular);
        tabWidget->setDocumentMode(true);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        gridLayout_2 = new QGridLayout(tab);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        mpProcessingDrawer = new cedar::proc::gui::View(tab);
        mpProcessingDrawer->setObjectName(QStringLiteral("mpProcessingDrawer"));

        gridLayout_2->addWidget(mpProcessingDrawer, 0, 0, 1, 1);

        gridLayout_2->setRowStretch(0, 1);
        tabWidget->addTab(tab, QString());
        tabVisualisation = new QWidget();
        tabVisualisation->setObjectName(QStringLiteral("tabVisualisation"));
        gridLayout_3 = new QGridLayout(tabVisualisation);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        mpSceneControl = new cedar::aux::gui::SceneControl(tabVisualisation);
        mpSceneControl->setObjectName(QStringLiteral("mpSceneControl"));

        gridLayout_3->addWidget(mpSceneControl, 0, 0, 1, 1);

        tabWidget->addTab(tabVisualisation, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);

        Ide->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Ide);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 983, 20));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuSimulation = new QMenu(menubar);
        menuSimulation->setObjectName(QStringLiteral("menuSimulation"));
        menuRobots = new QMenu(menubar);
        menuRobots->setObjectName(QStringLiteral("menuRobots"));
        mpMenuWindows = new QMenu(menubar);
        mpMenuWindows->setObjectName(QStringLiteral("mpMenuWindows"));
        mpMenuArchitecturePlots = new QMenu(mpMenuWindows);
        mpMenuArchitecturePlots->setObjectName(QStringLiteral("mpMenuArchitecturePlots"));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName(QStringLiteral("menuEdit"));
        menuView = new QMenu(menubar);
        menuView->setObjectName(QStringLiteral("menuView"));
        mpToolsMenu = new QMenu(menubar);
        mpToolsMenu->setObjectName(QStringLiteral("mpToolsMenu"));
        mpMenuArchitectureScripts = new QMenu(menubar);
        mpMenuArchitectureScripts->setObjectName(QStringLiteral("mpMenuArchitectureScripts"));
        Ide->setMenuBar(menubar);
        mpStatusBar = new QStatusBar(Ide);
        mpStatusBar->setObjectName(QStringLiteral("mpStatusBar"));
        Ide->setStatusBar(mpStatusBar);
        mpItemsWidget = new QDockWidget(Ide);
        mpItemsWidget->setObjectName(QStringLiteral("mpItemsWidget"));
        mpItemsWidget->setFeatures(QDockWidget::DockWidgetFeatureMask);
        dockWidgetContents_2 = new QWidget();
        dockWidgetContents_2->setObjectName(QStringLiteral("dockWidgetContents_2"));
        horizontalLayout = new QHBoxLayout(dockWidgetContents_2);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        mpCategoryList = new cedar::proc::gui::ElementList(dockWidgetContents_2);
        mpCategoryList->setObjectName(QStringLiteral("mpCategoryList"));

        horizontalLayout->addWidget(mpCategoryList);

        mpItemsWidget->setWidget(dockWidgetContents_2);
        Ide->addDockWidget(static_cast<Qt::DockWidgetArea>(4), mpItemsWidget);
        mpLogWidget = new QDockWidget(Ide);
        mpLogWidget->setObjectName(QStringLiteral("mpLogWidget"));
        mpLogWidget->setFeatures(QDockWidget::DockWidgetFeatureMask);
        dockWidgetContents_3 = new QWidget();
        dockWidgetContents_3->setObjectName(QStringLiteral("dockWidgetContents_3"));
        horizontalLayout_2 = new QHBoxLayout(dockWidgetContents_3);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        mpLog = new cedar::aux::gui::Log(dockWidgetContents_3);
        mpLog->setObjectName(QStringLiteral("mpLog"));

        horizontalLayout_2->addWidget(mpLog);

        mpLogWidget->setWidget(dockWidgetContents_3);
        Ide->addDockWidget(static_cast<Qt::DockWidgetArea>(8), mpLogWidget);
        mpPropertiesWidget = new QDockWidget(Ide);
        mpPropertiesWidget->setObjectName(QStringLiteral("mpPropertiesWidget"));
        mpPropertiesWidget->setFeatures(QDockWidget::AllDockWidgetFeatures);
        dockWidgetContents_5 = new QWidget();
        dockWidgetContents_5->setObjectName(QStringLiteral("dockWidgetContents_5"));
        verticalLayout_2 = new QVBoxLayout(dockWidgetContents_5);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        tabWidget_2 = new QTabWidget(dockWidgetContents_5);
        tabWidget_2->setObjectName(QStringLiteral("tabWidget_2"));
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        verticalLayout_6 = new QVBoxLayout(tab_2);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        mpPropertyTable = new cedar::aux::gui::Configurable(tab_2);
        mpPropertyTable->setObjectName(QStringLiteral("mpPropertyTable"));

        verticalLayout_6->addWidget(mpPropertyTable);

        tabWidget_2->addTab(tab_2, QString());
        tab_2_5 = new QWidget();
        tab_2_5->setObjectName(QStringLiteral("tab_2_5"));
        verticalLayout_3 = new QVBoxLayout(tab_2_5);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        scrollArea1 = new QScrollArea(tab_2_5);
        scrollArea1->setObjectName(QStringLiteral("scrollArea1"));
        scrollArea1->setWidgetResizable(true);
        mpCommentWidget = new cedar::proc::gui::CommentWidget();
        mpCommentWidget->setObjectName(QStringLiteral("mpCommentWidget"));
        mpCommentWidget->setGeometry(QRect(0, 0, 254, 495));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        QBrush brush1(QColor(249, 249, 249, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush1);
        mpCommentWidget->setPalette(palette);
        mpCommentWidget->setAutoFillBackground(true);
        scrollArea1->setWidget(mpCommentWidget);

        verticalLayout_3->addWidget(scrollArea1);

        tabWidget_2->addTab(tab_2_5, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        verticalLayout_31 = new QVBoxLayout(tab_3);
        verticalLayout_31->setObjectName(QStringLiteral("verticalLayout_31"));
        scrollArea2 = new QScrollArea(tab_3);
        scrollArea2->setObjectName(QStringLiteral("scrollArea2"));
        scrollArea2->setWidgetResizable(true);
        mpRecorderWidget = new cedar::proc::gui::RecorderWidget();
        mpRecorderWidget->setObjectName(QStringLiteral("mpRecorderWidget"));
        mpRecorderWidget->setGeometry(QRect(0, 0, 254, 495));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::Base, brush);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush1);
        mpRecorderWidget->setPalette(palette1);
        mpRecorderWidget->setAutoFillBackground(true);
        scrollArea2->setWidget(mpRecorderWidget);

        verticalLayout_31->addWidget(scrollArea2);

        tabWidget_2->addTab(tab_3, QString());

        verticalLayout_2->addWidget(tabWidget_2);

        mpPropertiesWidget->setWidget(dockWidgetContents_5);
        Ide->addDockWidget(static_cast<Qt::DockWidgetArea>(2), mpPropertiesWidget);
        mpToolBar = new QToolBar(Ide);
        mpToolBar->setObjectName(QStringLiteral("mpToolBar"));
        Ide->addToolBar(Qt::TopToolBarArea, mpToolBar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menubar->addAction(menuView->menuAction());
        menubar->addAction(menuSimulation->menuAction());
        menubar->addAction(menuRobots->menuAction());
        menubar->addAction(mpToolsMenu->menuAction());
        menubar->addAction(mpMenuArchitectureScripts->menuAction());
        menubar->addAction(mpMenuWindows->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuFile->addAction(mpActionNew);
        menuFile->addSeparator();
        menuFile->addAction(mpActionSave);
        menuFile->addAction(mpActionSaveAs);
        menuFile->addAction(mpActionLoad);
        menuFile->addAction(mpRecentFiles);
        menuFile->addSeparator();
        menuFile->addAction(mpActionSaveSerializableData);
        menuFile->addAction(mpActionLoadSerializableData);
        menuFile->addSeparator();
        menuFile->addAction(mpActionExportSVG);
        menuFile->addSeparator();
        menuFile->addAction(mpActionExit);
        menuSimulation->addAction(mpActionStartPauseSimulation);
        menuSimulation->addAction(mpActionResetSimulation);
        menuSimulation->addAction(mpThreadsSingleStep);
        menuSimulation->addSeparator();
        menuSimulation->addAction(mpActionRecord);
        menuSimulation->addAction(mpActionSnapshot);
        menuRobots->addAction(mpActionShowRobotManager);
        menuRobots->addSeparator();
        menuRobots->addAction(mpActionBrakeAllRobots);
        mpMenuWindows->addAction(mpActionClosePlots);
        mpMenuWindows->addAction(mpActionToggleVisibilityOfPlots);
        mpMenuWindows->addSeparator();
        mpMenuWindows->addAction(mpActionAddGlobalSceneViewer);
        mpMenuWindows->addSeparator();
        mpMenuWindows->addAction(mpMenuArchitecturePlots->menuAction());
        mpMenuWindows->addSeparator();
        mpMenuWindows->addAction(mpActionLockUIPositions);
        mpMenuWindows->addSeparator();
        menuHelp->addAction(mpActionShowRecentNotifications);
        menuHelp->addSeparator();
        menuHelp->addAction(mpActionAbout);
        menuEdit->addAction(mpActionCopy);
        menuEdit->addAction(mpActionPasteConfiguration);
        menuEdit->addAction(mpActionDuplicate);
        menuEdit->addAction(mpActionSelectAll);
        menuEdit->addSeparator();
        menuEdit->addAction(mpActionFind);
        menuView->addAction(mpActionShowHideGrid);
        menuView->addAction(mpActionToggleSmartConnections);
        menuView->addAction(mpActionToggleTriggerColor);
        mpToolsMenu->addAction(mpActionPerformanceOverview);
        mpToolsMenu->addAction(mpActionParameterLinker);
        mpToolsMenu->addSeparator();
        mpToolsMenu->addAction(mpActionManagePlugins);
        mpToolsMenu->addSeparator();
        mpToolsMenu->addAction(mpActionSettings);
        mpToolsMenu->addSeparator();
        mpMenuArchitectureScripts->addAction(mpActionExperiments);
        mpToolBar->addAction(mpActionSave);
        mpToolBar->addSeparator();
        mpToolBar->addAction(mpActionStartPauseSimulation);
        mpToolBar->addAction(mpActionResetSimulation);
        mpToolBar->addAction(mpThreadsSingleStep);
        mpToolBar->addSeparator();
        mpToolBar->addAction(mpActionRecord);
        mpToolBar->addAction(mpActionSnapshot);
        mpToolBar->addSeparator();
        mpToolBar->addAction(mpActionToggleTriggerColor);
        mpToolBar->addSeparator();
        mpToolBar->addAction(mpActionDummy);
        mpToolBar->addSeparator();
        mpToolBar->addAction(mpActionToggleVisibilityOfPlots);
        mpToolBar->addSeparator();
        mpToolBar->addAction(mpActionDisplayPlotGroup);
        mpToolBar->addAction(mpActionNewPlotGroup);
        mpToolBar->addAction(mpActionRenamePlotGroup);
        mpToolBar->addAction(mpActionEditPlotGroup);
        mpToolBar->addAction(mpActionDeletePlotGroup);
        mpToolBar->addSeparator();
        mpToolBar->addAction(mpActionOpenRobotManager);
        mpToolBar->addAction(mpActionBrakeAllRobots);

        retranslateUi(Ide);
        QObject::connect(mpActionExit, SIGNAL(triggered()), Ide, SLOT(close()));

        tabWidget->setCurrentIndex(0);
        tabWidget_2->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Ide);
    } // setupUi

    void retranslateUi(QMainWindow *Ide)
    {
        Ide->setWindowTitle(QApplication::translate("Ide", "cedar", 0));
        mpActionNew->setText(QApplication::translate("Ide", "New", 0));
        mpActionSave->setText(QApplication::translate("Ide", "Save", 0));
        mpActionSave->setShortcut(QApplication::translate("Ide", "Ctrl+S", 0));
        mpActionSaveAs->setText(QApplication::translate("Ide", "Save as...", 0));
        mpActionSaveAs->setShortcut(QApplication::translate("Ide", "Ctrl+Shift+S", 0));
        mpActionLoad->setText(QApplication::translate("Ide", "Open file...", 0));
#ifndef QT_NO_TOOLTIP
        mpActionLoad->setToolTip(QApplication::translate("Ide", "Load an architecture file", 0));
#endif // QT_NO_TOOLTIP
        mpActionLoad->setShortcut(QApplication::translate("Ide", "Ctrl+O", 0));
        mpActionExit->setText(QApplication::translate("Ide", "Exit", 0));
        mpActionManagePlugins->setText(QApplication::translate("Ide", "Manage plugins...", 0));
        mpActionStartPauseSimulation->setText(QApplication::translate("Ide", "Start/Pause simulation", 0));
#ifndef QT_NO_TOOLTIP
        mpActionStartPauseSimulation->setToolTip(QApplication::translate("Ide", "Starts and pauses the simulation.", 0));
#endif // QT_NO_TOOLTIP
        mpActionStartPauseSimulation->setShortcut(QApplication::translate("Ide", "Space", 0));
        mpActionLoadPlugin->setText(QApplication::translate("Ide", "Load plugin...", 0));
        mpActionShowHideGrid->setText(QApplication::translate("Ide", "Toggle grid", 0));
#ifndef QT_NO_TOOLTIP
        mpActionShowHideGrid->setToolTip(QApplication::translate("Ide", "Toggles the grid in the architecture pane. Steps will align to this grid.", 0));
#endif // QT_NO_TOOLTIP
        mpRecentFiles->setText(QApplication::translate("Ide", "Recent files", 0));
        mpActionSettings->setText(QApplication::translate("Ide", "Settings...", 0));
        mpActionAbout->setText(QApplication::translate("Ide", "About...", 0));
        mpActionBrakeAllRobots->setText(QApplication::translate("Ide", "Brake all robots", 0));
#ifndef QT_NO_TOOLTIP
        mpActionBrakeAllRobots->setToolTip(QApplication::translate("Ide", "Brake all connected robotic components (slowly)", 0));
#endif // QT_NO_TOOLTIP
        mpActionExportSVG->setText(QApplication::translate("Ide", "Save canvas...", 0));
        mpActionShowRobotManager->setText(QApplication::translate("Ide", "Robot manager...", 0));
        mpActionShowRobotManager->setShortcut(QApplication::translate("Ide", "Ctrl+M", 0));
        mpActionAddGlobalSceneViewer->setText(QApplication::translate("Ide", "Add a camera of the scene visualisation...", 0));
        mpActionDuplicate->setText(QApplication::translate("Ide", "Duplicate", 0));
        mpActionDuplicate->setShortcut(QApplication::translate("Ide", "Ctrl+D", 0));
        mpActionSelectAll->setText(QApplication::translate("Ide", "Select All", 0));
        mpActionSelectAll->setShortcut(QApplication::translate("Ide", "Ctrl+A", 0));
        mpActionToggleTriggerVisibility->setText(QApplication::translate("Ide", "Toggle visibility", 0));
#ifndef QT_NO_TOOLTIP
        mpActionToggleTriggerVisibility->setToolTip(QApplication::translate("Ide", "Toggle color of threads.", 0));
#endif // QT_NO_TOOLTIP
        mpActionToggleTriggerVisibility->setShortcut(QApplication::translate("Ide", "Ctrl+T", 0));
        mpActionTriggerSmartHide->setText(QApplication::translate("Ide", "Smart hide", 0));
        mpThreadsSingleStep->setText(QApplication::translate("Ide", "Single-step each thread", 0));
#ifndef QT_NO_TOOLTIP
        mpThreadsSingleStep->setToolTip(QApplication::translate("Ide", "Execute a single step with each thread", 0));
#endif // QT_NO_TOOLTIP
        mpThreadsSingleStep->setShortcut(QApplication::translate("Ide", "Ctrl++", 0));
        mpActionToggleSmartConnections->setText(QApplication::translate("Ide", "Toggle smart connections", 0));
#ifndef QT_NO_TOOLTIP
        mpActionToggleSmartConnections->setToolTip(QApplication::translate("Ide", "toggle smart connections", 0));
#endif // QT_NO_TOOLTIP
        mpActionClosePlots->setText(QApplication::translate("Ide", "Close all plots", 0));
#ifndef QT_NO_TOOLTIP
        mpActionClosePlots->setToolTip(QApplication::translate("Ide", "Closes all plots", 0));
#endif // QT_NO_TOOLTIP
        mpActionRecord->setText(QApplication::translate("Ide", "Record", 0));
        mpActionSnapshot->setText(QApplication::translate("Ide", "Snapshot", 0));
#ifndef QT_NO_TOOLTIP
        mpActionSnapshot->setToolTip(QApplication::translate("Ide", "Takes a snapshot from the registered steps", 0));
#endif // QT_NO_TOOLTIP
        mpActionToggleVisibilityOfPlots->setText(QApplication::translate("Ide", "Toggle visibility of plots", 0));
#ifndef QT_NO_TOOLTIP
        mpActionToggleVisibilityOfPlots->setToolTip(QApplication::translate("Ide", "Hide/show all open plots", 0));
#endif // QT_NO_TOOLTIP
        mpActionToggleVisibilityOfPlots->setShortcut(QApplication::translate("Ide", "Ctrl+H", 0));
        mpActionNewPlotGroup->setText(QApplication::translate("Ide", "New Plot Group", 0));
#ifndef QT_NO_TOOLTIP
        mpActionNewPlotGroup->setToolTip(QApplication::translate("Ide", "Add a new plot group, containing all open plots", 0));
#endif // QT_NO_TOOLTIP
        mpActionRenamePlotGroup->setText(QApplication::translate("Ide", "Rename Current Plot Group", 0));
#ifndef QT_NO_TOOLTIP
        mpActionRenamePlotGroup->setToolTip(QApplication::translate("Ide", "Rename selected plot group", 0));
#endif // QT_NO_TOOLTIP
        mpActionDisplayPlotGroup->setText(QApplication::translate("Ide", "Display Plot Group", 0));
#ifndef QT_NO_TOOLTIP
        mpActionDisplayPlotGroup->setToolTip(QApplication::translate("Ide", "Toggle visibility of selected plot group", 0));
#endif // QT_NO_TOOLTIP
        mpActionDeletePlotGroup->setText(QApplication::translate("Ide", "Delete Plot Group", 0));
#ifndef QT_NO_TOOLTIP
        mpActionDeletePlotGroup->setToolTip(QApplication::translate("Ide", "delete selected plot group", 0));
#endif // QT_NO_TOOLTIP
        mpActionPerformanceOverview->setText(QApplication::translate("Ide", "Performance overview...", 0));
        mpActionExperiments->setText(QApplication::translate("Ide", "Experiments...", 0));
#ifndef QT_NO_TOOLTIP
        mpActionExperiments->setToolTip(QApplication::translate("Ide", "Framwork for starting experiments", 0));
#endif // QT_NO_TOOLTIP
        mpActionCopy->setText(QApplication::translate("Ide", "Copy step", 0));
        mpActionCopy->setShortcut(QApplication::translate("Ide", "Ctrl+C", 0));
        mpActionPasteConfiguration->setText(QApplication::translate("Ide", "Paste step configuration", 0));
        mpActionPasteConfiguration->setShortcut(QApplication::translate("Ide", "Ctrl+Shift+V", 0));
        mpActionParameterLinker->setText(QApplication::translate("Ide", "Parameter linking...", 0));
        mpActionSaveSerializableData->setText(QApplication::translate("Ide", "Save serializable data...", 0));
#ifndef QT_NO_TOOLTIP
        mpActionSaveSerializableData->setToolTip(QApplication::translate("Ide", "<html><head/><body><p>Select a location to save all data in slots that are marked as serializable.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        mpActionLoadSerializableData->setText(QApplication::translate("Ide", "Load serializable data...", 0));
#ifndef QT_NO_TOOLTIP
        mpActionLoadSerializableData->setToolTip(QApplication::translate("Ide", "<html><head/><body><p>Select a file from which to load data in slots that are marked as serializable.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        mpActionFind->setText(QApplication::translate("Ide", "Find", 0));
#ifndef QT_NO_TOOLTIP
        mpActionFind->setToolTip(QApplication::translate("Ide", "Find an step", 0));
#endif // QT_NO_TOOLTIP
        mpActionFind->setShortcut(QApplication::translate("Ide", "Ctrl+F", 0));
        actionNone->setText(QApplication::translate("Ide", "none", 0));
        mpActionResetSimulation->setText(QApplication::translate("Ide", "Reset simulation", 0));
#ifndef QT_NO_TOOLTIP
        mpActionResetSimulation->setToolTip(QApplication::translate("Ide", "Resets the simulation, i.e., calls reset on the architecture and rewinds the global timer.", 0));
#endif // QT_NO_TOOLTIP
        mpActionEditPlotGroup->setText(QApplication::translate("Ide", "Store Open Plots in Current Plot Group", 0));
#ifndef QT_NO_TOOLTIP
        mpActionEditPlotGroup->setToolTip(QApplication::translate("Ide", "Overwrite selected plot group with open plots", 0));
#endif // QT_NO_TOOLTIP
        mpActionToggleTriggerColor->setText(QApplication::translate("Ide", "Colorize steps by thread", 0));
#ifndef QT_NO_TOOLTIP
        mpActionToggleTriggerColor->setToolTip(QApplication::translate("Ide", "Hide/show thread association via colors", 0));
#endif // QT_NO_TOOLTIP
        mpActionToggleTriggerColor->setShortcut(QApplication::translate("Ide", "Ctrl+Shift+T", 0));
        mpActionDummy->setText(QApplication::translate("Ide", "dummy action", 0));
#ifndef QT_NO_TOOLTIP
        mpActionDummy->setToolTip(QApplication::translate("Ide", "You should not see this. This is what tells the IDE where to (automatically) put buttons for, e.g., the boost control.", 0));
#endif // QT_NO_TOOLTIP
        mpActionShowRecentNotifications->setText(QApplication::translate("Ide", "Recent major changes...", 0));
        mpActionLockUIPositions->setText(QApplication::translate("Ide", "Lock UI positions", 0));
#ifndef QT_NO_TOOLTIP
        mpActionLockUIPositions->setToolTip(QApplication::translate("Ide", "Locks/unlocks the position of UI elements such as the log, the elements tab and so on.", 0));
#endif // QT_NO_TOOLTIP
        mpActionOpenRobotManager->setText(QApplication::translate("Ide", "Open the Robot Manager", 0));
#ifndef QT_NO_TOOLTIP
        mpActionOpenRobotManager->setToolTip(QApplication::translate("Ide", "<html><head/><body><p>open Robot Manager</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Ide", "architecture", 0));
        tabWidget->setTabText(tabWidget->indexOf(tabVisualisation), QApplication::translate("Ide", "visualisation", 0));
        menuFile->setTitle(QApplication::translate("Ide", "File", 0));
        menuSimulation->setTitle(QApplication::translate("Ide", "Simulation", 0));
        menuRobots->setTitle(QApplication::translate("Ide", "Robots", 0));
        mpMenuWindows->setTitle(QApplication::translate("Ide", "Windows", 0));
        mpMenuArchitecturePlots->setTitle(QApplication::translate("Ide", "Architecture widgets", 0));
        menuHelp->setTitle(QApplication::translate("Ide", "Help", 0));
        menuEdit->setTitle(QApplication::translate("Ide", "Edit", 0));
        menuView->setTitle(QApplication::translate("Ide", "View", 0));
        mpToolsMenu->setTitle(QApplication::translate("Ide", "Tools", 0));
        mpMenuArchitectureScripts->setTitle(QApplication::translate("Ide", "Scripting", 0));
        mpItemsWidget->setWindowTitle(QApplication::translate("Ide", "Steps", 0));
        mpLogWidget->setWindowTitle(QApplication::translate("Ide", "Log", 0));
        mpPropertiesWidget->setWindowTitle(QApplication::translate("Ide", "Settings", 0));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_2), QApplication::translate("Ide", "Properties", 0));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_2_5), QApplication::translate("Ide", "Comments", 0));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_3), QApplication::translate("Ide", "Recorder", 0));
        mpToolBar->setWindowTitle(QApplication::translate("Ide", "toolBar", 0));
    } // retranslateUi

};

namespace Ui {
    class Ide: public Ui_Ide {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IDE_H
