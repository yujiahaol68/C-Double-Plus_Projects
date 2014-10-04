#include "test_qtextcodec_displaychinese.h"
#include <QtWidgets/QApplication>
#include <QDialog>


int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	Test_QTextCodec_DisplayChinese w;
	w.show();
	return a.exec();
}
