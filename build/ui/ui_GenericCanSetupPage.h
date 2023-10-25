/********************************************************************************
** Form generated from reading UI file 'GenericCanSetupPage.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GENERICCANSETUPPAGE_H
#define UI_GENERICCANSETUPPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GenericCanSetupPage
{
public:
    QLabel *label;
    QLabel *laDriver;
    QLabel *label_3;
    QLabel *laInterface;
    QLabel *label_5;
    QLabel *laInterfaceDetails;
    QLabel *label_7;
    QComboBox *cbBitrate;
    QLabel *label_8;
    QComboBox *cbSamplePoint;
    QLabel *label_9;
    QComboBox *cbBitrateFD;
    QLabel *label_10;
    QComboBox *cbSamplePointFD;
    QLabel *label_11;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *vbOptions;
    QCheckBox *cbConfigOS;
    QCheckBox *cbListenOnly;
    QCheckBox *cbOneShot;
    QCheckBox *cbTripleSampling;
    QCheckBox *cbAutoRestart;

    void setupUi(QWidget *GenericCanSetupPage)
    {
        if (GenericCanSetupPage->objectName().isEmpty())
            GenericCanSetupPage->setObjectName(QStringLiteral("GenericCanSetupPage"));
        GenericCanSetupPage->resize(795, 633);
        label = new QLabel(GenericCanSetupPage);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(9, 9, 66, 16));
        laDriver = new QLabel(GenericCanSetupPage);
        laDriver->setObjectName(QStringLiteral("laDriver"));
        laDriver->setGeometry(QRect(140, 9, 610, 16));
        label_3 = new QLabel(GenericCanSetupPage);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(9, 28, 82, 16));
        laInterface = new QLabel(GenericCanSetupPage);
        laInterface->setObjectName(QStringLiteral("laInterface"));
        laInterface->setGeometry(QRect(140, 28, 610, 16));
        label_5 = new QLabel(GenericCanSetupPage);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(9, 47, 117, 16));
        laInterfaceDetails = new QLabel(GenericCanSetupPage);
        laInterfaceDetails->setObjectName(QStringLiteral("laInterfaceDetails"));
        laInterfaceDetails->setGeometry(QRect(140, 47, 610, 16));
        label_7 = new QLabel(GenericCanSetupPage);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(9, 84, 69, 16));
        cbBitrate = new QComboBox(GenericCanSetupPage);
        cbBitrate->setObjectName(QStringLiteral("cbBitrate"));
        cbBitrate->setGeometry(QRect(140, 84, 170, 20));
        label_8 = new QLabel(GenericCanSetupPage);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(9, 110, 98, 16));
        cbSamplePoint = new QComboBox(GenericCanSetupPage);
        cbSamplePoint->setObjectName(QStringLiteral("cbSamplePoint"));
        cbSamplePoint->setGeometry(QRect(140, 110, 170, 20));
        label_9 = new QLabel(GenericCanSetupPage);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(9, 150, 104, 16));
        cbBitrateFD = new QComboBox(GenericCanSetupPage);
        cbBitrateFD->setObjectName(QStringLiteral("cbBitrateFD"));
        cbBitrateFD->setGeometry(QRect(140, 150, 170, 20));
        label_10 = new QLabel(GenericCanSetupPage);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(9, 176, 130, 16));
        cbSamplePointFD = new QComboBox(GenericCanSetupPage);
        cbSamplePointFD->setObjectName(QStringLiteral("cbSamplePointFD"));
        cbSamplePointFD->setGeometry(QRect(140, 176, 170, 20));
        label_11 = new QLabel(GenericCanSetupPage);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(9, 220, 41, 16));
        verticalLayoutWidget = new QWidget(GenericCanSetupPage);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(140, 220, 411, 126));
        vbOptions = new QVBoxLayout(verticalLayoutWidget);
        vbOptions->setObjectName(QStringLiteral("vbOptions"));
        vbOptions->setContentsMargins(0, 0, 0, 0);
        cbConfigOS = new QCheckBox(verticalLayoutWidget);
        cbConfigOS->setObjectName(QStringLiteral("cbConfigOS"));

        vbOptions->addWidget(cbConfigOS);

        cbListenOnly = new QCheckBox(verticalLayoutWidget);
        cbListenOnly->setObjectName(QStringLiteral("cbListenOnly"));

        vbOptions->addWidget(cbListenOnly);

        cbOneShot = new QCheckBox(verticalLayoutWidget);
        cbOneShot->setObjectName(QStringLiteral("cbOneShot"));

        vbOptions->addWidget(cbOneShot);

        cbTripleSampling = new QCheckBox(verticalLayoutWidget);
        cbTripleSampling->setObjectName(QStringLiteral("cbTripleSampling"));

        vbOptions->addWidget(cbTripleSampling);

        cbAutoRestart = new QCheckBox(verticalLayoutWidget);
        cbAutoRestart->setObjectName(QStringLiteral("cbAutoRestart"));

        vbOptions->addWidget(cbAutoRestart);


        retranslateUi(GenericCanSetupPage);

        QMetaObject::connectSlotsByName(GenericCanSetupPage);
    } // setupUi

    void retranslateUi(QWidget *GenericCanSetupPage)
    {
        GenericCanSetupPage->setWindowTitle(QApplication::translate("GenericCanSetupPage", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("GenericCanSetupPage", "Driver:", Q_NULLPTR));
        laDriver->setText(QApplication::translate("GenericCanSetupPage", "TextLabel", Q_NULLPTR));
        label_3->setText(QApplication::translate("GenericCanSetupPage", "Interface:", Q_NULLPTR));
        laInterface->setText(QApplication::translate("GenericCanSetupPage", "TextLabel", Q_NULLPTR));
        label_5->setText(QApplication::translate("GenericCanSetupPage", "Interface Details:", Q_NULLPTR));
        laInterfaceDetails->setText(QApplication::translate("GenericCanSetupPage", "TextLabel", Q_NULLPTR));
        label_7->setText(QApplication::translate("GenericCanSetupPage", "Bitrate:", Q_NULLPTR));
        label_8->setText(QApplication::translate("GenericCanSetupPage", "Sample Point:", Q_NULLPTR));
        label_9->setText(QApplication::translate("GenericCanSetupPage", "CanFD Bitrate:", Q_NULLPTR));
        label_10->setText(QApplication::translate("GenericCanSetupPage", "CanFD SamplePoint:", Q_NULLPTR));
        label_11->setText(QApplication::translate("GenericCanSetupPage", "Options:", Q_NULLPTR));
        cbConfigOS->setText(QApplication::translate("GenericCanSetupPage", "configured by operating system", Q_NULLPTR));
        cbListenOnly->setText(QApplication::translate("GenericCanSetupPage", "Listen only mode", Q_NULLPTR));
        cbOneShot->setText(QApplication::translate("GenericCanSetupPage", "One-Shot mode", Q_NULLPTR));
        cbTripleSampling->setText(QApplication::translate("GenericCanSetupPage", "Triple Sampling", Q_NULLPTR));
        cbAutoRestart->setText(QApplication::translate("GenericCanSetupPage", "Auto-Restart on bus off condition", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class GenericCanSetupPage: public Ui_GenericCanSetupPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GENERICCANSETUPPAGE_H
