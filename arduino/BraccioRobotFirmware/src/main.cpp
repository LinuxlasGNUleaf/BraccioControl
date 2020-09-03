#include <Braccio.h>
#include <Servo.h>

String readString, s_servo[6];

/* Non braccio
Servo servo1; 
Servo servo2;
Servo servo3;
Servo servo4;
Servo servo5;
Servo servo6;
*/

Servo base;
Servo shoulder;
Servo elbow;
Servo wrist_rot;
Servo wrist_ver;
Servo gripper;

int message_values[7];
int angles[7] = {20, 90, 90, 90, 90, 90, 10};
int angles_old[7] = {20, 90, 90, 90, 90, 90, 10};
unsigned long old_time = 0;
unsigned long cooldown = 500;

int mspeed;
int a1;
int a2;
int a3;
int a4;
int a5;
int a6;

int mspeed_old;
int a1_old;
int a2_old;
int a3_old;
int a4_old;
int a5_old;
int a6_old;

void setup()
{
  Serial.begin(9600);
  Braccio.begin();

  /* Non braccio
  servo1.attach(6);  //the pin for the servo control 
  servo2.attach(7);
  */

  Serial.println(1); // so I can keep track of what is loaded
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

    //write changes to angles_old
    for (int i = 0; i < 7; i++)
      angles_old[i] = angles[i];

    //move the robot
    Braccio.ServoMovement(angles[0], angles[1], angles[2], angles[3], angles[4], angles[5], angles[6]);
    delay(100);
    //send confirmation
    Serial.print(1);
  }
}
