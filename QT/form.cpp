#include "form.h"
#include "ui_form.h"
#include "mainwindow.h"

Form::Form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form)
{
    ui->setupUi(this);
    ui->T1->setDisplayFormat("HH:mm AP");
}

Form::~Form()
{
    delete ui;
}


void Form::on_Shahrake_Shariati_clicked()
{
    qDebug() << ui->T1->text();
}

