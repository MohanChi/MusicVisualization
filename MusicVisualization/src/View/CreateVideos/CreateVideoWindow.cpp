#include "CreateVideoWindow.h"
#include "Common/TopWindow.h"
#include "ThreeChoices/ThreeChoicesWindow.h"

CreateVideoWindow* CreateVideoWindow::m_cvWindow = nullptr;

CreateVideoWindow::CreateVideoWindow(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);

	QObject::connect(ui.btn_back, SIGNAL(clicked()), this, SLOT(slot_OnBtnBackClicked()));
}

CreateVideoWindow::~CreateVideoWindow()
{
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
