#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    int n=ui->lcdNumber->value();
    n=10*n+1;
    ui->lcdNumber->display(n);
}

void MainWindow::on_pushButton_11_clicked()
{
  ui->lcdNumber->display(0);
}

void MainWindow::on_pushButton_2_clicked()
{
    int n=ui->lcdNumber->value();
    n=10*n+2;
    ui->lcdNumber->display(n);
}

void MainWindow::on_pushButton_3_clicked()
{
    int n=ui->lcdNumber->value();
    n=10*n+3;
    ui->lcdNumber->display(n);
}

void MainWindow::on_pushButton_4_clicked()
{
    int n=ui->lcdNumber->value();
    n=10*n+4;
    ui->lcdNumber->display(n);
}

void MainWindow::on_pushButton_5_clicked()
{
    int n=ui->lcdNumber->value();
    n=10*n+5;
    ui->lcdNumber->display(n);
}

void MainWindow::on_pushButton_6_clicked()
{
    int n=ui->lcdNumber->value();
    n=10*n+6;
    ui->lcdNumber->display(n);
}

void MainWindow::on_pushButton_7_clicked()
{
    int n=ui->lcdNumber->value();
    n=10*n+7;
    ui->lcdNumber->display(n);
}

void MainWindow::on_pushButton_8_clicked()
{
    int n=ui->lcdNumber->value();
    n=10*n+8;
    ui->lcdNumber->display(n);
}

void MainWindow::on_pushButton_9_clicked()
{
    int n=ui->lcdNumber->value();
    n=10*n+9;
    ui->lcdNumber->display(n);
}


void MainWindow::on_pushButton_10_clicked()
{
    int n=ui->lcdNumber->value();
    n=10*n+0;
    ui->lcdNumber->display(n);
}

void MainWindow::on_pushButton_12_clicked()
{
    static int operat= ui->lcdNumber->value();
    static int pr = 1;
    if (pr){
        operat= ui->lcdNumber->value();
        pr=0;
        ui->lcdNumber->display(0);
    }
    else{
       pr=1;
       ui->lcdNumber->display(operat+ui->lcdNumber->value());
    }
}
