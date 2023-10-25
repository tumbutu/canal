/********************************************************************************
** Form generated from reading UI file 'CanStatusWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CANSTATUSWINDOW_H
#define UI_CANSTATUSWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CanStatusWindow
{
public:
    QVBoxLayout *verticalLayout;
    QTreeWidget *treeWidget;

    void setupUi(QWidget *CanStatusWindow)
    {
        if (CanStatusWindow->objectName().isEmpty())
            CanStatusWindow->setObjectName(QStringLiteral("CanStatusWindow"));
        CanStatusWindow->resize(756, 459);
        verticalLayout = new QVBoxLayout(CanStatusWindow);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(2, 2, 2, 2);
        treeWidget = new QTreeWidget(CanStatusWindow);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(12, QStringLiteral("13"));
        __qtreewidgetitem->setText(11, QStringLiteral("12"));
        __qtreewidgetitem->setText(10, QStringLiteral("11"));
        __qtreewidgetitem->setText(9, QStringLiteral("10"));
        __qtreewidgetitem->setText(8, QStringLiteral("9"));
        __qtreewidgetitem->setText(7, QStringLiteral("8"));
        __qtreewidgetitem->setText(6, QStringLiteral("7"));
        __qtreewidgetitem->setText(5, QStringLiteral("6"));
        __qtreewidgetitem->setText(4, QStringLiteral("5"));
        __qtreewidgetitem->setText(3, QStringLiteral("4"));
        __qtreewidgetitem->setText(2, QStringLiteral("3"));
        __qtreewidgetitem->setText(1, QStringLiteral("2"));
        __qtreewidgetitem->setText(0, QStringLiteral("1"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));
        treeWidget->setIndentation(0);
        treeWidget->setItemsExpandable(false);
        treeWidget->setColumnCount(13);
        treeWidget->header()->setDefaultSectionSize(80);

        verticalLayout->addWidget(treeWidget);


        retranslateUi(CanStatusWindow);

        QMetaObject::connectSlotsByName(CanStatusWindow);
    } // setupUi

    void retranslateUi(QWidget *CanStatusWindow)
    {
        CanStatusWindow->setWindowTitle(QApplication::translate("CanStatusWindow", "Can Status", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CanStatusWindow: public Ui_CanStatusWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CANSTATUSWINDOW_H
