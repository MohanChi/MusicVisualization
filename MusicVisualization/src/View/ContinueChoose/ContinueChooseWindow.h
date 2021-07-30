#pragma once

#include <QWidget>
#include "ui_ContinueChooseWindow.h"
#include "../CreateVideos/ReminderWidget.h"

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
	void SetInitializeItem();
	void OnBtnItemSelected(int row);

private slots:
	void slot_OnBtnBackClicked();
	void slot_OnBtnOKClicked();
	void slot_OnBtnDeleteClicked();

private:
	Ui::ContinueChooseWindow ui;
	int totalSize;
	std::string chooseFilename;
	ReminderWidget * rWidget;

	static ContinueChooseWindow* m_ccWindow;
};