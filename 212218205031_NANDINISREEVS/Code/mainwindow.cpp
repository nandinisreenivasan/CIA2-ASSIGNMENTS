#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QDebug>
#include<QPixmap>
#include<QIcon>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->pushButton_5->setCheckable(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    QMessageBox::information(this,"Nandinisree VS 212218205031","THIS IS INFORMATION BOX");
}

void MainWindow::on_pushButton_2_clicked()
{
    QMessageBox::StandardButton
            reply=QMessageBox::question(this,"Nandinisree VS 212218205031","Do you like Biriyani?",QMessageBox::Yes | QMessageBox::No);
        if(reply == QMessageBox::Yes)
        {
            QMessageBox::information(this,"Yes","Loves Biriyani");
        }
        if(reply == QMessageBox::No)
        {
            QMessageBox::information(this,"No","Hates Biriyani");
        }
}

void MainWindow::on_pushButton_3_clicked()
{
    QMessageBox::StandardButton
            reply=QMessageBox::question(this,"Nandinisree VS 212218205031","This is a custom message",
                                        QMessageBox::Yes | QMessageBox::YesToAll | QMessageBox::No | QMessageBox::NoToAll);
    if(reply == QMessageBox::Yes)
        {
            qDebug() <<"Nothing is displayed";
        }
        if(reply == QMessageBox::YesToAll)
        {
           QMessageBox::warning(this,"Nandinisree VS 212218205031","Display the message with warning as YesToAll");
        }
        if(reply == QMessageBox::No)
        {
            qDebug() <<"Nothing is displayed";
        }
        if(reply == QMessageBox::NoToAll)
        {
           QMessageBox::warning(this,"Nandinisree VS 212218205031","Don't Display the message with warning as NoToAll");
        }

}

void MainWindow::on_pushButton_4_clicked()
{
    QMessageBox::warning(this,"Nandinisree VS 212218205031","This is a warning message");
}

void MainWindow::on_pushButton_5_toggled(bool checked)
{
    if(checked)
        {
            qDebug()<<"Button Checked --ON--";
            ui->pushButton_5->setIcon(QIcon("C:/Users/nandi/Documents/C++/CIA2_NandinisreeVS/on1.jpg"));
            ui->pushButton_5->setIconSize(QSize(110,110));
        }
        else
        {
            qDebug()<<"Button UnChecked --OFF--";
            ui->pushButton_5->setIcon(QIcon("C:/Users/nandi/Documents/C++/CIA2_NandinisreeVS/off1.jpg"));
            ui->pushButton_5->setIconSize(QSize(110,100));
        }
}
