#include "EditWidget.h"

// EditWidget functions
ui::EditWidget::EditWidget(QWidget* parent, bool withoutLineEdit)
	: QWidget(parent)
{
	m_Form.setupUi(this);
	m_Status = ui::EditWidget::BtnStatus::None;

	if (withoutLineEdit) {
		delete(m_Form.lineEdit);
		m_Form.lineEdit = nullptr;
	}

	connect(m_Form.btnAccept, &QPushButton::clicked, this, &ui::EditWidget::setAcceptedStatus);
	connect(m_Form.btnCancel, &QPushButton::clicked, this, &ui::EditWidget::setDeclinedStatus);
	connect(m_Form.btnAccept, &QPushButton::clicked, this, &ui::EditWidget::close);
	connect(m_Form.btnCancel, &QPushButton::clicked, this, &ui::EditWidget::close);
}
QString ui::EditWidget::getInputText() const
{
	if (m_Form.lineEdit) return m_Form.lineEdit->text();
	else return QString();
}
void ui::EditWidget::setLabelText(QString text)
{
	m_Form.label->setText(text);
}
void ui::EditWidget::setAcceptedStatus()
{
	m_Status = ui::EditWidget::BtnStatus::Accepted;
	sendSignal();
}
void ui::EditWidget::setDeclinedStatus()
{
	m_Status = ui::EditWidget::BtnStatus::Declined;
	sendSignal();
}
void ui::EditWidget::sendSignal()
{
	emit statusChanged(m_Status, getInputText());
}