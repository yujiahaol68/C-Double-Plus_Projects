#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->label_3->clear();
    ui->label->clear();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QString a = ui->lineEdit->text();
    QString b = ui->lineEdit_2->text();
    int c = a.toInt() + b.toInt();
    ui->label->setText(QString::number(c));
    QString d = "+";
    ui->label_3->setText(d);
}

void MainWindow::on_pushButton_2_clicked()
{
    QString a = ui->lineEdit->text();
    QString b = ui->lineEdit_2->text();
    int c = b.toInt() - a.toInt();
    ui->label->setText(QString::number(c));
    QString d = "-";
    ui->label_3->setText(d);
}

void MainWindow::on_pushButton_3_clicked()
{
    QString a = ui->lineEdit->text();
    QString b = ui->lineEdit_2->text();
    int c = a.toInt() * b.toInt();
    ui->label->setText(QString::number(c));
    QString d = "x";
    ui->label_3->setText(d);
}



void MainWindow::on_pushButton_4_clicked()
{
    QString a = ui->lineEdit->text();
    QString b = ui->lineEdit_2->text();
    double c = b.toDouble() / a.toDouble();
    ui->label->setText(QString::number(c));
    QString d = "/";
    ui->label_3->setText(d);
}
