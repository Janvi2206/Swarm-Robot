////#include <VirtualWire.h>
//#include <SoftwareSerial.h>
//char t;
//SoftwareSerial mySerial(5,6);
//
////char *data;
//
//void setup ()
//{
//  pinMode (13, OUTPUT); //left motors forward
//  pinMode (12, OUTPUT); //left motors reverse
//  pinMode (11, OUTPUT); //right motors forward
//  pinMode (10, OUTPUT); //right motors reverse
//
//  Serial.begin(9600);
//
////  vw_set_tx_pin (3);
////  vw_setup (2000);
//mySerial.begin(9600);
//
////  pinMode(13, LOW);
////  pinMode(12, LOW);
////  pinMode(11, LOW);
////  pinMode(10, LOW);
//}
//
//void loop()
//{
//  if(Serial.available())
//  {
//    t = Serial.read();
//    Serial.println(t);
//    mySerial.println(t);
//  }
//
//  if(t == 'F')
//  {
//    data="f";
////    vw_send((uint8_t *)data, strlen (data));
////    vw_wait_tx();
//    digitalWrite (11, HIGH);
//    digitalWrite (13, HIGH);
//  }
//  else if (t =='G')
//  {
////    data="g";
////    vw_send((uint8_t *)data, strlen (data));
////    vw_wait_tx();
//    digitalWrite (12, HIGH);
//    digitalWrite (11, HIGH);
//  }
//  else if(t == 'L') 
//  {
////    data="l";
////    vw_send((uint8_t *)data, strlen (data));
////    vw_wait_tx();
//    digitalWrite (11, HIGH); //turn left (right side motors rotate in forward direction, left side motors doesn't rotate)
//  }
//  else if(t == 'R') 
//  {
////    data="r";
////    vw_send((uint8_t *)data, strlen (data));
////    vw_wait_tx();//turn right (left side motors rotate in forward direction, right side motors doesn't rotate)
//    digitalWrite (13, HIGH);
//  }
//  else if(t == 'S') 
//  {
////    data="s";
////    vw_send((uint8_t *)data, strlen (data));
////    vw_wait_tx();//STOP (all motors stop)
//    digitalWrite (11, LOW);
//    digitalWrite (12, LOW);
//    digitalWrite (13, LOW);
//  }
//}
#include <SoftwareSerial.h>

SoftwareSerial bluetooth(2, 3);  // RX, TX pins for Bluetooth module

void setup() {
  // Set up Bluetooth communication
  bluetooth.begin(9600);
}

void loop() {
  // Collect and send movement commands to other robots
  String command = "";  // Placeholder for movement command
  
  // Example: Sending "FORWARD" command
  command = "FORWARD";
  
  bluetooth.println(command);
  
  // Delay for a short period before repeating the loop
  delay(1000);
}
