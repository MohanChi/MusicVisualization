/********************************************************************************
** Form generated from reading UI file 'TopWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TOPWINDOW_H
#define UI_TOPWINDOW_H

#include <F:\MIProject\MusicVisualization\MusicVisualization\src\Module\QtWidget\respushbutton.h>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TopWindow
{
public:
    QWidget *widget_background;
    ResPushButton *btn_close;
    ResPushButton *btn_min;
    QLabel *label_icon;
    QWidget *widget_container;

    void setupUi(QWidget *TopWindow)
    {
        if (TopWindow->objectName().isEmpty())
            TopWindow->setObjectName(QString::fromUtf8("TopWindow"));
        TopWindow->resize(1000, 600);
        widget_background = new QWidget(TopWindow);
        widget_background->setObjectName(QString::fromUtf8("widget_background"));
        widget_background->setGeometry(QRect(0, 0, 1000, 40));
        widget_background->setStyleSheet(QString::fromUtf8("background-color:rgba(20, 20, 20, 255)"));
        btn_close = new ResPushButton(widget_background);
        btn_close->setObjectName(QString::fromUtf8("btn_close"));
        btn_close->setGeometry(QRect(960, 5, 30, 30));
        btn_close->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        btn_close->setIconSize(QSize(30, 30));
        btn_min = new ResPushButton(widget_background);
        btn_min->setObjectName(QString::fromUtf8("btn_min"));
        btn_min->setGeometry(QRect(920, 5, 30, 30));
        btn_min->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        btn_min->setIconSize(QSize(30, 30));
        label_icon = new QLabel(widget_background);
        label_icon->setObjectName(QString::fromUtf8("label_icon"));
        label_icon->setGeometry(QRect(5, 5, 151, 30));
        label_icon->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        widget_container = new QWidget(TopWindow);
        widget_container->setObjectName(QString::fromUtf8("widget_container"));
        widget_container->setGeometry(QRect(0, 40, 1000, 560));
        widget_container->setStyleSheet(QString::fromUtf8("background-color: rgb(75, 75, 75);"));

        retranslateUi(TopWindow);

        QMetaObject::connectSlotsByName(TopWindow);
    } // setupUi

    void retranslateUi(QWidget *TopWindow)
    {
        TopWindow->setWindowTitle(QApplication::translate("TopWindow", "TopWindow", nullptr));
        btn_close->setText(QString());
        btn_min->setText(QString());
        label_icon->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class TopWindow: public Ui_TopWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOPWINDOW_H
