#ifndef AUTHORIZATION_H
#define AUTHORIZATION_H

#include <QDialog>
#include "menuwindow.h"

namespace Ui {
class Authorization;
}

class Authorization : public QDialog
{
    Q_OBJECT

public:
    explicit Authorization(QWidget *parent = nullptr);
    ~Authorization();
signals:
    void firstWindow();
private slots:
    void on_pushButtonEnter_clicked();

private:
    Ui::Authorization *ui;
    MenuWindow *menuwindow;
};

#endif // AUTHORIZATION_H
