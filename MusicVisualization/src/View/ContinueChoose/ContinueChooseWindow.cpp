#include "ContinueChooseWindow.h"
#include "ThreeChoices/ThreeChoicesWindow.h"
#include "Common/TopWindow.h"
#include "UnfinishedItem.h"
#include "../Model/CreateDataModel.h"
#include "CreateVideos/CreateVideoWindow.h"

ContinueChooseWindow* ContinueChooseWindow::m_ccWindow = nullptr;

ContinueChooseWindow::ContinueChooseWindow(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	InitializeUI();
	SetInitializeItem();

	QObject::connect(ui.btn_back, SIGNAL(clicked()), this, SLOT(slot_OnBtnBackClicked()));
	QObject::connect(ui.btn_OK, SIGNAL(clicked()), this, SLOT(slot_OnBtnOKClicked()));
}

ContinueChooseWindow::~ContinueChooseWindow()
{
}

void ContinueChooseWindow::InitializeUI()
{
	ui.btn_OK->InitialStyleSheet(QPixmap(":/MusicVisualization/img/OK.png"));
	ui.btn_back->InitialStyleSheet(QPixmap(":/MusicVisualization/img/circle_goback.png"));
}

void ContinueChooseWindow::SetInitializeItem()
{
	CreateDataModel cdModel;
	std::vector<CreateVideo> cvVec = cdModel.GetAllCreateVideos();
	totalSize = cvVec.size();
	for (int i = 0; i < totalSize; i++)
	{
		UnfinishedItem* mitem = new UnfinishedItem(this); //input this window
		QListWidgetItem *item = new QListWidgetItem();
		item->setSizeHint(QSize(0, mitem->height()));
		mitem->SetItemData(i, QString::fromStdString(cvVec[i].filename), 
			QString::fromStdString(cvVec[i].musicname));
		ui.listWidget->addItem(item);
		ui.listWidget->setItemWidget(item, mitem);
	}
}

void ContinueChooseWindow::OnBtnItemSelected(int row)
{
	UnfinishedItem *item;
	for (int i = 0; i < totalSize; i++)
	{
		if (i == row)
		{
			item = (UnfinishedItem*)ui.listWidget->itemWidget(ui.listWidget->item(i));
			chooseFilename = item->GetItemFilename().toStdString();
		}
		else
		{
			item = (UnfinishedItem*)ui.listWidget->itemWidget(ui.listWidget->item(i));
			item->SetUnSelectedUI();
		}
	}
}

void ContinueChooseWindow::slot_OnBtnOKClicked()
{
	this->setParent(nullptr);
	this->hide();
	CreateVideoWindow* cvWindow = CreateVideoWindow::GetInstance();
	CreateDataModel cdModel;
	cvWindow->SetInitialData(cdModel.GetCreateVideo(chooseFilename));
	TopWindow* tWindow = TopWindow::GetInstance();
	cvWindow->setParent(tWindow->GetWidgetContainer());
	cvWindow->show();
}

void ContinueChooseWindow::slot_OnBtnBackClicked()
{
	this->setParent(nullptr);
	this->hide();
	ThreeChoicesWindow* tcWindow = ThreeChoicesWindow::GetInstance();
	TopWindow* tWindow = TopWindow::GetInstance();
	tcWindow->setParent(tWindow->GetWidgetContainer());
	tcWindow->show();
}
