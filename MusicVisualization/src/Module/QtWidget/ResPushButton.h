#pragma once
#include <QPushButton>
#include <QEvent>
#include <QMouseEvent>
#include <QPixmap>
#include <QIcon>

class ResPushButton : public QPushButton
{
	Q_OBJECT

public:
	explicit ResPushButton(QWidget *parent = nullptr);
	~ResPushButton();
	void InitialStyleSheet(QPixmap srcNormal);
	void UpdateEnabled();

protected:
	bool event(QEvent *e) override;

private:
	enum StateType 
	{ 
		Normal,
		Hover,
		Pressed,
		Disabled 
	};
	void setButtonState(StateType state, bool bReturnIfSame = true);

private:
	StateType m_state;
	bool m_bInitStyleSheet;
	double m_scaleHover;
	double m_scalePressed;
	QPixmap m_srcNormal;
	QPixmap m_srcHover;
	QPixmap m_srcPressed;
	QPixmap m_srcDisabled;
	QRect m_rectNormal;
	QRect m_rectHover;
	QRect m_rectPressed;

	QIcon m_iconNormal;
	QIcon m_iconHover;
	QIcon m_iconPressed;
	QIcon m_iconDisabled;
};
