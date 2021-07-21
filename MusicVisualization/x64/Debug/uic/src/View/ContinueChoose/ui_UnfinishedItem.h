/********************************************************************************
** Form generated from reading UI file 'UnfinishedItem.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UNFINISHEDITEM_H
#define UI_UNFINISHEDITEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UnfinishedItem
{
public:
    QWidget *widget_backgound;
    QLabel *label_filename;
    QLabel *label_musicPath;

    void setupUi(QWidget *UnfinishedItem)
    {
        if (UnfinishedItem->objectName().isEmpty())
            UnfinishedItem->setObjectName(QString::fromUtf8("UnfinishedItem"));
        UnfinishedItem->resize(661, 60);
        widget_backgound = new QWidget(UnfinishedItem);
        widget_backgound->setObjectName(QString::fromUtf8("widget_backgound"));
        widget_backgound->setGeometry(QRect(0, 0, 661, 60));
        widget_backgound->setStyleSheet(QString::fromUtf8(""));
        label_filename = new QLabel(widget_backgound);
        label_filename->setObjectName(QString::fromUtf8("label_filename"));
        label_filename->setGeometry(QRect(30, 21, 91, 21));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(12);
        label_filename->setFont(font);
        label_musicPath = new QLabel(widget_backgound);
        label_musicPath->setObjectName(QString::fromUtf8("label_musicPath"));
        label_musicPath->setGeometry(QRect(220, 20, 421, 21));
        label_musicPath->setFont(font);

        retranslateUi(UnfinishedItem);

        QMetaObject::connectSlotsByName(UnfinishedItem);
    } // setupUi

    void retranslateUi(QWidget *UnfinishedItem)
    {
        UnfinishedItem->setWindowTitle(QApplication::translate("UnfinishedItem", "UnfinishedItem", nullptr));
        label_filename->setText(QApplication::translate("UnfinishedItem", "TextLabel", nullptr));
        label_musicPath->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class UnfinishedItem: public Ui_UnfinishedItem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UNFINISHEDITEM_H
