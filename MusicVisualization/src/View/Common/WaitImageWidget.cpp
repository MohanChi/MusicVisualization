#include "WaitImageWidget.h"

WaitImageWidget::WaitImageWidget(QWidget * parent)
{
	QLabel::QLabel(parent);
}

void WaitImageWidget::paintEvent(QPaintEvent * event)
{
	QPainter painter(this);
	painter.setRenderHint(QPainter::Antialiasing, true);
	QRect drawRect(759, 339, 350, 350);
	int radius = 150;
	int arcHeight = 30;

	double wd = width() >> 1;
	double hd = height() >> 1;


	painter.translate(width() >> 1, height() >> 1);
	if (bBlue)
	{
		gradientArc(&painter, radius, 0, angle, arcHeight, qRgb(73, 80, 87));
		gradientArc(&painter, radius, angle, 360 - angle, arcHeight, qRgb(60, 60, 60));
	}
	else
	{
		gradientArc(&painter, radius, 0, angle, arcHeight, qRgb(60, 60, 60));
		gradientArc(&painter, radius, angle, 360 - angle, arcHeight, qRgb(0, 160, 233));
	}




	QRadialGradient gradient(0, 0, 151);
	gradient.setColorAt(0.0, Qt::transparent);
	gradient.setColorAt(0.79, Qt::transparent);
	gradient.setColorAt(0.794, qRgb(0, 0, 0));
	gradient.setColorAt(0.799, qRgb(0, 0, 0));
	gradient.setColorAt(0.8, Qt::transparent);
	gradient.setColorAt(0.99, Qt::transparent);
	gradient.setColorAt(0.995, qRgb(0, 0, 0));
	gradient.setColorAt(1.0, qRgb(0, 0, 0));
	painter.setBrush(gradient);
	painter.drawEllipse(-151, -151, 302, 302);

	QString valueStrNumber = QString::fromLocal8Bit("Waiting...");
	QRectF inRect(-170, -175, 350, 350);
	//QFont m2 = QFont("°¢Àï°Í°ÍÆÕ»ÝÌå R", 26, QFont::Bold);
	//painter.setFont(m2);
	//painter.setPen(QColor("#000000"));
	//painter.drawText(inRect, Qt::AlignCenter, valueStrNumber);
	QFont m = QFont("Aril", 25, QFont::Bold);
	painter.setFont(m);
	painter.setPen(QColor("#495057"));
	painter.drawText(inRect, Qt::AlignCenter, valueStrNumber);


}

void WaitImageWidget::gradientArc(QPainter *painter, int radius, int startAngle, int angleLength, int arcHeight, QRgb color) {
	QRadialGradient gradient(0, 0, radius);
	gradient.setColorAt(0, color);
	gradient.setColorAt(1.0, color);
	painter->setBrush(gradient);

	QRectF rect(-radius, -radius, radius << 1, radius << 1);
	QPainterPath path;
	path.arcTo(rect, startAngle, angleLength);

	QPainterPath subPath;
	subPath.addEllipse(rect.adjusted(arcHeight, arcHeight, -arcHeight, -arcHeight));
	path -= subPath;

	painter->setPen(Qt::NoPen);
	painter->drawPath(path);
}

void WaitImageWidget::setAngle(int value)
{
	angle = value;
}
void WaitImageWidget::setbBlue(bool b)
{
	bBlue = b;
}
