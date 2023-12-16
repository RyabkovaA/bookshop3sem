#include "booksearchresultwindow.h"
#include "ui_booksearchresultwindow.h"

BookSearchResultWindow::BookSearchResultWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::BookSearchResultWindow)
{
    ui->setupUi(this);
}

BookSearchResultWindow::~BookSearchResultWindow()
{
    delete ui;
}


void BookSearchResultWindow::on_pushButtonBackToSearch_clicked()
{
    this->close();
    emit searchresWindow();
}

