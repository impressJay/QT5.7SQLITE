#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QtSql/QSql>
#include <QtSql/QSqlDatabase>
#include <QtSql/qsqlquerymodel.h>
#include <QSqlQuery>
#include <QSqlQueryModel>



namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();
public:



    void show_view();

private slots:
    void on_creat_sql_Button_clicked();

    void on_save_pushButton_clicked();

    void on_find_pushButton_clicked();

    void on_delete_pushButton_clicked();

    void on_change_pushButton_clicked();



    void clear_focus();

    void on_pallette_clicked();

private:
    Ui::Widget *ui;
    QString name,sex,number;
    QString find_buf;
};

#endif // WIDGET_H
