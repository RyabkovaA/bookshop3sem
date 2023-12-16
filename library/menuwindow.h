#ifndef MENUWINDOW_H
#define MENUWINDOW_H

#include <QDialog>
#include "booksearch.h"
#include "addpackage.h"

namespace Ui {
class MenuWindow;
}

class MenuWindow : public QDialog
{
    Q_OBJECT

public:
    explicit MenuWindow(QWidget *parent = nullptr);
    ~MenuWindow();

private slots:
    void on_pushButtonExitAuth_clicked();
    void on_pushButtonFindBook_clicked();
    void on_pushButtonAddPackage_clicked();

signals:
    void menuWindow();
    void newmenuWindow();
private:
    Ui::MenuWindow *ui;
    BookSearch *booksearchwindow;
    AddPackage *addpackagewindow;
signals:
    void is_hide();
};

#endif // MENUWINDOW_H
