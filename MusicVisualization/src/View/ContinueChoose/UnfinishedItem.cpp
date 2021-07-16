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

void UnfinishedItem::SetItemData(int row, QString filename, QString musicname)
{
	this->row = row;
	this->filename = filename;
	ui.label_filename->setText(filename);
	ui.label_musicPath->setText(musicname);
}

void UnfinishedItem::SetUnSelectedUI()
{
	ui.widget_backgound->setStyleSheet("background-color: rgb(248, 249, 250);");
	ui.label_filename->setStyleSheet("color: rgb(73, 80, 87);");
	ui.label_musicPath->setStyleSheet("color: rgb(73, 80, 87);");
}

QString UnfinishedItem::GetItemFilename()
{
	return filename;
}

void UnfinishedItem::mousePressEvent(QMouseEvent * event)
{
	QWidget::mousePressEvent(event);
	if (event->button() == Qt::LeftButton)
	{
		ui.widget_backgound->setStyleSheet("background-color: rgb(73, 80, 87);");
		ui.label_filename->setStyleSheet("color: rgb(248, 249, 250);");
		ui.label_musicPath->setStyleSheet("color: rgb(248, 249, 250);");
		window->OnBtnItemSelected(row);
	}
}