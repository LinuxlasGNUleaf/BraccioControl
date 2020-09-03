#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QDebug"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect_to_serial();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_paste_waypoints_clicked()
{

}

void MainWindow::on_run_waypoints_clicked()
{
    QString waypoints = ui->textEdit->toPlainText();
    QList<QString> result = waypoints.split(",\n");
    for (int i = 0; i < result.length(); i++){
        QString temp = result[i].simplified();
        transmitCommand(temp);
        QThread::msleep(1000);
        qDebug() << "|"+temp+"|";
    }
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

void MainWindow::transmitCommand(QString payload)
{
    QByteArray buffer = payload.toUtf8();
    port->write(buffer);
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
    } else {
        ui->statusbar->showMessage("No Connection");
    }
}

QString MainWindow::createPayloadString(){
    return QString::asprintf("%03d%03d%03d%03d%03d%03d%03d", servo_values[0], servo_values[1], servo_values[2], servo_values[3], servo_values[4], servo_values[5], servo_values[6]);;
}
