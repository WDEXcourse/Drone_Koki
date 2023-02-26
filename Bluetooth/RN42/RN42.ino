#include <SoftwareSerial.h>

#define tx 1
#define rx 0
#define led 13

// Bluetooth Serial

SoftwareSerial BTSerial(rx, tx);

int mode = 0;

void setup()
{ // Initialize  LED

    pinMode(led,OUTPUT);
    digitalWrite(led,LOW);

    // Initaializa Bluetooth Serial baud rate
    BTSerial.begin(115200);
}

void loop()
{
char c;

  //Store data
  if(BTSerial.available()){
    c = BTSerial.read();
  

  //Change mode
  switch(c){
    case '0':
      BTSerial.write("LED = disabled\n");
      mode = 0;
      break;
    case '1':
      BTSerial.write("LED = enabled\n");
      mode = 1;
      break;
  }
  }
  //Turn on or off LED
  switch(mode){
    case 0:
      digitalWrite(led,LOW);
      break;
    case 1:
      digitalWrite(led,HIGH);
      break;
  }
}