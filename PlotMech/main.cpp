#include "mainwindow.h"
#include <QApplication>
#include <thread>
#include <unistd.h>
int main(int argc, char *argv[])
{    

    QApplication a(argc, argv);         //тут все просто, стандартная форма.
    MainWindow w;
    w.show();
    return a.exec();
}
