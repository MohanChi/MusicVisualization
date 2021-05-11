#include "NewNameWindow.h"
#include "ThreeChoices/ThreeChoicesWindow.h"
#include "CreateVideoWindow.h"
#include "Common/TopWindow.h"
#include <QDebug>

NewNameWindow* NewNameWindow::m_nnWindow = nullptr;

NewNameWindow::NewNameWindow(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	InitializeUI();

	QObject::connect(ui.btn_OK, SIGNAL(clicked()), this, SLOT(slot_OnBtnOKClicked()));
	QObject::connect(ui.btn_cancel, SIGNAL(clicked()), this, SLOT(slot_OnBtnCancelClicked()));
}

NewNameWindow::~NewNameWindow()
{
}

void NewNameWindow::InitializeUI()
{
	rWidget = new ReminderWidget(this);
	rWidget->hide();
}

void NewNameWindow::slot_OnBtnCancelClicked()
{
	this->setParent(nullptr);
	this->hide();
	ThreeChoicesWindow* tcWindow = ThreeChoicesWindow::GetInstance();
	TopWindow* tWindow = TopWindow::GetInstance();
	tcWindow->setParent(tWindow->GetWidgetContainer());
	tcWindow->show();
}

void NewNameWindow::slot_OnBtnOKClicked()
{
	if (ui.lineEdit->text().isEmpty())
	{
		rWidget->show();
	}
	else
	{
		qDebug() << ui.lineEdit->text();
		qDebug() << ui.lineEdit->text().size();
		
		this->setParent(nullptr);
		this->hide();
		CreateVideoWindow* cvWindow = CreateVideoWindow::GetInstance();
		TopWindow* tWindow = TopWindow::GetInstance();
		cvWindow->setParent(tWindow->GetWidgetContainer());
		cvWindow->show();
	}
}
