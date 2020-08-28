#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include <QThread>
#include <unistd.h>
#include <generate.h>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    bool no_two_times=0;    //Флажочек Вкл/выкл
    QVector <double> XX;    // Векторы параметров абсцисс
    QVector <double> YY;    // Вектор параметров ординат

public slots:
    void plot(double x, double y);      // Слот, принимающий и отображающий данные

private slots:
    void on_StartButton_clicked();      //Слот Старта

    void on_StopButton_clicked();       //Слот Стопа

    void on_PauseButton_clicked();      //Слот паузы

signals:

private:
    Ui::MainWindow *ui;
    QThread *pMyThread;                 //Экземпляр потока
    Generate *pGen;                     //Экземпляр генератора
};
#endif // MAINWINDOW_H
