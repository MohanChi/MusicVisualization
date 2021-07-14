#include "VideoItem.h"

VideoItem::VideoItem(DisplayVideosWindow * window, QWidget* parent)
	: QWidget(parent), QListWidgetItem()
{
	ui.setupUi(this);
	this->window = window;
}

VideoItem::~VideoItem()
{
}

void VideoItem::SetVideoItemData(int row, QString UID, QString path)
{
	this->row = row;
	ui.label_filename->setText(UID);
	ui.label_musicPath->setText(path);
}

void VideoItem::SetUnSelectedUI()
{
	ui.widget->setStyleSheet("background-color: rgb(248, 249, 250);");
	ui.label_filename->setStyleSheet("color: rgb(73, 80, 87);");
	ui.label_musicPath->setStyleSheet("color: rgb(73, 80, 87);");
}

void VideoItem::mousePressEvent(QMouseEvent * event)
{
	QWidget::mousePressEvent(event);
	if (event->button() == Qt::LeftButton)
	{
		ui.widget->setStyleSheet("background-color: rgb(73, 80, 87);");
		ui.label_filename->setStyleSheet("color: rgb(248, 249, 250);");
		ui.label_musicPath->setStyleSheet("color: rgb(248, 249, 250);");
		window->OnBtnItemSelected(row);
	}
}
