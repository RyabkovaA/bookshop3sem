#ifndef ADDPACKAGE_H
#define ADDPACKAGE_H

#include <QDialog>
#include "addbook.h"

namespace Ui {
class AddPackage;
}

class AddPackage : public QDialog
{
    Q_OBJECT

public:
    explicit AddPackage(QWidget *parent = nullptr);
    ~AddPackage();
signals:
    void addpackageWindow();
private slots:
    void on_pushButtonBackToMenu_clicked();

    void on_pushButtonNewBook_clicked();

    void on_pushButtonAdd_clicked();

private:
    Ui::AddPackage *ui;
    AddBook *addbookwin;
};

#endif // ADDPACKAGE_H
