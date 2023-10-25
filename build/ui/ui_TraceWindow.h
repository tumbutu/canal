/********************************************************************************
** Form generated from reading UI file 'TraceWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRACEWINDOW_H
#define UI_TRACEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TraceWindow
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *cbTimestampMode;
    QCheckBox *cbAggregated;
    QCheckBox *cbAutoScroll;
    QSpacerItem *horizontalSpacer;
    QLabel *label_2;
    QLineEdit *filterLineEdit;
    QTreeView *tree;

    void setupUi(QWidget *TraceWindow)
    {
        if (TraceWindow->objectName().isEmpty())
            TraceWindow->setObjectName(QStringLiteral("TraceWindow"));
        TraceWindow->resize(918, 616);
        verticalLayout = new QVBoxLayout(TraceWindow);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        widget = new QWidget(TraceWindow);
        widget->setObjectName(QStringLiteral("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        cbTimestampMode = new QComboBox(widget);
        cbTimestampMode->setObjectName(QStringLiteral("cbTimestampMode"));

        horizontalLayout->addWidget(cbTimestampMode);

        cbAggregated = new QCheckBox(widget);
        cbAggregated->setObjectName(QStringLiteral("cbAggregated"));
        cbAggregated->setChecked(false);

        horizontalLayout->addWidget(cbAggregated);

        cbAutoScroll = new QCheckBox(widget);
        cbAutoScroll->setObjectName(QStringLiteral("cbAutoScroll"));

        horizontalLayout->addWidget(cbAutoScroll);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        filterLineEdit = new QLineEdit(widget);
        filterLineEdit->setObjectName(QStringLiteral("filterLineEdit"));

        horizontalLayout->addWidget(filterLineEdit);


        verticalLayout->addWidget(widget);

        tree = new QTreeView(TraceWindow);
        tree->setObjectName(QStringLiteral("tree"));
        tree->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);

        verticalLayout->addWidget(tree);


        retranslateUi(TraceWindow);

        QMetaObject::connectSlotsByName(TraceWindow);
    } // setupUi

    void retranslateUi(QWidget *TraceWindow)
    {
        TraceWindow->setWindowTitle(QApplication::translate("TraceWindow", "Trace View", Q_NULLPTR));
        label->setText(QApplication::translate("TraceWindow", "Timestamps:", Q_NULLPTR));
        cbAggregated->setText(QApplication::translate("TraceWindow", "aggregate by ID", Q_NULLPTR));
        cbAutoScroll->setText(QApplication::translate("TraceWindow", "auto scroll", Q_NULLPTR));
        label_2->setText(QApplication::translate("TraceWindow", "Filter: ", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TraceWindow: public Ui_TraceWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRACEWINDOW_H
