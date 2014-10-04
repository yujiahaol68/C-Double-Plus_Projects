#include "vs_run_program.h"
#include <QtWidgets/QApplication>
#include <QString>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	VS_Run_Program w;
	w.show();
	return a.exec();
}
