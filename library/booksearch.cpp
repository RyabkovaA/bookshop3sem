#include "booksearch.h"
#include "ui_booksearch.h"
#include "booksearchresultwindow.h"
#include <QString>
#include <QMessageBox>

BookSearch::BookSearch(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::BookSearch)
{
    ui->setupUi(this);
    searchres = new BookSearchResultWindow;
    connect(searchres, &BookSearchResultWindow::searchresWindow, this, &BookSearch::show);
}

BookSearch::~BookSearch()
{
    delete ui;
}

void BookSearch::on_pushButtonBackToMenu_clicked()
{
    this->close();
    emit booksearchWindow();
}



void BookSearch::on_pushButtonSearch_clicked()
{
    QString name = ui->lineEditName->text();
    QString author = ui->lineEditAuthor->text();
    QString year = ui->lineEditYear->text();
    QString publish = ui->lineEditPublish->text();
    QString theme = ui->lineEditTheme->text();
    if (name == "" && author == "" && publish == "" && theme == ""){
        QMessageBox::warning(this, "Не все данные", "Заполните все необходимые поля!");
    }
    else {
        this->close();
        searchres->show();
    }
}

