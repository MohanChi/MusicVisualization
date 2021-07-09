/********************************************************************************
** Form generated from reading UI file 'ContinueChooseWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTINUECHOOSEWINDOW_H
#define UI_CONTINUECHOOSEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ContinueChooseWindow
{
public:
    QWidget *widget_background;
    QPushButton *btn_OK;
    QPushButton *btn_back;
    QListWidget *listWidget;

    void setupUi(QWidget *ContinueChooseWindow)
    {
        if (ContinueChooseWindow->objectName().isEmpty())
            ContinueChooseWindow->setObjectName(QString::fromUtf8("ContinueChooseWindow"));
        ContinueChooseWindow->resize(1000, 560);
        widget_background = new QWidget(ContinueChooseWindow);
        widget_background->setObjectName(QString::fromUtf8("widget_background"));
        widget_background->setGeometry(QRect(0, 0, 1000, 560));
        widget_background->setStyleSheet(QString::fromUtf8("background-color: rgb(166, 163, 170);"));
        btn_OK = new QPushButton(widget_background);
        btn_OK->setObjectName(QString::fromUtf8("btn_OK"));
        btn_OK->setGeometry(QRect(460, 470, 101, 51));
        btn_OK->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        btn_back = new QPushButton(widget_background);
        btn_back->setObjectName(QString::fromUtf8("btn_back"));
        btn_back->setGeometry(QRect(10, 10, 40, 40));
        btn_back->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        listWidget = new QListWidget(widget_background);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(180, 60, 661, 381));

        retranslateUi(ContinueChooseWindow);

        QMetaObject::connectSlotsByName(ContinueChooseWindow);
    } // setupUi

    void retranslateUi(QWidget *ContinueChooseWindow)
    {
        ContinueChooseWindow->setWindowTitle(QApplication::translate("ContinueChooseWindow", "ContinueChooseWindow", nullptr));
        btn_OK->setText(QString());
        btn_back->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ContinueChooseWindow: public Ui_ContinueChooseWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTINUECHOOSEWINDOW_H
