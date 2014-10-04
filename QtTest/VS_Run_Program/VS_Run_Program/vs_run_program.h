#ifndef VS_RUN_PROGRAM_H
#define VS_RUN_PROGRAM_H

#include <QtWidgets/QMainWindow>
#include "ui_vs_run_program.h"

class VS_Run_Program : public QMainWindow
{
	Q_OBJECT

public:
	VS_Run_Program(QWidget *parent = 0);
	~VS_Run_Program();

public slots:
	void OkBtnClicked();

private:
	Ui::VS_Run_ProgramClass ui;
};

#endif // VS_RUN_PROGRAM_H
