
const int X_PIN = A0;

const int Y_PIN = A1;

const int SW_PIN = 2;

const int Xmin_LED = 3;

const int Xmax_LED = 5;

const int Ymin_LED = 6;

const int Ymax_LED = 9;


int X_POS ;

int Y_POS ;

int SW_POS;

float OFFSET = 0.05;

int DUTY ;




void setup() {

  pinMode(X_PIN,INPUT);
  
  pinMode(Y_PIN,INPUT);
 
  pinMode(SW_PIN,INPUT_PULLUP);


  pinMode(X_min_LED,OUTPUT);

  pinMode(X_mix_LED,OUTPUT);

  pinMode(Ymin_LED,OUTPUT);

  pinMode(Ymix,OUTPUT);


  pinMode(SW_PIN,OUTPUT);

  Serial.begin(9600);
  

}

void loop() {

  X_POS = analogRead(X_PIN);

  Y_POS = analogRead(Y_PIN);

  SW_POS = digitalRead(SW_PIN);


  if((SW_P

  






  

}