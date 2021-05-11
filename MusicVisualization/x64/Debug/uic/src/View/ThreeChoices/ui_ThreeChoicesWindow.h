/********************************************************************************
** Form generated from reading UI file 'ThreeChoicesWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_THREECHOICESWINDOW_H
#define UI_THREECHOICESWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ThreeChoicesWindow
{
public:
    QWidget *widget_background;
    QPushButton *btn_continue;
    QPushButton *btn_create;
    QPushButton *btn_display;

    void setupUi(QWidget *ThreeChoicesWindow)
    {
        if (ThreeChoicesWindow->objectName().isEmpty())
            ThreeChoicesWindow->setObjectName(QString::fromUtf8("ThreeChoicesWindow"));
        ThreeChoicesWindow->resize(1000, 560);
        widget_background = new QWidget(ThreeChoicesWindow);
        widget_background->setObjectName(QString::fromUtf8("widget_background"));
        widget_background->setGeometry(QRect(0, 0, 1000, 560));
        btn_continue = new QPushButton(widget_background);
        btn_continue->setObjectName(QString::fromUtf8("btn_continue"));
        btn_continue->setGeometry(QRect(700, 200, 150, 150));
        btn_continue->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        btn_create = new QPushButton(widget_background);
        btn_create->setObjectName(QString::fromUtf8("btn_create"));
        btn_create->setGeometry(QRect(420, 200, 150, 150));
        btn_create->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        btn_display = new QPushButton(widget_background);
        btn_display->setObjectName(QString::fromUtf8("btn_display"));
        btn_display->setGeometry(QRect(140, 200, 150, 150));
        btn_display->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        btn_create->raise();
        btn_display->raise();
        btn_continue->raise();

        retranslateUi(ThreeChoicesWindow);

        QMetaObject::connectSlotsByName(ThreeChoicesWindow);
    } // setupUi

    void retranslateUi(QWidget *ThreeChoicesWindow)
    {
        ThreeChoicesWindow->setWindowTitle(QApplication::translate("ThreeChoicesWindow", "ThreeChoicesWindow", nullptr));
        btn_continue->setText(QString());
        btn_create->setText(QString());
        btn_display->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ThreeChoicesWindow: public Ui_ThreeChoicesWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_THREECHOICESWINDOW_H
