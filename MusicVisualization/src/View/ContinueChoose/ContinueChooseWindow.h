#pragma once

#include <QWidget>
#include "ui_ContinueChooseWindow.h"

class ContinueChooseWindow : public QWidget
{
	Q_OBJECT

public:
	ContinueChooseWindow(QWidget *parent = Q_NULLPTR);
	~ContinueChooseWindow();

	static ContinueChooseWindow* GetInstance()
	{
		if (m_ccWindow == NULL)
		{
			m_ccWindow = new ContinueChooseWindow();
		}
		return m_ccWindow;
	}

public:
	void InitializeUI();
	void OnBtnItemSelected(int row);

private slots:
	void slot_OnBtnBackClicked();

private:
	Ui::ContinueChooseWindow ui;

	static ContinueChooseWindow* m_ccWindow;
};
