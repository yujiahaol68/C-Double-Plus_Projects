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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FileManagerClass
{
public:
    QAction *actionOpen_Files;
    QAction *actionRules;
    QAction *actionAbout_us;
    QAction *actionOnly_suffix;
    QAction *actionFiles_Name_and_Suffix;
    QAction *actionSimple_Mode_Normal;
    QAction *actionFolder_into_Mode;
    QAction *actionFolder_into_ZIP_Mode;
    QAction *actionText_Files_TXT_doc_docx;
    QAction *actionMusic_Files;
    QAction *actionVideo_Files;
    QAction *actionAbout_us_2;
    QWidget *centralWidget;
    QPushButton *ReviseButton;
    QTableWidget *tableWidget;
    QGroupBox *FilesUnifiedFirstName;
    QLineEdit *lineEdit;
    QGroupBox *NewSuffix;
    QRadioButton *StilllOldSuffixRadio;
    QRadioButton *EditSuffixRadio;
    QLineEdit *NewSuffixLine;
    QLabel *label;
    QRadioButton *radioButton_2;
    QComboBox *comboBox_2;
    QGroupBox *NumberLastname;
    QComboBox *comboBox;
    QRadioButton *radioButton;
    QRadioButton *radioButton_4;
    QLabel *label_2;
    QGroupBox *FilterSuffix;
    QRadioButton *NoFilterRadio;
    QRadioButton *TextSuffixRadio;
    QRadioButton *MusicSuffixRadio;
    QRadioButton *VideoSuffixRadio;
    QRadioButton *SelfdefinedSuffixRadio;
    QLabel *label_3;
    QLineEdit *filterSuffixLine;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menu_3;
    QMenu *menu_4;
    QMenu *menu_5;
    QToolBar *mainToolBar;

    void setupUi(QMainWindow *FileManagerClass)
    {
        if (FileManagerClass->objectName().isEmpty())
            FileManagerClass->setObjectName(QStringLiteral("FileManagerClass"));
        FileManagerClass->resize(958, 558);
        actionOpen_Files = new QAction(FileManagerClass);
        actionOpen_Files->setObjectName(QStringLiteral("actionOpen_Files"));
        actionRules = new QAction(FileManagerClass);
        actionRules->setObjectName(QStringLiteral("actionRules"));
        actionAbout_us = new QAction(FileManagerClass);
        actionAbout_us->setObjectName(QStringLiteral("actionAbout_us"));
        actionOnly_suffix = new QAction(FileManagerClass);
        actionOnly_suffix->setObjectName(QStringLiteral("actionOnly_suffix"));
        actionFiles_Name_and_Suffix = new QAction(FileManagerClass);
        actionFiles_Name_and_Suffix->setObjectName(QStringLiteral("actionFiles_Name_and_Suffix"));
        actionSimple_Mode_Normal = new QAction(FileManagerClass);
        actionSimple_Mode_Normal->setObjectName(QStringLiteral("actionSimple_Mode_Normal"));
        actionFolder_into_Mode = new QAction(FileManagerClass);
        actionFolder_into_Mode->setObjectName(QStringLiteral("actionFolder_into_Mode"));
        actionFolder_into_ZIP_Mode = new QAction(FileManagerClass);
        actionFolder_into_ZIP_Mode->setObjectName(QStringLiteral("actionFolder_into_ZIP_Mode"));
        actionText_Files_TXT_doc_docx = new QAction(FileManagerClass);
        actionText_Files_TXT_doc_docx->setObjectName(QStringLiteral("actionText_Files_TXT_doc_docx"));
        actionMusic_Files = new QAction(FileManagerClass);
        actionMusic_Files->setObjectName(QStringLiteral("actionMusic_Files"));
        actionVideo_Files = new QAction(FileManagerClass);
        actionVideo_Files->setObjectName(QStringLiteral("actionVideo_Files"));
        actionAbout_us_2 = new QAction(FileManagerClass);
        actionAbout_us_2->setObjectName(QStringLiteral("actionAbout_us_2"));
        centralWidget = new QWidget(FileManagerClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        ReviseButton = new QPushButton(centralWidget);
        ReviseButton->setObjectName(QStringLiteral("ReviseButton"));
        ReviseButton->setGeometry(QRect(850, 460, 75, 23));
        tableWidget = new QTableWidget(centralWidget);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(0, 0, 491, 511));
        FilesUnifiedFirstName = new QGroupBox(centralWidget);
        FilesUnifiedFirstName->setObjectName(QStringLiteral("FilesUnifiedFirstName"));
        FilesUnifiedFirstName->setGeometry(QRect(520, 20, 191, 61));
        lineEdit = new QLineEdit(FilesUnifiedFirstName);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(10, 20, 161, 20));
        NewSuffix = new QGroupBox(centralWidget);
        NewSuffix->setObjectName(QStringLiteral("NewSuffix"));
        NewSuffix->setGeometry(QRect(700, 110, 141, 171));
        StilllOldSuffixRadio = new QRadioButton(NewSuffix);
        StilllOldSuffixRadio->setObjectName(QStringLiteral("StilllOldSuffixRadio"));
        StilllOldSuffixRadio->setGeometry(QRect(10, 20, 89, 16));
        EditSuffixRadio = new QRadioButton(NewSuffix);
        EditSuffixRadio->setObjectName(QStringLiteral("EditSuffixRadio"));
        EditSuffixRadio->setGeometry(QRect(10, 50, 89, 16));
        NewSuffixLine = new QLineEdit(NewSuffix);
        NewSuffixLine->setObjectName(QStringLiteral("NewSuffixLine"));
        NewSuffixLine->setGeometry(QRect(20, 140, 113, 20));
        label = new QLabel(NewSuffix);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 150, 54, 12));
        QFont font;
        font.setFamily(QStringLiteral("DokChampa"));
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        radioButton_2 = new QRadioButton(NewSuffix);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setGeometry(QRect(10, 120, 89, 16));
        comboBox_2 = new QComboBox(NewSuffix);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        comboBox_2->setGeometry(QRect(10, 80, 69, 22));
        NumberLastname = new QGroupBox(centralWidget);
        NumberLastname->setObjectName(QStringLiteral("NumberLastname"));
        NumberLastname->setGeometry(QRect(760, 10, 120, 80));
        comboBox = new QComboBox(NumberLastname);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(40, 20, 69, 22));
        radioButton = new QRadioButton(NumberLastname);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setGeometry(QRect(10, 20, 89, 16));
        radioButton_4 = new QRadioButton(NumberLastname);
        radioButton_4->setObjectName(QStringLiteral("radioButton_4"));
        radioButton_4->setGeometry(QRect(10, 50, 89, 16));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(730, 50, 54, 12));
        QFont font1;
        font1.setFamily(QStringLiteral("Kokila"));
        font1.setPointSize(20);
        font1.setBold(true);
        font1.setWeight(75);
        label_2->setFont(font1);
        FilterSuffix = new QGroupBox(centralWidget);
        FilterSuffix->setObjectName(QStringLiteral("FilterSuffix"));
        FilterSuffix->setGeometry(QRect(520, 110, 161, 181));
        NoFilterRadio = new QRadioButton(FilterSuffix);
        NoFilterRadio->setObjectName(QStringLiteral("NoFilterRadio"));
        NoFilterRadio->setGeometry(QRect(20, 20, 89, 16));
        TextSuffixRadio = new QRadioButton(FilterSuffix);
        TextSuffixRadio->setObjectName(QStringLiteral("TextSuffixRadio"));
        TextSuffixRadio->setGeometry(QRect(20, 50, 89, 16));
        MusicSuffixRadio = new QRadioButton(FilterSuffix);
        MusicSuffixRadio->setObjectName(QStringLiteral("MusicSuffixRadio"));
        MusicSuffixRadio->setGeometry(QRect(20, 80, 89, 16));
        VideoSuffixRadio = new QRadioButton(FilterSuffix);
        VideoSuffixRadio->setObjectName(QStringLiteral("VideoSuffixRadio"));
        VideoSuffixRadio->setGeometry(QRect(20, 110, 89, 16));
        SelfdefinedSuffixRadio = new QRadioButton(FilterSuffix);
        SelfdefinedSuffixRadio->setObjectName(QStringLiteral("SelfdefinedSuffixRadio"));
        SelfdefinedSuffixRadio->setGeometry(QRect(20, 140, 89, 16));
        label_3 = new QLabel(FilterSuffix);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(80, 150, 54, 12));
        label_3->setFont(font);
        filterSuffixLine = new QLineEdit(FilterSuffix);
        filterSuffixLine->setObjectName(QStringLiteral("filterSuffixLine"));
        filterSuffixLine->setGeometry(QRect(90, 140, 51, 20));
        FileManagerClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(FileManagerClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 958, 23));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName(QStringLiteral("menu_2"));
        menu_3 = new QMenu(menuBar);
        menu_3->setObjectName(QStringLiteral("menu_3"));
        menu_4 = new QMenu(menuBar);
        menu_4->setObjectName(QStringLiteral("menu_4"));
        menu_5 = new QMenu(menuBar);
        menu_5->setObjectName(QStringLiteral("menu_5"));
        FileManagerClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(FileManagerClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        FileManagerClass->addToolBar(Qt::TopToolBarArea, mainToolBar);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_2->menuAction());
        menuBar->addAction(menu_3->menuAction());
        menuBar->addAction(menu_4->menuAction());
        menuBar->addAction(menu_5->menuAction());
        menu->addAction(actionOpen_Files);
        menu->addAction(actionRules);
        menu_3->addAction(actionAbout_us);
        menu_3->addSeparator();
        menu_3->addAction(actionOnly_suffix);
        menu_3->addSeparator();
        menu_3->addAction(actionFiles_Name_and_Suffix);
        menu_4->addAction(actionSimple_Mode_Normal);
        menu_4->addAction(actionFolder_into_Mode);
        menu_4->addAction(actionFolder_into_ZIP_Mode);
        menu_5->addAction(actionAbout_us_2);

        retranslateUi(FileManagerClass);
        QObject::connect(actionOpen_Files, SIGNAL(triggered()), FileManagerClass, SLOT(OpenFiles()));
        QObject::connect(ReviseButton, SIGNAL(clicked()), FileManagerClass, SLOT(StartToRevise()));

        QMetaObject::connectSlotsByName(FileManagerClass);
    } // setupUi

    void retranslateUi(QMainWindow *FileManagerClass)
    {
        FileManagerClass->setWindowTitle(QApplication::translate("FileManagerClass", "FileManager", 0));
        actionOpen_Files->setText(QApplication::translate("FileManagerClass", "Open Files", 0));
        actionRules->setText(QApplication::translate("FileManagerClass", "Load Rules", 0));
        actionAbout_us->setText(QApplication::translate("FileManagerClass", "Only Files' Name ", 0));
        actionOnly_suffix->setText(QApplication::translate("FileManagerClass", "Only suffix ", 0));
        actionFiles_Name_and_Suffix->setText(QApplication::translate("FileManagerClass", "Files' Name and Suffix", 0));
        actionSimple_Mode_Normal->setText(QApplication::translate("FileManagerClass", "Simple Mode (Default)", 0));
        actionFolder_into_Mode->setText(QApplication::translate("FileManagerClass", "All in Folder Mode", 0));
        actionFolder_into_ZIP_Mode->setText(QApplication::translate("FileManagerClass", "Folder into ZIP Mode", 0));
        actionText_Files_TXT_doc_docx->setText(QApplication::translate("FileManagerClass", "Text Files ( TXT,doc,docx...) ", 0));
        actionMusic_Files->setText(QApplication::translate("FileManagerClass", "Music Files", 0));
        actionVideo_Files->setText(QApplication::translate("FileManagerClass", "Video Files", 0));
        actionAbout_us_2->setText(QApplication::translate("FileManagerClass", "About us", 0));
        ReviseButton->setText(QApplication::translate("FileManagerClass", "\345\274\200\345\247\213\344\277\256\346\224\271", 0));
        FilesUnifiedFirstName->setTitle(QApplication::translate("FileManagerClass", "\346\226\207\344\273\266\345\220\215", 0));
        NewSuffix->setTitle(QApplication::translate("FileManagerClass", "\346\226\260\345\220\216\347\274\200\345\220\215", 0));
        StilllOldSuffixRadio->setText(QApplication::translate("FileManagerClass", "\344\270\215\346\233\264\346\224\271\345\220\216\347\274\200", 0));
        EditSuffixRadio->setText(QApplication::translate("FileManagerClass", "\346\233\264\346\224\271\345\220\216\347\274\200\344\270\272", 0));
        label->setText(QApplication::translate("FileManagerClass", "\302\267", 0));
        radioButton_2->setText(QApplication::translate("FileManagerClass", "\350\207\252\345\256\232\344\271\211", 0));
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("FileManagerClass", "JPG", 0)
         << QApplication::translate("FileManagerClass", "JPEG", 0)
         << QApplication::translate("FileManagerClass", "TXT", 0)
         << QApplication::translate("FileManagerClass", "zip", 0)
         << QApplication::translate("FileManagerClass", "7z", 0)
         << QApplication::translate("FileManagerClass", "doc", 0)
        );
        NumberLastname->setTitle(QApplication::translate("FileManagerClass", "\346\226\207\344\273\266\345\220\215\347\274\226\345\217\267", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("FileManagerClass", "01", 0)
         << QApplication::translate("FileManagerClass", "001", 0)
         << QApplication::translate("FileManagerClass", "\347\224\262\344\271\231\344\270\231\344\270\201...", 0)
         << QApplication::translate("FileManagerClass", "\350\207\252\345\256\232\344\271\211\350\247\204\345\210\231", 0)
         << QApplication::translate("FileManagerClass", "\344\270\215\347\274\226\345\217\267", 0)
        );
        radioButton->setText(QString());
        radioButton_4->setText(QApplication::translate("FileManagerClass", "RadioButton", 0));
        label_2->setText(QApplication::translate("FileManagerClass", "+", 0));
        FilterSuffix->setTitle(QApplication::translate("FileManagerClass", "\350\277\207\346\273\244\347\261\273\345\236\213", 0));
        NoFilterRadio->setText(QApplication::translate("FileManagerClass", "\344\270\215\350\277\207\346\273\244\347\261\273\345\236\213", 0));
        TextSuffixRadio->setText(QApplication::translate("FileManagerClass", "\346\226\207\346\241\243", 0));
        MusicSuffixRadio->setText(QApplication::translate("FileManagerClass", "\351\237\263\344\271\220", 0));
        VideoSuffixRadio->setText(QApplication::translate("FileManagerClass", "\350\247\206\351\242\221", 0));
        SelfdefinedSuffixRadio->setText(QApplication::translate("FileManagerClass", "\350\207\252\345\256\232\344\271\211", 0));
        label_3->setText(QApplication::translate("FileManagerClass", "\302\267", 0));
        menu->setTitle(QApplication::translate("FileManagerClass", "\346\211\223\345\274\200", 0));
        menu_2->setTitle(QApplication::translate("FileManagerClass", "\347\274\226\350\276\221", 0));
        menu_3->setTitle(QApplication::translate("FileManagerClass", "\344\277\256\346\224\271\350\256\276\347\275\256", 0));
        menu_4->setTitle(QApplication::translate("FileManagerClass", "\350\276\223\345\207\272\350\256\276\347\275\256", 0));
        menu_5->setTitle(QApplication::translate("FileManagerClass", "\345\205\263\344\272\216", 0));
    } // retranslateUi

};

namespace Ui {
    class FileManagerClass: public Ui_FileManagerClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILEMANAGER_H
