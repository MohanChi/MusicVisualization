#include "ContinueChooseWindow.h"
#include "ThreeChoices/ThreeChoicesWindow.h"
#include "Common/TopWindow.h"
#include "UnfinishedItem.h"

ContinueChooseWindow* ContinueChooseWindow::m_ccWindow = nullptr;

ContinueChooseWindow::ContinueChooseWindow(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	InitializeUI();

	QObject::connect(ui.btn_back, SIGNAL(clicked()), this, SLOT(slot_OnBtnBackClicked()));
}

ContinueChooseWindow::~ContinueChooseWindow()
{
}

void ContinueChooseWindow::InitializeUI()
{
	for (int i = 0; i < 5; i++)
	{
		UnfinishedItem* mitem = new UnfinishedItem(this); //input this window
		QListWidgetItem *item = new QListWidgetItem();
		item->setSizeHint(QSize(0, mitem->height()));
		mitem->SetItemData(i, "testtest");
		ui.listWidget->addItem(item);
		ui.listWidget->setItemWidget(item, mitem);
	}
}

void ContinueChooseWindow::OnBtnItemSelected(int row)
{
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
