#include "widget.h"
#include "./ui_widget.h"

#include <QString>
#include <QMessageBox>
#include <stack.h>
#include <StateExam.h>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->tableWidget->setRowCount(1);
    Stack new_stack;
    stack = new_stack;
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_pushButton_clicked()
{
    QString str_number = ui->lineEdit->text();
    int number = str_number.toInt();
    if (number < 0){
     QMessageBox::warning(this,"Ошибка","Номер не может быть меньше 0");
    }
    QString name = ui->lineEdit_2->text();
    QString str_count = ui->lineEdit->text();
    int count;
    if(str_count == ""){
        count = 0;
    }
    else{
        count = str_count.toInt();
        if (count < 0){
         QMessageBox::warning(this,"Ошибка","Колличество не может быть меньше 0");
        }
    }
    int rows = ui->tableWidget->rowCount();
    ui->tableWidget->setItem(rows-1,0,new QTableWidgetItem(str_number));
    ui->tableWidget->setItem(rows-1,1,new QTableWidgetItem(name));
    ui->tableWidget->setItem(rows-1,2,new QTableWidgetItem(str_count));
    ui->tableWidget->setRowCount(rows+1);
    StateExam new_exam(number,name.toStdString(),count);
    stack.push(new_exam);

}

