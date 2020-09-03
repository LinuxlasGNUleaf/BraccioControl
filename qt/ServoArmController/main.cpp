#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setWindowTitle("ServoControl Teachin Tool by JaWs");
    w.show();
    return a.exec();
}
