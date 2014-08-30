#ifndef VS_QPUSHBUTTON_TEST_H
#define VS_QPUSHBUTTON_TEST_H

#include <QtWidgets/QMainWindow>
#include "ui_vs_qpushbutton_test.h"

class VS_QPushButton_Test : public QMainWindow
{
	Q_OBJECT

public:
	VS_QPushButton_Test(QWidget *parent = 0);
	~VS_QPushButton_Test();

private slots:
	void PushBtn01Clicked();

private:
	Ui::VS_QPushButton_TestClass ui;
};

#endif // VS_QPUSHBUTTON_TEST_H
