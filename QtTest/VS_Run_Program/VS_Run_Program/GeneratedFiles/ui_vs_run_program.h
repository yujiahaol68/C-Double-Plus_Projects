/********************************************************************************
** Form generated from reading UI file 'vs_run_program.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VS_RUN_PROGRAM_H
#define UI_VS_RUN_PROGRAM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VS_Run_ProgramClass
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QLineEdit *lineEdit;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *VS_Run_ProgramClass)
    {
        if (VS_Run_ProgramClass->objectName().isEmpty())
            VS_Run_ProgramClass->setObjectName(QStringLiteral("VS_Run_ProgramClass"));
        VS_Run_ProgramClass->resize(392, 216);
        centralWidget = new QWidget(VS_Run_ProgramClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 40, 341, 31));
        QFont font;
        font.setFamily(QStringLiteral("Adobe Caslon Pro"));
        font.setPointSize(18);
        font.setBold(false);
        font.setItalic(true);
        font.setWeight(50);
        label->setFont(font);
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(50, 80, 281, 20));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(50, 120, 261, 51));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(widget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        horizontalLayout->addWidget(pushButton_3);

        VS_Run_ProgramClass->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(VS_Run_ProgramClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        VS_Run_ProgramClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(VS_Run_ProgramClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        VS_Run_ProgramClass->setStatusBar(statusBar);

        retranslateUi(VS_Run_ProgramClass);
        QObject::connect(pushButton, SIGNAL(clicked()), VS_Run_ProgramClass, SLOT(OkBtnClicked()));

        QMetaObject::connectSlotsByName(VS_Run_ProgramClass);
    } // setupUi

    void retranslateUi(QMainWindow *VS_Run_ProgramClass)
    {
        VS_Run_ProgramClass->setWindowTitle(QApplication::translate("VS_Run_ProgramClass", "VS_Run_Program", 0));
        label->setText(QApplication::translate("VS_Run_ProgramClass", "\350\257\267\350\276\223\345\205\245\350\246\201\346\211\223\345\274\200\347\232\204\347\250\213\345\272\217\357\274\232", 0));
#ifndef QT_NO_STATUSTIP
        lineEdit->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
        lineEdit->setInputMask(QString());
        lineEdit->setPlaceholderText(QApplication::translate("VS_Run_ProgramClass", "\350\257\267\350\276\223\345\205\245\347\250\213\345\272\217\345\220\215", 0));
        pushButton->setText(QApplication::translate("VS_Run_ProgramClass", "\347\241\256\345\256\232", 0));
        pushButton_2->setText(QApplication::translate("VS_Run_ProgramClass", "\345\217\226\346\266\210", 0));
        pushButton_3->setText(QApplication::translate("VS_Run_ProgramClass", "\346\265\217\350\247\210", 0));
    } // retranslateUi

};

namespace Ui {
    class VS_Run_ProgramClass: public Ui_VS_Run_ProgramClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VS_RUN_PROGRAM_H
