#ifndef LASKIN_H
#define LASKIN_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class Laskin;
}
QT_END_NAMESPACE

class Laskin : public QMainWindow
{
    Q_OBJECT

public:
    Laskin(QWidget *parent = nullptr);
    ~Laskin();

    void setEditNum(int num);

    int tila = 0;

private slots:
    void on_PlusButton_clicked();

    void on_MinusButton_clicked();

    void on_KerroButton_clicked();

    void on_n3Button_clicked();

    void on_n1Button_clicked();

    void on_n2Button_clicked();

    void on_EnterButton_clicked();

    void on_clearButton_clicked();

    void on_num4Button_clicked();

    void on_num5Button_clicked();

    void on_num6Button_clicked();

    void on_num7Button_clicked();

    void on_num8Button_clicked();

    void on_num9Button_clicked();

    void on_divideButtom_clicked();

    void on_num0Button_clicked();

private:
    Ui::Laskin *ui;
    int num1;
    int num2;
    int result;
};
#endif // LASKIN_H
