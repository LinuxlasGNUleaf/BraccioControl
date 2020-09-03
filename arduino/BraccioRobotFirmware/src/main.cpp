#include <Braccio.h>
#include <Servo.h>

String readString, s_servo[6];

Servo base;
Servo shoulder;
Servo elbow;
Servo wrist_rot;
Servo wrist_ver;
Servo gripper;

int message_values[7];
int angles[7] = {20, 90, 90, 90, 90, 90, 10};

int mspeed;
int a1;
int a2;
int a3;
int a4;
int a5;
int a6;

void setup()
{
  Serial.begin(9600);
  Braccio.begin();
}

void loop()
{
  readString = "";
  while (readString.length() < 21)
  {
    delay(10);
    if (Serial.available() > 0)
    {
      char c = Serial.read(); //gets one byte from serial buffer
      readString += c;        //makes the string readString
    }
  }

  if (readString.length() > 0)
  {
    //Serial.println(readString); //see what was received
    for (int i = 0; i < 7; i++)
    {
      s_servo[i] = readString.substring(3 * i, 3 * i + 3);
      //Serial.println(s_servo[i]);

      char carray1[7];
      s_servo[i].toCharArray(carray1, sizeof(carray1));
      message_values[i] = atoi(carray1);

      angles[i] = message_values[i];
    }

    //move the robot
    Braccio.ServoMovement(angles[0], angles[1], angles[2], angles[3], angles[4], angles[5], angles[6]);
    delay(100);
  }
}
