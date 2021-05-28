#pragma once

#include <QWidget>
#include "ui_ReminderWidget.h"

class ReminderWidget : public QWidget
{
	Q_OBJECT

public:
	ReminderWidget(QWidget *parent);
	~ReminderWidget();

	void SetLabelText(QString text);

private:
	void InitializeUI();

private slots:
	void slot_OnBtnOKClicked();

private:
	Ui::ReminderWidget ui;
	QWidget * parent;
};
