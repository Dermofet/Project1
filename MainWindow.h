#pragma once
#include <QtCore>
#include <QtWidgets>
#include "ui_MainWindow.h"
#include "EditWidget.h"
#include "ListWidget.h"

namespace ui {
	namespace MainWindowConstants
	{
		static const char* const warningTitle = "Warning!";
		static const char* const warningMessage = "Please, choose the item.";

		static const char* const addMapLabelText = "New dictionary:";
		static const char* const deleteAgreeLabelText = "Are you sure?";
		static const char* const renameMapLabelText = "Rename dictionary:";

		static const char* const addWordLabelText = "New word:";
		static const char* const renameWordLabelText = "Rename word:";
	};

	using SmallList = QList<QString>;
	using BigList = QList<SmallList>;

	class MainWindow : public QMainWindow
	{
		Q_OBJECT
	private:
		Ui::MainWindow m_MainWindow;
		ui::EditWidget* editDialog;
		ui::ListWidget* listMap, * listWord;
		BigList list;
	public:
		MainWindow();
		~MainWindow();

	public slots:
		void addMapItem(ui::EditWidget::BtnStatus, QString);
		void deleteMapItem(ui::EditWidget::BtnStatus, QString);
		void renameMapItem(ui::EditWidget::BtnStatus, QString);
		void addWordItem(ui::EditWidget::BtnStatus, QString);
		void deleteWordItem(ui::EditWidget::BtnStatus, QString);
		void renameWordItem(ui::EditWidget::BtnStatus, QString);

		void createAddMapDialog();
		void createDeleteMapDialog();
		void createRenameMapDialog();
		void createAddWordDialog();
		void createDeleteWordDialog();
		void createRenameWordDialog();

		void setCurrentIndexWord(int);

		//void printPush();
	};
}