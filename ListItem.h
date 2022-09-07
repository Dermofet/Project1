#pragma once
#include <QtWidgets>
#include "ui_ListItem.h"

namespace ui {
	class ListItem : public QWidget
	{
		Q_OBJECT
	private:
		Ui::ListItem_Form m_ListItem;
	public:
		explicit ListItem(QWidget* parent = nullptr);
		~ListItem() {}

		QToolButton* getDeleteBtn();
		QToolButton* getRenameBtn();

		void setText(QString);
		inline QString text();
		void mousePressEvent(QMouseEvent*);

		void sendSignal();
	signals:
		void selected(ListItem*);
	};
}