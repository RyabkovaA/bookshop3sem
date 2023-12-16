#include "menuwindow.h"
#include "ui_menuwindow.h"
#include "booksearch.h"
#include "addpackage.h"

MenuWindow::MenuWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MenuWindow)
{
    ui->setupUi(this);
    booksearchwindow = new BookSearch();
    addpackagewindow = new AddPackage();
    connect(booksearchwindow, &BookSearch::booksearchWindow, this, &MenuWindow::show);
    connect(addpackagewindow, &AddPackage::addpackageWindow, this, &MenuWindow::show);
}

MenuWindow::~MenuWindow()
{
    delete ui;
}

void MenuWindow::on_pushButtonExitAuth_clicked()
{
    this->close();
    emit menuWindow();
}


void MenuWindow::on_pushButtonFindBook_clicked()
{
    this->close();
    booksearchwindow->show();

}


void MenuWindow::on_pushButtonAddPackage_clicked()
{
    this->close();
    addpackagewindow->show();
}

