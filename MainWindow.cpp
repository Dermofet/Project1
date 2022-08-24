#include "mainwindow.h"

// MainWindow functions
ui::MainWindow::MainWindow()
{
	m_MainWindow.setupUi(this);
	editDialog = nullptr;
	listMap = new ListWidget();
	m_MainWindow.leftVerLayout->insertWidget(1, listMap);
	listWord = new ListWidget();
	m_MainWindow.rightVerLayout->insertWidget(1, listWord);

	connect(listMap, &ListWidget::currentChanged, this, &MainWindow::setCurrentIndexWord);
	connect(m_MainWindow.addMapBtn, &QCommandLinkButton::clicked, this, &MainWindow::createAddMapDialog);
	connect(m_MainWindow.addWordBtn, &QCommandLinkButton::clicked, this, &MainWindow::createAddWordDialog);
	connect(m_MainWindow.deleteMapBtn, &QPushButton::clicked, this, &MainWindow::createDeleteMapDialog);
	connect(m_MainWindow.deleteWordBtn, &QPushButton::clicked, this, &MainWindow::createDeleteWordDialog);
	connect(m_MainWindow.renameMapBtn, &QPushButton::clicked, this, &MainWindow::createRenameMapDialog);
	connect(m_MainWindow.renameWordBtn, &QPushButton::clicked, this, &MainWindow::createRenameWordDialog);
}
ui::MainWindow::~MainWindow()
{
	listMap->deleteAll();
	delete(listMap);
	listWord->deleteAll();
	delete(listWord);
}

void ui::MainWindow::addMapItem(ui::EditWidget::BtnStatus status, QString text)
{
	if (status == ui::EditWidget::BtnStatus::Accepted)
	{
		ListItem* item = new ListItem();
		item->setText(text);
		connect(item->getDeleteBtn(), &QToolButton::clicked, this, &MainWindow::createDeleteMapDialog);
		connect(item->getRenameBtn(), &QToolButton::clicked, this, &MainWindow::createRenameMapDialog);
		//connect(item->getDeleteBtn(), &QToolButton::clicked, this, &MainWindow::printPush);
		//connect(item->getRenameBtn(), &QToolButton::clicked, this, &MainWindow::printPush);

		listMap->add(item);

		list.insert(list.count(), SmallList());
	}
	delete(editDialog);
}
void ui::MainWindow::deleteMapItem(ui::EditWidget::BtnStatus status, QString text)
{
	if (status == ui::EditWidget::BtnStatus::Accepted)
	{
		if (listMap->currentIndex() != -1)
		{
			listWord->deleteAll();
			list.removeAt(listMap->currentIndex());
			delete(listMap->takeAt(listMap->currentIndex()));
		}
		else QMessageBox::information(
			nullptr,
			MainWindowConstants::warningTitle,
			MainWindowConstants::warningMessage,
			QMessageBox::StandardButton::Ok);
	}
	delete(editDialog);
}
void ui::MainWindow::renameMapItem(ui::EditWidget::BtnStatus status, QString text)
{
	if (status == ui::EditWidget::BtnStatus::Accepted)
	{
		if (listMap->currentIndex() != -1)
		{
			int i = listMap->currentIndex();
			ListItem* item = listMap->takeAt(i);
			item->setText(text);
			listMap->insert(i, item);
		}
		else QMessageBox::information(
			nullptr,
			MainWindowConstants::warningTitle,
			MainWindowConstants::warningMessage,
			QMessageBox::StandardButton::Ok);
	}
	delete(editDialog);
}
void ui::MainWindow::addWordItem(ui::EditWidget::BtnStatus status, QString text)
{
	if (status == ui::EditWidget::BtnStatus::Accepted)
	{
		if (listMap->currentIndex() != -1)
		{
			ListItem* item = new ListItem();
			item->setText(text);
			connect(item->getDeleteBtn(), &QToolButton::clicked, this, &MainWindow::createDeleteWordDialog);
			connect(item->getRenameBtn(), &QToolButton::clicked, this, &MainWindow::createRenameWordDialog);
			//connect(item->getDeleteBtn(), &QToolButton::clicked, this, &MainWindow::printPush);
			//connect(item->getRenameBtn(), &QToolButton::clicked, this, &MainWindow::printPush);

			listWord->add(item);

			int i = listMap->currentIndex();
			list[i].insert(list[i].count(), text);
		}
		else QMessageBox::information(
			nullptr,
			MainWindowConstants::warningTitle,
			MainWindowConstants::warningMessage,
			QMessageBox::StandardButton::Ok);
	}
	delete(editDialog);
}
void ui::MainWindow::deleteWordItem(ui::EditWidget::BtnStatus status, QString text)
{
	if (status == ui::EditWidget::BtnStatus::Accepted)
	{
		if (listWord->currentIndex() != -1)
		{
			int iWord = listWord->currentIndex();
			delete(listWord->takeAt(iWord));

			int iMap = listMap->currentIndex();
			list[iMap].removeAt(iWord);
		}
		else QMessageBox::information(
			nullptr,
			MainWindowConstants::warningTitle,
			MainWindowConstants::warningMessage,
			QMessageBox::StandardButton::Ok);
	}
	delete(editDialog);
}
void ui::MainWindow::renameWordItem(ui::EditWidget::BtnStatus status, QString text)
{
	if (status == ui::EditWidget::BtnStatus::Accepted)
	{
		if (listWord->currentIndex() != -1)
		{
			int i = listWord->currentIndex();
			ListItem* item = listWord->takeAt(i);
			item->setText(text);
			listWord->insert(i, item);

			list[listMap->currentIndex()][i] = text;
		}
		else QMessageBox::information(
			nullptr,
			MainWindowConstants::warningTitle,
			MainWindowConstants::warningMessage,
			QMessageBox::StandardButton::Ok);
	}
	delete(editDialog);
}

void ui::MainWindow::createAddMapDialog()
{
	editDialog = new EditWidget();
	editDialog->setLabelText(MainWindowConstants::addMapLabelText);
	editDialog->show();
	connect(editDialog, &ui::EditWidget::statusChanged, this, &MainWindow::addMapItem);
}
void ui::MainWindow::createDeleteMapDialog()
{
	editDialog = new EditWidget(nullptr, true);
	editDialog->setLabelText(MainWindowConstants::deleteAgreeLabelText);
	editDialog->show();
	connect(editDialog, &ui::EditWidget::statusChanged, this, &MainWindow::deleteMapItem);
}
void ui::MainWindow::createRenameMapDialog()
{
	editDialog = new EditWidget();
	editDialog->setLabelText(MainWindowConstants::renameMapLabelText);
	editDialog->show();
	connect(editDialog, &ui::EditWidget::statusChanged, this, &MainWindow::renameMapItem);
}
void ui::MainWindow::createAddWordDialog()
{
	editDialog = new EditWidget();
	editDialog->setLabelText(MainWindowConstants::addWordLabelText);
	editDialog->show();
	connect(editDialog, &ui::EditWidget::statusChanged, this, &MainWindow::addWordItem);
}
void ui::MainWindow::createDeleteWordDialog()
{
	editDialog = new EditWidget(nullptr, true);
	editDialog->setLabelText(MainWindowConstants::deleteAgreeLabelText);
	editDialog->show();
	connect(editDialog, &ui::EditWidget::statusChanged, this, &MainWindow::deleteWordItem);
}
void ui::MainWindow::createRenameWordDialog()
{
	editDialog = new EditWidget();
	editDialog->setLabelText(MainWindowConstants::renameWordLabelText);
	editDialog->show();
	connect(editDialog, &ui::EditWidget::statusChanged, this, &MainWindow::renameWordItem);
}

void ui::MainWindow::setCurrentIndexWord(int index)
{
	listWord->deleteAll();
	for (int i = 0; i < list[index].count(); i++)
	{
		ListItem* item = new ListItem();
		item->setText(list[index][i]);
		listWord->add(item);
	}
}

//void ui::MainWindow::printPush()
//{
//	qDebug() << "Push!";
//}
