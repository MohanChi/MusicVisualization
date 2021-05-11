#include "WaitingLoadingWindow.h"
#include "qpainter.h"

WaitingLoadingWindow::WaitingLoadingWindow(QWidget *parent) : QWidget(parent)
{
	ui.setupUi(this);
	InitialUI();
	timer = new QTimer(this);
	connect(timer, SIGNAL(timeout()), this, SLOT(timerDoing()));
	timer->start(50);
}

WaitingLoadingWindow::~WaitingLoadingWindow()
{
	disconnect(timer);
	timer->stop();
	timer->deleteLater();
}

bool WaitingLoadingWindow::GetIsCancelled()
{
	return isCancelled;
}

void WaitingLoadingWindow::paintEvent(QPaintEvent * event)
{
	QPainter painter(this);
	painter.setRenderHint(QPainter::Antialiasing, true);//ÉèÖÃÔ²»¬»æÖÆ·ç¸ñ£¨¿¹¾â³İ£©
	QRect drawRect(759, 339, 350, 350);
	int radius = 150;
	int arcHeight = 30;

	double wd = width() >> 1;
	double hd = height() >> 1;

	painter.translate(width() >> 1, height() >> 1);
	if (bBlue)
	{
		gradientArc(&painter, radius, 0, angle, arcHeight, qRgb(0, 160, 233));
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


	QString valueStrNumber = "Waiting...";
	QFont font = QFont("Arial", 25, QFont::Bold);
	font.setPointSize(25);
	font.setBold(true);
	QPainterPath path;
	path.addText(-70, 10, font, valueStrNumber);
	QPen pen(QColor(0, 0, 0));
	pen.setWidth(3);
	painter.strokePath(path, pen);
	painter.drawPath(path);
	painter.fillPath(path, QBrush(QColor("#00A0E9")));
}

void WaitingLoadingWindow::gradientArc(QPainter * painter, int radius, int startAngle, 
	int angleLength, int arcHeight, QRgb color)
{
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

void WaitingLoadingWindow::InitialUI()
{
	setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
	//this->setStyleSheet("background-color:rgba(0, 0, 0, 225)");
	setAttribute(Qt::WA_TranslucentBackground, true);
	//ui.widget_background->setStyleSheet("background-color:rgba(0, 0, 0, 100)");
}

void WaitingLoadingWindow::timerDoing()
{
	angleCount += 3;
	if (angleCount > 360)
	{
		this->bBlue = !this->bBlue;
		angleCount = 0;
		this->angle = angleCount;
	}
	else
	{
		this->angle = angleCount;
	}
	this->update();
}
