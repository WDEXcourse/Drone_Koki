#include<Servo.h>
Servo myservo;


// 可変抵抗器に接続したピンの番号
int sensorPin = 0;
const int SV_PIN =6;
int LED =4;


void setup() {
 pinMode(LED,OUTPUT);
 myservo.attach(SV_PIN,500,2400);
  
  // シリアル通信の設定
 Serial.begin(9600);
}

void loop() {
 digitalWrite(4,HIGH);
  
  // 可変抵抗器に接続したピンの値を読取り
 int value = analogRead(sensorPin);

  // 0～1023の入力を0～255の範囲にスケーリング
  int angle = map(value, 0, 1023, 0, 180);

 myservo.write(angle);
  // シリアルモニタに書き込み
  Serial.println("value: ");
  Serial.println(value);
  Serial.println("角度: ");
  Serial.println(angle);

  // 適度な間隔でデータを送信するため、次のループ開始までに100ms待つ
 // delay(1000);

}
