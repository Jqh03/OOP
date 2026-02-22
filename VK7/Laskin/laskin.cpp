#include "laskin.h"
#include "ui_laskin.h"

Laskin::Laskin(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Laskin)
{
    ui->setupUi(this);
}

Laskin::~Laskin()
{
    delete ui;
}



void Laskin::on_PlusButton_clicked()
{
    //Laskutoimitus vain jos tila on 2
    if (tila == 1) {
    //Haetaan luku 1
    QString n1= ui->Num1Edit->text();
    num1 = n1.toInt();
    //Haetaan luku 2
    QString n2= ui->Num2Edit->text();
    num2 = n2.toInt();
    //lasketaan tulos
    qDebug() << num1 << " + " << num2;
    result = num1 + num2;
    //kirjoitetaan takaisin edittiin
    QString r = QString::number(result);
    ui->ResultEdit->setText(r);
    //Palauttaa alkutilaan
    tila = 0;
    }
}


void Laskin::on_MinusButton_clicked()
{   //Lasku vain kun tila on 2
    if (tila == 1) {
    //Haetaan luku 1
    QString n1= ui->Num1Edit->text();
    num1 = n1.toInt();
    //Haetaan luku 2
    QString n2= ui->Num2Edit->text();
    num2 = n2.toInt();
    //lasketaan tulos
    qDebug() << num1 << " - " << num2;
    result = num1 - num2;
    //kirjoitetaan takaisin edittiin
    QString r = QString::number(result);
    ui->ResultEdit->setText(r);
    //Palautetaan alkutilaan
    tila = 0;
    }

}


void Laskin::on_KerroButton_clicked()
{   //Haetaan luku 1
    QString n1= ui->Num1Edit->text();
    num1 = n1.toInt();
    //Haetaan luku 2
    QString n2= ui->Num2Edit->text();
    num2 = n2.toInt();
    //lasketaan tulos
    qDebug() << num1 << " * " << num2;
    result = num1 * num2;
    //kirjoitetaan takaisin edittiin
    QString r = QString::number(result);
    ui->ResultEdit->setText(r);

}



void Laskin::on_n1Button_clicked()
{
    setEditNum(1);

}


void Laskin::on_n2Button_clicked()
{
    setEditNum(2);
}

void Laskin::on_n3Button_clicked()
{
    setEditNum(3);
}
void Laskin::on_EnterButton_clicked()
{
    qDebug() << "Nykyinen tila " << tila;
    //tilasta 0 -> tilaan 1
    if (tila == 0) {
        tila = 1;


    } else {
        qDebug() << "Vaara tila";
    }
    qDebug() << "Uusitila " << tila;
}

void Laskin::setEditNum(int num)
{
    QString lukuNyt;
    if (tila == 0) {
        //tila 0: kirjoitetaan uusi
        qDebug() << "Tila 0: kirjoitetaan num 1 ";
        lukuNyt = ui->Num1Edit->text();
        lukuNyt = lukuNyt + QString::number(num);
        ui->Num1Edit->setText(lukuNyt);

    } else if (tila == 1) {
        qDebug() << "Tila 1: kirjoitetaan num 2";
        // tila 1: kirjoitetaan num2
        lukuNyt = ui->Num2Edit->text();
        lukuNyt = lukuNyt + QString::number(num);
        ui->Num2Edit->setText(lukuNyt);


    }

}


void Laskin::on_clearButton_clicked()
{
    ui->Num1Edit->clear();
    ui->Num2Edit->clear();
    ui->ResultEdit->clear();
    //clearissa aina alkutila
    tila = 0;
    qDebug() <<"Clearissa palattiin alkutilaan";
}


void Laskin::on_num4Button_clicked()
{
    setEditNum(4);
}


void Laskin::on_num5Button_clicked()
{
    setEditNum(5);
}


void Laskin::on_num6Button_clicked()
{
    setEditNum(6);
}


void Laskin::on_num7Button_clicked()
{
    setEditNum(7);
}


void Laskin::on_num8Button_clicked()
{
    setEditNum(8);
}


void Laskin::on_num9Button_clicked()
{
    setEditNum(9);
}


void Laskin::on_divideButtom_clicked()
{   //Haetaan luku 1
    QString n1= ui->Num1Edit->text();
    num1 = n1.toInt();
    //Haetaan luku 2
    QString n2= ui->Num2Edit->text();
    num2 = n2.toInt();
    //lasketaan tulos
    qDebug() << num1 << " / " << num2;
    result = num1 / num2;
    //kirjoitetaan takaisin edittiin
    QString r = QString::number(result);
    ui->ResultEdit->setText(r);

}


void Laskin::on_num0Button_clicked()
{
    setEditNum(0);
}

