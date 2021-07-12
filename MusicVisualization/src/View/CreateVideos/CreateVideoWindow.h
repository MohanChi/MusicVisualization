#pragma once

#include "../../Model/CreateDataModel.h"
#include <QWidget>
#include "ui_CreateVideoWindow.h"
#include "ReminderWidget.h"

class CreateVideoWindow : public QWidget
{
	Q_OBJECT

public:
	CreateVideoWindow(QWidget *parent = Q_NULLPTR);
	~CreateVideoWindow();

	static CreateVideoWindow * GetInstance()
	{
		if (m_cvWindow == NULL)
			m_cvWindow = new CreateVideoWindow();
		return m_cvWindow;
	}

	void SetInitialData(CreateVideo cv);

private:
	void SetInitialUI();

private slots:
	void slot_OnBtnBackClicked();
	void slot_OnBtnGenerateClicked();
	void slot_OnBtnUploadMusic();
	void slot_SliderPulseReact(int value);
	void slot_SliderMotionReact(int value);
	void slot_SliderContrastStrength(int value);
	void slot_DSBPulseReact(double value);
	void slot_DSBMotionReact(double value);
	void slot_DSBContrastStrength(double value);
	void slot_StyleComboBox(const QString & text);

private:
	Ui::CreateVideoWindow ui;
	CreateVideo m_cv;
	ReminderWidget * rWidget;
	static CreateVideoWindow* m_cvWindow;
};
