#include "NewNameWindow.h"
#include "ThreeChoices/ThreeChoicesWindow.h"
#include "CreateVideoWindow.h"
#include "Common/TopWindow.h"
#include "../../Model/CreateDataModel.h"
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
	ui.btn_OK->InitialStyleSheet(QPixmap(":/MusicVisualization/img/OK.png"));
	ui.btn_cancel->InitialStyleSheet(QPixmap(":/MusicVisualization/img/Cancel.png"));
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
		rWidget->SetLabelText("You need to name a new project!!!");
		rWidget->show();
	}
	else                      
	{
		qDebug() << ui.lineEdit->text();
		qDebug() << ui.lineEdit->text().size();

		CreateDataModel cdm;
		if (cdm.IsFilenameUnique(ui.lineEdit->text().toStdString()))
		{
			this->setParent(nullptr);
			this->hide();
			TopWindow* tWindow = TopWindow::GetInstance();
			CreateVideoWindow* cvWindow = CreateVideoWindow::GetInstance(tWindow->GetWidgetContainer());
			cvWindow->SetFileName(ui.lineEdit->text().toStdString());
			cvWindow->setParent(tWindow->GetWidgetContainer());
			cvWindow->show();
		}
		else
		{
			rWidget->SetLabelText("You need to change the project name!!!");
			rWidget->show();
		}
	}
}
