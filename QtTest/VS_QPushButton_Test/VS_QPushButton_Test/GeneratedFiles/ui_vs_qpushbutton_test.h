/********************************************************************************
** Form generated from reading UI file 'vs_qpushbutton_test.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VS_QPUSHBUTTON_TEST_H
#define UI_VS_QPUSHBUTTON_TEST_H

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

class Ui_VS_QPushButton_TestClass
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *VS_QPushButton_TestClass)
    {
        if (VS_QPushButton_TestClass->objectName().isEmpty())
            VS_QPushButton_TestClass->setObjectName(QStringLiteral("VS_QPushButton_TestClass"));
        VS_QPushButton_TestClass->resize(600, 400);
        centralWidget = new QWidget(VS_QPushButton_TestClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(240, 130, 75, 23));
        VS_QPushButton_TestClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(VS_QPushButton_TestClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 23));
        VS_QPushButton_TestClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(VS_QPushButton_TestClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        VS_QPushButton_TestClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(VS_QPushButton_TestClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        VS_QPushButton_TestClass->setStatusBar(statusBar);

        retranslateUi(VS_QPushButton_TestClass);
        QObject::connect(pushButton, SIGNAL(clicked()), VS_QPushButton_TestClass, SLOT(PushBtn01Clicked()));

        QMetaObject::connectSlotsByName(VS_QPushButton_TestClass);
    } // setupUi

    void retranslateUi(QMainWindow *VS_QPushButton_TestClass)
    {
        VS_QPushButton_TestClass->setWindowTitle(QApplication::translate("VS_QPushButton_TestClass", "VS_QPushButton_Test", 0));
        pushButton->setText(QApplication::translate("VS_QPushButton_TestClass", "PushButton", 0));
    } // retranslateUi

};

namespace Ui {
    class VS_QPushButton_TestClass: public Ui_VS_QPushButton_TestClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VS_QPUSHBUTTON_TEST_H
