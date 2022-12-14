#include "ListWidget.h"

ui::ListWidget::ListWidget(QWidget *parent)
	: QFrame(parent)
{
	verLayout = new QVBoxLayout(this);
	curIndex = -1;
}

void ui::ListWidget::add(ListItem* item)
{
	verLayout->addWidget(item);
	connect(item, &ListItem::selected, this, &ListWidget::setCurIndex);
}
void ui::ListWidget::insert(int index, ListItem* item)
{
	verLayout->insertWidget(index, item);
	connect(item, &ListItem::selected, this, &ListWidget::setCurIndex);
}
ui::ListItem* ui::ListWidget::takeAt(int i)
{
	curIndex = -1;
	return qobject_cast<ListItem*>(verLayout->takeAt(i)->widget());
}
void ui::ListWidget::removeItem(ListItem* item)
{
	verLayout->removeWidget(item);
}
int ui::ListWidget::currentIndex()
{
	return curIndex;
}
void ui::ListWidget::mousePressEvent(QMouseEvent* event)
{
	if (curIndex != -1)
	{
		verLayout->itemAt(curIndex)->widget()->setPalette(QPalette(QColor(255, 255, 255), QColor(255, 255, 255)));
	}
	curIndex = -1;
}
void ui::ListWidget::deleteAll()
{
	while (verLayout->count() != 0)
	{
		delete(verLayout->takeAt(0)->widget());
	}
}
void ui::ListWidget::clear()
{
	for (int i = 0; i < verLayout->count(); i++)
	{
		verLayout->removeItem(verLayout->itemAt(i));
	}
}
void ui::ListWidget::setCurIndex(ListItem* item)
{
	if (curIndex != -1) 
	{
		verLayout->itemAt(curIndex)->widget()->setPalette(QPalette(QColor(255, 255, 255), QColor(255, 255, 255)));
	}
	curIndex = verLayout->indexOf(item);
	verLayout->itemAt(curIndex)->widget()->setPalette(QPalette(QColor(49, 120, 167), QColor(60, 229, 255)));
	emit currentChanged(curIndex);
}