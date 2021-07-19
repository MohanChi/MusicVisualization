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

	int angle = 0;
	bool bGrey = true;
	QTimer * timer;
	int angleCount = 0;
	bool isCancelled;

public slots:
	void timerDoing();

//private slots:
//	void OnBtnCancel();

private:
	void InitialUI();

private:
	Ui::WaitingLoadingWindow ui;
};

