/********************************************************************************
** Form generated from reading UI file 'CreateVideoWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATEVIDEOWINDOW_H
#define UI_CREATEVIDEOWINDOW_H

#include <F:\MIProject\MusicVisualization\MusicVisualization\src\Module\QtWidget\respushbutton.h>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CreateVideoWindow
{
public:
    QWidget *widget_background;
    ResPushButton *btn_back;
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
    ResPushButton *btn_upload_music;
    QLabel *label_10;
    QComboBox *comboBox;
    QLabel *label_11;
    ResPushButton *btn_generate;
    ResPushButton *btn_completed;
    ResPushButton *btn_play;
    QSlider *horizontalSlider;
    QLabel *label_12;
    QLabel *label_positionTime;
    QLabel *label_totalTime;
    QDoubleSpinBox *dsb_pulse_react;
    QDoubleSpinBox *dsb_motion_react;
    QDoubleSpinBox *dsb_contrast_strength;
    QLabel *label_filename;
    QLabel *label_tick;
    QLabel *label_13;
    QSlider *hs_speed_fpm;
    QLabel *label_14;
    QLabel *label_15;
    QDoubleSpinBox *dsb_speed_fpm;
    QLabel *label_31;
    ResPushButton *btn_save;
    QCheckBox *cb_pulse_percussive;
    QCheckBox *cb_pulse_harmonic;
    QCheckBox *cb_motion_percussive;
    QCheckBox *cb_motion_harmonic;
    QSlider *hs_pitch_react;
    QDoubleSpinBox *dsb_pitch_react;
    QLabel *label_16;
    QLabel *label_17;
    QCheckBox *cb_contrast_percussive;
    QLabel *label_32;
    QSlider *hs_flash_strength;
    QDoubleSpinBox *dsb_flash_strength;
    QLabel *label_18;
    QLabel *label_19;
    QLabel *label_20;
    QSlider *hs_motion_randomness;
    QDoubleSpinBox *dsb_motion_randomness;
    QCheckBox *cb_flash_percussive;
    QSpinBox *sb_resolution;
    QLabel *label_33;
    QLabel *label_34;
    QSpinBox *sb_start;
    QLabel *label_35;
    QSpinBox *sb_fps;
    QLabel *label_21;
    QLabel *label_22;

    void setupUi(QWidget *CreateVideoWindow)
    {
        if (CreateVideoWindow->objectName().isEmpty())
            CreateVideoWindow->setObjectName(QString::fromUtf8("CreateVideoWindow"));
        CreateVideoWindow->resize(1000, 560);
        widget_background = new QWidget(CreateVideoWindow);
        widget_background->setObjectName(QString::fromUtf8("widget_background"));
        widget_background->setGeometry(QRect(0, 0, 1000, 560));
        widget_background->setStyleSheet(QString::fromUtf8("background-color: rgb(248, 249, 250);"));
        btn_back = new ResPushButton(widget_background);
        btn_back->setObjectName(QString::fromUtf8("btn_back"));
        btn_back->setGeometry(QRect(10, 10, 40, 40));
        btn_back->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        btn_back->setIconSize(QSize(40, 40));
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
        hs_pulse_react->setGeometry(QRect(105, 160, 211, 22));
        hs_pulse_react->setStyleSheet(QString::fromUtf8("QSlider::groove:horizontal {\n"
"background:transparent;\n"
"}\n"
"QSlider::handle:horizontal {\n"
"background: rgb(160,160,160);\n"
"width:8px;\n"
"height:8px;\n"
"border-radius:4px;\n"
"margin-top:7px;\n"
"margin-bottom:7px;\n"
"}\n"
"QSlider::sub-page:horizontal {\n"
"background: rgb(160,160,160);\n"
"margin-top:9px;\n"
"margin-bottom:9px;\n"
"}\n"
"QSlider::add-page:horizontal {\n"
"background: rgb(60,60,60);\n"
"margin-top:9px;\n"
"margin-bottom:9px;\n"
"}\n"
"QSlider::handle:horizontal:pressed {\n"
"background: rgb(160,160,160);\n"
"width:8px;\n"
"height:8px;\n"
"border-radius:4px;\n"
"margin-top:7px;\n"
"margin-bottom:7px;\n"
"}"));
        hs_pulse_react->setMaximum(20);
        hs_pulse_react->setPageStep(1);
        hs_pulse_react->setValue(5);
        hs_pulse_react->setOrientation(Qt::Horizontal);
        hs_motion_react = new QSlider(widget_background);
        hs_motion_react->setObjectName(QString::fromUtf8("hs_motion_react"));
        hs_motion_react->setGeometry(QRect(105, 200, 211, 22));
        hs_motion_react->setStyleSheet(QString::fromUtf8("QSlider::groove:horizontal {\n"
"background:transparent;\n"
"}\n"
"QSlider::handle:horizontal {\n"
"background: rgb(160,160,160);\n"
"width:8px;\n"
"height:8px;\n"
"border-radius:4px;\n"
"margin-top:7px;\n"
"margin-bottom:7px;\n"
"}\n"
"QSlider::sub-page:horizontal {\n"
"background: rgb(160,160,160);\n"
"margin-top:9px;\n"
"margin-bottom:9px;\n"
"}\n"
"QSlider::add-page:horizontal {\n"
"background: rgb(60,60,60);\n"
"margin-top:9px;\n"
"margin-bottom:9px;\n"
"}\n"
"QSlider::handle:horizontal:pressed {\n"
"background: rgb(160,160,160);\n"
"width:8px;\n"
"height:8px;\n"
"border-radius:4px;\n"
"margin-top:7px;\n"
"margin-bottom:7px;\n"
"}"));
        hs_motion_react->setMaximum(10);
        hs_motion_react->setPageStep(1);
        hs_motion_react->setValue(5);
        hs_motion_react->setOrientation(Qt::Horizontal);
        label = new QLabel(widget_background);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(105, 175, 21, 16));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        label->setFont(font);
        label_2 = new QLabel(widget_background);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(310, 175, 21, 20));
        label_2->setFont(font);
        label_3 = new QLabel(widget_background);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(17, 160, 71, 20));
        label_3->setFont(font);
        label_4 = new QLabel(widget_background);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(15, 200, 71, 20));
        label_4->setFont(font);
        label_5 = new QLabel(widget_background);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(105, 215, 21, 16));
        label_5->setFont(font);
        label_6 = new QLabel(widget_background);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(310, 215, 16, 16));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Alibaba PuHuiTi"));
        font1.setPointSize(10);
        label_6->setFont(font1);
        hs_contrast_strength = new QSlider(widget_background);
        hs_contrast_strength->setObjectName(QString::fromUtf8("hs_contrast_strength"));
        hs_contrast_strength->setGeometry(QRect(105, 280, 211, 22));
        hs_contrast_strength->setStyleSheet(QString::fromUtf8("QSlider::groove:horizontal {\n"
"background:transparent;\n"
"}\n"
"QSlider::handle:horizontal {\n"
"background: rgb(160,160,160);\n"
"width:8px;\n"
"height:8px;\n"
"border-radius:4px;\n"
"margin-top:7px;\n"
"margin-bottom:7px;\n"
"}\n"
"QSlider::sub-page:horizontal {\n"
"background: rgb(160,160,160);\n"
"margin-top:9px;\n"
"margin-bottom:9px;\n"
"}\n"
"QSlider::add-page:horizontal {\n"
"background: rgb(60,60,60);\n"
"margin-top:9px;\n"
"margin-bottom:9px;\n"
"}\n"
"QSlider::handle:horizontal:pressed {\n"
"background: rgb(160,160,160);\n"
"width:8px;\n"
"height:8px;\n"
"border-radius:4px;\n"
"margin-top:7px;\n"
"margin-bottom:7px;\n"
"}"));
        hs_contrast_strength->setMaximum(10);
        hs_contrast_strength->setPageStep(1);
        hs_contrast_strength->setValue(5);
        hs_contrast_strength->setOrientation(Qt::Horizontal);
        label_7 = new QLabel(widget_background);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(5, 280, 91, 20));
        label_7->setFont(font);
        label_8 = new QLabel(widget_background);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(105, 295, 21, 16));
        label_8->setFont(font);
        label_9 = new QLabel(widget_background);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(310, 295, 16, 16));
        label_9->setFont(font);
        btn_upload_music = new ResPushButton(widget_background);
        btn_upload_music->setObjectName(QString::fromUtf8("btn_upload_music"));
        btn_upload_music->setGeometry(QRect(90, 60, 40, 40));
        btn_upload_music->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        btn_upload_music->setIconSize(QSize(40, 40));
        label_10 = new QLabel(widget_background);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(10, 70, 81, 16));
        label_10->setFont(font);
        comboBox = new QComboBox(widget_background);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(260, 60, 111, 40));
        comboBox->setFont(font);
        comboBox->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"    border: 1px solid gray;  \n"
"    border-radius: 3px; \n"
"    padding: 1px 18px 1px 3px;   \n"
"    color: rgb(0,0,0);\n"
"    background: transparent;\n"
"}\n"
"\n"
"QComboBox QAbstractItemView {\n"
"    outline: 0px solid gray;   \n"
"    border: 1px solid rgb(73,80,87);   \n"
"    color:rgb(73,80,87);\n"
"    background-color:rgb(248,249,250);  \n"
"    selection-background-color:rgb(73,80,87);  \n"
"}\n"
"\n"
"\n"
"QComboBox QAbstractItemView::item {\n"
"    height: 50px;   \n"
"}\n"
"\n"
"QComboBox QAbstractItemView::item:hover {\n"
"    color: rgb(248,249,250);\n"
"    background-color: rgb(73,80,87);  \n"
"}\n"
"\n"
"QComboBox QAbstractItemView::item:selected {\n"
"    color:  rgb(248,249,250);\n"
"    background-color:  rgb(73,80,87);\n"
"}\n"
"\n"
"QComboBox QAbstractScrollArea QScrollBar:vertical {\n"
"    width: 10px;\n"
"    background-color: rgb(248,249,250);  \n"
"}\n"
"\n"
"QComboBox QAbstractScrollArea QScrollBar::handle:vertical {\n"
"    border-radius: 5px;  \n"
"    back"
                        "ground: rgb(160,160,160);  \n"
"}\n"
"\n"
"QComboBox QAbstractScrollArea QScrollBar::handle:vertical:hover {\n"
"    background: rgb(73, 80, 87);   \n"
"}\n"
"\n"
"QComboBox:!editable {\n"
"     background: rgb(248,249,250);\n"
"}\n"
"\n"
"QComboBox::drop-down:!editable {\n"
"    background: rgb(248,249,250);\n"
"}\n"
"\n"
"\n"
"QComboBox:on {\n"
"	\n"
"}\n"
"\n"
"QComboBox::drop-down {\n"
"    subcontrol-origin: padding;  \n"
"    subcontrol-position: top right;  \n"
"    width: 15px;  \n"
"\n"
"    border-left-width: 1px;  \n"
"    border-left-color: darkgray;  \n"
"    border-left-style: solid;   \n"
"    border-top-right-radius: 3px;   \n"
"    border-bottom-right-radius: 3px;   \n"
"}\n"
"\n"
"QComboBox::down-arrow {\n"
"    width: 15px;   \n"
"    background: transparent;   \n"
"    padding: 0px 0px 0px 0px;  \n"
"    image: url(:/MusicVisualization/img/caret_down.png);\n"
"}\n"
"\n"
"QComboBox::down-arrow:on {\n"
"    image: url(:/MusicVisualization/img/caret_down.png);   \n"
"}"));
        label_11 = new QLabel(widget_background);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(180, 70, 71, 16));
        label_11->setFont(font);
        btn_generate = new ResPushButton(widget_background);
        btn_generate->setObjectName(QString::fromUtf8("btn_generate"));
        btn_generate->setGeometry(QRect(380, 490, 100, 40));
        btn_generate->setFocusPolicy(Qt::NoFocus);
        btn_generate->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));
        btn_generate->setIconSize(QSize(100, 40));
        btn_completed = new ResPushButton(widget_background);
        btn_completed->setObjectName(QString::fromUtf8("btn_completed"));
        btn_completed->setGeometry(QRect(860, 490, 100, 40));
        btn_completed->setFocusPolicy(Qt::NoFocus);
        btn_completed->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));
        btn_completed->setIconSize(QSize(100, 40));
        btn_play = new ResPushButton(widget_background);
        btn_play->setObjectName(QString::fromUtf8("btn_play"));
        btn_play->setGeometry(QRect(380, 440, 30, 30));
        btn_play->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        btn_play->setIconSize(QSize(30, 30));
        horizontalSlider = new QSlider(widget_background);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(420, 445, 441, 22));
        horizontalSlider->setStyleSheet(QString::fromUtf8("QSlider::groove:horizontal {\n"
"background:transparent;\n"
"}\n"
"QSlider::handle:horizontal {\n"
"background: rgb(160,160,160);\n"
"width:8px;\n"
"height:8px;\n"
"border-radius:4px;\n"
"margin-top:7px;\n"
"margin-bottom:7px;\n"
"}\n"
"QSlider::sub-page:horizontal {\n"
"background: rgb(160,160,160);\n"
"margin-top:9px;\n"
"margin-bottom:9px;\n"
"}\n"
"QSlider::add-page:horizontal {\n"
"background: rgb(60,60,60);\n"
"margin-top:9px;\n"
"margin-bottom:9px;\n"
"}\n"
"QSlider::handle:horizontal:pressed {\n"
"background: rgb(160,160,160);\n"
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
        label_positionTime->setFont(font);
        label_totalTime = new QLabel(widget_background);
        label_totalTime->setObjectName(QString::fromUtf8("label_totalTime"));
        label_totalTime->setGeometry(QRect(930, 450, 50, 16));
        label_totalTime->setFont(font);
        dsb_pulse_react = new QDoubleSpinBox(widget_background);
        dsb_pulse_react->setObjectName(QString::fromUtf8("dsb_pulse_react"));
        dsb_pulse_react->setGeometry(QRect(325, 160, 51, 22));
        dsb_pulse_react->setFont(font);
        dsb_pulse_react->setStyleSheet(QString::fromUtf8(""));
        dsb_pulse_react->setDecimals(1);
        dsb_pulse_react->setMaximum(2.000000000000000);
        dsb_pulse_react->setSingleStep(0.100000000000000);
        dsb_pulse_react->setStepType(QAbstractSpinBox::DefaultStepType);
        dsb_pulse_react->setValue(0.500000000000000);
        dsb_motion_react = new QDoubleSpinBox(widget_background);
        dsb_motion_react->setObjectName(QString::fromUtf8("dsb_motion_react"));
        dsb_motion_react->setGeometry(QRect(325, 200, 51, 22));
        dsb_motion_react->setFont(font);
        dsb_motion_react->setDecimals(1);
        dsb_motion_react->setMaximum(1.000000000000000);
        dsb_motion_react->setSingleStep(0.100000000000000);
        dsb_motion_react->setValue(0.500000000000000);
        dsb_contrast_strength = new QDoubleSpinBox(widget_background);
        dsb_contrast_strength->setObjectName(QString::fromUtf8("dsb_contrast_strength"));
        dsb_contrast_strength->setGeometry(QRect(325, 280, 51, 22));
        dsb_contrast_strength->setFont(font);
        dsb_contrast_strength->setDecimals(1);
        dsb_contrast_strength->setMaximum(1.000000000000000);
        dsb_contrast_strength->setSingleStep(0.100000000000000);
        dsb_contrast_strength->setValue(0.500000000000000);
        label_filename = new QLabel(widget_background);
        label_filename->setObjectName(QString::fromUtf8("label_filename"));
        label_filename->setGeometry(QRect(60, 20, 111, 21));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Arial"));
        font2.setPointSize(10);
        label_filename->setFont(font2);
        label_filename->setContextMenuPolicy(Qt::NoContextMenu);
        label_tick = new QLabel(widget_background);
        label_tick->setObjectName(QString::fromUtf8("label_tick"));
        label_tick->setGeometry(QRect(135, 70, 20, 20));
        label_tick->setStyleSheet(QString::fromUtf8("background-color: rgb(188, 188, 188);"));
        label_tick->setPixmap(QPixmap(QString::fromUtf8(":/MusicVisualization/img/not.png")));
        label_tick->setScaledContents(true);
        label_13 = new QLabel(widget_background);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(20, 120, 71, 20));
        label_13->setFont(font);
        hs_speed_fpm = new QSlider(widget_background);
        hs_speed_fpm->setObjectName(QString::fromUtf8("hs_speed_fpm"));
        hs_speed_fpm->setGeometry(QRect(105, 120, 211, 22));
        hs_speed_fpm->setStyleSheet(QString::fromUtf8("QSlider::groove:horizontal {\n"
"background:transparent;\n"
"}\n"
"QSlider::handle:horizontal {\n"
"background: rgb(160,160,160);\n"
"width:8px;\n"
"height:8px;\n"
"border-radius:4px;\n"
"margin-top:7px;\n"
"margin-bottom:7px;\n"
"}\n"
"QSlider::sub-page:horizontal {\n"
"background: rgb(160,160,160);\n"
"margin-top:9px;\n"
"margin-bottom:9px;\n"
"}\n"
"QSlider::add-page:horizontal {\n"
"background: rgb(60,60,60);\n"
"margin-top:9px;\n"
"margin-bottom:9px;\n"
"}\n"
"QSlider::handle:horizontal:pressed {\n"
"background: rgb(160,160,160);\n"
"width:8px;\n"
"height:8px;\n"
"border-radius:4px;\n"
"margin-top:7px;\n"
"margin-bottom:7px;\n"
"}"));
        hs_speed_fpm->setMaximum(12);
        hs_speed_fpm->setPageStep(1);
        hs_speed_fpm->setValue(12);
        hs_speed_fpm->setOrientation(Qt::Horizontal);
        label_14 = new QLabel(widget_background);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(105, 135, 21, 16));
        label_14->setFont(font);
        label_15 = new QLabel(widget_background);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(305, 135, 21, 20));
        label_15->setFont(font);
        dsb_speed_fpm = new QDoubleSpinBox(widget_background);
        dsb_speed_fpm->setObjectName(QString::fromUtf8("dsb_speed_fpm"));
        dsb_speed_fpm->setGeometry(QRect(325, 120, 51, 22));
        dsb_speed_fpm->setFont(font);
        dsb_speed_fpm->setStyleSheet(QString::fromUtf8(""));
        dsb_speed_fpm->setDecimals(0);
        dsb_speed_fpm->setMaximum(12.000000000000000);
        dsb_speed_fpm->setSingleStep(1.000000000000000);
        dsb_speed_fpm->setStepType(QAbstractSpinBox::DefaultStepType);
        dsb_speed_fpm->setValue(12.000000000000000);
        label_31 = new QLabel(widget_background);
        label_31->setObjectName(QString::fromUtf8("label_31"));
        label_31->setGeometry(QRect(5, 320, 91, 20));
        label_31->setFont(font);
        btn_save = new ResPushButton(widget_background);
        btn_save->setObjectName(QString::fromUtf8("btn_save"));
        btn_save->setGeometry(QRect(510, 490, 100, 40));
        btn_save->setFocusPolicy(Qt::NoFocus);
        btn_save->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));
        btn_save->setIconSize(QSize(100, 40));
        cb_pulse_percussive = new QCheckBox(widget_background);
        cb_pulse_percussive->setObjectName(QString::fromUtf8("cb_pulse_percussive"));
        cb_pulse_percussive->setGeometry(QRect(10, 400, 121, 16));
        cb_pulse_percussive->setFont(font);
        cb_pulse_percussive->setChecked(true);
        cb_pulse_harmonic = new QCheckBox(widget_background);
        cb_pulse_harmonic->setObjectName(QString::fromUtf8("cb_pulse_harmonic"));
        cb_pulse_harmonic->setGeometry(QRect(10, 440, 111, 16));
        cb_pulse_harmonic->setFont(font);
        cb_pulse_harmonic->setChecked(false);
        cb_motion_percussive = new QCheckBox(widget_background);
        cb_motion_percussive->setObjectName(QString::fromUtf8("cb_motion_percussive"));
        cb_motion_percussive->setGeometry(QRect(125, 400, 121, 16));
        cb_motion_percussive->setFont(font);
        cb_motion_percussive->setChecked(false);
        cb_motion_harmonic = new QCheckBox(widget_background);
        cb_motion_harmonic->setObjectName(QString::fromUtf8("cb_motion_harmonic"));
        cb_motion_harmonic->setGeometry(QRect(125, 440, 121, 16));
        cb_motion_harmonic->setFont(font);
        cb_motion_harmonic->setChecked(true);
        hs_pitch_react = new QSlider(widget_background);
        hs_pitch_react->setObjectName(QString::fromUtf8("hs_pitch_react"));
        hs_pitch_react->setGeometry(QRect(105, 320, 211, 22));
        hs_pitch_react->setStyleSheet(QString::fromUtf8("QSlider::groove:horizontal {\n"
"background:transparent;\n"
"}\n"
"QSlider::handle:horizontal {\n"
"background: rgb(160,160,160);\n"
"width:8px;\n"
"height:8px;\n"
"border-radius:4px;\n"
"margin-top:7px;\n"
"margin-bottom:7px;\n"
"}\n"
"QSlider::sub-page:horizontal {\n"
"background: rgb(160,160,160);\n"
"margin-top:9px;\n"
"margin-bottom:9px;\n"
"}\n"
"QSlider::add-page:horizontal {\n"
"background: rgb(60,60,60);\n"
"margin-top:9px;\n"
"margin-bottom:9px;\n"
"}\n"
"QSlider::handle:horizontal:pressed {\n"
"background: rgb(160,160,160);\n"
"width:8px;\n"
"height:8px;\n"
"border-radius:4px;\n"
"margin-top:7px;\n"
"margin-bottom:7px;\n"
"}"));
        hs_pitch_react->setMaximum(20);
        hs_pitch_react->setPageStep(1);
        hs_pitch_react->setValue(5);
        hs_pitch_react->setOrientation(Qt::Horizontal);
        dsb_pitch_react = new QDoubleSpinBox(widget_background);
        dsb_pitch_react->setObjectName(QString::fromUtf8("dsb_pitch_react"));
        dsb_pitch_react->setGeometry(QRect(325, 320, 51, 22));
        dsb_pitch_react->setFont(font);
        dsb_pitch_react->setStyleSheet(QString::fromUtf8(""));
        dsb_pitch_react->setDecimals(1);
        dsb_pitch_react->setMaximum(2.000000000000000);
        dsb_pitch_react->setSingleStep(0.100000000000000);
        dsb_pitch_react->setStepType(QAbstractSpinBox::DefaultStepType);
        dsb_pitch_react->setValue(0.500000000000000);
        label_16 = new QLabel(widget_background);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(105, 335, 21, 16));
        label_16->setFont(font);
        label_17 = new QLabel(widget_background);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(310, 335, 21, 20));
        label_17->setFont(font);
        cb_contrast_percussive = new QCheckBox(widget_background);
        cb_contrast_percussive->setObjectName(QString::fromUtf8("cb_contrast_percussive"));
        cb_contrast_percussive->setGeometry(QRect(250, 440, 131, 16));
        cb_contrast_percussive->setFont(font);
        cb_contrast_percussive->setChecked(true);
        label_32 = new QLabel(widget_background);
        label_32->setObjectName(QString::fromUtf8("label_32"));
        label_32->setGeometry(QRect(10, 360, 91, 20));
        label_32->setFont(font);
        hs_flash_strength = new QSlider(widget_background);
        hs_flash_strength->setObjectName(QString::fromUtf8("hs_flash_strength"));
        hs_flash_strength->setGeometry(QRect(105, 360, 211, 22));
        hs_flash_strength->setStyleSheet(QString::fromUtf8("QSlider::groove:horizontal {\n"
"background:transparent;\n"
"}\n"
"QSlider::handle:horizontal {\n"
"background: rgb(160,160,160);\n"
"width:8px;\n"
"height:8px;\n"
"border-radius:4px;\n"
"margin-top:7px;\n"
"margin-bottom:7px;\n"
"}\n"
"QSlider::sub-page:horizontal {\n"
"background: rgb(160,160,160);\n"
"margin-top:9px;\n"
"margin-bottom:9px;\n"
"}\n"
"QSlider::add-page:horizontal {\n"
"background: rgb(60,60,60);\n"
"margin-top:9px;\n"
"margin-bottom:9px;\n"
"}\n"
"QSlider::handle:horizontal:pressed {\n"
"background: rgb(160,160,160);\n"
"width:8px;\n"
"height:8px;\n"
"border-radius:4px;\n"
"margin-top:7px;\n"
"margin-bottom:7px;\n"
"}"));
        hs_flash_strength->setMaximum(10);
        hs_flash_strength->setPageStep(1);
        hs_flash_strength->setValue(5);
        hs_flash_strength->setOrientation(Qt::Horizontal);
        dsb_flash_strength = new QDoubleSpinBox(widget_background);
        dsb_flash_strength->setObjectName(QString::fromUtf8("dsb_flash_strength"));
        dsb_flash_strength->setGeometry(QRect(325, 360, 51, 22));
        dsb_flash_strength->setFont(font);
        dsb_flash_strength->setDecimals(1);
        dsb_flash_strength->setMaximum(1.000000000000000);
        dsb_flash_strength->setSingleStep(0.100000000000000);
        dsb_flash_strength->setValue(0.500000000000000);
        label_18 = new QLabel(widget_background);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(105, 375, 21, 16));
        label_18->setFont(font);
        label_19 = new QLabel(widget_background);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(310, 375, 16, 16));
        label_19->setFont(font);
        label_20 = new QLabel(widget_background);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(10, 240, 91, 20));
        label_20->setFont(font);
        hs_motion_randomness = new QSlider(widget_background);
        hs_motion_randomness->setObjectName(QString::fromUtf8("hs_motion_randomness"));
        hs_motion_randomness->setGeometry(QRect(105, 240, 211, 22));
        hs_motion_randomness->setStyleSheet(QString::fromUtf8("QSlider::groove:horizontal {\n"
"background:transparent;\n"
"}\n"
"QSlider::handle:horizontal {\n"
"background: rgb(160,160,160);\n"
"width:8px;\n"
"height:8px;\n"
"border-radius:4px;\n"
"margin-top:7px;\n"
"margin-bottom:7px;\n"
"}\n"
"QSlider::sub-page:horizontal {\n"
"background: rgb(160,160,160);\n"
"margin-top:9px;\n"
"margin-bottom:9px;\n"
"}\n"
"QSlider::add-page:horizontal {\n"
"background: rgb(60,60,60);\n"
"margin-top:9px;\n"
"margin-bottom:9px;\n"
"}\n"
"QSlider::handle:horizontal:pressed {\n"
"background: rgb(160,160,160);\n"
"width:8px;\n"
"height:8px;\n"
"border-radius:4px;\n"
"margin-top:7px;\n"
"margin-bottom:7px;\n"
"}"));
        hs_motion_randomness->setMaximum(10);
        hs_motion_randomness->setPageStep(1);
        hs_motion_randomness->setValue(5);
        hs_motion_randomness->setOrientation(Qt::Horizontal);
        dsb_motion_randomness = new QDoubleSpinBox(widget_background);
        dsb_motion_randomness->setObjectName(QString::fromUtf8("dsb_motion_randomness"));
        dsb_motion_randomness->setGeometry(QRect(325, 240, 51, 22));
        dsb_motion_randomness->setFont(font);
        dsb_motion_randomness->setDecimals(1);
        dsb_motion_randomness->setMaximum(1.000000000000000);
        dsb_motion_randomness->setSingleStep(0.100000000000000);
        dsb_motion_randomness->setValue(0.500000000000000);
        cb_flash_percussive = new QCheckBox(widget_background);
        cb_flash_percussive->setObjectName(QString::fromUtf8("cb_flash_percussive"));
        cb_flash_percussive->setGeometry(QRect(250, 400, 111, 16));
        cb_flash_percussive->setFont(font);
        cb_flash_percussive->setChecked(true);
        sb_resolution = new QSpinBox(widget_background);
        sb_resolution->setObjectName(QString::fromUtf8("sb_resolution"));
        sb_resolution->setGeometry(QRect(70, 480, 51, 22));
        sb_resolution->setMaximum(360);
        sb_resolution->setValue(360);
        label_33 = new QLabel(widget_background);
        label_33->setObjectName(QString::fromUtf8("label_33"));
        label_33->setGeometry(QRect(10, 480, 61, 20));
        label_33->setFont(font);
        label_34 = new QLabel(widget_background);
        label_34->setObjectName(QString::fromUtf8("label_34"));
        label_34->setGeometry(QRect(160, 480, 41, 20));
        label_34->setFont(font);
        sb_start = new QSpinBox(widget_background);
        sb_start->setObjectName(QString::fromUtf8("sb_start"));
        sb_start->setGeometry(QRect(190, 480, 51, 22));
        sb_start->setMaximum(10000);
        sb_start->setSingleStep(1);
        sb_start->setValue(0);
        label_35 = new QLabel(widget_background);
        label_35->setObjectName(QString::fromUtf8("label_35"));
        label_35->setGeometry(QRect(280, 480, 21, 20));
        label_35->setFont(font);
        sb_fps = new QSpinBox(widget_background);
        sb_fps->setObjectName(QString::fromUtf8("sb_fps"));
        sb_fps->setGeometry(QRect(300, 480, 51, 22));
        sb_fps->setMaximum(10000);
        sb_fps->setSingleStep(1);
        sb_fps->setValue(43);
        label_21 = new QLabel(widget_background);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(105, 255, 21, 16));
        label_21->setFont(font);
        label_22 = new QLabel(widget_background);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setGeometry(QRect(310, 255, 16, 16));
        label_22->setFont(font1);
        btn_back->raise();
        verticalLayoutWidget->raise();
        hs_pulse_react->raise();
        hs_motion_react->raise();
        label->raise();
        label_2->raise();
        label_3->raise();
        label_4->raise();
        label_5->raise();
        label_6->raise();
        hs_contrast_strength->raise();
        label_7->raise();
        label_8->raise();
        label_9->raise();
        btn_upload_music->raise();
        label_10->raise();
        comboBox->raise();
        label_11->raise();
        btn_generate->raise();
        btn_completed->raise();
        btn_play->raise();
        horizontalSlider->raise();
        label_12->raise();
        label_positionTime->raise();
        label_totalTime->raise();
        dsb_pulse_react->raise();
        dsb_motion_react->raise();
        dsb_contrast_strength->raise();
        label_filename->raise();
        label_tick->raise();
        label_13->raise();
        hs_speed_fpm->raise();
        label_14->raise();
        label_15->raise();
        dsb_speed_fpm->raise();
        label_31->raise();
        btn_save->raise();
        cb_pulse_percussive->raise();
        cb_pulse_harmonic->raise();
        cb_motion_percussive->raise();
        cb_motion_harmonic->raise();
        hs_pitch_react->raise();
        label_16->raise();
        label_17->raise();
        dsb_pitch_react->raise();
        cb_contrast_percussive->raise();
        label_32->raise();
        hs_flash_strength->raise();
        label_18->raise();
        label_19->raise();
        dsb_flash_strength->raise();
        label_20->raise();
        hs_motion_randomness->raise();
        dsb_motion_randomness->raise();
        cb_flash_percussive->raise();
        label_33->raise();
        sb_resolution->raise();
        label_34->raise();
        sb_start->raise();
        label_35->raise();
        sb_fps->raise();
        label_21->raise();
        label_22->raise();

        retranslateUi(CreateVideoWindow);

        QMetaObject::connectSlotsByName(CreateVideoWindow);
    } // setupUi

    void retranslateUi(QWidget *CreateVideoWindow)
    {
        CreateVideoWindow->setWindowTitle(QApplication::translate("CreateVideoWindow", "CreateVideoWindow", nullptr));
        btn_back->setText(QString());
        label->setText(QApplication::translate("CreateVideoWindow", "0", nullptr));
        label_2->setText(QApplication::translate("CreateVideoWindow", "2", nullptr));
        label_3->setText(QApplication::translate("CreateVideoWindow", "pulse react", nullptr));
        label_4->setText(QApplication::translate("CreateVideoWindow", "motion react", nullptr));
        label_5->setText(QApplication::translate("CreateVideoWindow", "0", nullptr));
        label_6->setText(QApplication::translate("CreateVideoWindow", "1", nullptr));
        label_7->setText(QApplication::translate("CreateVideoWindow", "contrast strength", nullptr));
        label_8->setText(QApplication::translate("CreateVideoWindow", "0", nullptr));
        label_9->setText(QApplication::translate("CreateVideoWindow", "1", nullptr));
        btn_upload_music->setText(QString());
        label_10->setText(QApplication::translate("CreateVideoWindow", "upload music", nullptr));
        comboBox->setItemText(0, QApplication::translate("CreateVideoWindow", "butterflies", nullptr));
        comboBox->setItemText(1, QApplication::translate("CreateVideoWindow", "anime faces", nullptr));
        comboBox->setItemText(2, QApplication::translate("CreateVideoWindow", "fursona", nullptr));
        comboBox->setItemText(3, QApplication::translate("CreateVideoWindow", "faces", nullptr));
        comboBox->setItemText(4, QApplication::translate("CreateVideoWindow", "trypophobia", nullptr));
        comboBox->setItemText(5, QApplication::translate("CreateVideoWindow", "abstract art", nullptr));
        comboBox->setItemText(6, QApplication::translate("CreateVideoWindow", "textures", nullptr));
        comboBox->setItemText(7, QApplication::translate("CreateVideoWindow", "ffhq faces", nullptr));
        comboBox->setItemText(8, QApplication::translate("CreateVideoWindow", "grumpy cat", nullptr));
        comboBox->setItemText(9, QApplication::translate("CreateVideoWindow", "pokemon", nullptr));
        comboBox->setItemText(10, QApplication::translate("CreateVideoWindow", "modern art", nullptr));
        comboBox->setItemText(11, QApplication::translate("CreateVideoWindow", "cakes", nullptr));
        comboBox->setItemText(12, QApplication::translate("CreateVideoWindow", "maps", nullptr));
        comboBox->setItemText(13, QApplication::translate("CreateVideoWindow", "microscope images", nullptr));
        comboBox->setItemText(14, QApplication::translate("CreateVideoWindow", "fireworks", nullptr));
        comboBox->setItemText(15, QApplication::translate("CreateVideoWindow", "panda", nullptr));
        comboBox->setItemText(16, QApplication::translate("CreateVideoWindow", "lsun cats", nullptr));
        comboBox->setItemText(17, QApplication::translate("CreateVideoWindow", "vases", nullptr));
        comboBox->setItemText(18, QApplication::translate("CreateVideoWindow", "wikiart faces", nullptr));
        comboBox->setItemText(19, QApplication::translate("CreateVideoWindow", "cat", nullptr));
        comboBox->setItemText(20, QApplication::translate("CreateVideoWindow", "wikiart", nullptr));
        comboBox->setItemText(21, QApplication::translate("CreateVideoWindow", "anime portraits", nullptr));
        comboBox->setItemText(22, QApplication::translate("CreateVideoWindow", "wildlife", nullptr));
        comboBox->setItemText(23, QApplication::translate("CreateVideoWindow", "flowers", nullptr));
        comboBox->setItemText(24, QApplication::translate("CreateVideoWindow", "doors", nullptr));
        comboBox->setItemText(25, QApplication::translate("CreateVideoWindow", "imagenet", nullptr));
        comboBox->setItemText(26, QApplication::translate("CreateVideoWindow", "lsun bedrooms", nullptr));
        comboBox->setItemText(27, QApplication::translate("CreateVideoWindow", "abstract photos", nullptr));
        comboBox->setItemText(28, QApplication::translate("CreateVideoWindow", "beetles", nullptr));
        comboBox->setItemText(29, QApplication::translate("CreateVideoWindow", "ukiyoe faces", nullptr));
        comboBox->setItemText(30, QApplication::translate("CreateVideoWindow", "floor plans", nullptr));
        comboBox->setItemText(31, QApplication::translate("CreateVideoWindow", "figure drawings", nullptr));
        comboBox->setItemText(32, QApplication::translate("CreateVideoWindow", "my little pony", nullptr));
        comboBox->setItemText(33, QApplication::translate("CreateVideoWindow", "lsun cars", nullptr));
        comboBox->setItemText(34, QApplication::translate("CreateVideoWindow", "horse", nullptr));
        comboBox->setItemText(35, QApplication::translate("CreateVideoWindow", "obama", nullptr));

        label_11->setText(QApplication::translate("CreateVideoWindow", "choose style", nullptr));
        btn_generate->setText(QString());
        btn_completed->setText(QString());
        btn_play->setText(QString());
        label_12->setText(QApplication::translate("CreateVideoWindow", "/", nullptr));
        label_positionTime->setText(QString());
        label_totalTime->setText(QString());
        label_filename->setText(QApplication::translate("CreateVideoWindow", "TextLabel", nullptr));
        label_tick->setText(QString());
        label_13->setText(QApplication::translate("CreateVideoWindow", "speed fpm", nullptr));
        label_14->setText(QApplication::translate("CreateVideoWindow", "0", nullptr));
        label_15->setText(QApplication::translate("CreateVideoWindow", "12", nullptr));
        label_31->setText(QApplication::translate("CreateVideoWindow", "class pitch react", nullptr));
        btn_save->setText(QString());
        cb_pulse_percussive->setText(QApplication::translate("CreateVideoWindow", "pulse percussive", nullptr));
        cb_pulse_harmonic->setText(QApplication::translate("CreateVideoWindow", "pulse harmonic", nullptr));
        cb_motion_percussive->setText(QApplication::translate("CreateVideoWindow", "motion percussive", nullptr));
        cb_motion_harmonic->setText(QApplication::translate("CreateVideoWindow", "motion harmonic", nullptr));
        label_16->setText(QApplication::translate("CreateVideoWindow", "0", nullptr));
        label_17->setText(QApplication::translate("CreateVideoWindow", "2", nullptr));
        cb_contrast_percussive->setText(QApplication::translate("CreateVideoWindow", "contrast percussive", nullptr));
        label_32->setText(QApplication::translate("CreateVideoWindow", "flash strength", nullptr));
        label_18->setText(QApplication::translate("CreateVideoWindow", "0", nullptr));
        label_19->setText(QApplication::translate("CreateVideoWindow", "1", nullptr));
        label_20->setText(QApplication::translate("CreateVideoWindow", "motion random", nullptr));
        cb_flash_percussive->setText(QApplication::translate("CreateVideoWindow", "flash percussive", nullptr));
        label_33->setText(QApplication::translate("CreateVideoWindow", "resolution", nullptr));
        label_34->setText(QApplication::translate("CreateVideoWindow", "start", nullptr));
        label_35->setText(QApplication::translate("CreateVideoWindow", "fps", nullptr));
        label_21->setText(QApplication::translate("CreateVideoWindow", "0", nullptr));
        label_22->setText(QApplication::translate("CreateVideoWindow", "1", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CreateVideoWindow: public Ui_CreateVideoWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATEVIDEOWINDOW_H
