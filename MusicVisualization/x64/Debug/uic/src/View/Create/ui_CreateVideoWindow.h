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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CreateVideoWindow
{
public:
    QWidget *widget_background;

    void setupUi(QWidget *CreateVideoWindow)
    {
        if (CreateVideoWindow->objectName().isEmpty())
            CreateVideoWindow->setObjectName(QString::fromUtf8("CreateVideoWindow"));
        CreateVideoWindow->resize(1000, 560);
        widget_background = new QWidget(CreateVideoWindow);
        widget_background->setObjectName(QString::fromUtf8("widget_background"));
        widget_background->setGeometry(QRect(0, 0, 1000, 560));
        widget_background->setStyleSheet(QString::fromUtf8("background-color: rgb(159, 200, 167);"));

        retranslateUi(CreateVideoWindow);

        QMetaObject::connectSlotsByName(CreateVideoWindow);
    } // setupUi

    void retranslateUi(QWidget *CreateVideoWindow)
    {
        CreateVideoWindow->setWindowTitle(QApplication::translate("CreateVideoWindow", "CreateVideoWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CreateVideoWindow: public Ui_CreateVideoWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATEVIDEOWINDOW_H
