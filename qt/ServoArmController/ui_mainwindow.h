/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_7;
    QVBoxLayout *control_panel;
    QLabel *label_2;
    QLabel *axis1_label;
    QHBoxLayout *axis1;
    QSlider *axis1_slider;
    QSpinBox *axis1_box;
    QLabel *axis2_label;
    QHBoxLayout *axis2;
    QSlider *axis2_slider;
    QSpinBox *axis2_box;
    QLabel *axis3_label;
    QHBoxLayout *axis3;
    QSlider *axis3_slider;
    QSpinBox *axis3_box;
    QLabel *axis4_label;
    QHBoxLayout *axis4;
    QSlider *axis4_slider;
    QSpinBox *axis4_box;
    QLabel *axis5_label;
    QHBoxLayout *axis5;
    QSlider *axis5_slider;
    QSpinBox *axis5_box;
    QLabel *claw_label;
    QVBoxLayout *claw_control;
    QHBoxLayout *claw_pos;
    QLabel *claw_pos_label;
    QSpinBox *claw_pos_box;
    QHBoxLayout *claw_control_buttons;
    QPushButton *claw_open;
    QPushButton *claw_close;
    QPushButton *resetRobot;
    QLabel *speed_label;
    QHBoxLayout *speed;
    QSlider *speed_slider;
    QSpinBox *speed_box;
    QPushButton *update_robot;
    QVBoxLayout *waypoint_panel;
    QLabel *label;
    QTextEdit *textEdit;
    QHBoxLayout *waypoint_control;
    QPushButton *add_waypoint;
    QPushButton *remove_last_waypoint;
    QPushButton *copy_Waypoints;
    QLabel *serial_port_label;
    QHBoxLayout *horizontalLayout;
    QLineEdit *serial_port_box;
    QPushButton *reconnect;
    QCheckBox *waitForResponse;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1010, 650);
        MainWindow->setMinimumSize(QSize(1010, 650));
        MainWindow->setMaximumSize(QSize(1010, 800));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout_7 = new QHBoxLayout(centralwidget);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        control_panel = new QVBoxLayout();
        control_panel->setObjectName(QString::fromUtf8("control_panel"));
        control_panel->setContentsMargins(0, -1, -1, -1);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font;
        font.setPointSize(20);
        label_2->setFont(font);

        control_panel->addWidget(label_2);

        axis1_label = new QLabel(centralwidget);
        axis1_label->setObjectName(QString::fromUtf8("axis1_label"));

        control_panel->addWidget(axis1_label);

        axis1 = new QHBoxLayout();
        axis1->setObjectName(QString::fromUtf8("axis1"));
        axis1_slider = new QSlider(centralwidget);
        axis1_slider->setObjectName(QString::fromUtf8("axis1_slider"));
        axis1_slider->setMaximum(36);
        axis1_slider->setSingleStep(1);
        axis1_slider->setValue(18);
        axis1_slider->setOrientation(Qt::Horizontal);
        axis1_slider->setTickPosition(QSlider::TicksAbove);
        axis1_slider->setTickInterval(1);

        axis1->addWidget(axis1_slider);

        axis1_box = new QSpinBox(centralwidget);
        axis1_box->setObjectName(QString::fromUtf8("axis1_box"));
        axis1_box->setMaximum(180);
        axis1_box->setValue(90);

        axis1->addWidget(axis1_box);


        control_panel->addLayout(axis1);

        axis2_label = new QLabel(centralwidget);
        axis2_label->setObjectName(QString::fromUtf8("axis2_label"));

        control_panel->addWidget(axis2_label);

        axis2 = new QHBoxLayout();
        axis2->setObjectName(QString::fromUtf8("axis2"));
        axis2_slider = new QSlider(centralwidget);
        axis2_slider->setObjectName(QString::fromUtf8("axis2_slider"));
        axis2_slider->setMaximum(36);
        axis2_slider->setValue(18);
        axis2_slider->setOrientation(Qt::Horizontal);
        axis2_slider->setTickPosition(QSlider::TicksAbove);
        axis2_slider->setTickInterval(1);

        axis2->addWidget(axis2_slider);

        axis2_box = new QSpinBox(centralwidget);
        axis2_box->setObjectName(QString::fromUtf8("axis2_box"));
        axis2_box->setMaximum(180);
        axis2_box->setValue(90);

        axis2->addWidget(axis2_box);


        control_panel->addLayout(axis2);

        axis3_label = new QLabel(centralwidget);
        axis3_label->setObjectName(QString::fromUtf8("axis3_label"));

        control_panel->addWidget(axis3_label);

        axis3 = new QHBoxLayout();
        axis3->setObjectName(QString::fromUtf8("axis3"));
        axis3->setContentsMargins(-1, 0, -1, -1);
        axis3_slider = new QSlider(centralwidget);
        axis3_slider->setObjectName(QString::fromUtf8("axis3_slider"));
        axis3_slider->setMaximum(36);
        axis3_slider->setValue(18);
        axis3_slider->setOrientation(Qt::Horizontal);
        axis3_slider->setTickPosition(QSlider::TicksAbove);
        axis3_slider->setTickInterval(1);

        axis3->addWidget(axis3_slider);

        axis3_box = new QSpinBox(centralwidget);
        axis3_box->setObjectName(QString::fromUtf8("axis3_box"));
        axis3_box->setMaximum(180);
        axis3_box->setValue(90);

        axis3->addWidget(axis3_box);


        control_panel->addLayout(axis3);

        axis4_label = new QLabel(centralwidget);
        axis4_label->setObjectName(QString::fromUtf8("axis4_label"));

        control_panel->addWidget(axis4_label);

        axis4 = new QHBoxLayout();
        axis4->setObjectName(QString::fromUtf8("axis4"));
        axis4->setContentsMargins(-1, -1, -1, 0);
        axis4_slider = new QSlider(centralwidget);
        axis4_slider->setObjectName(QString::fromUtf8("axis4_slider"));
        axis4_slider->setMaximum(36);
        axis4_slider->setValue(18);
        axis4_slider->setOrientation(Qt::Horizontal);
        axis4_slider->setTickPosition(QSlider::TicksAbove);
        axis4_slider->setTickInterval(1);

        axis4->addWidget(axis4_slider);

        axis4_box = new QSpinBox(centralwidget);
        axis4_box->setObjectName(QString::fromUtf8("axis4_box"));
        axis4_box->setMaximum(180);
        axis4_box->setValue(90);

        axis4->addWidget(axis4_box);


        control_panel->addLayout(axis4);

        axis5_label = new QLabel(centralwidget);
        axis5_label->setObjectName(QString::fromUtf8("axis5_label"));

        control_panel->addWidget(axis5_label);

        axis5 = new QHBoxLayout();
        axis5->setObjectName(QString::fromUtf8("axis5"));
        axis5->setContentsMargins(-1, 0, -1, -1);
        axis5_slider = new QSlider(centralwidget);
        axis5_slider->setObjectName(QString::fromUtf8("axis5_slider"));
        axis5_slider->setMaximum(36);
        axis5_slider->setValue(18);
        axis5_slider->setOrientation(Qt::Horizontal);
        axis5_slider->setTickPosition(QSlider::TicksAbove);
        axis5_slider->setTickInterval(1);

        axis5->addWidget(axis5_slider);

        axis5_box = new QSpinBox(centralwidget);
        axis5_box->setObjectName(QString::fromUtf8("axis5_box"));
        axis5_box->setMaximum(180);
        axis5_box->setValue(90);

        axis5->addWidget(axis5_box);


        control_panel->addLayout(axis5);

        claw_label = new QLabel(centralwidget);
        claw_label->setObjectName(QString::fromUtf8("claw_label"));

        control_panel->addWidget(claw_label);

        claw_control = new QVBoxLayout();
        claw_control->setObjectName(QString::fromUtf8("claw_control"));
        claw_control->setContentsMargins(-1, 0, -1, -1);
        claw_pos = new QHBoxLayout();
        claw_pos->setObjectName(QString::fromUtf8("claw_pos"));
        claw_pos->setContentsMargins(-1, 0, -1, -1);
        claw_pos_label = new QLabel(centralwidget);
        claw_pos_label->setObjectName(QString::fromUtf8("claw_pos_label"));

        claw_pos->addWidget(claw_pos_label);

        claw_pos_box = new QSpinBox(centralwidget);
        claw_pos_box->setObjectName(QString::fromUtf8("claw_pos_box"));
        claw_pos_box->setMaximum(100);
        claw_pos_box->setValue(100);

        claw_pos->addWidget(claw_pos_box);


        claw_control->addLayout(claw_pos);

        claw_control_buttons = new QHBoxLayout();
        claw_control_buttons->setObjectName(QString::fromUtf8("claw_control_buttons"));
        claw_open = new QPushButton(centralwidget);
        claw_open->setObjectName(QString::fromUtf8("claw_open"));

        claw_control_buttons->addWidget(claw_open);

        claw_close = new QPushButton(centralwidget);
        claw_close->setObjectName(QString::fromUtf8("claw_close"));

        claw_control_buttons->addWidget(claw_close);


        claw_control->addLayout(claw_control_buttons);


        control_panel->addLayout(claw_control);

        resetRobot = new QPushButton(centralwidget);
        resetRobot->setObjectName(QString::fromUtf8("resetRobot"));

        control_panel->addWidget(resetRobot);

        speed_label = new QLabel(centralwidget);
        speed_label->setObjectName(QString::fromUtf8("speed_label"));

        control_panel->addWidget(speed_label);

        speed = new QHBoxLayout();
        speed->setObjectName(QString::fromUtf8("speed"));
        speed_slider = new QSlider(centralwidget);
        speed_slider->setObjectName(QString::fromUtf8("speed_slider"));
        speed_slider->setMinimum(10);
        speed_slider->setMaximum(30);
        speed_slider->setValue(20);
        speed_slider->setOrientation(Qt::Horizontal);
        speed_slider->setTickPosition(QSlider::TicksAbove);
        speed_slider->setTickInterval(1);

        speed->addWidget(speed_slider);

        speed_box = new QSpinBox(centralwidget);
        speed_box->setObjectName(QString::fromUtf8("speed_box"));
        speed_box->setValue(20);

        speed->addWidget(speed_box);


        control_panel->addLayout(speed);

        update_robot = new QPushButton(centralwidget);
        update_robot->setObjectName(QString::fromUtf8("update_robot"));

        control_panel->addWidget(update_robot);


        horizontalLayout_7->addLayout(control_panel);

        waypoint_panel = new QVBoxLayout();
        waypoint_panel->setObjectName(QString::fromUtf8("waypoint_panel"));
        waypoint_panel->setContentsMargins(10, -1, -1, 0);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);

        waypoint_panel->addWidget(label);

        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        waypoint_panel->addWidget(textEdit);

        waypoint_control = new QHBoxLayout();
        waypoint_control->setObjectName(QString::fromUtf8("waypoint_control"));
        waypoint_control->setContentsMargins(-1, 0, -1, -1);
        add_waypoint = new QPushButton(centralwidget);
        add_waypoint->setObjectName(QString::fromUtf8("add_waypoint"));

        waypoint_control->addWidget(add_waypoint);

        remove_last_waypoint = new QPushButton(centralwidget);
        remove_last_waypoint->setObjectName(QString::fromUtf8("remove_last_waypoint"));

        waypoint_control->addWidget(remove_last_waypoint);

        copy_Waypoints = new QPushButton(centralwidget);
        copy_Waypoints->setObjectName(QString::fromUtf8("copy_Waypoints"));

        waypoint_control->addWidget(copy_Waypoints);


        waypoint_panel->addLayout(waypoint_control);

        serial_port_label = new QLabel(centralwidget);
        serial_port_label->setObjectName(QString::fromUtf8("serial_port_label"));
        QFont font1;
        font1.setPointSize(12);
        serial_port_label->setFont(font1);
        serial_port_label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        waypoint_panel->addWidget(serial_port_label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 10, -1, -1);
        serial_port_box = new QLineEdit(centralwidget);
        serial_port_box->setObjectName(QString::fromUtf8("serial_port_box"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(serial_port_box->sizePolicy().hasHeightForWidth());
        serial_port_box->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(serial_port_box);

        reconnect = new QPushButton(centralwidget);
        reconnect->setObjectName(QString::fromUtf8("reconnect"));

        horizontalLayout->addWidget(reconnect);

        waitForResponse = new QCheckBox(centralwidget);
        waitForResponse->setObjectName(QString::fromUtf8("waitForResponse"));
        waitForResponse->setChecked(true);
        waitForResponse->setTristate(false);

        horizontalLayout->addWidget(waitForResponse);


        waypoint_panel->addLayout(horizontalLayout);


        horizontalLayout_7->addLayout(waypoint_panel);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1010, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Control Menu", nullptr));
        axis1_label->setText(QCoreApplication::translate("MainWindow", "Axis 1 Control", nullptr));
        axis2_label->setText(QCoreApplication::translate("MainWindow", "Axis 2 Control", nullptr));
        axis3_label->setText(QCoreApplication::translate("MainWindow", "Axis 3 Control", nullptr));
        axis4_label->setText(QCoreApplication::translate("MainWindow", "Axis 4 Control", nullptr));
        axis5_label->setText(QCoreApplication::translate("MainWindow", "Axis 5 Control", nullptr));
        claw_label->setText(QCoreApplication::translate("MainWindow", "Claw Control", nullptr));
        claw_pos_label->setText(QCoreApplication::translate("MainWindow", "Claw Position Closed (in %)", nullptr));
        claw_open->setText(QCoreApplication::translate("MainWindow", "Open Claw", nullptr));
        claw_close->setText(QCoreApplication::translate("MainWindow", "Close Claw", nullptr));
        resetRobot->setText(QCoreApplication::translate("MainWindow", "Reset Robot", nullptr));
        speed_label->setText(QCoreApplication::translate("MainWindow", "Movement Speed", nullptr));
        update_robot->setText(QCoreApplication::translate("MainWindow", "Update Robot", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Waypoint Menu", nullptr));
        add_waypoint->setText(QCoreApplication::translate("MainWindow", "Add Waypoint", nullptr));
        remove_last_waypoint->setText(QCoreApplication::translate("MainWindow", "Remove Last Waypoint", nullptr));
        copy_Waypoints->setText(QCoreApplication::translate("MainWindow", "Copy Waypoints", nullptr));
        serial_port_label->setText(QCoreApplication::translate("MainWindow", "Serial Port:", nullptr));
        serial_port_box->setText(QCoreApplication::translate("MainWindow", "/dev/ttyACM0", nullptr));
        reconnect->setText(QCoreApplication::translate("MainWindow", "Reconnect", nullptr));
        waitForResponse->setText(QCoreApplication::translate("MainWindow", "Wait for response", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
