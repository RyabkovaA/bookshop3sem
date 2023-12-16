#ifndef BOOKSEARCHRESULTWINDOW_H
#define BOOKSEARCHRESULTWINDOW_H

#include <QDialog>

namespace Ui {
class BookSearchResultWindow;
}

class BookSearchResultWindow : public QDialog
{
    Q_OBJECT

public:
    explicit BookSearchResultWindow(QWidget *parent = nullptr);
    ~BookSearchResultWindow();
signals:
    void searchresWindow();
private slots:
    void on_pushButtonBackToSearch_clicked();

private:
    Ui::BookSearchResultWindow *ui;
};

#endif // BOOKSEARCHRESULTWINDOW_H
