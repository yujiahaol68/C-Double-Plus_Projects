#ifndef FILEMANAGER_H
#define FILEMANAGER_H

#include <QtWidgets/QMainWindow>
#include "ui_filemanager.h"

class FileManager : public QMainWindow
{
	Q_OBJECT

public:
	FileManager(QWidget *parent = 0);
	~FileManager();
	void preloadingTableWidget();

public slots:
	void OpenFiles(); 
	void Load_Self_Defined_Rule();
	void StartToRevise();

private:
	Ui::FileManagerClass ui;
};

#endif // FILEMANAGER_H
