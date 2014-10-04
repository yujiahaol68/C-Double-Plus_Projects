#include "filemanager.h"
#include <QMessageBox>
#include <QFileDialog>
#include <QString>
#include <QStringList>
#include <QFileInfoList>
#include <QFileInfo>
#include <QDebug>

FileManager::FileManager(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
}

FileManager::~FileManager()
{

}

void FileManager::OpenFiles()
{
	QStringList path = QFileDialog::getOpenFileNames(this,tr("Open File"),".",tr("Any Files(*.*)"));
	if(!path.isEmpty()) {
		QFile file(path[0]);
		if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
			QMessageBox::warning(this, tr("Read File"),tr("Cannot open file:\n%1").arg(path[0])+tr("......."));
			return;
		}
		file.close();
	} else {
		QMessageBox::warning(this, tr("Path"),tr("You did not select any file."));
	}
	unsigned int i = path.indexOf(NULL);
	qDebug()<<i;
	
}
