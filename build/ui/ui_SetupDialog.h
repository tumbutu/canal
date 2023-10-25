/********************************************************************************
** Form generated from reading UI file 'SetupDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETUPDIALOG_H
#define UI_SETUPDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SetupDialog
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QVBoxLayout *verticalLayout_5;
    QSplitter *splitter;
    QWidget *widget_4;
    QVBoxLayout *verticalLayout_2;
    QTreeView *treeView;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *btAddNetwork;
    QPushButton *btRemoveNetwork;
    QPushButton *btRefreshNetworks;
    QStackedWidget *stackedWidget;
    QWidget *emptyPage;
    QWidget *networkPage;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *edNetworkName;
    QWidget *interfacesPage;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_2;
    QTreeView *interfacesTreeView;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *btAddInterface;
    QPushButton *btRemoveInterface;
    QWidget *candbsPage;
    QVBoxLayout *verticalLayout_4;
    QTreeView *candbsTreeView;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btAddDatabase;
    QPushButton *btRemoveDatabase;
    QPushButton *btReloadDatabases;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SetupDialog)
    {
        if (SetupDialog->objectName().isEmpty())
            SetupDialog->setObjectName(QStringLiteral("SetupDialog"));
        SetupDialog->resize(1036, 835);
        verticalLayout = new QVBoxLayout(SetupDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        widget = new QWidget(SetupDialog);
        widget->setObjectName(QStringLiteral("widget"));
        verticalLayout_5 = new QVBoxLayout(widget);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        splitter = new QSplitter(widget);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        widget_4 = new QWidget(splitter);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        verticalLayout_2 = new QVBoxLayout(widget_4);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        treeView = new QTreeView(widget_4);
        treeView->setObjectName(QStringLiteral("treeView"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(2);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(treeView->sizePolicy().hasHeightForWidth());
        treeView->setSizePolicy(sizePolicy);
        treeView->setContextMenuPolicy(Qt::CustomContextMenu);
        treeView->setSelectionMode(QAbstractItemView::SingleSelection);
        treeView->setUniformRowHeights(true);
        treeView->header()->setVisible(false);

        verticalLayout_2->addWidget(treeView);

        widget_5 = new QWidget(widget_4);
        widget_5->setObjectName(QStringLiteral("widget_5"));
        horizontalLayout_3 = new QHBoxLayout(widget_5);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        btAddNetwork = new QPushButton(widget_5);
        btAddNetwork->setObjectName(QStringLiteral("btAddNetwork"));

        horizontalLayout_3->addWidget(btAddNetwork);

        btRemoveNetwork = new QPushButton(widget_5);
        btRemoveNetwork->setObjectName(QStringLiteral("btRemoveNetwork"));

        horizontalLayout_3->addWidget(btRemoveNetwork);

        btRefreshNetworks = new QPushButton(widget_5);
        btRefreshNetworks->setObjectName(QStringLiteral("btRefreshNetworks"));

        horizontalLayout_3->addWidget(btRefreshNetworks);


        verticalLayout_2->addWidget(widget_5);

        splitter->addWidget(widget_4);
        stackedWidget = new QStackedWidget(splitter);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(3);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(stackedWidget->sizePolicy().hasHeightForWidth());
        stackedWidget->setSizePolicy(sizePolicy1);
        emptyPage = new QWidget();
        emptyPage->setObjectName(QStringLiteral("emptyPage"));
        stackedWidget->addWidget(emptyPage);
        networkPage = new QWidget();
        networkPage->setObjectName(QStringLiteral("networkPage"));
        formLayout = new QFormLayout(networkPage);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label = new QLabel(networkPage);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        edNetworkName = new QLineEdit(networkPage);
        edNetworkName->setObjectName(QStringLiteral("edNetworkName"));

        formLayout->setWidget(0, QFormLayout::FieldRole, edNetworkName);

        stackedWidget->addWidget(networkPage);
        interfacesPage = new QWidget();
        interfacesPage->setObjectName(QStringLiteral("interfacesPage"));
        verticalLayout_3 = new QVBoxLayout(interfacesPage);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(interfacesPage);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_3->addWidget(label_2);

        interfacesTreeView = new QTreeView(interfacesPage);
        interfacesTreeView->setObjectName(QStringLiteral("interfacesTreeView"));

        verticalLayout_3->addWidget(interfacesTreeView);

        widget_2 = new QWidget(interfacesPage);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        horizontalLayout = new QHBoxLayout(widget_2);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        btAddInterface = new QPushButton(widget_2);
        btAddInterface->setObjectName(QStringLiteral("btAddInterface"));

        horizontalLayout->addWidget(btAddInterface);

        btRemoveInterface = new QPushButton(widget_2);
        btRemoveInterface->setObjectName(QStringLiteral("btRemoveInterface"));

        horizontalLayout->addWidget(btRemoveInterface);


        verticalLayout_3->addWidget(widget_2);

        stackedWidget->addWidget(interfacesPage);
        candbsPage = new QWidget();
        candbsPage->setObjectName(QStringLiteral("candbsPage"));
        verticalLayout_4 = new QVBoxLayout(candbsPage);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        candbsTreeView = new QTreeView(candbsPage);
        candbsTreeView->setObjectName(QStringLiteral("candbsTreeView"));
        candbsTreeView->setAlternatingRowColors(false);
        candbsTreeView->setUniformRowHeights(false);

        verticalLayout_4->addWidget(candbsTreeView);

        widget_3 = new QWidget(candbsPage);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        horizontalLayout_2 = new QHBoxLayout(widget_3);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        btAddDatabase = new QPushButton(widget_3);
        btAddDatabase->setObjectName(QStringLiteral("btAddDatabase"));

        horizontalLayout_2->addWidget(btAddDatabase);

        btRemoveDatabase = new QPushButton(widget_3);
        btRemoveDatabase->setObjectName(QStringLiteral("btRemoveDatabase"));

        horizontalLayout_2->addWidget(btRemoveDatabase);

        btReloadDatabases = new QPushButton(widget_3);
        btReloadDatabases->setObjectName(QStringLiteral("btReloadDatabases"));

        horizontalLayout_2->addWidget(btReloadDatabases);


        verticalLayout_4->addWidget(widget_3);

        stackedWidget->addWidget(candbsPage);
        splitter->addWidget(stackedWidget);

        verticalLayout_5->addWidget(splitter);


        verticalLayout->addWidget(widget);

        buttonBox = new QDialogButtonBox(SetupDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(SetupDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), SetupDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), SetupDialog, SLOT(reject()));

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(SetupDialog);
    } // setupUi

    void retranslateUi(QDialog *SetupDialog)
    {
        SetupDialog->setWindowTitle(QApplication::translate("SetupDialog", "Measurement Setup", Q_NULLPTR));
        btAddNetwork->setText(QApplication::translate("SetupDialog", "Add Network", Q_NULLPTR));
        btRemoveNetwork->setText(QApplication::translate("SetupDialog", "Remove Network", Q_NULLPTR));
        btRefreshNetworks->setText(QApplication::translate("SetupDialog", "Refresh", Q_NULLPTR));
        label->setText(QApplication::translate("SetupDialog", "Network name:", Q_NULLPTR));
        label_2->setText(QApplication::translate("SetupDialog", "CAN interfaces assigned to this network:", Q_NULLPTR));
        btAddInterface->setText(QApplication::translate("SetupDialog", "Add &Interface...", Q_NULLPTR));
        btRemoveInterface->setText(QApplication::translate("SetupDialog", "&Remove Interface", Q_NULLPTR));
        btAddDatabase->setText(QApplication::translate("SetupDialog", "Add &Database...", Q_NULLPTR));
        btRemoveDatabase->setText(QApplication::translate("SetupDialog", "&Remove Database", Q_NULLPTR));
        btReloadDatabases->setText(QApplication::translate("SetupDialog", "Reload Databases", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SetupDialog: public Ui_SetupDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETUPDIALOG_H
