#include "CreateVideoWindow.h"
#include "Common/TopWindow.h"
#include "ThreeChoices/ThreeChoicesWindow.h"
#include "../Controller/CreateVideoControl.h"
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
	SetInitialUI();
	timer = new QTimer(this);
	connect(timer, SIGNAL(timeout()), this, SLOT(slot_TimeOut()));
	timess = 0;
	threadEnd = false;

	QObject::connect(ui.btn_back, SIGNAL(clicked()), this, SLOT(slot_OnBtnBackClicked()));
	QObject::connect(ui.btn_generate, SIGNAL(clicked()), this, SLOT(slot_OnBtnGenerateClicked()));
	QObject::connect(ui.btn_upload_music, SIGNAL(clicked()), this, SLOT(slot_OnBtnUploadMusicClicked()));
	QObject::connect(ui.hs_pulse_react, SIGNAL(valueChanged(int)), this,
		SLOT(slot_SliderPulseReact(int)));
	QObject::connect(ui.dsb_pulse_react, SIGNAL(valueChanged(double)), this,
		SLOT(slot_DSBPulseReact(double)));
	QObject::connect(ui.hs_motion_react, SIGNAL(valueChanged(int)), this,
		SLOT(slot_SliderMotionReact(int)));
	QObject::connect(ui.dsb_motion_react, SIGNAL(valueChanged(double)), this,
		SLOT(slot_DSBMotionReact(double)));
	QObject::connect(ui.hs_contrast_strength, SIGNAL(valueChanged(int)), this,
		SLOT(slot_SliderContrastStrength(int)));
	QObject::connect(ui.dsb_contrast_strength, SIGNAL(valueChanged(double)), this,
		SLOT(slot_DSBContrastStrength(double)));
	QObject::connect(ui.horizontalSlider, SIGNAL(valueChanged(int)),
		this, SLOT(slot_SliderValueChanged(int)));
	QObject::connect(ui.comboBox, SIGNAL(currentIndexChanged(const QString)),
		this, SLOT(slot_StyleComboBox(const QString)));
}

CreateVideoWindow::~CreateVideoWindow()
{
}

void CreateVideoWindow::SetInitialData(CreateVideo cv)
{
	m_cv.filename = cv.filename;
	m_cv.musicname = cv.musicname;
	m_cv.style = cv.style;
	m_cv.pulse_react = cv.pulse_react;
	m_cv.motion_react = cv.motion_react;
	m_cv.contrast_strength = cv.contrast_strength;
	ui.label_filename->setText(QString::fromStdString(cv.filename));
	ui.hs_pulse_react->setValue(cv.pulse_react * 10);
	ui.hs_motion_react->setValue(cv.motion_react * 10);
	ui.hs_contrast_strength->setValue(cv.contrast_strength * 10);
	ui.dsb_pulse_react->setValue(cv.pulse_react);
	ui.dsb_motion_react->setValue(cv.motion_react);
	ui.dsb_contrast_strength->setValue(cv.contrast_strength);
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
}

void CreateVideoWindow::SetInitialUI()
{
	rWidget = new ReminderWidget(this);
	rWidget->hide();
	ui.btn_back->InitialStyleSheet(QPixmap(":/MusicVisualization/img/circle_goback.png"));
	ui.btn_upload_music->InitialStyleSheet(QPixmap(":/MusicVisualization/img/upload.png"));
	ui.btn_play->InitialStyleSheet(QPixmap(":/MusicVisualization/img/play.png"));
	ui.btn_generate->InitialStyleSheet(QPixmap(":/MusicVisualization/img/Generate.png"));
	ui.btn_completed->InitialStyleSheet(QPixmap(":/MusicVisualization/img/Complete.png"));
	player = new QMediaPlayer();
	videoWidget = new QVideoWidget();
	ui.verticalLayout->addWidget(videoWidget);
	player->setVideoOutput(videoWidget);
	ui.horizontalSlider->setSingleStep(1);
	QObject::connect(player, SIGNAL(durationChanged(qint64)), this, SLOT(slot_DurationChanged(qint64)));
	QObject::connect(player, SIGNAL(positionChanged(qint64)), this, SLOT(slot_PositionChanged(qint64)));
}

void CreateVideoWindow::AskServerForVideo()
{
	CreateVideoControl cvControl;
	if (cvControl.SendMusicToServer(m_cv) != 0)
	{
		threadEnd = true;
		rWidget->SetLabelText("Generation failed, please try again");
		rWidget->show();
	}
	else
	{
		if (cvControl.GetVideoFromServer(m_cv) == 0)
		{
			threadEnd = true;
			std::string videoPath = "AppData\\" + m_cv.filename + ".mp4";
			player->setMedia(QUrl::fromLocalFile(QString::fromStdString(videoPath)));
			videoWidget->show();
			playerState = QMediaPlayer::StoppedState;
			sliderValue = 0;
		}
		else
		{
			threadEnd = true;
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
	}
	else
	{
		player->pause();
		playerState = QMediaPlayer::PausedState;
	}
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

void CreateVideoWindow::slot_SliderContrastStrength(int value)
{
	m_cv.contrast_strength = (double)value / 10;
	ui.dsb_contrast_strength->setValue(m_cv.contrast_strength);
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

void CreateVideoWindow::slot_DSBContrastStrength(double value)
{
	m_cv.contrast_strength = value;
	ui.hs_contrast_strength->setValue(m_cv.contrast_strength * 10);
}

void CreateVideoWindow::slot_StyleComboBox(const QString & text)
{
	m_cv.style = text.toStdString();
}

void CreateVideoWindow::slot_TimeOut()
{
	if (threadEnd = true || wlWindow->GetIsCancelled())
	{
		wlWindow->hide();
		timer->stop();
	}
	
}

void CreateVideoWindow::slot_DurationChnged(qint64 playtime)
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