#include "ReminderWidget.h"

ReminderWidget::ReminderWidget(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	this->parent = parent;
	InitializeUI();

	QObject::connect(ui.btn_OK, SIGNAL(clicked()), this, SLOT(slot_OnBtnOKClicked()));
}

ReminderWidget::~ReminderWidget()
{
}

void ReminderWidget::SetLabelText(QString text)
{
	ui.label->setText(text);
}

void ReminderWidget::InitializeUI()
{
	this->setGeometry(parent->width() / 2 - this->width() / 2,
		parent->height() / 2 - this->height() / 2, this->width(), this->height());
	ui.btn_OK->InitialStyleSheet(QPixmap(":/MusicVisualization/img/OK.png"));
}

void ReminderWidget::slot_OnBtnOKClicked()
{
	this->hide();
}
