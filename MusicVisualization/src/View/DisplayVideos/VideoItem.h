#pragma once

#include <QWidget>
#include <QListWidget>
#include <QListWidgetItem>
#include <QMouseEvent>
#include "ui_VideoItem.h"
#include "DisplayVideosWindow.h"

struct VideoItemData
{
	int row;
	std::string UID;
	std::string path;
};

class VideoItem : public QWidget, public QListWidgetItem
{
	Q_OBJECT

public:
	VideoItem(DisplayVideosWindow * window, QWidget* parent = nullptr);
	~VideoItem();

	void SetVideoItemData(int row, QString filename, QString path);
	void SetUnSelectedUI();
	QString GetFilename();
	QString GetVideoPath();

private:
	void mousePressEvent(QMouseEvent * event);

private:
	Ui::VideoItem ui;
	DisplayVideosWindow * window;
	int row;
	QString filename;
	QString path;
};