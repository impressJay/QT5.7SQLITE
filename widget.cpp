#include "widget.h"
#include "ui_widget.h"
#include <QMessageBox>
#include <QDebug>
#include <QSqlError>
#include <QColorDialog>
#include <QListWidget>


QSqlQuery query;
QSqlDatabase db;
QSqlQueryModel*model;

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
}


Widget::~Widget()
{
    delete ui;
}


void Widget::on_creat_sql_Button_clicked()
{
    bool query_OK=0;
    db=QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("stu.db");
    bool ok=db.open();
    if(ok)
       QMessageBox::information(this,"Information","open sucessfully");
    else
       QMessageBox::information(this,"Information","open fail");
    QSqlQuery query;
    query_OK= query.exec("create table stu(name vchar primary key,sex vchar ,number vchar)");
    if(query_OK)
    {
        qDebug()<< "create table success!";
    }
    else
    {
        qDebug()<< "create table fail!"  << db.lastError();

    }
    show_view();
}



void  Widget::show_view()
{
   model = new QSqlQueryModel(this);
   model->setQuery("select * from stu");
   model->setHeaderData(0,Qt::Horizontal,tr("Name"));
   model->setHeaderData(1,Qt::Horizontal,tr("Sex"));
   model->setHeaderData(2,Qt::Horizontal,tr("Number"));
   ui->tableView->setModel(model);
}


void Widget::on_save_pushButton_clicked()
{
    name=ui->name_lineEdit->text();
        sex=ui->sex_comboBox->currentText();
        number=ui->number_lineEdit->text();
        if(name.isEmpty() || sex.isEmpty() || number.isEmpty())
        {
            QMessageBox::warning(this,"Incomplete information","error");
            return;
        }
        QString insert_buf;
        QSqlQuery query;
        insert_buf=QObject::tr("insert into stu values('%1','%2','%3')").arg(name,sex,number);
        query.exec(insert_buf);
        show_view();
        clear_focus();

}



void Widget::clear_focus()
{
   ui->name_lineEdit->clear();
   ui->number_lineEdit->clear();
   ui->name_lineEdit->setFocus();
}




void Widget::on_find_pushButton_clicked()
{
    find_buf=ui->find_lineEdit->text();
       QSqlQuery query;
       query.exec("select * from stu");
       query.isActive();
       while(query.next())
       {
           QString ele0=query.value(0).toString();
           QString ele1=query.value(1).toString();
           QString ele2=query.value(2).toString();
           if((ele0==find_buf) || (ele1==find_buf) || (ele2==find_buf))
           {
              ui->name_lineEdit->setText(ele0);
              ui->sex_comboBox->setCurrentText(ele1);
              ui->number_lineEdit->setText(ele2);
              return;
           }
        }
       QMessageBox::information(this,"Not Find","No this record",QMessageBox::Ok);
}



void Widget::on_delete_pushButton_clicked()
{
    QString delete_buf;
      delete_buf=ui->delete_lineEdit->text();
       QSqlQuery query;
      query.exec("select * from stu");
      query.isActive();
      QString insert_buf;
      while(query.next())
      {
          QString ele0=query.value(0).toString();
          QString ele1=query.value(1).toString();
          QString ele2=query.value(2).toString();
          if((ele0==delete_buf) || (ele1==delete_buf) || (ele2==delete_buf))
          {
             if(ele0==delete_buf)
             {
                insert_buf=QObject::tr("delete from stu where name='%1'").arg(delete_buf);
             }
             else if(ele0==delete_buf)
             {
                insert_buf=QObject::tr("delete from stu where sex='%1'").arg(delete_buf);
             }
             else if(ele0==delete_buf)
             {
                insert_buf=QObject::tr("delete from stu where number='%1'").arg(delete_buf);
             }
             bool ok=query.exec(insert_buf);
             if(ok)
                 QMessageBox::information(this,"delete successfully","Ok",QMessageBox::Ok);
             else
                 QMessageBox::information(this,"delete fail","Error",QMessageBox::Ok);
             show_view();
             return;
          }
      }
      QMessageBox::information(this,"Delete Error","No this record",QMessageBox::Ok);
}


void Widget::on_change_pushButton_clicked()
{
    ui->delete_lineEdit->setText(find_buf);
       on_delete_pushButton_clicked();
       on_save_pushButton_clicked();
       ui->delete_lineEdit->clear();
}


void Widget::on_pallette_clicked()
{
    //颜色对话框设置
    QColorDialog::setCustomColor(0,QRgb(0x0000FF));
    //定义QColor接收值
    QColor color = QColorDialog::getColor(QColor(0,255,0));
    //定义QPalette(调色板类)
    QPalette p = palette();
    //调色板接收颜色
    p.setColor(QPalette::WindowText,QColor(color));
    //给label 绑定颜色
}
