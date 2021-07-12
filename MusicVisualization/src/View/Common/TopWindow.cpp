#include "TopWindow.h"
#include "ThreeChoices/ThreeChoicesWindow.h"
#include <QApplication.h>"

TopWindow* TopWindow::m_tWindow = nullptr;

TopWindow::TopWindow() : QWidget()
{
	ui.setupUi(this);
	InitializeUI();

	QObject::connect(ui.btn_close, SIGNAL(clicked()), this, SLOT(slot_OnBtnCloseClicked()));
	QObject::connect(ui.btn_min, SIGNAL(clicked()), this, SLOT(slot_OnBtnMinClicked()));

	ThreeChoicesWindow *tcWindow = ThreeChoicesWindow::GetInstance();
	tcWindow->setParent(ui.widget_container);
	tcWindow->show();
}

TopWindow::~TopWindow()
{
}

QWidget * TopWindow::GetWidgetContainer()
{
	return ui.widget_container;
}

void TopWindow::InitializeUI()
{
	ui.btn_close->InitialStyleSheet(QPixmap(":/MusicVisualization/img/not.png"));
	ui.btn_min->InitialStyleSheet(QPixmap(":/MusicVisualization/img/minimize.png"));
	//setAttribute(Qt::WA_TranslucentBackground, true);
	setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
}

void TopWindow::slot_OnBtnCloseClicked()
{
	QApplication::exit(0);
}

void TopWindow::slot_OnBtnMinClicked()
{
	QWidget* mainApp = this;
	while (mainApp->parentWidget())
	{
		mainApp = mainApp->parentWidget();
	}
	mainApp->showMinimized();
}