#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>

using namespace std;
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    if (timer) {
        timer->stop();
        delete timer;
        timer= nullptr;
    }
    delete ui;
}

void MainWindow::on_pushButton_3_clicked()
{


    //UI alustus
    ui->Player1Bar->setRange(0,gameTime);
    ui->player2Bar->setRange(0,gameTime);
    ui->Player1Bar->setValue(gameTime);
    ui->player2Bar->setValue(gameTime);

    //Ajastin
    timer = new QTimer(this);

    connect(timer,
            QTimer::timeout,
            this,
            &MainWindow::updateProgressBar);
    timer->setInterval(1000);
    timer->start();
}

void MainWindow::updateProgressBar()
{
    if (currentPlayer == 1) {
        p1Time--;
        ui->Player1Bar->setValue(p1Time);

        if (p1Time == 0) {
            ui->Winner->setText("Pelaaja 2 voitti");
            ui->Winner->setAlignment(Qt::AlignCenter);
            cout << "Pelaaja 2 voitti" << endl;
        }
    } else {
        p2Time--;
        ui->player2Bar->setValue(p2Time);
        if (p2Time == 0) {

            ui->Winner->setText("Pelaaja 1 voitti");
            ui->Winner->setAlignment(Qt::AlignCenter);
            cout << "Pelaaja 1 voitti" << endl;
        }
    }

}


void MainWindow::on_p1End_clicked()
{
    currentPlayer = 2;
}


void MainWindow::on_p2End_clicked()
{
    currentPlayer = 1;
}





void MainWindow::on_Stop_clicked()
{
    connect(ui->Stop,&QPushButton::clicked,this,&MainWindow::on_Stop_clicked);

    timer->stop();

    ui->Winner->setText("Peli pysäytetty");
    ui->Winner->setAlignment(Qt::AlignCenter);

}


void MainWindow::on_gameTime2_clicked()
{
    gameTime = 120;
    p1Time = gameTime;
    p2Time = gameTime;
    currentPlayer = 1;
}


void MainWindow::on_gameTime5_clicked()
{
    gameTime = 300;
    p1Time = gameTime;
    p2Time = gameTime;
    currentPlayer = 1;
}


void MainWindow::on_Reset_clicked()
{
    connect (ui->Reset, &QPushButton::clicked,this,&MainWindow::on_Reset_clicked);

    timer->stop();

    p1Time = gameTime;
    p2Time = gameTime;
    currentPlayer = 1;

    ui->Player1Bar->setValue(gameTime);
    ui->player2Bar->setValue(gameTime);

    ui->Winner->clear();
}





void MainWindow::on_Resume_clicked()
{
    connect(ui->Resume,&QPushButton::clicked, this, &MainWindow::on_Resume_clicked);

    timer->start();
    ui->Winner->clear();
}

