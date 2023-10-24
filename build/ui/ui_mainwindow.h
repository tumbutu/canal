/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_Quit;
    QAction *action_Trace_View;
    QAction *actionLog_View;
    QAction *actionSetup;
    QAction *actionStart_Measurement;
    QAction *actionStop_Measurement;
    QAction *actionAbout;
    QAction *actionSave_Trace_to_file;
    QAction *actionGraph_View;
    QAction *action_WorkspaceNew;
    QAction *action_WorkspaceSave;
    QAction *action_WorkspaceSaveAs;
    QAction *action_WorkspaceOpen;
    QAction *action_TraceClear;
    QAction *actionCan_Status_View;
    QAction *actionGraph_View_2;
    QAction *actionTransmit_View;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QTabWidget *mainTabs;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuWindow;
    QMenu *menu_New;
    QMenu *menuMeasurement;
    QMenu *menuHelp;
    QMenu *menu_Trace;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1200, 800);
        MainWindow->setDocumentMode(false);
        MainWindow->setUnifiedTitleAndToolBarOnMac(true);
        action_Quit = new QAction(MainWindow);
        action_Quit->setObjectName(QStringLiteral("action_Quit"));
        action_Trace_View = new QAction(MainWindow);
        action_Trace_View->setObjectName(QStringLiteral("action_Trace_View"));
        actionLog_View = new QAction(MainWindow);
        actionLog_View->setObjectName(QStringLiteral("actionLog_View"));
        actionSetup = new QAction(MainWindow);
        actionSetup->setObjectName(QStringLiteral("actionSetup"));
        actionStart_Measurement = new QAction(MainWindow);
        actionStart_Measurement->setObjectName(QStringLiteral("actionStart_Measurement"));
        actionStop_Measurement = new QAction(MainWindow);
        actionStop_Measurement->setObjectName(QStringLiteral("actionStop_Measurement"));
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        actionSave_Trace_to_file = new QAction(MainWindow);
        actionSave_Trace_to_file->setObjectName(QStringLiteral("actionSave_Trace_to_file"));
        actionGraph_View = new QAction(MainWindow);
        actionGraph_View->setObjectName(QStringLiteral("actionGraph_View"));
        actionGraph_View->setEnabled(false);
        actionGraph_View->setVisible(false);
        action_WorkspaceNew = new QAction(MainWindow);
        action_WorkspaceNew->setObjectName(QStringLiteral("action_WorkspaceNew"));
        action_WorkspaceSave = new QAction(MainWindow);
        action_WorkspaceSave->setObjectName(QStringLiteral("action_WorkspaceSave"));
        action_WorkspaceSaveAs = new QAction(MainWindow);
        action_WorkspaceSaveAs->setObjectName(QStringLiteral("action_WorkspaceSaveAs"));
        action_WorkspaceOpen = new QAction(MainWindow);
        action_WorkspaceOpen->setObjectName(QStringLiteral("action_WorkspaceOpen"));
        action_TraceClear = new QAction(MainWindow);
        action_TraceClear->setObjectName(QStringLiteral("action_TraceClear"));
        actionCan_Status_View = new QAction(MainWindow);
        actionCan_Status_View->setObjectName(QStringLiteral("actionCan_Status_View"));
        actionGraph_View_2 = new QAction(MainWindow);
        actionGraph_View_2->setObjectName(QStringLiteral("actionGraph_View_2"));
        actionTransmit_View = new QAction(MainWindow);
        actionTransmit_View->setObjectName(QStringLiteral("actionTransmit_View"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setSpacing(3);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        mainTabs = new QTabWidget(centralwidget);
        mainTabs->setObjectName(QStringLiteral("mainTabs"));
        mainTabs->setAutoFillBackground(false);
        mainTabs->setTabPosition(QTabWidget::South);
        mainTabs->setTabShape(QTabWidget::Rounded);
        mainTabs->setElideMode(Qt::ElideNone);
        mainTabs->setTabsClosable(false);
        mainTabs->setMovable(true);

        verticalLayout->addWidget(mainTabs);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1200, 21));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuWindow = new QMenu(menubar);
        menuWindow->setObjectName(QStringLiteral("menuWindow"));
        menu_New = new QMenu(menuWindow);
        menu_New->setObjectName(QStringLiteral("menu_New"));
        menuMeasurement = new QMenu(menubar);
        menuMeasurement->setObjectName(QStringLiteral("menuMeasurement"));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        menu_Trace = new QMenu(menubar);
        menu_Trace->setObjectName(QStringLiteral("menu_Trace"));
        MainWindow->setMenuBar(menubar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuMeasurement->menuAction());
        menubar->addAction(menu_Trace->menuAction());
        menubar->addAction(menuWindow->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuFile->addAction(action_WorkspaceNew);
        menuFile->addSeparator();
        menuFile->addAction(action_WorkspaceOpen);
        menuFile->addAction(action_WorkspaceSave);
        menuFile->addAction(action_WorkspaceSaveAs);
        menuFile->addSeparator();
        menuFile->addAction(action_Quit);
        menuWindow->addAction(menu_New->menuAction());
        menu_New->addAction(action_Trace_View);
        menu_New->addAction(actionLog_View);
        menu_New->addAction(actionGraph_View);
        menu_New->addAction(actionCan_Status_View);
        menu_New->addAction(actionGraph_View_2);
        menu_New->addAction(actionTransmit_View);
        menuMeasurement->addAction(actionStart_Measurement);
        menuMeasurement->addAction(actionStop_Measurement);
        menuMeasurement->addSeparator();
        menuMeasurement->addAction(actionSetup);
        menuHelp->addAction(actionAbout);
        menu_Trace->addAction(action_TraceClear);
        menu_Trace->addSeparator();
        menu_Trace->addAction(actionSave_Trace_to_file);

        retranslateUi(MainWindow);
        QObject::connect(action_Quit, SIGNAL(triggered()), MainWindow, SLOT(close()));

        mainTabs->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "cangaroo", Q_NULLPTR));
        action_Quit->setText(QApplication::translate("MainWindow", "E&xit", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        action_Quit->setShortcut(QApplication::translate("MainWindow", "Alt+F4", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        action_Trace_View->setText(QApplication::translate("MainWindow", "&Trace View", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        action_Trace_View->setShortcut(QApplication::translate("MainWindow", "Ctrl+Shift+T", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionLog_View->setText(QApplication::translate("MainWindow", "&Log View", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionLog_View->setShortcut(QApplication::translate("MainWindow", "Ctrl+Shift+L", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionSetup->setText(QApplication::translate("MainWindow", "&Setup...", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionSetup->setShortcut(QApplication::translate("MainWindow", "Ctrl+Alt+S", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionStart_Measurement->setText(QApplication::translate("MainWindow", "Star&t Measurement", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionStart_Measurement->setShortcut(QApplication::translate("MainWindow", "F5", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionStop_Measurement->setText(QApplication::translate("MainWindow", "Sto&p Measurement", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionStop_Measurement->setShortcut(QApplication::translate("MainWindow", "Shift+F5", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionAbout->setText(QApplication::translate("MainWindow", "&About", Q_NULLPTR));
        actionSave_Trace_to_file->setText(QApplication::translate("MainWindow", "&Save Trace to file...", Q_NULLPTR));
        actionGraph_View->setText(QApplication::translate("MainWindow", "&Graph View", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionGraph_View->setShortcut(QApplication::translate("MainWindow", "Ctrl+Shift+G", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        action_WorkspaceNew->setText(QApplication::translate("MainWindow", "&New Workspace...", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        action_WorkspaceNew->setShortcut(QApplication::translate("MainWindow", "Ctrl+N", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        action_WorkspaceSave->setText(QApplication::translate("MainWindow", "&Save Workspace", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        action_WorkspaceSave->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        action_WorkspaceSaveAs->setText(QApplication::translate("MainWindow", "Save Workspace &As...", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        action_WorkspaceSaveAs->setShortcut(QApplication::translate("MainWindow", "Ctrl+Shift+S", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        action_WorkspaceOpen->setText(QApplication::translate("MainWindow", "&Open Workspace...", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        action_WorkspaceOpen->setShortcut(QApplication::translate("MainWindow", "Ctrl+O", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        action_TraceClear->setText(QApplication::translate("MainWindow", "&Clear", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        action_TraceClear->setShortcut(QApplication::translate("MainWindow", "Esc", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionCan_Status_View->setText(QApplication::translate("MainWindow", "Can &Status View", Q_NULLPTR));
        actionGraph_View_2->setText(QApplication::translate("MainWindow", "Graph View", Q_NULLPTR));
        actionTransmit_View->setText(QApplication::translate("MainWindow", "Transmit View", Q_NULLPTR));
        menuFile->setTitle(QApplication::translate("MainWindow", "&File", Q_NULLPTR));
        menuWindow->setTitle(QApplication::translate("MainWindow", "&Window", Q_NULLPTR));
        menu_New->setTitle(QApplication::translate("MainWindow", "&New", Q_NULLPTR));
        menuMeasurement->setTitle(QApplication::translate("MainWindow", "&Measurement", Q_NULLPTR));
        menuHelp->setTitle(QApplication::translate("MainWindow", "&Help", Q_NULLPTR));
        menu_Trace->setTitle(QApplication::translate("MainWindow", "&Trace", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
