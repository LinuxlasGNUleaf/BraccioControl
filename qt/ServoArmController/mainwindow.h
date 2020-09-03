#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <qextserialport.h>
#include "QClipboard"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow: public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_axis1_slider_sliderMoved(int position);
    void on_axis1_box_valueChanged(int arg1);
    void on_axis2_slider_sliderMoved(int position);
    void on_axis2_box_valueChanged(int arg1);
    void on_axis3_slider_sliderMoved(int position);
    void on_axis3_box_valueChanged(int arg1);
    void on_axis4_slider_sliderMoved(int position);
    void on_axis4_box_valueChanged(int arg1);
    void on_axis5_slider_sliderMoved(int position);
    void on_axis5_box_valueChanged(int arg1);
    void on_claw_close_clicked();
    void on_claw_open_clicked();
    void on_speed_slider_sliderMoved(int position);
    void on_speed_box_valueChanged(int arg1);
    void on_claw_pos_box_valueChanged(int arg1);
    void onReadyRead();
    void transmitCommand(QString arg1);
    void updatePositions();
    void on_update_robot_clicked();
    QString createPayloadString();
    void on_add_waypoint_clicked();
    void on_copy_Waypoints_clicked();
    void on_remove_last_waypoint_clicked();
    void home_all_axis();
    void on_resetRobot_clicked();
    void on_reconnect_clicked();
    void connect_to_serial();

private:
    Ui::MainWindow *ui;
    // Syntax: speed, a1, a2, a3, a4, a5, gripper
    int servo_values[7];
    int original_values[7] = {20,90,90,90,90,90,10};
    int claw_pos = 73;
    bool task_finished;
    QextSerialPort *port;
};
#endif // MAINWINDOW_H
