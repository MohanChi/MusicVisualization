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
	ui.label_UID->setText(UID);
	ui.label_path->setText(path);
}

void VideoItem::mousePressEvent(QMouseEvent * event)
{
	QWidget::mousePressEvent(event);
	if (event->button() == Qt::LeftButton)
	{
		window->OnBtnItemSelected(row);
	}
}
