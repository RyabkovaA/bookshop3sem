#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "authorization.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    nextwindow = new Authorization();
    connect(nextwindow, &Authorization::firstWindow, this, &MainWindow::show);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButtonAuth_clicked()
{
    nextwindow->show();
    this->close();

}

