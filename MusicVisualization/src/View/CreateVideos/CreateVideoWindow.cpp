#include "CreateVideoWindow.h"
#include "Common/TopWindow.h"
#include "ThreeChoices/ThreeChoicesWindow.h"

CreateVideoWindow* CreateVideoWindow::m_cvWindow = nullptr;

CreateVideoWindow::CreateVideoWindow(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);

	QObject::connect(ui.btn_back, SIGNAL(clicked()), this, SLOT(slot_OnBtnBackClicked()));
	QObject::connect(ui.hs_pulse_react, SIGNAL(valueChanged(int)), this, 
		SLOT(slot_SliderPulseReact(int)));
	QObject::connect(ui.dsb_pulse_react, SIGNAL(valueChanged(double)), this,
		SLOT(slot_DSBPulseReact(double)));
	QObject::connect(ui.hs_motion_react, SIGNAL(valueChanged(int)), this,
		SLOT(slot_SliderMotionReact(int)));
	QObject::connect(ui.dsb_motion_react, SIGNAL(valueChanged(double)), this,
		SLOT(slot_DSBMotionReact(double)));
	QObject::connect(ui.hs_contrast_strength, SIGNAL(valueChanged(int)), this,
		SLOT(slot_SliderContrastStrength(int)));
	QObject::connect(ui.dsb_contrast_strength, SIGNAL(valueChanged(double)), this,
		SLOT(slot_DSBContrastStrength(double)));
}

CreateVideoWindow::~CreateVideoWindow()
{
}

void CreateVideoWindow::SetInitialData(CreateVideo cv)
{
	m_cv.filename = cv.filename;
	m_cv.musicname = cv.musicname;
	m_cv.pulse_react = cv.pulse_react;
	m_cv.motion_react = cv.motion_react;
	m_cv.contrast_strength = cv.contrast_strength;
	ui.label_filename->setText(QString::fromStdString(cv.filename));
	ui.hs_pulse_react->setValue(cv.pulse_react * 10);
	ui.hs_motion_react->setValue(cv.motion_react * 10);
	ui.hs_contrast_strength->setValue(cv.contrast_strength * 10);
	ui.dsb_pulse_react->setValue(cv.pulse_react);
	ui.dsb_motion_react->setValue(cv.motion_react);
	ui.dsb_contrast_strength->setValue(cv.contrast_strength);
}

void CreateVideoWindow::slot_SliderPulseReact(int value)
{
	m_cv.pulse_react = (double)value / 10;
	ui.dsb_pulse_react->setValue(m_cv.pulse_react);
}

void CreateVideoWindow::slot_SliderMotionReact(int value)
{
	m_cv.motion_react = (double)value / 10;
	ui.dsb_motion_react->setValue(m_cv.motion_react);
}

void CreateVideoWindow::slot_SliderContrastStrength(int value)
{
	m_cv.contrast_strength = (double)value / 10;
	ui.dsb_contrast_strength->setValue(m_cv.contrast_strength);
}

void CreateVideoWindow::slot_DSBPulseReact(double value)
{
	m_cv.pulse_react = value;
	ui.hs_pulse_react->setValue(m_cv.pulse_react * 10);
}

void CreateVideoWindow::slot_DSBMotionReact(double value)
{
	m_cv.motion_react = value;
	ui.hs_motion_react->setValue(m_cv.motion_react * 10);
}

void CreateVideoWindow::slot_DSBContrastStrength(double value)
{
	m_cv.contrast_strength = value;
	ui.hs_contrast_strength->setValue(m_cv.contrast_strength * 10);
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
