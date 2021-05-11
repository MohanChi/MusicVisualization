#include "ThreeChoicesWindow.h"
#include "DisplayVideos/DisplayVideosWindow.h"
#include "Common/TopWindow.h"
#include "CreateVideos/NewNameWindow.h"
#include "ContinueChoose/ContinueChooseWindow.h"

ThreeChoicesWindow* ThreeChoicesWindow::m_tcWindow = nullptr;

ThreeChoicesWindow::ThreeChoicesWindow(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	InitializeUI();
	QObject::connect(ui.btn_display, SIGNAL(clicked()), this, SLOT(slot_OnBtnDisplayClicked()));
	QObject::connect(ui.btn_create, SIGNAL(clicked()), this, SLOT(slot_OnBtnCreateClicked()));
	QObject::connect(ui.btn_continue, SIGNAL(clicked()), this, SLOT(slot_OnBtnContinueClicked()));
}

ThreeChoicesWindow::~ThreeChoicesWindow()
{
}

void ThreeChoicesWindow::InitializeUI()
{
	ui.widget_background->setStyleSheet("background-color:black");
	setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
}

void ThreeChoicesWindow::slot_OnBtnDisplayClicked()
{
	this->setParent(nullptr);
	this->hide();
	TopWindow * tWindow = TopWindow::GetInstance();
	DisplayVideosWindow * dvWindow = DisplayVideosWindow::GetInstance(tWindow->GetWidgetContainer());
	dvWindow->setParent(tWindow->GetWidgetContainer());
	dvWindow->UpdateVideoListAndInitialUI();
	dvWindow->show();
}

void ThreeChoicesWindow::slot_OnBtnCreateClicked()
{
	this->setParent(nullptr);
	this->hide();
	NewNameWindow * nnWindow = NewNameWindow::GetInstance();
	TopWindow * tWindow = TopWindow::GetInstance();
	nnWindow->setParent(tWindow->GetWidgetContainer());
	nnWindow->show();
}

void ThreeChoicesWindow::slot_OnBtnContinueClicked()
{
	this->setParent(nullptr);
	this->hide();
	ContinueChooseWindow * ccWindow = ContinueChooseWindow::GetInstance();
	TopWindow * tWindow = TopWindow::GetInstance();
	ccWindow->setParent(tWindow->GetWidgetContainer());
	ccWindow->show();
}

