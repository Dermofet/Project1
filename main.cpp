#include "MainWindow.h"
#include "ListItem.h"
#include "ListWidget.h"

int main(int argc, char* argv[])
{
	QApplication app(argc, argv);
	ui::MainWindow mw;

	mw.show();
	return app.exec();
}