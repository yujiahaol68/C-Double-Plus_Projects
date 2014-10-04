/********************************************************************************
** Form generated from reading UI file 'filemanager.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILEMANAGER_H
#define UI_FILEMANAGER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FileManagerClass
{
public:
    QWidget *centralWidget;
    QPushButton *openButton;
    QTableView *tableView;
    QScrollBar *verticalScrollBar;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *FileManagerClass)
    {
        if (FileManagerClass->objectName().isEmpty())
            FileManagerClass->setObjectName(QStringLiteral("FileManagerClass"));
        FileManagerClass->resize(600, 400);
        centralWidget = new QWidget(FileManagerClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        openButton = new QPushButton(centralWidget);
        openButton->setObjectName(QStringLiteral("openButton"));
        openButton->setGeometry(QRect(460, 40, 91, 23));
        tableView = new QTableView(centralWidget);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(0, 0, 351, 361));
        verticalScrollBar = new QScrollBar(centralWidget);
        verticalScrollBar->setObjectName(QStringLiteral("verticalScrollBar"));
        verticalScrollBar->setGeometry(QRect(350, 0, 16, 341));
        verticalScrollBar->setOrientation(Qt::Vertical);
        FileManagerClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(FileManagerClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 23));
        FileManagerClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(FileManagerClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        FileManagerClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(FileManagerClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        FileManagerClass->setStatusBar(statusBar);

        retranslateUi(FileManagerClass);
        QObject::connect(openButton, SIGNAL(clicked()), FileManagerClass, SLOT(OpenFiles()));

        QMetaObject::connectSlotsByName(FileManagerClass);
    } // setupUi

    void retranslateUi(QMainWindow *FileManagerClass)
    {
        FileManagerClass->setWindowTitle(QApplication::translate("FileManagerClass", "FileManager", 0));
        openButton->setText(QApplication::translate("FileManagerClass", "\346\211\271\351\207\217\346\211\223\345\274\200\346\226\207\344\273\266", 0));
    } // retranslateUi

};

namespace Ui {
    class FileManagerClass: public Ui_FileManagerClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILEMANAGER_H
