#pragma once

#include <QWidget>
#include "ui_TopWindow.h"

class TopWindow : public QWidget
{
	Q_OBJECT

public:
	~TopWindow();

	static TopWindow* GetInstance()
	{
		if (m_tWindow == NULL)
		{
			m_tWindow = new TopWindow();
		}
		return m_tWindow;
	}

	QWidget* GetWidgetContainer();

private:
	TopWindow();
	void InitializeUI();

private slots:
	void slot_OnBtnCloseClicked();
	void slot_OnBtnMinClicked();

private:
	Ui::TopWindow ui;

	static TopWindow * m_tWindow;
};
