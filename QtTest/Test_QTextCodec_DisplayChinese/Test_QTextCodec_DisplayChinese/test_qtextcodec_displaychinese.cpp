#include "test_qtextcodec_displaychinese.h"
#include <QString>

Test_QTextCodec_DisplayChinese::Test_QTextCodec_DisplayChinese(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	ui.pushButton01->setText(tr("New Dialog"));
	
}

Test_QTextCodec_DisplayChinese::~Test_QTextCodec_DisplayChinese()
{

}
