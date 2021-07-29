#include "ContinueChooseWindow.h"
#include "ThreeChoices/ThreeChoicesWindow.h"
#include "Common/TopWindow.h"
#include "UnfinishedItem.h"
#include "../Model/CreateDataModel.h"
#include "../Model/VideoDataModel.h"
#include "CreateVideos/CreateVideoWindow.h"

ContinueChooseWindow* ContinueChooseWindow::m_ccWindow = nullptr;

ContinueChooseWindow::ContinueChooseWindow(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	InitializeUI();
	chooseFilename = "";

	QObject::connect(ui.btn_back, SIGNAL(clicked()), this, SLOT(slot_OnBtnBackClicked()));
	QObject::connect(ui.btn_OK, SIGNAL(clicked()), this, SLOT(slot_OnBtnOKClicked()));
	QObject::connect(ui.btn_delete, SIGNAL(clicked()), this, SLOT(slot_OnBtnDeleteClicked()));
}

ContinueChooseWindow::~ContinueChooseWindow()
{
}

void ContinueChooseWindow::InitializeUI()
{
	ui.btn_OK->InitialStyleSheet(QPixmap(":/MusicVisualization/img/OK.png"));
	ui.btn_back->InitialStyleSheet(QPixmap(":/MusicVisualization/img/circle_goback.png"));
	ui.btn_delete->InitialStyleSheet(QPixmap(":/MusicVisualization/img/delete.png"));
}

void ContinueChooseWindow::SetInitializeItem()
{
	ui.listWidget->clear();
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
	if (chooseFilename == "")
	{
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

void ContinueChooseWindow::slot_OnBtnDeleteClicked()
{
	if (chooseFilename == "")
	{
		return;
	}
	CreateDataModel cdModel;
	cdModel.DeleteCreateVideoData(chooseFilename);
	VideoDataModel vdModel;
	vdModel.DeleteCompeletdVideo(chooseFilename);
	SetInitializeItem();
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