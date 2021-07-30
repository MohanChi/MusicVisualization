#include "DisplayVideosWindow.h"
#include "VideoItem.h"
#include "ThreeChoices/ThreeChoicesWindow.h"
#include "Common/TopWindow.h"
#include "CreateVideos/CreateVideoWindow.h"
#include "../Model/VideoDataModel.h"
#include <iostream>
#include <iomanip>
#include <qlistwidget.h>
#include <qdebug.h>
#include <sstream>

DisplayVideosWindow* DisplayVideosWindow::m_dvWindow = nullptr;

DisplayVideosWindow::DisplayVideosWindow(QWidget * parent) : QWidget(parent)
{
	ui.setupUi(this);
	chooseFilename = "";

	QObject::connect(ui.btn_back, SIGNAL(clicked()), this, SLOT(slot_OnBtnBackClicked()));
	QObject::connect(ui.btn_play, SIGNAL(clicked()), this, SLOT(slot_OnBtnPlayClicked()));
	QObject::connect(ui.btn_modify, SIGNAL(clicked()), this, SLOT(slot_OnBtnModifyClicked()));
	QObject::connect(ui.horizontalSlider, SIGNAL(valueChanged(int)),
		this, SLOT(slot_SliderValueChanged(int)));
	QObject::connect(ui.btn_delete, SIGNAL(clicked()), this, SLOT(slot_OnBtnDeleteClicked()));
	InitializeUI();
}

DisplayVideosWindow::~DisplayVideosWindow()
{
}

void DisplayVideosWindow::UpdateVideoListAndInitialUI()
{
	playerState = QMediaPlayer::StoppedState;
	int count = ui.listWidget->count();
	QListWidgetItem *item;
	for (int i = 0; i < count; i++)
	{
		item = ui.listWidget->takeItem(0);
		delete item;
	}
	player->stop();
	SetVideoList();
}

void DisplayVideosWindow::InitializeUI()
{
	player = new QMediaPlayer();
	videoWidget = new QVideoWidget();
	ui.verticalLayout->addWidget(videoWidget);
	player->setVideoOutput(videoWidget);
	ui.horizontalSlider->setSingleStep(1);

	rWidget = new ReminderWidget(this);
	rWidget->hide();
	ui.btn_back->InitialStyleSheet(QPixmap(":/MusicVisualization/img/circle_goback.png"));
	ui.btn_play->InitialStyleSheet(QPixmap(":/MusicVisualization/img/play.png"));
	ui.btn_modify->InitialStyleSheet(QPixmap(":/MusicVisualization/img/Modify.png"));
	ui.btn_delete->InitialStyleSheet(QPixmap(":/MusicVisualization/img/delete.png"));

	QObject::connect(player, SIGNAL(durationChanged(qint64)), this, SLOT(slot_DurationChanged(qint64)));
	QObject::connect(player, SIGNAL(positionChanged(qint64)), this, SLOT(slot_PositionChanged(qint64)));
}

void DisplayVideosWindow::SetVideoList()
{
	VideoDataModel vdModel;
	CompletedVideoVec cvVec = vdModel.GetAllCreateVideos();
	totalSize = cvVec.size();
	for (int i = 0; i < totalSize; i++)
	{
		VideoItem* mitem = new VideoItem(this); //input this window
		QListWidgetItem *item = new QListWidgetItem();
		item->setSizeHint(QSize(0, mitem->height()));
		mitem->SetVideoItemData(i, QString::fromStdString(cvVec[i].filename), 
			QString::fromStdString(cvVec[i].videoPath));
		ui.listWidget->addItem(item);
		ui.listWidget->setItemWidget(item, mitem);
	}
}

void DisplayVideosWindow::slot_OnBtnPlayClicked()
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

void DisplayVideosWindow::slot_OnBtnModifyClicked()
{
	if (chooseFilename == "")
	{
		rWidget->SetLabelText("Please select a project!");
		rWidget->show();
		return;
	}
	this->setParent(nullptr);
	this->hide();
	TopWindow* tWindow = TopWindow::GetInstance();
	CreateVideoWindow* cvWindow = CreateVideoWindow::GetInstance(tWindow->GetWidgetContainer());
	CreateDataModel cdModel;
	cvWindow->SetInitialData(cdModel.GetCreateVideo(chooseFilename));
	cvWindow->setParent(tWindow->GetWidgetContainer());
	cvWindow->show();
}

void DisplayVideosWindow::slot_OnBtnDeleteClicked()
{
	if (chooseFilename == "")
	{
		rWidget->SetLabelText("Please select a project!");
		rWidget->show();
		return;
	}
	VideoDataModel vdModel;
	vdModel.DeleteCompeletdVideo(chooseFilename);
	UpdateVideoListAndInitialUI();
}

void DisplayVideosWindow::slot_DurationChanged(qint64 playtime)
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

void DisplayVideosWindow::slot_PositionChanged(qint64 playtime)
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

void DisplayVideosWindow::slot_SliderValueChanged(int value)
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

void DisplayVideosWindow::OnBtnItemSelected(int row)
{
	VideoItem *item;
	for (int i = 0; i < totalSize; i++)
	{
		if (i == row)
		{
			item = (VideoItem*)ui.listWidget->itemWidget(ui.listWidget->item(i));
			player->setMedia(QUrl::fromLocalFile(item->GetVideoPath()));
			videoWidget->show();
			playerState = QMediaPlayer::StoppedState;
			sliderValue = 0;
			//player->play();
			chooseFilename = item->GetFilename().toStdString();
		}
		else
		{
			item = (VideoItem*)ui.listWidget->itemWidget(ui.listWidget->item(i));
			item->SetUnSelectedUI();
		}
	}
}

void DisplayVideosWindow::slot_OnBtnBackClicked()
{
	this->setParent(nullptr);
	this->hide();
	ThreeChoicesWindow* tcWindow = ThreeChoicesWindow::GetInstance();
	TopWindow* tWindow = TopWindow::GetInstance();
	tcWindow->setParent(tWindow->GetWidgetContainer());
	tcWindow->show();
}