#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <qextserialport.h>
#include <QThread>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_paste_waypoints_clicked();
    void connect_to_serial();
    void on_run_waypoints_clicked();
    QString createPayloadString();
    void onReadyRead();
    void transmitCommand(QString arg1);

private:
    Ui::MainWindow *ui;
    int servo_values[7];
    int original_values[7] = {20,90,90,90,90,90,10};
    bool task_finished = true;

    QextSerialPort *port;
};
#endif // MAINWINDOW_H
