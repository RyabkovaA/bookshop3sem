#include "authorization.h"
#include "ui_authorization.h"
#include "menuwindow.h"
#include <QString>
#include <QMessageBox>

Authorization::Authorization(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Authorization)
{
    ui->setupUi(this);
    menuwindow = new MenuWindow();
    connect(menuwindow, &MenuWindow::menuWindow, this, &Authorization::show);
}

Authorization::~Authorization()
{
    delete ui;
}



void Authorization::on_pushButtonEnter_clicked()
{
    QString login = ui->lineEditLogin->text();
    QString password = ui->lineEditPassword->text();
    if (login == "seller12" && password == "sellerpassword12") {
        menuwindow->show();
        this->close();
    }
    else {
        QMessageBox::warning(this, "Ошибка", "Неверно введены данные");
    }


}
