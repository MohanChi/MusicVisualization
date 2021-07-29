#pragma once

#include <QWidget>
#include <QtMultimedia/qmediaplayer.h>
#include <QtMultimediaWidgets/qvideowidget.h>
#include "ui_DisplayVideosWindow.h"

class DisplayVideosWindow : public QWidget
{
	Q_OBJECT

public:
	~DisplayVideosWindow();

	static DisplayVideosWindow* GetInstance(QWidget * parent)
	{
		if (m_dvWindow == NULL)
		{
			m_dvWindow = new DisplayVideosWindow(parent);
		}
		return m_dvWindow;
	}
	void UpdateVideoListAndInitialUI();
	void OnBtnItemSelected(int row);

private:
	void InitializeUI();
	DisplayVideosWindow(QWidget * parent);
	void SetVideoList();

private slots:
	void slot_OnBtnBackClicked();
	void slot_OnBtnPlayClicked();
	void slot_OnBtnModifyClicked();
	void slot_OnBtnDeleteClicked();
	void slot_DurationChanged(qint64 playtime);
	void slot_PositionChanged(qint64 playtime);
	void slot_SliderValueChanged(int value);

private:
	Ui::DisplayVideosWindow ui;
	QMediaPlayer *player;
	QVideoWidget *videoWidget;
	int playerState;
	int totalTime;
	int sliderValue;
	int totalSize;
	std::string chooseFilename;

	static DisplayVideosWindow * m_dvWindow;
};