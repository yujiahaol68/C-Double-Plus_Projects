#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDialog>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->pushButton->setText(tr("�´���"));  // �������ϰ�ť����ʾ�ı�����Ϊ���´��ڡ�
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QDialog *dlg = new QDialog(this);
    dlg->show();
}
