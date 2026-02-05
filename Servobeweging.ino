#include <Servo.h>

int pmd = 0;
int plastic = 0;
int niks = 0;
int karton = 0;

Servo baseservo;
Servo rolservo;
Servo secondservo;

int startpos = 90;

void setup() {
  // put your setup code here, to run once:
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  pinMode(A2, INPUT);
  pinMode(A3, INPUT);
  Serial.begin(9600);
  baseservo.attach(9);
  rolservo.attach(3);
  secondservo.attach(2);

}

void loop() {
  // put your main code here, to run repeatedly:
  pmd = analogRead(A0);
  Serial.println(pmd);
  plastic = analogRead(A1);
  Serial.println(plastic);
  niks = analogRead(A2);
  Serial.println(niks);
  karton = analogRead(A3);
  Serial.println(karton);


   // verander getal afhankelijk van testen

  if (pmd >= 70){

    baseservo.write(145);
    delay(2000);
    rolservo.write(145);
    secondservo.write(145);
    delay(2000);
    baseservo.write(startpos);
    delay(1000);
    rolservo.write(startpos);
    secondservo.write(startpos);
    
  }
   // verander getal afhankelijk van testen

  if (plastic >= 70){

    baseservo.write(90);
    delay(2000);
    rolservo.write(145);
    secondservo.write(145);
    delay(2000);
    baseservo.write(startpos);
    delay(1000);
    rolservo.write(startpos);
    secondservo.write(startpos);

  }
   // verander getal afhankelijk van testen
  
  if (niks >= 70){

    baseservo.write(startpos);
    delay(1000);
    rolservo.write(startpos);
    secondservo.write(startpos);
    delay(1000);
  }


  // verander getal afhankelijk van testen

  if (karton >= 70){

    baseservo.write(45);
    delay(2000);
    rolservo.write(145);
    secondservo.write(145);
    delay(2000);
    baseservo.write(startpos);
    delay(1000);
    rolservo.write(startpos);
    secondservo.write(startpos);

  }
}
