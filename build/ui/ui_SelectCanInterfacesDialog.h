/********************************************************************************
** Form generated from reading UI file 'SelectCanInterfacesDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELECTCANINTERFACESDIALOG_H
#define UI_SELECTCANINTERFACESDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SelectCanInterfacesDialog
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QTreeWidget *treeWidget;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SelectCanInterfacesDialog)
    {
        if (SelectCanInterfacesDialog->objectName().isEmpty())
            SelectCanInterfacesDialog->setObjectName(QStringLiteral("SelectCanInterfacesDialog"));
        SelectCanInterfacesDialog->resize(570, 438);
        QIcon icon;
        icon.addFile(QStringLiteral(":/assets/cangaroo.png"), QSize(), QIcon::Normal, QIcon::Off);
        SelectCanInterfacesDialog->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(SelectCanInterfacesDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        widget = new QWidget(SelectCanInterfacesDialog);
        widget->setObjectName(QStringLiteral("widget"));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        treeWidget = new QTreeWidget(widget);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(2, QStringLiteral("3"));
        __qtreewidgetitem->setText(1, QStringLiteral("2"));
        __qtreewidgetitem->setText(0, QStringLiteral("1"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));
        treeWidget->setIndentation(0);
        treeWidget->setColumnCount(3);
        treeWidget->header()->setDefaultSectionSize(100);

        verticalLayout_2->addWidget(treeWidget);

        widget_2 = new QWidget(widget);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        horizontalLayout = new QHBoxLayout(widget_2);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(widget_2);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_2->addWidget(widget_2);


        verticalLayout->addWidget(widget);

        buttonBox = new QDialogButtonBox(SelectCanInterfacesDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(SelectCanInterfacesDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), SelectCanInterfacesDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), SelectCanInterfacesDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(SelectCanInterfacesDialog);
    } // setupUi

    void retranslateUi(QDialog *SelectCanInterfacesDialog)
    {
        SelectCanInterfacesDialog->setWindowTitle(QApplication::translate("SelectCanInterfacesDialog", "Select CAN Interface(s)", Q_NULLPTR));
        pushButton->setText(QApplication::translate("SelectCanInterfacesDialog", "&Create Interface...", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SelectCanInterfacesDialog: public Ui_SelectCanInterfacesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECTCANINTERFACESDIALOG_H
