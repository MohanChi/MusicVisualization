/********************************************************************************
** Form generated from reading UI file 'NewNameWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWNAMEWINDOW_H
#define UI_NEWNAMEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NewNameWindow
{
public:
    QWidget *widget_background;
    QPushButton *btn_OK;
    QPushButton *btn_cancel;
    QLineEdit *lineEdit;
    QLabel *label;

    void setupUi(QWidget *NewNameWindow)
    {
        if (NewNameWindow->objectName().isEmpty())
            NewNameWindow->setObjectName(QString::fromUtf8("NewNameWindow"));
        NewNameWindow->resize(1000, 560);
        widget_background = new QWidget(NewNameWindow);
        widget_background->setObjectName(QString::fromUtf8("widget_background"));
        widget_background->setGeometry(QRect(0, 0, 1000, 560));
        widget_background->setStyleSheet(QString::fromUtf8("background-color: rgb(199, 199, 199);"));
        btn_OK = new QPushButton(widget_background);
        btn_OK->setObjectName(QString::fromUtf8("btn_OK"));
        btn_OK->setGeometry(QRect(340, 310, 121, 41));
        btn_OK->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        btn_cancel = new QPushButton(widget_background);
        btn_cancel->setObjectName(QString::fromUtf8("btn_cancel"));
        btn_cancel->setGeometry(QRect(540, 310, 121, 41));
        btn_cancel->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lineEdit = new QLineEdit(widget_background);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(340, 220, 321, 41));
        label = new QLabel(widget_background);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(340, 170, 181, 16));
        QFont font;
        font.setFamily(QString::fromUtf8("Times New Roman"));
        font.setPointSize(12);
        label->setFont(font);

        retranslateUi(NewNameWindow);

        QMetaObject::connectSlotsByName(NewNameWindow);
    } // setupUi

    void retranslateUi(QWidget *NewNameWindow)
    {
        NewNameWindow->setWindowTitle(QApplication::translate("NewNameWindow", "NewNameWindow", nullptr));
        btn_OK->setText(QString());
        btn_cancel->setText(QString());
        label->setText(QApplication::translate("NewNameWindow", "Create a new video named:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NewNameWindow: public Ui_NewNameWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWNAMEWINDOW_H
