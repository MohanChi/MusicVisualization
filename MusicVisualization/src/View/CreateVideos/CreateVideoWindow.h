#pragma once

#include "../../Model/CreateDataModel.h"
#include "ReminderWidget.h"
#include "WaitingLoadingWindow.h"
#include <QWidget>
#include <qtimer.h>
#include <QtMultimedia/qmediaplayer.h>
#include <QtMultimediaWidgets/qvideowidget.h>
#include "ui_CreateVideoWindow.h"

class CreateVideoWindow : public QWidget
{
	Q_OBJECT

public:
	~CreateVideoWindow();

	static CreateVideoWindow * GetInstance(QWidget * parent = NULL)
	{
		if (m_cvWindow == NULL)
			m_cvWindow = new CreateVideoWindow(parent);
		return m_cvWindow;
	}

	void SetInitialData(CreateVideo cv);

private:
	CreateVideoWindow(QWidget *parent = Q_NULLPTR);
	void InitialUI();
	void AskServerForVideo();

private slots:
	void slot_OnBtnBackClicked();
	void slot_OnBtnGenerateClicked();
	void slot_OnBtnUploadMusicClicked();
	void slot_OnBtnPlayClicked();
	void slot_SliderPulseReact(int value);
	void slot_SliderMotionReact(int value);
	void slot_SliderContrastStrength(int value);
	void slot_DSBPulseReact(double value);
	void slot_DSBMotionReact(double value);
	void slot_DSBContrastStrength(double value);
	void slot_StyleComboBox(const QString & text);
	void slot_TimeOut();
	void slot_DurationChanged(qint64 playtime);
	void slot_PositionChanged(qint64 playtime);
	void slot_SliderValueChanged(int value);

private:
	Ui::CreateVideoWindow ui;
	CreateVideo m_cv;
	ReminderWidget * rWidget;
	WaitingLoadingWindow *wlWindow;
	QTimer * timer;
	bool threadEnd;
	bool generationEnd;

	QMediaPlayer *player;
	QVideoWidget *videoWidget;
	int playerState;
	int totalTime;
	int sliderValue;

	static CreateVideoWindow* m_cvWindow;
};
