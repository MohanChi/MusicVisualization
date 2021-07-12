#include "ResPushButton.h"

ResPushButton::ResPushButton(QWidget *parent)
	: QPushButton(parent)
{
	m_state = StateType::Disabled;
	m_bInitStyleSheet = false;
	m_scaleHover = 1.05;
	m_scalePressed = 1.10;
}

ResPushButton::~ResPushButton()
{

}

void ResPushButton::InitialStyleSheet(QPixmap srcNormal)
{
	this->setText("");

	m_rectNormal = this->geometry();
	int x = m_rectNormal.x();
	int y = m_rectNormal.y();
	int width = m_rectNormal.width();
	int height = m_rectNormal.height();

	int widthHover = width * m_scaleHover;
	int heightHover = height * m_scaleHover;
	int xHover = x - (widthHover - width) / 2.0;
	int yHover = y - (heightHover - height) / 2.0;
	m_rectHover = QRect(xHover, yHover, widthHover, heightHover);

	int widthPressed = width * m_scalePressed;
	int heightPressed = height * m_scalePressed;
	int xPressed = x - (widthPressed - width) / 2.0;
	int yPressed = y - (heightPressed - height) / 2.0;
	m_rectPressed = QRect(xPressed, yPressed, widthPressed, heightPressed);

	this->setFocusPolicy(Qt::FocusPolicy::NoFocus);
	this->setStyleSheet("AutoPushButton{background-color:rgba(255,255,255,0);}");
	m_srcNormal = srcNormal.scaled(m_rectNormal.size(), Qt::KeepAspectRatioByExpanding, Qt::SmoothTransformation);
	m_srcHover = srcNormal.scaled(m_rectHover.size(), Qt::KeepAspectRatioByExpanding, Qt::SmoothTransformation);
	m_srcPressed = srcNormal.scaled(m_rectPressed.size(), Qt::KeepAspectRatioByExpanding, Qt::SmoothTransformation);
	m_iconNormal = QIcon(m_srcNormal);
	m_iconHover = QIcon(m_srcHover);
	m_iconPressed = QIcon(m_srcPressed);
	QIcon iconTempDisabled;
	iconTempDisabled.addPixmap(m_srcDisabled, QIcon::Mode::Disabled, QIcon::State::On);
	m_iconDisabled = iconTempDisabled;

	m_bInitStyleSheet = true;
	this->setStyleSheet("background-color: rgba(255, 255, 255, 0);");
	UpdateEnabled();
}

void ResPushButton::UpdateEnabled()
{
	if (!m_bInitStyleSheet) return;
	StateType state = isEnabled() ? StateType::Normal : StateType::Disabled;
	setButtonState(state, false);
}


bool ResPushButton::event(QEvent * e)
{
	if (m_bInitStyleSheet && m_state != StateType::Disabled)
	{
		auto t = e->type();
		if (t == QEvent::Type::MouseButtonPress)
		{
			QMouseEvent* eMouse = static_cast<QMouseEvent*>(e);
			if (eMouse->button() == Qt::MouseButton::LeftButton)
				setButtonState(StateType::Pressed);
		}
		else if (t == QEvent::Type::HoverEnter)
		{
			setButtonState(StateType::Hover);
		}
		else if (t == QEvent::Type::HoverLeave)
		{
			setButtonState(StateType::Normal);
		}
		else if (t == QEvent::Type::MouseMove)
		{
			QWidget* local = (QWidget*)this->parent();
			local = (local == nullptr) ? this : local;
			bool bInside = this->geometry().contains(local->mapFromGlobal(QCursor::pos()));
			if (bInside)
			{
				setButtonState(StateType::Pressed);
			}
			else
			{
				setButtonState(StateType::Normal);
			}
		}
		else if (t == QEvent::Type::MouseButtonRelease)
		{
			QMouseEvent* eMouse = static_cast<QMouseEvent*>(e);
			if (eMouse->button() == Qt::MouseButton::LeftButton)
				setButtonState(StateType::Normal);
		}
	}

	if (e->type() == QEvent::Type::EnabledChange)
	{
		UpdateEnabled();
	}
	QPushButton::event(e);
	return false;
}

void ResPushButton::setButtonState(StateType state, bool bReturnIfSame)
{
	if (bReturnIfSame && m_state == state)
	{
		return;
	}

	m_state = state;
	switch (state)
	{
	case StateType::Normal:
		this->setGeometry(m_rectNormal);
		this->setIconSize(m_rectNormal.size());
		this->setIcon(m_iconNormal);
		break;
	case StateType::Hover:
		this->setGeometry(m_rectHover);
		this->setIconSize(m_rectHover.size());
		this->setIcon(m_iconHover);
		break;
	case StateType::Pressed:
		this->setGeometry(m_rectPressed);
		this->setIconSize(m_rectPressed.size());
		this->setIcon(m_iconPressed);
		break;
	case StateType::Disabled:
		this->setGeometry(m_rectNormal);
		this->setIconSize(m_rectNormal.size());
		this->setIcon(m_iconDisabled);
		break;
	default:
		break;
	}
}