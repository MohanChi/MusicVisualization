#pragma once

#include <QWidget>
#include "ui_ThreeChoicesWindow.h"

class ThreeChoicesWindow : public QWidget
{
	Q_OBJECT

public:
	ThreeChoicesWindow(QWidget *parent = Q_NULLPTR);
	~ThreeChoicesWindow();

	static ThreeChoicesWindow* GetInstance()
	{
		if (m_tcWindow == NULL)
		{
			m_tcWindow = new ThreeChoicesWindow();
		}
		return m_tcWindow;
	}

private:
	void InitializeUI();

private slots:
	void slot_OnBtnDisplayClicked();
	void slot_OnBtnCreateClicked();
	void slot_OnBtnContinueClicked();

private:
	Ui::ThreeChoicesWindow ui;

	static ThreeChoicesWindow * m_tcWindow;
};
