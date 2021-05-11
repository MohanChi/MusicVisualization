#pragma once
#include "qlabel.h"
#include "qpainter.h"

class WaitImageWidget : public QLabel
{
	Q_OBJECT
protected:
	void paintEvent(QPaintEvent *);

public:

	explicit WaitImageWidget(QWidget *parent);
	void gradientArc(QPainter * painter, int radius, int startAngle, 
		int angleLength, int arcHeight, QRgb color);
	void setAngle(int value);
	void setbBlue(bool b);
	int angle = 0;
	bool bBlue = true;
};