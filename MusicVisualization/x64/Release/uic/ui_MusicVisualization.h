/********************************************************************************
** Form generated from reading UI file 'MusicVisualization.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MUSICVISUALIZATION_H
#define UI_MUSICVISUALIZATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MusicVisualizationClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MusicVisualizationClass)
    {
        if (MusicVisualizationClass->objectName().isEmpty())
            MusicVisualizationClass->setObjectName(QString::fromUtf8("MusicVisualizationClass"));
        MusicVisualizationClass->resize(600, 400);
        menuBar = new QMenuBar(MusicVisualizationClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        MusicVisualizationClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MusicVisualizationClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MusicVisualizationClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(MusicVisualizationClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        MusicVisualizationClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MusicVisualizationClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MusicVisualizationClass->setStatusBar(statusBar);

        retranslateUi(MusicVisualizationClass);

        QMetaObject::connectSlotsByName(MusicVisualizationClass);
    } // setupUi

    void retranslateUi(QMainWindow *MusicVisualizationClass)
    {
        MusicVisualizationClass->setWindowTitle(QApplication::translate("MusicVisualizationClass", "MusicVisualization", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MusicVisualizationClass: public Ui_MusicVisualizationClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MUSICVISUALIZATION_H
