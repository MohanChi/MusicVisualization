#pragma once

#include <QWidget>
#include "ui_CreateVideoWindow.h"

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

private slots:
	void slot_OnBtnBackClicked();

private:
	Ui::CreateVideoWindow ui;

	static CreateVideoWindow* m_cvWindow;
};
