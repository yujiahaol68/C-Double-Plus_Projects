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

public slots:
	void OpenFiles(); 

private:
	Ui::FileManagerClass ui;
};

#endif // FILEMANAGER_H
