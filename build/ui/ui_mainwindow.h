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
    QAction *actionAdcs_View;
    QAction *actionEps_View;
    QAction *actionRadio_View;
    QAction *actionStart_Measurement;
    QAction *actionStop_Measurement;
    QAction *actionAbout;
    QAction *actionSave_Trace_to_file;
    QAction *action_TraceClear;
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
        actionAdcs_View = new QAction(MainWindow);
        actionAdcs_View->setObjectName(QStringLiteral("actionAdcs_View"));
        actionEps_View = new QAction(MainWindow);
        actionEps_View->setObjectName(QStringLiteral("actionEps_View"));
        actionRadio_View = new QAction(MainWindow);
        actionRadio_View->setObjectName(QStringLiteral("actionRadio_View"));
        actionStart_Measurement = new QAction(MainWindow);
        actionStart_Measurement->setObjectName(QStringLiteral("actionStart_Measurement"));
        actionStop_Measurement = new QAction(MainWindow);
        actionStop_Measurement->setObjectName(QStringLiteral("actionStop_Measurement"));
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        actionSave_Trace_to_file = new QAction(MainWindow);
        actionSave_Trace_to_file->setObjectName(QStringLiteral("actionSave_Trace_to_file"));
        action_TraceClear = new QAction(MainWindow);
        action_TraceClear->setObjectName(QStringLiteral("action_TraceClear"));
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
        menuFile->addSeparator();
        menuFile->addSeparator();
        menuFile->addAction(action_Quit);
        menuWindow->addAction(menu_New->menuAction());
        menu_New->addAction(actionAdcs_View);
        menu_New->addAction(actionEps_View);
        menu_New->addAction(actionRadio_View);
        menu_New->addAction(actionTransmit_View);
        menuMeasurement->addAction(actionStart_Measurement);
        menuMeasurement->addAction(actionStop_Measurement);
        menuMeasurement->addSeparator();
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
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Canal", Q_NULLPTR));
        action_Quit->setText(QApplication::translate("MainWindow", "E&xit", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        action_Quit->setShortcut(QApplication::translate("MainWindow", "Alt+F4", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionAdcs_View->setText(QApplication::translate("MainWindow", "&ADCS View", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionAdcs_View->setShortcut(QApplication::translate("MainWindow", "Ctrl+Shift+A", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionEps_View->setText(QApplication::translate("MainWindow", "&Log View", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionEps_View->setShortcut(QApplication::translate("MainWindow", "Ctrl+Shift+E", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionRadio_View->setText(QApplication::translate("MainWindow", "&Radio View", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionRadio_View->setShortcut(QApplication::translate("MainWindow", "Ctrl+Shift+R", Q_NULLPTR));
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
        action_TraceClear->setText(QApplication::translate("MainWindow", "&Clear", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        action_TraceClear->setShortcut(QApplication::translate("MainWindow", "Esc", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
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
