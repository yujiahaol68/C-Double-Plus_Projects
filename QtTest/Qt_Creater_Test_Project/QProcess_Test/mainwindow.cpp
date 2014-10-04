#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QProcess>
#include <QString>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QObject::connect(ui->lineEdit,SIGNAL(returnPressed()),this,SLOT(on_pushButton_clicked()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
  QProcess *myProcess = new QProcess;
  QString startProgram = ui->lineEdit->text();
  myProcess->start(startProgram.trimmed());
  ui->lineEdit->clear();
  this->close();
}
