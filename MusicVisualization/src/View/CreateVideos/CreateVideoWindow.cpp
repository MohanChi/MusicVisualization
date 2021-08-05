#include "CreateVideoWindow.h"
#include "Common/TopWindow.h"
#include "ThreeChoices/ThreeChoicesWindow.h"
#include "../Controller/CreateVideoControl.h"
#include "../Model/VideoDataModel.h"
#include <QFileDialog>
#include <QString>
#include <qpixmap.h>
#include <thread>
#include <sstream>
#include <iomanip>

CreateVideoWindow* CreateVideoWindow::m_cvWindow = nullptr;

CreateVideoWindow::CreateVideoWindow(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	timer = new QTimer(this);
	connect(timer, SIGNAL(timeout()), this, SLOT(slot_TimeOut()));
	isThreadEnd = false;
	isGenerationEnd = false;
	isGenerated = false;

	QObject::connect(ui.btn_back, SIGNAL(clicked()), this, SLOT(slot_OnBtnBackClicked()));
	QObject::connect(ui.btn_generate, SIGNAL(clicked()), this, SLOT(slot_OnBtnGenerateClicked()));
	QObject::connect(ui.btn_upload_music, SIGNAL(clicked()), this, SLOT(slot_OnBtnUploadMusicClicked()));
	QObject::connect(ui.comboBox, SIGNAL(currentIndexChanged(const QString)),
		this, SLOT(slot_StyleComboBox(const QString)));
	QObject::connect(ui.btn_play, SIGNAL(clicked()), this, SLOT(slot_OnBtnPlayClicked()));
	QObject::connect(ui.btn_save, SIGNAL(clicked()), this, SLOT(slot_OnBtnSaveClicked()));
	QObject::connect(ui.btn_completed, SIGNAL(clicked()), this, SLOT(slot_OnBtnCompletedClicked()));

	QObject::connect(ui.hs_speed_fpm, SIGNAL(valueChanged(int)), this,
		SLOT(slot_SliderSpeedFpm(int)));
	QObject::connect(ui.dsb_speed_fpm, SIGNAL(valueChanged(double)), this,
		SLOT(slot_DSBSpeedFpm(double)));

	QObject::connect(ui.hs_pulse_react, SIGNAL(valueChanged(int)), this,
		SLOT(slot_SliderPulseReact(int)));
	QObject::connect(ui.dsb_pulse_react, SIGNAL(valueChanged(double)), this,
		SLOT(slot_DSBPulseReact(double)));

	QObject::connect(ui.hs_motion_react, SIGNAL(valueChanged(int)), this,
		SLOT(slot_SliderMotionReact(int)));
	QObject::connect(ui.dsb_motion_react, SIGNAL(valueChanged(double)), this,
		SLOT(slot_DSBMotionReact(double)));

	QObject::connect(ui.hs_motion_randomness, SIGNAL(valueChanged(int)), this,
		SLOT(slot_SliderMotionRandomness(int)));
	QObject::connect(ui.hs_motion_randomness, SIGNAL(valueChanged(double)), this,
		SLOT(slot_DSBMotionRandomness(double)));

	QObject::connect(ui.hs_contrast_strength, SIGNAL(valueChanged(int)), this,
		SLOT(slot_SliderContrastStrength(int)));
	QObject::connect(ui.dsb_contrast_strength, SIGNAL(valueChanged(double)), this,
		SLOT(slot_DSBContrastStrength(double)));

	QObject::connect(ui.hs_pitch_react, SIGNAL(valueChanged(int)), this,
		SLOT(slot_SliderClassPitchReact(int)));
	QObject::connect(ui.dsb_pitch_react, SIGNAL(valueChanged(double)), this,
		SLOT(slot_DSBClassPitchReact(double)));

	QObject::connect(ui.hs_flash_strength, SIGNAL(valueChanged(int)), this,
		SLOT(slot_SliderFlashStrength(int)));
	QObject::connect(ui.dsb_flash_strength, SIGNAL(valueChanged(double)), this,
		SLOT(slot_DSBFlashStrength(double)));

	QObject::connect(ui.cb_pulse_percussive, SIGNAL(stateChanged(int)), this,
		SLOT(slot_CheckBoxPulsePercussive(int)));
	QObject::connect(ui.cb_pulse_harmonic, SIGNAL(stateChanged(int)), this,
		SLOT(slot_CheckBoxPulseHarmonic(int)));
	QObject::connect(ui.cb_motion_percussive, SIGNAL(stateChanged(int)), this,
		SLOT(slot_CheckBoxMotionPercussive(int)));
	QObject::connect(ui.cb_motion_harmonic, SIGNAL(stateChanged(int)), this,
		SLOT(slot_CheckBoxMotionHarmonic(int)));
	QObject::connect(ui.cb_flash_percussive, SIGNAL(stateChanged(int)), this,
		SLOT(slot_CheckBoxFlashPercussive(int)));
	QObject::connect(ui.cb_contrast_percussive, SIGNAL(stateChanged(int)), this,
		SLOT(slot_CheckBoxContrastPercussive(int)));

	QObject::connect(ui.sb_resolution, SIGNAL(valueChanged(int)), this,
		SLOT(slot_SpinBoxResolution(int)));
	QObject::connect(ui.sb_start, SIGNAL(valueChanged(int)), this,
		SLOT(slot_SpinBoxStart(int)));
	QObject::connect(ui.sb_fps, SIGNAL(valueChanged(int)), this,
		SLOT(slot_SpinBoxFps(int)));

	QObject::connect(ui.horizontalSlider, SIGNAL(valueChanged(int)),
		this, SLOT(slot_SliderValueChanged(int)));

	InitialUI();
}

CreateVideoWindow::~CreateVideoWindow()
{
}

void CreateVideoWindow::SetInitialData(CreateVideo cv)
{
	m_cv.filename = cv.filename;
	m_cv.musicname = cv.musicname;
	m_cv.style = cv.style;
	m_cv.speed_fpm = cv.speed_fpm;
	m_cv.pulse_react = cv.pulse_react;
	m_cv.motion_react = cv.motion_react;
	m_cv.motion_randomness = cv.motion_randomness;
	m_cv.contrast_strength = cv.contrast_strength;
	m_cv.class_pitch_react = cv.class_pitch_react;
	m_cv.flash_strength = cv.flash_strength;
	m_cv.pulse_percussive = cv.pulse_percussive;
	m_cv.pulse_harmonic = cv.pulse_harmonic;
	m_cv.motion_percussive = cv.motion_percussive;
	m_cv.motion_harmonic = cv.motion_harmonic;
	m_cv.flash_percussive = cv.flash_percussive;
	m_cv.contrast_percussive = cv.contrast_percussive;
	m_cv.resolution = cv.resolution;
	m_cv.start = cv.start;
	m_cv.fps = cv.fps;

	ui.label_filename->setText(QString::fromStdString(cv.filename));

	ui.hs_speed_fpm->setValue(cv.speed_fpm);
	ui.dsb_speed_fpm->setValue(cv.speed_fpm);

	ui.hs_pulse_react->setValue(cv.pulse_react * 10);
	ui.hs_motion_react->setValue(cv.motion_react * 10);
	ui.hs_motion_randomness->setValue(cv.motion_randomness * 10);
	ui.hs_contrast_strength->setValue(cv.contrast_strength * 10);
	ui.hs_pitch_react->setValue(cv.class_pitch_react * 10);
	ui.hs_flash_strength->setValue(cv.flash_strength * 10);

	ui.dsb_pulse_react->setValue(cv.pulse_react);
	ui.dsb_motion_react->setValue(cv.motion_react);
	ui.dsb_motion_randomness->setValue(cv.motion_randomness);
	ui.dsb_contrast_strength->setValue(cv.contrast_strength);
	ui.dsb_pitch_react->setValue(cv.class_pitch_react);
	ui.dsb_flash_strength->setValue(cv.flash_strength);

	ui.cb_pulse_percussive->setChecked(cv.pulse_percussive);
	ui.cb_pulse_harmonic->setChecked(cv.pulse_harmonic);
	ui.cb_motion_percussive->setChecked(cv.motion_percussive);
	ui.cb_motion_harmonic->setChecked(cv.motion_harmonic);
	ui.cb_flash_percussive->setChecked(cv.flash_percussive);
	ui.cb_contrast_percussive->setChecked(cv.contrast_percussive);

	ui.sb_resolution->setValue(cv.resolution);
	ui.sb_start->setValue(cv.start);
	ui.sb_fps->setValue(cv.fps);

	if (!m_cv.musicname.empty())
	{
		ui.label_tick->setPixmap(QPixmap(":/MusicVisualization/img/circle_tick.png"));
	}
	if (!m_cv.style.empty())
	{
		int index = ui.comboBox->findText(QString::fromStdString(m_cv.style));
		if (index != -1)
		{
			ui.comboBox->setCurrentIndex(index);
		}
	}
	playerState = QMediaPlayer::StoppedState;
	player->stop();
	videoWidget->hide();
	isGenerated = false;
}

void CreateVideoWindow::SetFileName(std::string filename)
{
	m_cv.filename = filename;
	ui.label_filename->setText(QString::fromStdString(m_cv.filename));
	playerState = QMediaPlayer::StoppedState;
	player->stop();
	videoWidget->hide();
	isGenerated = false;
}

void CreateVideoWindow::InitialUI()
{
	rWidget = new ReminderWidget(this);
	rWidget->hide();
	ui.btn_back->InitialStyleSheet(QPixmap(":/MusicVisualization/img/circle_goback.png"));
	ui.btn_upload_music->InitialStyleSheet(QPixmap(":/MusicVisualization/img/upload.png"));
	ui.btn_play->InitialStyleSheet(QPixmap(":/MusicVisualization/img/play.png"));
	ui.btn_generate->InitialStyleSheet(QPixmap(":/MusicVisualization/img/Generate.png"));
	ui.btn_completed->InitialStyleSheet(QPixmap(":/MusicVisualization/img/Complete.png"));
	ui.btn_save->InitialStyleSheet(QPixmap(":/MusicVisualization/img/save.png"));
	player = new QMediaPlayer();
	videoWidget = new QVideoWidget();
	ui.verticalLayout->addWidget(videoWidget);
	player->setVideoOutput(videoWidget);
	ui.horizontalSlider->setSingleStep(1);
	QObject::connect(player, SIGNAL(durationChanged(qint64)), this, SLOT(slot_DurationChanged(qint64)));
	QObject::connect(player, SIGNAL(positionChanged(qint64)), this, SLOT(slot_PositionChanged(qint64)));

	//complex mode
	//ui.btn_initialization->InitialStyleSheet(QPixmap(":/MusicVisualization/img/Initialization.png"));
	//ui.btn_pulse->InitialStyleSheet(QPixmap(":/MusicVisualization/img/Pulse.png"));
	//ui.btn_motion->InitialStyleSheet(QPixmap(":/MusicVisualization/img/Motion.png"));
	//ui.btn_class->InitialStyleSheet(QPixmap(":/MusicVisualization/img/Class.png"));
	//ui.btn_effects->InitialStyleSheet(QPixmap(":/MusicVisualization/img/Effects.png"));
	//ui.btn_video->InitialStyleSheet(QPixmap(":/MusicVisualization/img/Video.png"));
	//ui.btn_other->InitialStyleSheet(QPixmap(":/MusicVisualization/img/Other.png"));
		
	ui.btn_initialization->InitialStyleSheet(QPixmap(":/MusicVisualization/img/150-50 add.png"));
	ui.btn_pulse->InitialStyleSheet(QPixmap(":/MusicVisualization/img/150-50 add.png"));
	ui.btn_motion->InitialStyleSheet(QPixmap(":/MusicVisualization/img/150-50 add.png"));
	ui.btn_class->InitialStyleSheet(QPixmap(":/MusicVisualization/img/150-50 add.png"));
	ui.btn_effects->InitialStyleSheet(QPixmap(":/MusicVisualization/img/150-50 add.png"));
	ui.btn_video->InitialStyleSheet(QPixmap(":/MusicVisualization/img/150-50 add.png"));
	ui.btn_other->InitialStyleSheet(QPixmap(":/MusicVisualization/img/150-50 add.png"));
	ui.widget_classify->hide();
}

void CreateVideoWindow::AskServerForVideo()
{
	CreateVideoControl cvControl;
	if (cvControl.SendMusicToServer(m_cv) != 0)
	{
		isThreadEnd = true;
		rWidget->SetLabelText("Generation failed, please try again");
		rWidget->show();
	}
	else
	{
		if (cvControl.GetVideoFromServer(m_cv) == 0)
		{
			isThreadEnd = true;
			isGenerationEnd = true;
			isGenerated = true;
		}
		else
		{
			isThreadEnd = true;
			rWidget->SetLabelText("Generation failed, please try again");
			rWidget->show();
		}
	}
}

void CreateVideoWindow::slot_OnBtnGenerateClicked()
{
	CreateDataModel cdm;
	cdm.UpdateCreateVideosData(m_cv);
	CreateVideoControl cvControl;
	if (m_cv.musicname == "")
	{
		rWidget->SetLabelText("You should upload music first!");
		rWidget->show();
		return;
	}
	if (cvControl.SendMusicParametersToServer(m_cv) == 0)
	{
		TopWindow* tWindow = TopWindow::GetInstance();
		wlWindow = new WaitingLoadingWindow();
		wlWindow->setParent(tWindow->GetWidgetContainer());
		wlWindow->show();
		std::thread t(&CreateVideoWindow::AskServerForVideo, this);
		t.detach();
		timer->start(100);
	}
	else
	{
		rWidget->SetLabelText("Could not connect to the server, please try again!");
		rWidget->show();
	}
}

void CreateVideoWindow::slot_OnBtnSaveClicked()
{
	CreateDataModel cdm;
	cdm.UpdateCreateVideosData(m_cv);
	rWidget->SetLabelText("Save the music parameters!");
	rWidget->show();
}

void CreateVideoWindow::slot_OnBtnUploadMusicClicked()
{
	QString filepath = QFileDialog::getOpenFileName(this,
		QString::fromLocal8Bit("choose a music file"), ".mp3");
	if (!filepath.isEmpty())
	{
		ui.label_tick->setPixmap(QPixmap(":/MusicVisualization/img/circle_tick.png"));
		m_cv.musicname = filepath.toLocal8Bit().toStdString();
		rWidget->SetLabelText("Upload music successfully!");
		rWidget->show();
	}
}

void CreateVideoWindow::slot_OnBtnPlayClicked()
{
	if (playerState == QMediaPlayer::StoppedState || playerState == QMediaPlayer::PausedState)
	{
		player->play();
		playerState = QMediaPlayer::PlayingState;
		ui.btn_play->InitialStyleSheet(QPixmap(":/MusicVisualization/img/pause.png"));
	}
	else
	{
		player->pause();
		playerState = QMediaPlayer::PausedState;
		ui.btn_play->InitialStyleSheet(QPixmap(":/MusicVisualization/img/play.png"));
	}
}

void CreateVideoWindow::slot_OnBtnCompletedClicked()
{
	if (isGenerated)
	{
		VideoDataModel vdModel;
		CompletedVideo co;
		co.filename = m_cv.filename;
		co.videoPath = "AppData\\" + m_cv.filename + ".mp4";
		vdModel.SaveCompletedVideo(co);
		rWidget->SetLabelText("Save video successfully!");
		rWidget->show();
	}
	else
	{
		rWidget->SetLabelText("You have not generated video,please generate first!");
		rWidget->show();
	}
	
}

void CreateVideoWindow::slot_SliderSpeedFpm(int value)
{
	m_cv.speed_fpm = value;
	ui.dsb_speed_fpm->setValue(m_cv.speed_fpm);
}

void CreateVideoWindow::slot_SliderPulseReact(int value)
{
	m_cv.pulse_react = (double)value / 10;
	ui.dsb_pulse_react->setValue(m_cv.pulse_react);
}

void CreateVideoWindow::slot_SliderMotionReact(int value)
{
	m_cv.motion_react = (double)value / 10;
	ui.dsb_motion_react->setValue(m_cv.motion_react);
}

void CreateVideoWindow::slot_SliderMotionRandomness(int value)
{
	m_cv.motion_randomness = (double)value / 10;
	ui.dsb_motion_randomness->setValue(m_cv.motion_randomness);
}

void CreateVideoWindow::slot_SliderContrastStrength(int value)
{
	m_cv.contrast_strength = (double)value / 10;
	ui.dsb_contrast_strength->setValue(m_cv.contrast_strength);
}

void CreateVideoWindow::slot_SliderClassPitchReact(int value)
{
	m_cv.class_pitch_react = (double)value / 10;
	ui.dsb_pitch_react->setValue(m_cv.class_pitch_react);
}

void CreateVideoWindow::slot_SliderFlashStrength(int value)
{
	m_cv.flash_strength = (double)value / 10;
	ui.dsb_flash_strength->setValue(m_cv.flash_strength);
}

void CreateVideoWindow::slot_DSBSpeedFpm(int value)
{
	m_cv.speed_fpm = value;
	ui.hs_speed_fpm->setValue(m_cv.speed_fpm);
}

void CreateVideoWindow::slot_DSBPulseReact(double value)
{
	m_cv.pulse_react = value;
	ui.hs_pulse_react->setValue(m_cv.pulse_react * 10);
}

void CreateVideoWindow::slot_DSBMotionReact(double value)
{
	m_cv.motion_react = value;
	ui.hs_motion_react->setValue(m_cv.motion_react * 10);
}

void CreateVideoWindow::slot_DSBMotionRandomness(double value)
{
	m_cv.motion_randomness = value;
	ui.hs_motion_randomness->setValue(m_cv.motion_randomness * 10);
}

void CreateVideoWindow::slot_DSBContrastStrength(double value)
{
	m_cv.contrast_strength = value;
	ui.hs_contrast_strength->setValue(m_cv.contrast_strength * 10);
}

void CreateVideoWindow::slot_DSBClassPitchReact(double value)
{
	m_cv.class_pitch_react = value;
	ui.hs_pitch_react->setValue(m_cv.class_pitch_react * 10);
}

void CreateVideoWindow::slot_DSBFlashStrength(double value)
{
	m_cv.flash_strength = value;
	ui.hs_flash_strength->setValue(m_cv.flash_strength * 10);
}

void CreateVideoWindow::slot_CheckBoxPulsePercussive(int b)
{
	if (ui.cb_pulse_percussive->isChecked())
	{
		m_cv.pulse_percussive = true;
	}
	else
	{
		m_cv.pulse_percussive = false;
	}
}

void CreateVideoWindow::slot_CheckBoxPulseHarmonic(int b)
{
	if (ui.cb_pulse_harmonic->isChecked())
	{
		m_cv.pulse_harmonic = true;
	}
	else
	{
		m_cv.pulse_harmonic = false;
	}
}

void CreateVideoWindow::slot_CheckBoxMotionPercussive(int b)
{
	if (ui.cb_motion_percussive->isChecked())
	{
		m_cv.motion_percussive = true;
	}
	else
	{
		m_cv.motion_percussive = false;
	}
}

void CreateVideoWindow::slot_CheckBoxMotionHarmonic(int b)
{
	if (ui.cb_motion_harmonic->isChecked())
	{
		m_cv.motion_harmonic = true;
	}
	else
	{
		m_cv.motion_harmonic = false;
	}
}

void CreateVideoWindow::slot_CheckBoxFlashPercussive(int b)
{
	if (ui.cb_flash_percussive->isChecked())
	{
		m_cv.flash_percussive = true;
	}
	else
	{
		m_cv.flash_percussive = false;
	}
}

void CreateVideoWindow::slot_CheckBoxContrastPercussive(int b)
{
	if (ui.cb_contrast_percussive->isChecked())
	{
		m_cv.contrast_percussive = true;
	}
	else
	{
		m_cv.contrast_percussive = false;
	}
}

void CreateVideoWindow::slot_SpinBoxResolution(int value)
{
	m_cv.resolution = value;
}

void CreateVideoWindow::slot_SpinBoxStart(int value)
{
	m_cv.start = value;
}

void CreateVideoWindow::slot_SpinBoxFps(int value)
{
	m_cv.fps = value;
}

void CreateVideoWindow::slot_StyleComboBox(const QString & text)
{
	m_cv.style = text.toStdString();
}

void CreateVideoWindow::slot_TimeOut()
{
	if (isThreadEnd)
	{
		wlWindow->hide();
		timer->stop();
		isThreadEnd = false;
		if (isGenerationEnd)
		{

			isGenerationEnd = false;
			//rWidget->SetLabelText("Generated successfully!");
			//rWidget->show();
			playerState = QMediaPlayer::StoppedState;
			player->stop();
			std::string videoPath = "AppData\\" + m_cv.filename + ".mp4";
			player->setMedia(QUrl::fromLocalFile(QString::fromStdString(videoPath)));
			videoWidget->show();
			sliderValue = 0;
			//player->play();
		}
	}
	else if (wlWindow->GetIsCancelled())
	{
		wlWindow->hide();
		timer->stop();

		rWidget->SetLabelText("Generation is cancelled");
		rWidget->show();
	}
}

void CreateVideoWindow::slot_DurationChanged(qint64 playtime)
{
	int h, m, s;
	totalTime = playtime;
	if (playtime != 0)
	{
		playtime /= 1000;
		h = playtime / 3600;
		m = (playtime - h * 3600) / 60;
		s = playtime - h * 3600 - m * 60;
		std::stringstream ss;
		ss << std::setw(2) << std::setfill('0') << std::to_string(h) << ":"
			<< std::setw(2) << std::setfill('0') << std::to_string(m) << ":"
			<< std::setw(2) << std::setfill('0') << std::to_string(s);
		ui.label_totalTime->setText(QString::fromStdString(ss.str()));
		ui.horizontalSlider->setRange(0, playtime);
	}
}

void CreateVideoWindow::slot_PositionChanged(qint64 playtime)
{
	int h, m, s;
	playtime /= 1000;
	h = playtime / 3600;
	m = (playtime - h * 3600) / 60;
	s = playtime - h * 3600 - m * 60;
	std::stringstream ss;
	ss << std::setw(2) << std::setfill('0') << std::to_string(h) << ":"
		<< std::setw(2) << std::setfill('0') << std::to_string(m) << ":"
		<< std::setw(2) << std::setfill('0') << std::to_string(s);
	ui.label_positionTime->setText(QString::fromStdString(ss.str()));
	ui.horizontalSlider->setValue(playtime);
}

void CreateVideoWindow::slot_SliderValueChanged(int value)
{
	if (value == sliderValue + 1)
	{
		sliderValue = value;
		return;
	}
	else
	{
		sliderValue = value;
		player->setPosition(value * 1000);
	}
}

void CreateVideoWindow::slot_OnBtnBackClicked()
{
	this->setParent(nullptr);
	this->hide();
	ThreeChoicesWindow* tcWindow = ThreeChoicesWindow::GetInstance();
	TopWindow* tWindow = TopWindow::GetInstance();
	tcWindow->setParent(tWindow->GetWidgetContainer());
	tcWindow->show();
}