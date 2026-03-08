#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_3_clicked();
    void updateProgressBar();
    void on_p1End_clicked();

    void on_p2End_clicked();



    void on_Stop_clicked();

    void on_gameTime2_clicked();

    void on_gameTime5_clicked();

    void on_Reset_clicked();



    void on_Resume_clicked();

private:
    Ui::MainWindow *ui;
    int p1Time;
    int p2Time;
    int currentPlayer = 1;
    int gameTime = 0;
    QTimer *timer = nullptr;
};
#endif // MAINWINDOW_H
