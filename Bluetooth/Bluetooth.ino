#include <SoftwareSerial.h>

SoftwareSerial BTserial(2, 3);

int BTint = 0;
int SW = 1;

void setup()
{
    pinMode(13, OUTPUT);
    pinMode(7, INPUT_PULLUP);

    BTserial.begin(9600);
}

void loop()
{

    if (BTserial.available())//もし、Bluetoothが利用可能ならば
    {
        BTint = BTserial.read();

        if (BTint == '1')
        {
            digitalWrite(13, HIGH);
        }
        else if (BTint == '0')
        {
            digitalWrite(13, LOW);
        }
    }

    SW = digitalRead(7);
    if (SW == HIGH)
    {
        BTserial.println("SW 0FF");
    }
    else if (SW == LOW)
    {
        BTserial.println("SW ON");
    }
    delay(200);
}
