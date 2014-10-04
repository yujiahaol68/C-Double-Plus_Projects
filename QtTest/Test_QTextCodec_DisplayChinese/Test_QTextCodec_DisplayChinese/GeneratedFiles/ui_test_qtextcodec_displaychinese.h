/********************************************************************************
** Form generated from reading UI file 'test_qtextcodec_displaychinese.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEST_QTEXTCODEC_DISPLAYCHINESE_H
#define UI_TEST_QTEXTCODEC_DISPLAYCHINESE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Test_QTextCodec_DisplayChineseClass
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton01;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Test_QTextCodec_DisplayChineseClass)
    {
        if (Test_QTextCodec_DisplayChineseClass->objectName().isEmpty())
            Test_QTextCodec_DisplayChineseClass->setObjectName(QStringLiteral("Test_QTextCodec_DisplayChineseClass"));
        Test_QTextCodec_DisplayChineseClass->resize(600, 400);
        centralWidget = new QWidget(Test_QTextCodec_DisplayChineseClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton01 = new QPushButton(centralWidget);
        pushButton01->setObjectName(QStringLiteral("pushButton01"));
        pushButton01->setGeometry(QRect(250, 140, 75, 23));
        Test_QTextCodec_DisplayChineseClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Test_QTextCodec_DisplayChineseClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 23));
        Test_QTextCodec_DisplayChineseClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Test_QTextCodec_DisplayChineseClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Test_QTextCodec_DisplayChineseClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Test_QTextCodec_DisplayChineseClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Test_QTextCodec_DisplayChineseClass->setStatusBar(statusBar);

        retranslateUi(Test_QTextCodec_DisplayChineseClass);

        QMetaObject::connectSlotsByName(Test_QTextCodec_DisplayChineseClass);
    } // setupUi

    void retranslateUi(QMainWindow *Test_QTextCodec_DisplayChineseClass)
    {
        Test_QTextCodec_DisplayChineseClass->setWindowTitle(QApplication::translate("Test_QTextCodec_DisplayChineseClass", "Test_QTextCodec_DisplayChinese", 0));
        pushButton01->setText(QApplication::translate("Test_QTextCodec_DisplayChineseClass", "\346\214\211\351\222\256", 0));
    } // retranslateUi

};

namespace Ui {
    class Test_QTextCodec_DisplayChineseClass: public Ui_Test_QTextCodec_DisplayChineseClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST_QTEXTCODEC_DISPLAYCHINESE_H
