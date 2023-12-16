#include "addpackage.h"
#include "ui_addpackage.h"
#include "addbook.h"
#include <QString>
#include <QMessageBox>

AddPackage::AddPackage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddPackage)
{
    ui->setupUi(this);
    addbookwin = new AddBook;
    connect(addbookwin, &AddBook::addbookWindow, this, &AddPackage::show);
}

AddPackage::~AddPackage()
{
    delete ui;
}

void AddPackage::on_pushButtonBackToMenu_clicked()
{
    this->close();
    emit addpackageWindow();
}


void AddPackage::on_pushButtonNewBook_clicked()
{
    this->close();
    addbookwin->show();
}


void AddPackage::on_pushButtonAdd_clicked()
{
    QString numpack = ui->lineEditNumPack->text();
    QString human1 = ui->lineEditBrought->text();
    QString human2 = ui->lineEditTook->text();
    QString book1 = ui->lineEditBook1->text();
    QString book2 = ui->lineEditBook2->text();
    QString book3 = ui->lineEditBook3->text();
    QString q1 = ui->lineEditQuant1->text();
    QString q2 = ui->lineEditQuant2->text();
    QString q3 = ui->lineEditQuant3->text();
    if (numpack == "" && human1 == "" && human2 == "" && book1 == "" && book2 == "" &&
            book3 == "" && q1 == "" && q2 == "" && q3 == ""){
        QMessageBox::warning(this, "Не все данные", "Заполните все необходимые поля!");
    }
    else {
        QMessageBox::information(this, "Успешно", "Данные успешно добавлены");
    }
}

