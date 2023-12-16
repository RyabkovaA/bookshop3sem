#ifndef BOOKSEARCH_H
#define BOOKSEARCH_H

#include <QDialog>
#include "booksearchresultwindow.h"

namespace Ui {
class BookSearch;
}

class BookSearch : public QDialog
{
    Q_OBJECT

public:
    explicit BookSearch(QWidget *parent = nullptr);
    ~BookSearch();
signals:
    void booksearchWindow();
private slots:
    void on_pushButtonSearch_clicked();
    void on_pushButtonBackToMenu_clicked();
private:
    Ui::BookSearch *ui;
    BookSearchResultWindow *searchres;
};

#endif // BOOKSEARCH_H
