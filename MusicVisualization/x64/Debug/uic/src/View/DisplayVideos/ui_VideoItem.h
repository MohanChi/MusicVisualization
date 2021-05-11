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
    QLabel *label_UID;
    QLabel *label_path;

    void setupUi(QWidget *VideoItem)
    {
        if (VideoItem->objectName().isEmpty())
            VideoItem->setObjectName(QString::fromUtf8("VideoItem"));
        VideoItem->resize(370, 70);
        VideoItem->setStyleSheet(QString::fromUtf8("background-color: rgb(161, 161, 161);"));
        label_UID = new QLabel(VideoItem);
        label_UID->setObjectName(QString::fromUtf8("label_UID"));
        label_UID->setGeometry(QRect(10, 20, 101, 31));
        label_UID->setStyleSheet(QString::fromUtf8("background-color: rgb(74, 74, 74);\n"
"color: rgb(255, 255, 255);"));
        label_path = new QLabel(VideoItem);
        label_path->setObjectName(QString::fromUtf8("label_path"));
        label_path->setGeometry(QRect(120, 20, 241, 31));
        label_path->setStyleSheet(QString::fromUtf8("background-color: rgb(74, 74, 74);\n"
"color: rgb(255, 255, 255);"));

        retranslateUi(VideoItem);

        QMetaObject::connectSlotsByName(VideoItem);
    } // setupUi

    void retranslateUi(QWidget *VideoItem)
    {
        VideoItem->setWindowTitle(QApplication::translate("VideoItem", "VideoItem", nullptr));
        label_UID->setText(QString());
        label_path->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class VideoItem: public Ui_VideoItem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIDEOITEM_H
