#include "vs_qpushbutton_test.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	VS_QPushButton_Test w;
	w.show();
	return a.exec();
}
