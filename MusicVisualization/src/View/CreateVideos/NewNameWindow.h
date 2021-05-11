#pragma once

#include <QWidget>
#include "ReminderWidget.h"
#include "ui_NewNameWindow.h"

class NewNameWindow : public QWidget
{
	Q_OBJECT

public:
	NewNameWindow(QWidget *parent = Q_NULLPTR);
	~NewNameWindow();

	static NewNameWindow * GetInstance()
	{
		if (m_nnWindow == NULL)
			m_nnWindow = new NewNameWindow();
		return m_nnWindow;
	}

private:
	void InitializeUI();

private slots:
	void slot_OnBtnOKClicked();
	void slot_OnBtnCancelClicked();

private:
	Ui::NewNameWindow ui;
	ReminderWidget * rWidget;

	static NewNameWindow * m_nnWindow;
};
