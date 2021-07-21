/********************************************************************************
** Form generated from reading UI file 'ContinueChooseWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTINUECHOOSEWINDOW_H
#define UI_CONTINUECHOOSEWINDOW_H

#include <F:\MIProject\MusicVisualization\MusicVisualization\src\Module\QtWidget\respushbutton.h>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ContinueChooseWindow
{
public:
    QWidget *widget_background;
    ResPushButton *btn_OK;
    ResPushButton *btn_back;
    QListWidget *listWidget;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QWidget *ContinueChooseWindow)
    {
        if (ContinueChooseWindow->objectName().isEmpty())
            ContinueChooseWindow->setObjectName(QString::fromUtf8("ContinueChooseWindow"));
        ContinueChooseWindow->resize(1000, 560);
        widget_background = new QWidget(ContinueChooseWindow);
        widget_background->setObjectName(QString::fromUtf8("widget_background"));
        widget_background->setGeometry(QRect(0, 0, 1000, 560));
        widget_background->setStyleSheet(QString::fromUtf8("background-color: rgb(248, 249, 250);"));
        btn_OK = new ResPushButton(widget_background);
        btn_OK->setObjectName(QString::fromUtf8("btn_OK"));
        btn_OK->setGeometry(QRect(460, 490, 100, 40));
        btn_OK->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        btn_OK->setIconSize(QSize(100, 40));
        btn_back = new ResPushButton(widget_background);
        btn_back->setObjectName(QString::fromUtf8("btn_back"));
        btn_back->setGeometry(QRect(10, 10, 40, 40));
        btn_back->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        btn_back->setIconSize(QSize(40, 40));
        listWidget = new QListWidget(widget_background);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(180, 90, 661, 381));
        listWidget->setStyleSheet(QString::fromUtf8(""));
        label = new QLabel(widget_background);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(200, 60, 101, 21));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(12);
        label->setFont(font);
        label_2 = new QLabel(widget_background);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(450, 60, 101, 21));
        label_2->setFont(font);

        retranslateUi(ContinueChooseWindow);

        QMetaObject::connectSlotsByName(ContinueChooseWindow);
    } // setupUi

    void retranslateUi(QWidget *ContinueChooseWindow)
    {
        ContinueChooseWindow->setWindowTitle(QApplication::translate("ContinueChooseWindow", "ContinueChooseWindow", nullptr));
        btn_OK->setText(QString());
        btn_back->setText(QString());
        label->setText(QApplication::translate("ContinueChooseWindow", "Project Name", nullptr));
        label_2->setText(QApplication::translate("ContinueChooseWindow", "Music Path", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ContinueChooseWindow: public Ui_ContinueChooseWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTINUECHOOSEWINDOW_H
