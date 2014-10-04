#ifndef TEST_QTEXTCODEC_DISPLAYCHINESE_H
#define TEST_QTEXTCODEC_DISPLAYCHINESE_H

#include <QtWidgets/QMainWindow>
#include "ui_test_qtextcodec_displaychinese.h"

class Test_QTextCodec_DisplayChinese : public QMainWindow
{
	Q_OBJECT

public:
	Test_QTextCodec_DisplayChinese(QWidget *parent = 0);
	~Test_QTextCodec_DisplayChinese();

private:
	Ui::Test_QTextCodec_DisplayChineseClass ui;
};

#endif // TEST_QTEXTCODEC_DISPLAYCHINESE_H
