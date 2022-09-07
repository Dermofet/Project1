#pragma once

#include <QFrame>
#include "ListItem.h"

namespace ui {
	class ListWidget : public QFrame
	{
		Q_OBJECT
	private:
		QVBoxLayout* verLayout;
		int curIndex;
		//QPalette* selectedPalette, * unselectedPalette;
	public:
		explicit ListWidget(QWidget* parent = nullptr);
		~ListWidget() {}

		void add(ListItem*);
		void insert(int, ListItem*);
		ListItem* takeAt(int);
		void removeItem(ListItem*);
		int currentIndex();
		void mousePressEvent(QMouseEvent*);
		void deleteAll();
		void clear();

	public slots:
		void setCurIndex(ListItem*);

	signals:
		void currentChanged(int);
	};
}
