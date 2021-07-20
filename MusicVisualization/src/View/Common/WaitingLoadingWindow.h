#pragma once

#include <QWidget>
#include "ui_WaitingLoadingWindow.h"
#include "qtimer.h"

class WaitingLoadingWindow : public QWidget
{
	Q_OBJECT

public:
	WaitingLoadingWindow(QWidget *parent = Q_NULLPTR);
	~WaitingLoadingWindow();

	bool GetIsCancelled();
	void paintEvent(QPaintEvent * event);
	void gradientArc(QPainter * painter, int radius, int startAngle, int angleLength,
		int arcHeight, QRgb color);

	bool bGrey;
	bool isCancelled;
	int angle;
	int angleCount;
	QTimer * timer;

public slots:
	void timerDoing();
	void slot_OnBtnCancel();

private:
	void InitialUI();

private:
	Ui::WaitingLoadingWindow ui;
};

