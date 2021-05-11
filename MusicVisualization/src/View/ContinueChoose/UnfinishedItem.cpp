#include "UnfinishedItem.h"

UnfinishedItem::UnfinishedItem(ContinueChooseWindow * window, QWidget* parent)
	: QWidget(parent), QListWidgetItem()
{
	ui.setupUi(this);
	this->window = window;
}

UnfinishedItem::~UnfinishedItem()
{
}

void UnfinishedItem::SetItemData(int row, QString text)
{
	this->row = row;
	ui.label->setText(text);
}

void UnfinishedItem::mousePressEvent(QMouseEvent * event)
{
	QWidget::mousePressEvent(event);
	if (event->button() == Qt::LeftButton)
	{
		window->OnBtnItemSelected(row);
	}
}
