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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>
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
        hs_pulse_react->setGeometry(QRect(60, 110, 250, 22));
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
        hs_pulse_react->setPageStep(1);
        hs_pulse_react->setOrientation(Qt::Horizontal);
        hs_motion_react = new QSlider(widget_background);
        hs_motion_react->setObjectName(QString::fromUtf8("hs_motion_react"));
        hs_motion_react->setGeometry(QRect(60, 160, 250, 22));
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
        hs_motion_react->setOrientation(Qt::Horizontal);
        label = new QLabel(widget_background);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 130, 21, 16));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        label->setFont(font);
        label_2 = new QLabel(widget_background);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(305, 130, 21, 20));
        label_2->setFont(font);
        label_3 = new QLabel(widget_background);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 112, 31, 16));
        label_3->setFont(font);
        label_4 = new QLabel(widget_background);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(15, 160, 41, 20));
        label_4->setFont(font);
        label_5 = new QLabel(widget_background);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(60, 180, 21, 16));
        label_5->setFont(font);
        label_6 = new QLabel(widget_background);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(310, 180, 16, 16));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Alibaba PuHuiTi"));
        font1.setPointSize(10);
        label_6->setFont(font1);
        hs_contrast_strength = new QSlider(widget_background);
        hs_contrast_strength->setObjectName(QString::fromUtf8("hs_contrast_strength"));
        hs_contrast_strength->setGeometry(QRect(60, 210, 250, 22));
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
        hs_contrast_strength->setOrientation(Qt::Horizontal);
        label_7 = new QLabel(widget_background);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(10, 210, 51, 20));
        label_7->setFont(font);
        label_8 = new QLabel(widget_background);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(60, 230, 21, 16));
        label_8->setFont(font);
        label_9 = new QLabel(widget_background);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(310, 230, 16, 16));
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
        comboBox->setStyleSheet(QString::fromUtf8("/* \346\234\252\344\270\213\346\213\211\346\227\266\357\274\214QComboBox\347\232\204\346\240\267\345\274\217 */\n"
"QComboBox {\n"
"    border: 1px solid gray;   /* \350\276\271\346\241\206 */\n"
"    border-radius: 3px;   /* \345\234\206\350\247\222 */\n"
"    padding: 1px 18px 1px 3px;   /* \345\255\227\344\275\223\345\241\253\350\241\254 */\n"
"    color: rgb(73,80,87);\n"
"    background: transparent;\n"
"}\n"
"\n"
"/* \344\270\213\346\213\211\345\220\216\357\274\214\346\225\264\344\270\252\344\270\213\346\213\211\347\252\227\344\275\223\346\240\267\345\274\217 */\n"
"QComboBox QAbstractItemView {\n"
"    outline: 0px solid gray;   /* \351\200\211\345\256\232\351\241\271\347\232\204\350\231\232\346\241\206 */\n"
"    border: 1px solid rgb(73,80,87);   /* \346\225\264\344\270\252\344\270\213\346\213\211\347\252\227\344\275\223\347\232\204\350\276\271\346\241\206 */\n"
"    color:rgb(73,80,87);\n"
"    background-color:rgb(248,249,250);   /* \346\225\264\344\270\252\344\270\213\346\213\211\347\252\227\344\275"
                        "\223\347\232\204\350\203\214\346\231\257\350\211\262 */\n"
"    selection-background-color:rgb(73,80,87);   /* \346\225\264\344\270\252\344\270\213\346\213\211\347\252\227\344\275\223\350\242\253\351\200\211\344\270\255\351\241\271\347\232\204\350\203\214\346\231\257\350\211\262 */\n"
"}\n"
"\n"
"/* \344\270\213\346\213\211\345\220\216\357\274\214\346\225\264\344\270\252\344\270\213\346\213\211\347\252\227\344\275\223\346\257\217\351\241\271\347\232\204\346\240\267\345\274\217 */\n"
"QComboBox QAbstractItemView::item {\n"
"    height: 50px;   /* \351\241\271\347\232\204\351\253\230\345\272\246\357\274\210\350\256\276\347\275\256pComboBox->setView(new QListView());\345\220\216\357\274\214\350\257\245\351\241\271\346\211\215\350\265\267\344\275\234\347\224\250\357\274\211 */\n"
"}\n"
"\n"
"/* \344\270\213\346\213\211\345\220\216\357\274\214\346\225\264\344\270\252\344\270\213\346\213\211\347\252\227\344\275\223\350\266\212\350\277\207\346\257\217\351\241\271\347\232\204\346\240\267\345\274\217 */\n"
"QComboBox Q"
                        "AbstractItemView::item:hover {\n"
"    color: rgb(248,249,250);\n"
"    background-color: rgb(73,80,87);   /* \346\225\264\344\270\252\344\270\213\346\213\211\347\252\227\344\275\223\350\266\212\350\277\207\346\257\217\351\241\271\347\232\204\350\203\214\346\231\257\350\211\262 */\n"
"}\n"
"\n"
"/* \344\270\213\346\213\211\345\220\216\357\274\214\346\225\264\344\270\252\344\270\213\346\213\211\347\252\227\344\275\223\350\242\253\351\200\211\346\213\251\347\232\204\346\257\217\351\241\271\347\232\204\346\240\267\345\274\217 */\n"
"QComboBox QAbstractItemView::item:selected {\n"
"    color:  rgb(248,249,250);\n"
"    background-color:  rgb(73,80,87);\n"
"}\n"
"\n"
"/* QComboBox\344\270\255\347\232\204\345\236\202\347\233\264\346\273\232\345\212\250\346\235\241 */\n"
"QComboBox QAbstractScrollArea QScrollBar:vertical {\n"
"    width: 10px;\n"
"    background-color: rgb(248,249,250);   /* \347\251\272\347\231\275\345\214\272\345\237\237\347\232\204\350\203\214\346\231\257\350\211\262  \347\201\260\350\211\262green"
                        " */\n"
"}\n"
"\n"
"QComboBox QAbstractScrollArea QScrollBar::handle:vertical {\n"
"    border-radius: 5px;   /* \345\234\206\350\247\222 */\n"
"    background: rgb(160,160,160);   /* \345\260\217\346\226\271\345\235\227\347\232\204\350\203\214\346\231\257\350\211\262\346\267\261\347\201\260lightblue */\n"
"}\n"
"\n"
"QComboBox QAbstractScrollArea QScrollBar::handle:vertical:hover {\n"
"    background: rgb(73, 80, 87);   /* \350\266\212\350\277\207\345\260\217\346\226\271\345\235\227\347\232\204\350\203\214\346\231\257\350\211\262yellow */\n"
"}\n"
"\n"
"/* \350\256\276\347\275\256\344\270\272\351\235\236\347\274\226\350\276\221\357\274\210setEditable(false)\357\274\211!editable\346\227\266\357\274\214\346\225\264\344\270\252QComboBox\347\232\204\346\240\267\345\274\217 */\n"
"QComboBox:!editable {\n"
"     background: rgb(248,249,250);\n"
"}\n"
"\n"
"/* \350\256\276\347\275\256\344\270\272\351\235\236\347\274\226\350\276\221!editable\346\227\266\357\274\214\344\270\213\346\213\211\346\241\206\347\232\204\346\240"
                        "\267\345\274\217 */\n"
"QComboBox::drop-down:!editable {\n"
"    background: rgb(248,249,250);\n"
"}\n"
"\n"
"/* \347\202\271\345\207\273QComboBox */\n"
"QComboBox:on {\n"
"	\n"
"}\n"
"\n"
"/* \344\270\213\346\213\211\346\241\206\346\240\267\345\274\217 */\n"
"QComboBox::drop-down {\n"
"    subcontrol-origin: padding;   /* \345\255\220\346\216\247\344\273\266\345\234\250\347\210\266\345\205\203\347\264\240\344\270\255\347\232\204\345\216\237\347\202\271\347\237\251\345\275\242\343\200\202\345\246\202\346\236\234\346\234\252\346\214\207\345\256\232\346\255\244\345\261\236\346\200\247\357\274\214\345\210\231\351\273\230\350\256\244\344\270\272padding\343\200\202 */\n"
"    subcontrol-position: top right;   /* \344\270\213\346\213\211\346\241\206\347\232\204\344\275\215\347\275\256\357\274\210\345\217\263\344\270\212\357\274\211 */\n"
"    width: 15px;   /* \344\270\213\346\213\211\346\241\206\347\232\204\345\256\275\345\272\246 */\n"
"\n"
"    border-left-width: 1px;   /* \344\270\213\346\213\211\346\241\206\347"
                        "\232\204\345\267\246\350\276\271\347\225\214\347\272\277\345\256\275\345\272\246 */\n"
"    border-left-color: darkgray;   /* \344\270\213\346\213\211\346\241\206\347\232\204\345\267\246\350\276\271\347\225\214\347\272\277\351\242\234\350\211\262 */\n"
"    border-left-style: solid;   /* \344\270\213\346\213\211\346\241\206\347\232\204\345\267\246\350\276\271\347\225\214\347\272\277\344\270\272\345\256\236\347\272\277 */\n"
"    border-top-right-radius: 3px;   /* \344\270\213\346\213\211\346\241\206\347\232\204\345\217\263\344\270\212\350\276\271\347\225\214\347\272\277\347\232\204\345\234\206\350\247\222\345\215\212\345\276\204\357\274\210\345\272\224\345\222\214\346\225\264\344\270\252QComboBox\345\217\263\344\270\212\350\276\271\347\225\214\347\272\277\347\232\204\345\234\206\350\247\222\345\215\212\345\276\204\344\270\200\350\207\264\357\274\211 */\n"
"    border-bottom-right-radius: 3px;   /* \345\220\214\344\270\212 */\n"
"}\n"
"\n"
"/* \344\270\213\346\213\211\347\256\255\345\244\264\346\240\267\345\274"
                        "\217 */\n"
"QComboBox::down-arrow {\n"
"    width: 15px;   /* \344\270\213\346\213\211\347\256\255\345\244\264\347\232\204\345\256\275\345\272\246\357\274\210\345\273\272\350\256\256\344\270\216\344\270\213\346\213\211\346\241\206drop-down\347\232\204\345\256\275\345\272\246\344\270\200\350\207\264\357\274\211 */\n"
"    background: transparent;   /* \344\270\213\346\213\211\347\256\255\345\244\264\347\232\204\347\232\204\350\203\214\346\231\257\350\211\262 */\n"
"    padding: 0px 0px 0px 0px;   /* \344\270\212\345\206\205\350\276\271\350\267\235\343\200\201\345\217\263\345\206\205\350\276\271\350\267\235\343\200\201\344\270\213\345\206\205\350\276\271\350\267\235\343\200\201\345\267\246\345\206\205\350\276\271\350\267\235 */\n"
"    image: url(:/MusicVisualization/img/caret_down.png);\n"
"}\n"
"\n"
"/* \347\202\271\345\207\273\344\270\213\346\213\211\347\256\255\345\244\264 */\n"
"QComboBox::down-arrow:on {\n"
"    image: url(:/MusicVisualization/img/caret_down.png);   /* \346\230\276\347\244\272\344\270\213\346"
                        "\213\211\347\256\255\345\244\264 */\n"
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
        btn_completed->setGeometry(QRect(510, 490, 100, 40));
        btn_completed->setFocusPolicy(Qt::NoFocus);
        btn_completed->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));
        btn_completed->setIconSize(QSize(100, 40));
        btn_play = new ResPushButton(widget_background);
        btn_play->setObjectName(QString::fromUtf8("btn_play"));
        btn_play->setGeometry(QRect(380, 435, 40, 40));
        btn_play->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        btn_play->setIconSize(QSize(40, 40));
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
        dsb_pulse_react->setGeometry(QRect(320, 110, 51, 22));
        dsb_pulse_react->setFont(font);
        dsb_pulse_react->setStyleSheet(QString::fromUtf8(""));
        dsb_pulse_react->setDecimals(1);
        dsb_pulse_react->setMaximum(10.000000000000000);
        dsb_pulse_react->setSingleStep(0.100000000000000);
        dsb_pulse_react->setStepType(QAbstractSpinBox::DefaultStepType);
        dsb_motion_react = new QDoubleSpinBox(widget_background);
        dsb_motion_react->setObjectName(QString::fromUtf8("dsb_motion_react"));
        dsb_motion_react->setGeometry(QRect(320, 160, 51, 22));
        dsb_motion_react->setFont(font);
        dsb_motion_react->setDecimals(1);
        dsb_motion_react->setMaximum(1.000000000000000);
        dsb_motion_react->setSingleStep(0.100000000000000);
        dsb_contrast_strength = new QDoubleSpinBox(widget_background);
        dsb_contrast_strength->setObjectName(QString::fromUtf8("dsb_contrast_strength"));
        dsb_contrast_strength->setGeometry(QRect(320, 210, 51, 22));
        dsb_contrast_strength->setFont(font);
        dsb_contrast_strength->setDecimals(1);
        dsb_contrast_strength->setMaximum(1.000000000000000);
        dsb_contrast_strength->setSingleStep(0.100000000000000);
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
    } // retranslateUi

};

namespace Ui {
    class CreateVideoWindow: public Ui_CreateVideoWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATEVIDEOWINDOW_H
