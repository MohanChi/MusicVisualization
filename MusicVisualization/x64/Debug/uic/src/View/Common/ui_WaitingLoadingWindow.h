/********************************************************************************
** Form generated from reading UI file 'WaitingLoadingWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WAITINGLOADINGWINDOW_H
#define UI_WAITINGLOADINGWINDOW_H

#include <F:\MIProject\MusicVisualization\MusicVisualization\src\Module\QtWidget\respushbutton.h>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>
#include "WaitImageWidget.h"

QT_BEGIN_NAMESPACE

class Ui_WaitingLoadingWindow
{
public:
    WaitImageWidget *label;
    QWidget *widget_background;
    ResPushButton *btn_cancel;

    void setupUi(QWidget *WaitingLoadingWindow)
    {
        if (WaitingLoadingWindow->objectName().isEmpty())
            WaitingLoadingWindow->setObjectName(QString::fromUtf8("WaitingLoadingWindow"));
        WaitingLoadingWindow->resize(1000, 560);
        label = new WaitImageWidget(WaitingLoadingWindow);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 1000, 560));
        widget_background = new QWidget(WaitingLoadingWindow);
        widget_background->setObjectName(QString::fromUtf8("widget_background"));
        widget_background->setGeometry(QRect(0, 0, 1000, 560));
        btn_cancel = new ResPushButton(WaitingLoadingWindow);
        btn_cancel->setObjectName(QString::fromUtf8("btn_cancel"));
        btn_cancel->setGeometry(QRect(440, 330, 100, 40));
        btn_cancel->setFocusPolicy(Qt::NoFocus);
        widget_background->raise();
        label->raise();
        btn_cancel->raise();

        retranslateUi(WaitingLoadingWindow);

        QMetaObject::connectSlotsByName(WaitingLoadingWindow);
    } // setupUi

    void retranslateUi(QWidget *WaitingLoadingWindow)
    {
        WaitingLoadingWindow->setWindowTitle(QApplication::translate("WaitingLoadingWindow", "WaitingLoadingWindow", nullptr));
        label->setText(QString());
        btn_cancel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class WaitingLoadingWindow: public Ui_WaitingLoadingWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WAITINGLOADINGWINDOW_H
