#include "addbook.h"
#include "ui_addbook.h"
#include <QString>
#include <QMessageBox>

AddBook::AddBook(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddBook)
{
    ui->setupUi(this);
}

AddBook::~AddBook()
{
    delete ui;
}

void AddBook::on_pushButtonBackToAddPackage_clicked()
{
    this->close();
    emit addbookWindow();
}


void AddBook::on_pushButtonAddBookInfo_clicked()
{
    QString name = ui->lineEditName->text();
    QString author = ui->lineEditAuthor->text();
    QString year = ui->lineEditYear->text();
    QString publish = ui->lineEditPublish->text();
    QString theme = ui->lineEditTheme->text();
    QString descr = ui->lineEditDesc->text();
    QString place = ui->lineEditPlace->text();
    QString quan = ui->lineEditQuant->text();
    if (name == "" or author == "" or year == "" or publish == "" or theme == "" or
            descr == "" or place == "" or quan == ""){
        QMessageBox::warning(this, "Не все данные", "Заполните все необходимые поля!");
    }
    else {
        QMessageBox::information(this, "Успешно", "Данные успешно добавлены");
    }
}

