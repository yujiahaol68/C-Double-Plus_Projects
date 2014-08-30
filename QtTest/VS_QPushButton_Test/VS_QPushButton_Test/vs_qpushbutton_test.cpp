#include "vs_qpushbutton_test.h"
#include <QMessageBox>

VS_QPushButton_Test::VS_QPushButton_Test(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
}

VS_QPushButton_Test::~VS_QPushButton_Test()
{

}

void VS_QPushButton_Test::PushBtn01Clicked()
{
	QMessageBox::about(this,"Notice","Clicked");
}
