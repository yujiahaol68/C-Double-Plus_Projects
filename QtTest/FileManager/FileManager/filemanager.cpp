#include "filemanager.h"
#include <QMessageBox>
#include <QFileDialog>
#include <QString>
#include <QStringList>
#include <QFile>
#include <QFileInfoList>
#include <QFileInfo>
#include <QDebug>
#include <QTableWidget>
#include <QDir>
#include <QDateTime>
#include <QHeaderView>
#include <QComboBox>

FileManager::FileManager(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	preloadingTableWidget();
	
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
		return;
	}
	unsigned int i = path.count();
	qDebug()<<i;
	QList<QFileInfo> FileInfos;
	int k;
	for(k=0;k<i;k++)
	{
		FileInfos.append(path[k]);
	}
	ui.tableWidget->setRowCount(i);	
	for (int j = 0; j < i; j++)
	{
		unsigned int FileSize = FileInfos[j].size();
		ui.tableWidget->setItem(j, 0, new QTableWidgetItem(FileInfos[j].fileName()));   
		ui.tableWidget->setItem(j, 1, new QTableWidgetItem(FileInfos[j].suffix()));
		ui.tableWidget->setItem(j, 2, new QTableWidgetItem(FileInfos[j].lastModified().toString("yyyy-MM-dd hh:mm:ss")));
		ui.tableWidget->setItem(j, 3, new QTableWidgetItem(QString::number(FileSize)));                                         //���ļ���Ϣ�������б�
		
	}
	
}

void FileManager::preloadingTableWidget()
{
	ui.tableWidget->setColumnCount(4);
	ui.tableWidget->setRowCount(10);
	QStringList headers;
	headers<<tr("FileNames")<<tr("Types")<<tr("LastDate")<<tr("Size (B)");      //��������
	ui.tableWidget->setHorizontalHeaderLabels(headers);    //���ú�������
	ui.tableWidget->setSortingEnabled(true);              //��������
	ui.tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);      //���õ�Ԫ�񲻿ɱ༭
	ui.tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);          //1                 
	ui.tableWidget->verticalHeader()->setSectionResizeMode(QHeaderView::Stretch);            //2   1��2ʹ�ñ���������Ӧ�߿����ʾ��������
	                                                                    
}

void FileManager::Load_Self_Defined_Rule()
{

}

void FileManager::StartToRevise()
{
	int i  =  ui.comboBox->currentIndex();
	if (i = 1)
	{


	} 
	else if (i = 2)
	{


	}
	else if (i = 3)
	{


	} 
	else if (i = 4)
	{


	}
}
