#include "ListItem.h"

ui::ListItem::ListItem(QWidget* parent) : QFrame(parent)
{
	m_ListItem.setupUi(this);
	connect(m_ListItem.deleteBtn, &QToolButton::clicked, this, &ListItem::sendSignal);
	connect(m_ListItem.renameBtn, &QToolButton::clicked, this, &ListItem::sendSignal);
}

QToolButton* ui::ListItem::getDeleteBtn()
{
	return m_ListItem.deleteBtn;
}
QToolButton* ui::ListItem::getRenameBtn()
{
	return m_ListItem.renameBtn;
}

void ui::ListItem::setText(QString text)
{
	m_ListItem.label->setText(text);
}
inline QString ui::ListItem::text()
{
	return m_ListItem.label->text();
}
void ui::ListItem::mousePressEvent(QMouseEvent* event)
{
	emit selected(this);
}

void ui::ListItem::sendSignal()
{
	emit selected(this);
}
