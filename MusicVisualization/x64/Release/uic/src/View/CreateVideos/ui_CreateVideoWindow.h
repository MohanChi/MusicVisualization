/********************************************************************************
** Form generated from reading UI file 'CreateVideoWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATEVIDEOWINDOW_H
#define UI_CREATEVIDEOWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CreateVideoWindow
{
public:
    QWidget *widget_background;
    QPushButton *btn_back;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QSlider *hs_pulse_react;
    QSlider *hs_motion_react;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QSlider *hs_contrast_strength;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QPushButton *btn_upload_music;
    QLabel *label_10;
    QComboBox *comboBox;
    QLabel *label_11;
    QPushButton *btn_generate;
    QPushButton *btn_completed;
    QPushButton *btn_play;
    QSlider *horizontalSlider;
    QLabel *label_12;
    QLabel *label_positionTime;
    QLabel *label_totalTime;
    QDoubleSpinBox *dsb_pulse_react;
    QDoubleSpinBox *dsb_motion_react;
    QDoubleSpinBox *dsb_contrast_strength;
    QLabel *label_filename;

    void setupUi(QWidget *CreateVideoWindow)
    {
        if (CreateVideoWindow->objectName().isEmpty())
            CreateVideoWindow->setObjectName(QString::fromUtf8("CreateVideoWindow"));
        CreateVideoWindow->resize(1000, 560);
        widget_background = new QWidget(CreateVideoWindow);
        widget_background->setObjectName(QString::fromUtf8("widget_background"));
        widget_background->setGeometry(QRect(0, 0, 1000, 560));
        widget_background->setStyleSheet(QString::fromUtf8("background-color: rgb(227, 227, 227);"));
        btn_back = new QPushButton(widget_background);
        btn_back->setObjectName(QString::fromUtf8("btn_back"));
        btn_back->setGeometry(QRect(10, 10, 40, 40));
        btn_back->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        verticalLayoutWidget = new QWidget(widget_background);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(380, 60, 611, 371));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        hs_pulse_react = new QSlider(widget_background);
        hs_pulse_react->setObjectName(QString::fromUtf8("hs_pulse_react"));
        hs_pulse_react->setGeometry(QRect(60, 110, 250, 22));
        hs_pulse_react->setStyleSheet(QString::fromUtf8("QSlider::groove:horizontal {\n"
"background:transparent;\n"
"}\n"
"QSlider::handle:horizontal {\n"
"background: rgb(255,255,255);\n"
"width:8px;\n"
"height:8px;\n"
"border-radius:4px;\n"
"margin-top:7px;\n"
"margin-bottom:7px;\n"
"}\n"
"QSlider::sub-page:horizontal {\n"
"background:rgb(255,255,255);\n"
"margin-top:9px;\n"
"margin-bottom:9px;\n"
"}\n"
"QSlider::add-page:horizontal {\n"
"background: rgb(56,56,56);\n"
"margin-top:9px;\n"
"margin-bottom:9px;\n"
"}\n"
"QSlider::handle:horizontal:pressed {\n"
"background: rgb(255,255,255);\n"
"width:8px;\n"
"height:8px;\n"
"border-radius:4px;\n"
"margin-top:7px;\n"
"margin-bottom:7px;\n"
"}"));
        hs_pulse_react->setPageStep(1);
        hs_pulse_react->setOrientation(Qt::Horizontal);
        hs_motion_react = new QSlider(widget_background);
        hs_motion_react->setObjectName(QString::fromUtf8("hs_motion_react"));
        hs_motion_react->setGeometry(QRect(60, 160, 250, 22));
        hs_motion_react->setStyleSheet(QString::fromUtf8("QSlider::groove:horizontal {\n"
"background:transparent;\n"
"}\n"
"QSlider::handle:horizontal {\n"
"background: rgb(255,255,255);\n"
"width:8px;\n"
"height:8px;\n"
"border-radius:4px;\n"
"margin-top:7px;\n"
"margin-bottom:7px;\n"
"}\n"
"QSlider::sub-page:horizontal {\n"
"background:rgb(255,255,255);\n"
"margin-top:9px;\n"
"margin-bottom:9px;\n"
"}\n"
"QSlider::add-page:horizontal {\n"
"background: rgb(56,56,56);\n"
"margin-top:9px;\n"
"margin-bottom:9px;\n"
"}\n"
"QSlider::handle:horizontal:pressed {\n"
"background: rgb(255,255,255);\n"
"width:8px;\n"
"height:8px;\n"
"border-radius:4px;\n"
"margin-top:7px;\n"
"margin-bottom:7px;\n"
"}"));
        hs_motion_react->setMaximum(10);
        hs_motion_react->setPageStep(1);
        hs_motion_react->setOrientation(Qt::Horizontal);
        label = new QLabel(widget_background);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 130, 21, 16));
        label_2 = new QLabel(widget_background);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(305, 130, 21, 20));
        label_3 = new QLabel(widget_background);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 112, 31, 16));
        label_4 = new QLabel(widget_background);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(15, 160, 41, 20));
        label_5 = new QLabel(widget_background);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(60, 180, 21, 16));
        label_6 = new QLabel(widget_background);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(310, 180, 16, 16));
        hs_contrast_strength = new QSlider(widget_background);
        hs_contrast_strength->setObjectName(QString::fromUtf8("hs_contrast_strength"));
        hs_contrast_strength->setGeometry(QRect(60, 210, 250, 22));
        hs_contrast_strength->setStyleSheet(QString::fromUtf8("QSlider::groove:horizontal {\n"
"background:transparent;\n"
"}\n"
"QSlider::handle:horizontal {\n"
"background: rgb(255,255,255);\n"
"width:8px;\n"
"height:8px;\n"
"border-radius:4px;\n"
"margin-top:7px;\n"
"margin-bottom:7px;\n"
"}\n"
"QSlider::sub-page:horizontal {\n"
"background:rgb(255,255,255);\n"
"margin-top:9px;\n"
"margin-bottom:9px;\n"
"}\n"
"QSlider::add-page:horizontal {\n"
"background: rgb(56,56,56);\n"
"margin-top:9px;\n"
"margin-bottom:9px;\n"
"}\n"
"QSlider::handle:horizontal:pressed {\n"
"background: rgb(255,255,255);\n"
"width:8px;\n"
"height:8px;\n"
"border-radius:4px;\n"
"margin-top:7px;\n"
"margin-bottom:7px;\n"
"}"));
        hs_contrast_strength->setMaximum(10);
        hs_contrast_strength->setPageStep(1);
        hs_contrast_strength->setOrientation(Qt::Horizontal);
        label_7 = new QLabel(widget_background);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(10, 210, 51, 20));
        label_8 = new QLabel(widget_background);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(60, 230, 21, 16));
        label_9 = new QLabel(widget_background);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(310, 230, 16, 16));
        btn_upload_music = new QPushButton(widget_background);
        btn_upload_music->setObjectName(QString::fromUtf8("btn_upload_music"));
        btn_upload_music->setGeometry(QRect(90, 60, 40, 40));
        btn_upload_music->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_10 = new QLabel(widget_background);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(10, 70, 71, 16));
        comboBox = new QComboBox(widget_background);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(260, 60, 100, 40));
        label_11 = new QLabel(widget_background);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(180, 70, 71, 16));
        btn_generate = new QPushButton(widget_background);
        btn_generate->setObjectName(QString::fromUtf8("btn_generate"));
        btn_generate->setGeometry(QRect(380, 490, 120, 50));
        btn_generate->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        btn_completed = new QPushButton(widget_background);
        btn_completed->setObjectName(QString::fromUtf8("btn_completed"));
        btn_completed->setGeometry(QRect(560, 490, 120, 50));
        btn_completed->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        btn_play = new QPushButton(widget_background);
        btn_play->setObjectName(QString::fromUtf8("btn_play"));
        btn_play->setGeometry(QRect(380, 440, 30, 30));
        btn_play->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        horizontalSlider = new QSlider(widget_background);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(420, 445, 441, 22));
        horizontalSlider->setStyleSheet(QString::fromUtf8("QSlider::groove:horizontal {\n"
"background:transparent;\n"
"}\n"
"QSlider::handle:horizontal {\n"
"background: rgb(255,255,255);\n"
"width:8px;\n"
"height:8px;\n"
"border-radius:4px;\n"
"margin-top:7px;\n"
"margin-bottom:7px;\n"
"}\n"
"QSlider::sub-page:horizontal {\n"
"background:rgb(255,255,255);\n"
"margin-top:9px;\n"
"margin-bottom:9px;\n"
"}\n"
"QSlider::add-page:horizontal {\n"
"background: rgb(56,56,56);\n"
"margin-top:9px;\n"
"margin-bottom:9px;\n"
"}\n"
"QSlider::handle:horizontal:pressed {\n"
"background: rgb(255,255,255);\n"
"width:8px;\n"
"height:8px;\n"
"border-radius:4px;\n"
"margin-top:7px;\n"
"margin-bottom:7px;\n"
"}"));
        horizontalSlider->setPageStep(1);
        horizontalSlider->setOrientation(Qt::Horizontal);
        label_12 = new QLabel(widget_background);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(920, 450, 8, 16));
        label_positionTime = new QLabel(widget_background);
        label_positionTime->setObjectName(QString::fromUtf8("label_positionTime"));
        label_positionTime->setGeometry(QRect(870, 450, 50, 16));
        label_totalTime = new QLabel(widget_background);
        label_totalTime->setObjectName(QString::fromUtf8("label_totalTime"));
        label_totalTime->setGeometry(QRect(930, 450, 50, 16));
        dsb_pulse_react = new QDoubleSpinBox(widget_background);
        dsb_pulse_react->setObjectName(QString::fromUtf8("dsb_pulse_react"));
        dsb_pulse_react->setGeometry(QRect(320, 110, 51, 22));
        dsb_pulse_react->setStyleSheet(QString::fromUtf8(""));
        dsb_pulse_react->setDecimals(1);
        dsb_pulse_react->setMaximum(10.000000000000000);
        dsb_pulse_react->setSingleStep(0.100000000000000);
        dsb_pulse_react->setStepType(QAbstractSpinBox::DefaultStepType);
        dsb_motion_react = new QDoubleSpinBox(widget_background);
        dsb_motion_react->setObjectName(QString::fromUtf8("dsb_motion_react"));
        dsb_motion_react->setGeometry(QRect(320, 160, 51, 22));
        dsb_motion_react->setDecimals(1);
        dsb_motion_react->setMaximum(1.000000000000000);
        dsb_motion_react->setSingleStep(0.100000000000000);
        dsb_contrast_strength = new QDoubleSpinBox(widget_background);
        dsb_contrast_strength->setObjectName(QString::fromUtf8("dsb_contrast_strength"));
        dsb_contrast_strength->setGeometry(QRect(320, 210, 51, 22));
        dsb_contrast_strength->setDecimals(1);
        dsb_contrast_strength->setMaximum(1.000000000000000);
        dsb_contrast_strength->setSingleStep(0.100000000000000);
        label_filename = new QLabel(widget_background);
        label_filename->setObjectName(QString::fromUtf8("label_filename"));
        label_filename->setGeometry(QRect(70, 20, 71, 21));

        retranslateUi(CreateVideoWindow);

        QMetaObject::connectSlotsByName(CreateVideoWindow);
    } // setupUi

    void retranslateUi(QWidget *CreateVideoWindow)
    {
        CreateVideoWindow->setWindowTitle(QApplication::translate("CreateVideoWindow", "CreateVideoWindow", nullptr));
        btn_back->setText(QString());
        label->setText(QApplication::translate("CreateVideoWindow", "0", nullptr));
        label_2->setText(QApplication::translate("CreateVideoWindow", "10", nullptr));
        label_3->setText(QApplication::translate("CreateVideoWindow", "pulse", nullptr));
        label_4->setText(QApplication::translate("CreateVideoWindow", "motion", nullptr));
        label_5->setText(QApplication::translate("CreateVideoWindow", "0", nullptr));
        label_6->setText(QApplication::translate("CreateVideoWindow", "1", nullptr));
        label_7->setText(QApplication::translate("CreateVideoWindow", "contrast", nullptr));
        label_8->setText(QApplication::translate("CreateVideoWindow", "0", nullptr));
        label_9->setText(QApplication::translate("CreateVideoWindow", "1", nullptr));
        btn_upload_music->setText(QString());
        label_10->setText(QApplication::translate("CreateVideoWindow", "upload music", nullptr));
        comboBox->setItemText(0, QApplication::translate("CreateVideoWindow", "modern art", nullptr));
        comboBox->setItemText(1, QApplication::translate("CreateVideoWindow", "cat", nullptr));

        label_11->setText(QApplication::translate("CreateVideoWindow", "choose style", nullptr));
        btn_generate->setText(QString());
        btn_completed->setText(QString());
        btn_play->setText(QString());
        label_12->setText(QApplication::translate("CreateVideoWindow", "/", nullptr));
        label_positionTime->setText(QString());
        label_totalTime->setText(QString());
        label_filename->setText(QApplication::translate("CreateVideoWindow", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CreateVideoWindow: public Ui_CreateVideoWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATEVIDEOWINDOW_H
