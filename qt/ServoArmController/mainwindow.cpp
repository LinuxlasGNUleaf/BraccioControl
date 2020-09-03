#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QThread"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect_to_serial();
}

void MainWindow::updatePositions(){
    if (task_finished or !ui->waitForResponse->isChecked()){
        task_finished=false;
        QString payload = createPayloadString();
        transmitCommand(payload);
    }
}

QString MainWindow::createPayloadString(){
    return QString::asprintf("%03d%03d%03d%03d%03d%03d%03d", servo_values[0], servo_values[1], servo_values[2], servo_values[3], servo_values[4], servo_values[5], servo_values[6]);;
}

void MainWindow::onReadyRead(){
    QByteArray bytes;
    int a = port->bytesAvailable();
    bytes.resize(a);
    port->read(bytes.data(), bytes.size());
    if (bytes.toInt() == 1){
        task_finished = true;
        ui->statusbar->showMessage("Robot finished action.", 2000);
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::transmitCommand(QString payload)
{
    QByteArray buffer = payload.toUtf8();
    port->write(buffer);
}

void MainWindow::on_axis1_slider_sliderMoved(int position)
{
    position *= 5;
    ui->axis1_box->setValue(position);
    servo_values[1] = position;
}

void MainWindow::on_axis1_box_valueChanged(int position)
{
    ui->axis1_slider->setValue(position/5);
    servo_values[1] = position;
    updatePositions();
}
void MainWindow::on_axis2_slider_sliderMoved(int position)
{
    position *= 5;
    ui->axis2_box->setValue(position);
    servo_values[2] = position;
    updatePositions();
}

void MainWindow::on_axis2_box_valueChanged(int position)
{
    ui->axis2_slider->setValue(position/5);
    servo_values[2] = position;
    updatePositions();
}

void MainWindow::on_axis3_slider_sliderMoved(int position)
{
    position *= 5;
    ui->axis3_box->setValue(position);
    servo_values[3] = position;
    updatePositions();
}

void MainWindow::on_axis3_box_valueChanged(int position)
{
    ui->axis3_slider->setValue(position/5);
    servo_values[3] = position;
    updatePositions();
}

void MainWindow::on_axis4_slider_sliderMoved(int position)
{
    position *= 5;
    ui->axis4_box->setValue(position);
    servo_values[4] = position;
    updatePositions();
}

void MainWindow::on_axis4_box_valueChanged(int position)
{
    ui->axis4_slider->setValue(position/5);
    servo_values[4] = position;
    updatePositions();
}

void MainWindow::on_axis5_slider_sliderMoved(int position)
{
    position *= 5;
    ui->axis5_box->setValue(position);
    servo_values[5] = position;
    updatePositions();
}

void MainWindow::on_axis5_box_valueChanged(int position)
{
    ui->axis5_slider->setValue(position/5);
    servo_values[5] = position;
    updatePositions();
}

void MainWindow::on_claw_close_clicked()
{
    servo_values[6] = claw_pos * (ui->claw_pos_box->value() / 100.0);
    updatePositions();
}

void MainWindow::on_claw_open_clicked()
{
    servo_values[6] = 10;
    updatePositions();
}

void MainWindow::on_speed_slider_sliderMoved(int position)
{
    servo_values[0] = position;
    ui->speed_box->setValue(position);
    updatePositions();
}

void MainWindow::on_speed_box_valueChanged(int position)
{
    servo_values[0] = position;
    ui->speed_slider->setValue(position);
    updatePositions();
}

void MainWindow::on_claw_pos_box_valueChanged(int position)
{
    servo_values[6] = claw_pos * (position / 100.0);
    updatePositions();
}

void MainWindow::on_update_robot_clicked()
{
    updatePositions();
}

void MainWindow::on_add_waypoint_clicked()
{
    QString waypoints = ui->textEdit->toPlainText();
    if (waypoints != "")
        waypoints += ",\n";
    waypoints += "\""+createPayloadString()+"\"";
    ui->textEdit->setText(waypoints);
    ui->statusbar->showMessage("Waypoint added!",2000);
}

void MainWindow::on_copy_Waypoints_clicked()
{
    QClipboard *clipboard = QGuiApplication::clipboard();

    clipboard->setText(ui->textEdit->toPlainText(), QClipboard::Clipboard);

    if (clipboard->supportsSelection()) {
        clipboard->setText(ui->textEdit->toPlainText(), QClipboard::Selection);
    }
    #if defined(Q_OS_LINUX)
        QThread::msleep(1);
    #endif
    ui->statusbar->showMessage("Waypoints copied to clipboard!",2000);
}

void MainWindow::on_remove_last_waypoint_clicked()
{
    QString waypoints = ui->textEdit->toPlainText();
    int pos = waypoints.lastIndexOf(QChar(','));
    if (pos >= 0)
        waypoints = waypoints.left(pos);
    else
        waypoints = "";
    ui->textEdit->setText(waypoints);
}

void MainWindow::home_all_axis(){
    for (int i = 0; i < 7; i++){
        servo_values[i] = original_values[i];
    }
    ui->axis1_box->setValue(servo_values[1]);
    ui->axis2_box->setValue(servo_values[2]);
    ui->axis3_box->setValue(servo_values[3]);
    ui->axis4_box->setValue(servo_values[4]);
    ui->axis5_box->setValue(servo_values[5]);
    ui->axis1_slider->setValue(servo_values[1]/5);
    ui->axis2_slider->setValue(servo_values[2]/5);
    ui->axis3_slider->setValue(servo_values[3]/5);
    ui->axis4_slider->setValue(servo_values[4]/5);
    ui->axis5_slider->setValue(servo_values[5]/5);

    updatePositions();
}

void MainWindow::on_resetRobot_clicked()
{
    home_all_axis();
}

void MainWindow::on_reconnect_clicked()
{
    connect_to_serial();
}

void MainWindow::connect_to_serial()
{
    this->port = new QextSerialPort(ui->serial_port_box->text(), QextSerialPort::EventDriven);
    port->setBaudRate(BAUD9600);
    port->setFlowControl(FLOW_OFF);
    port->setParity(PAR_NONE);
    port->setDataBits(DATA_8);
    port->setStopBits(STOP_2);
    if (port->open(QIODevice::ReadWrite) == true) {
        ui->statusbar->showMessage("Connected successfully.");
        connect(port, SIGNAL(readyRead()), this, SLOT(onReadyRead()));
        home_all_axis();
    } else {
        ui->statusbar->showMessage("No Connection");
    }
}
