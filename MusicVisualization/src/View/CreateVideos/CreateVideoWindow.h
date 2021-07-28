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

	void SetInitialData(CreateVideo cv); //for continue window
	void SetFileName(std::string filename); //for new project

private:
	CreateVideoWindow(QWidget *parent = Q_NULLPTR);
	void InitialUI();
	void AskServerForVideo();

private slots:
	void slot_OnBtnBackClicked();
	void slot_OnBtnGenerateClicked();
	void slot_OnBtnSaveClicked();
	void slot_OnBtnUploadMusicClicked();
	void slot_OnBtnPlayClicked();
	void slot_OnBtnCompletedClicked();
	void slot_StyleComboBox(const QString & text);

	void slot_SliderSpeedFpm(int value);
	void slot_SliderPulseReact(int value);
	void slot_SliderMotionReact(int value);
	void slot_SliderMotionRandomness(int value);
	void slot_SliderContrastStrength(int value);
	void slot_SliderClassPitchReact(int value);
	void slot_SliderFlashStrength(int value);

	void slot_DSBSpeedFpm(int value);
	void slot_DSBPulseReact(double value);
	void slot_DSBMotionReact(double value);
	void slot_DSBMotionRandomness(double value);
	void slot_DSBContrastStrength(double value);
	void slot_DSBClassPitchReact(double value);
	void slot_DSBFlashStrength(double value);

	void slot_CheckBoxPulsePercussive(int b);
	void slot_CheckBoxPulseHarmonic(int b);
	void slot_CheckBoxMotionPercussive(int b);
	void slot_CheckBoxMotionHarmonic(int b);
	void slot_CheckBoxFlashPercussive(int b);
	void slot_CheckBoxContrastPercussive(int b);

	void slot_SpinBoxResolution(int value);
	void slot_SpinBoxStart(int value);
	void slot_SpinBoxFps(int value);

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
	bool isThreadEnd;
	bool isGenerationEnd;
	bool isGenerated;

	QMediaPlayer *player;
	QVideoWidget *videoWidget;
	int playerState;
	int totalTime;
	int sliderValue;

	static CreateVideoWindow* m_cvWindow;
};
