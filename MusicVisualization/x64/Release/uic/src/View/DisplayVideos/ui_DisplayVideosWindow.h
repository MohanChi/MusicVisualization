/********************************************************************************
** Form generated from reading UI file 'DisplayVideosWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DISPLAYVIDEOSWINDOW_H
#define UI_DISPLAYVIDEOSWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QListView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DisplayVideosWindow
{
public:
    QListView *listView;
    QWidget *widget_video;

    void setupUi(QWidget *DisplayVideosWindow)
    {
        if (DisplayVideosWindow->objectName().isEmpty())
            DisplayVideosWindow->setObjectName(QString::fromUtf8("DisplayVideosWindow"));
        DisplayVideosWindow->resize(1000, 560);
        listView = new QListView(DisplayVideosWindow);
        listView->setObjectName(QString::fromUtf8("listView"));
        listView->setGeometry(QRect(15, 11, 361, 541));
        widget_video = new QWidget(DisplayVideosWindow);
        widget_video->setObjectName(QString::fromUtf8("widget_video"));
        widget_video->setGeometry(QRect(390, 10, 600, 450));

        retranslateUi(DisplayVideosWindow);

        QMetaObject::connectSlotsByName(DisplayVideosWindow);
    } // setupUi

    void retranslateUi(QWidget *DisplayVideosWindow)
    {
        DisplayVideosWindow->setWindowTitle(QApplication::translate("DisplayVideosWindow", "DisplayVideosWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DisplayVideosWindow: public Ui_DisplayVideosWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DISPLAYVIDEOSWINDOW_H
