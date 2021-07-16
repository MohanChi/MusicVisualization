#pragma once

#include <QWidget>
#include <QListWidget>
#include <QListWidgetItem>
#include <QMouseEvent>
#include "ContinueChoose/ContinueChooseWindow.h"
#include "ui_UnfinishedItem.h"

class UnfinishedItem : public QWidget, public QListWidgetItem
{
	Q_OBJECT

public:
	UnfinishedItem(ContinueChooseWindow * window, QWidget* parent = nullptr);
	~UnfinishedItem();

	void SetItemData(int row, QString filename, QString musicname);
	void SetUnSelectedUI();
	QString GetItemFilename();

private:
	void mousePressEvent(QMouseEvent * event);

private:
	Ui::UnfinishedItem ui;
	ContinueChooseWindow* window;
	int row;
	QString filename;
};