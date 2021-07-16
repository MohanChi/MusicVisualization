/********************************************************************************
** Form generated from reading UI file 'DisplayVideosWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DISPLAYVIDEOSWINDOW_H
#define UI_DISPLAYVIDEOSWINDOW_H

#include <F:\MIProject\MusicVisualization\MusicVisualization\src\Module\QtWidget\respushbutton.h>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QSlider>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DisplayVideosWindow
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QListWidget *listWidget;
    ResPushButton *btn_back;
    ResPushButton *btn_play;
    QSlider *horizontalSlider;
    ResPushButton *btn_modify;
    QLabel *label_positionTime;
    QLabel *label_totalTime;
    QLabel *label;
    QWidget *widget;

    void setupUi(QWidget *DisplayVideosWindow)
    {
        if (DisplayVideosWindow->objectName().isEmpty())
            DisplayVideosWindow->setObjectName(QString::fromUtf8("DisplayVideosWindow"));
        DisplayVideosWindow->resize(1000, 560);
        DisplayVideosWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(248, 249, 250);"));
        verticalLayoutWidget = new QWidget(DisplayVideosWindow);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(390, 60, 601, 371));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        listWidget = new QListWidget(DisplayVideosWindow);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(10, 59, 370, 481));
        btn_back = new ResPushButton(DisplayVideosWindow);
        btn_back->setObjectName(QString::fromUtf8("btn_back"));
        btn_back->setGeometry(QRect(10, 10, 40, 40));
        btn_back->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        btn_play = new ResPushButton(DisplayVideosWindow);
        btn_play->setObjectName(QString::fromUtf8("btn_play"));
        btn_play->setGeometry(QRect(390, 440, 30, 30));
        btn_play->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        horizontalSlider = new QSlider(DisplayVideosWindow);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(430, 445, 441, 22));
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
"}\n"
"                "));
        horizontalSlider->setPageStep(1);
        horizontalSlider->setOrientation(Qt::Horizontal);
        btn_modify = new ResPushButton(DisplayVideosWindow);
        btn_modify->setObjectName(QString::fromUtf8("btn_modify"));
        btn_modify->setGeometry(QRect(870, 500, 100, 40));
        btn_modify->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_positionTime = new QLabel(DisplayVideosWindow);
        label_positionTime->setObjectName(QString::fromUtf8("label_positionTime"));
        label_positionTime->setGeometry(QRect(880, 450, 50, 16));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        label_positionTime->setFont(font);
        label_totalTime = new QLabel(DisplayVideosWindow);
        label_totalTime->setObjectName(QString::fromUtf8("label_totalTime"));
        label_totalTime->setGeometry(QRect(940, 450, 50, 16));
        label_totalTime->setFont(font);
        label = new QLabel(DisplayVideosWindow);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(930, 450, 8, 16));
        widget = new QWidget(DisplayVideosWindow);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 0, 1000, 560));
        widget->setStyleSheet(QString::fromUtf8("background-color: rgb(248, 249, 250);"));
        widget->raise();
        verticalLayoutWidget->raise();
        listWidget->raise();
        btn_back->raise();
        btn_play->raise();
        horizontalSlider->raise();
        btn_modify->raise();
        label_positionTime->raise();
        label_totalTime->raise();
        label->raise();

        retranslateUi(DisplayVideosWindow);

        QMetaObject::connectSlotsByName(DisplayVideosWindow);
    } // setupUi

    void retranslateUi(QWidget *DisplayVideosWindow)
    {
        DisplayVideosWindow->setWindowTitle(QApplication::translate("DisplayVideosWindow", "DisplayVideosWindow", nullptr));
        btn_back->setText(QString());
        btn_play->setText(QString());
        btn_modify->setText(QString());
        label_positionTime->setText(QString());
        label_totalTime->setText(QString());
        label->setText(QApplication::translate("DisplayVideosWindow", "/", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DisplayVideosWindow: public Ui_DisplayVideosWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DISPLAYVIDEOSWINDOW_H
