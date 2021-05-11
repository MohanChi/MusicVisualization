#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_MusicVisualization.h"

class MusicVisualization : public QMainWindow
{
    Q_OBJECT

public:
    MusicVisualization(QWidget *parent = Q_NULLPTR);

private:
    Ui::MusicVisualizationClass ui;
};
