/********************************************************************************
** Form generated from reading UI file 'VideoItem.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIDEOITEM_H
#define UI_VIDEOITEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VideoItem
{
public:
    QWidget *widget;
    QLabel *label_filename;
    QLabel *label_musicPath;

    void setupUi(QWidget *VideoItem)
    {
        if (VideoItem->objectName().isEmpty())
            VideoItem->setObjectName(QString::fromUtf8("VideoItem"));
        VideoItem->resize(370, 70);
        VideoItem->setStyleSheet(QString::fromUtf8(""));
        widget = new QWidget(VideoItem);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 0, 370, 70));
        label_filename = new QLabel(widget);
        label_filename->setObjectName(QString::fromUtf8("label_filename"));
        label_filename->setGeometry(QRect(30, 20, 81, 31));
        label_filename->setStyleSheet(QString::fromUtf8("color: rgb(73, 80, 87)"));
        label_musicPath = new QLabel(widget);
        label_musicPath->setObjectName(QString::fromUtf8("label_musicPath"));
        label_musicPath->setGeometry(QRect(180, 20, 171, 31));
        label_musicPath->setStyleSheet(QString::fromUtf8("color: rgb(73, 80, 87)"));

        retranslateUi(VideoItem);

        QMetaObject::connectSlotsByName(VideoItem);
    } // setupUi

    void retranslateUi(QWidget *VideoItem)
    {
        VideoItem->setWindowTitle(QApplication::translate("VideoItem", "VideoItem", nullptr));
        label_filename->setText(QString());
        label_musicPath->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class VideoItem: public Ui_VideoItem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIDEOITEM_H
