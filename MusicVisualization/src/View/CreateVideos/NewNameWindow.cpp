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
			CreateVideoWindow* cvWindow = CreateVideoWindow::GetInstance();
			CreateVideo cv;
			cv.filename = ui.lineEdit->text().toStdString();
			cvWindow->SetInitialData(cv);
			TopWindow* tWindow = TopWindow::GetInstance();
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
