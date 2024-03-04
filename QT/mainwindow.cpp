#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "form.h"
#include <QPixmap>
#include <QImage>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("SEMANHASHT");
//    QPixmap pixmap("./../img/Screenshot 2024-03-04 112257.png");
//   // ui->lbl_pic->setPixmap(pixmap);
//    //ui->lbl_pic->setSizePolicy(QSizePolicy::Fixed , QSizePolicy::Fixed);
//    //ui->lbl_pic->setFixedSize(2000,700);
//    int w = ui->lbl_pic->width();
//    int h = ui->lbl_pic->height();

//    ui->lbl_pic->setPixmap(pixmap.scaled(w ,h ,Qt::KeepAspectRatio));

//  //QRegion *region = new QRegion(0 , 0 , ui->lbl_pic->width(), ui->lbl_pic->height(),QRegion::Ellipse);


}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_total_exit_clicked()
{
    Form * main_btn  ;
    main_btn = new Form ;
    main_btn->show();
    this->close();
}

