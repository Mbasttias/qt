#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QKeyEvent>
#include "conio.h"

typedef struct comando_smo
{
    uint8_t ch0;
    uint8_t ch1;
    uint8_t ch2;
    uint8_t ch3;
    uint8_t ch4;
    uint8_t ch5;
} load;

load smoLoad = {0,0,0,0,0,0};

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::keyPressEvent(QKeyEvent *e)
{
    if(e->key() == Qt::Key_E || e->key() == Qt::Key_Space)
    {
        smoLoad.ch0=e->key();
        ui->CH0->setText(QString::number(smoLoad.ch0));
    }
    if(e->key() == Qt::Key_W || e->key() == Qt::Key_S)
    {
        smoLoad.ch1=e->key();
        ui->CH1->setText(e->text());
    }
    if(e->key() == Qt::Key_A || e->key() == Qt::Key_D || e->key() == Qt::Key_C)
    {
        smoLoad.ch2=e->key();
        ui->CH2->setText(e->text());
    }
    if(e->key() == Qt::Key_0 || e->key() == Qt::Key_1 || e->key() == Qt::Key_2 || e->key() == Qt::Key_3 || e->key() == Qt::Key_H)
    {
        smoLoad.ch3=e->key();
        ui->CH3->setText(e->text());
    }
    if(e->key() == Qt::Key_4 || e->key() == Qt::Key_5|| e->key() == Qt::Key_6)
    {
        smoLoad.ch4=e->key();
        ui->CH4->setText(e->text());
    }
    if(e->key() == Qt::Key_7 || e->key() == Qt::Key_8|| e->key() == Qt::Key_9)
    {
        smoLoad.ch5=e->key();
        ui->CH5->setText(e->text());
    }
}

void MainWindow::keyReleaseEvent(QKeyEvent *e)
{
    if(e->key() == Qt::Key_E || e->key() == Qt::Key_Space)
    {
        smoLoad.ch0=0;
        ui->CH0->setText(QString::number(smoLoad.ch0));
    }
    if(e->key() == Qt::Key_W || e->key() == Qt::Key_S)
    {
        smoLoad.ch1=0;
        ui->CH1->setText("No hay comando");
    }
    if(e->key() == Qt::Key_A || e->key() == Qt::Key_D)
    {
        smoLoad.ch2=0;
        ui->CH2->setText("No hay comando");
    }
    if(e->key() == Qt::Key_0 || e->key() == Qt::Key_1 || e->key() == Qt::Key_2 || e->key() == Qt::Key_3 || e->key() == Qt::Key_H)
    {
        smoLoad.ch3=0;
        ui->CH3->setText("No hay comando");
    }
    if(e->key() == Qt::Key_4 || e->key() == Qt::Key_5|| e->key() == Qt::Key_6)
    {
        smoLoad.ch4=0;
        ui->CH4->setText("No hay comando");
    }
    if(e->key() == Qt::Key_7 || e->key() == Qt::Key_8|| e->key() == Qt::Key_9)
    {
        smoLoad.ch5=0;
        ui->CH5->setText("No hay comando");
    }
}
