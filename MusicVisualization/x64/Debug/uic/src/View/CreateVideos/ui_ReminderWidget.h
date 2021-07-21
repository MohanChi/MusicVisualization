/********************************************************************************
** Form generated from reading UI file 'ReminderWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REMINDERWIDGET_H
#define UI_REMINDERWIDGET_H

#include <F:\MIProject\MusicVisualization\MusicVisualization\src\Module\QtWidget\respushbutton.h>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ReminderWidget
{
public:
    QWidget *widget_background;
    ResPushButton *btn_OK;
    QLabel *label;

    void setupUi(QWidget *ReminderWidget)
    {
        if (ReminderWidget->objectName().isEmpty())
            ReminderWidget->setObjectName(QString::fromUtf8("ReminderWidget"));
        ReminderWidget->resize(400, 200);
        ReminderWidget->setStyleSheet(QString::fromUtf8(""));
        widget_background = new QWidget(ReminderWidget);
        widget_background->setObjectName(QString::fromUtf8("widget_background"));
        widget_background->setGeometry(QRect(0, 0, 400, 200));
        widget_background->setStyleSheet(QString::fromUtf8("background-color: rgb(97, 97, 97);"));
        btn_OK = new ResPushButton(widget_background);
        btn_OK->setObjectName(QString::fromUtf8("btn_OK"));
        btn_OK->setGeometry(QRect(140, 120, 100, 40));
        btn_OK->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));
        btn_OK->setIconSize(QSize(100, 40));
        label = new QLabel(widget_background);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, 20, 241, 81));
        QFont font;
        font.setFamily(QString::fromUtf8("Times New Roman"));
        font.setPointSize(11);
        label->setFont(font);

        retranslateUi(ReminderWidget);

        QMetaObject::connectSlotsByName(ReminderWidget);
    } // setupUi

    void retranslateUi(QWidget *ReminderWidget)
    {
        ReminderWidget->setWindowTitle(QApplication::translate("ReminderWidget", "ReminderWidget", nullptr));
        btn_OK->setText(QString());
        label->setText(QApplication::translate("ReminderWidget", "You need to name a new project!!!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ReminderWidget: public Ui_ReminderWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REMINDERWIDGET_H
