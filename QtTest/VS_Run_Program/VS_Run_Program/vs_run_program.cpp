#include "vs_run_program.h"
#include <QString>
#include <QMessageBox>
#include <QProcess>

VS_Run_Program::VS_Run_Program(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
}

VS_Run_Program::~VS_Run_Program()
{

}

void VS_Run_Program::OkBtnClicked()
{
	QString text1 = ui.lineEdit->text();
	if ( text1.isNull() )
	{
		QMessageBox::warning(this,tr("Warning!"),tr("Please input the Program name !"),QMessageBox::Ok);
	} 
	else
	{
		QProcess *myProcess = new QProcess;
		myProcess->start(text1.trimmed());
		if( myProcess->Running )
		{
			ui.lineEdit->clear();
			this->close();
		}
		else if( myProcess->NotRunning|myProcess->FailedToStart)
		{
			QMessageBox::warning(this,tr("Warning!"),tr("Please input the Program name which is right !"),QMessageBox::Ok);
			ui.lineEdit->clear();
		}
	}
	

}
