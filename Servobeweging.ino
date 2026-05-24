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

  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  pinMode(A2, INPUT);
  pinMode(A3, INPUT);

  Serial.begin(9600);


  baseservo.attach(9);
  rolservo.attach(3);
  secondservo.attach(5);


  baseservo.write(startpos);
  rolservo.write(startpos);
  secondservo.write(startpos);

  Serial.println("Sensor test gestart...");
}


void loop() {

  // Sensorwaarden lezen
  pmd = analogRead(A0);
  plastic = analogRead(A1);
  niks = analogRead(A2);
  karton = analogRead(A3);


  Serial.print("A0 PMD: ");
  Serial.print(pmd);

  if (pmd >= 70) {
    Serial.print(" <-- ACTIEF");
  }

  Serial.print(" | A1 Plastic: ");
  Serial.print(plastic);

  if (plastic >= 400) {
    Serial.print(" <-- ACTIEF");
  }

  Serial.print(" | A2 Niks: ");
  Serial.print(niks);

  if (niks >= 70) {
    Serial.print(" <-- ACTIEF");
  }

  Serial.print(" | A3 Karton: ");
  Serial.print(karton);

  if (karton >= 100) {
    Serial.print(" <-- ACTIEF");
  }

  Serial.println();

  
  if (pmd >= 250){

    baseservo.write(40);
    delay(2000);
    rolservo.write(45);
    secondservo.write(145);
    delay(2000);
    rolservo.write(startpos);
    secondservo.write(startpos);
    delay(1000);
    baseservo.write(startpos);
    delay(1000);
  
    
  }
   // verander getal afhankelijk van testen

  if (plastic >= 500){

    baseservo.write(90);
    delay(2000);
    rolservo.write(45);
    secondservo.write(145);
    delay(2000);
    rolservo.write(startpos);
    secondservo.write(startpos);
    delay(1000);
    baseservo.write(startpos);
    delay(1000);
    

  }


  // verander getal afhankelijk van testen

  if (karton >= 900){

    baseservo.write(130);
    delay(2000);
    rolservo.write(45);
    secondservo.write(145);
    delay(2000);
    rolservo.write(startpos);
    secondservo.write(startpos);
    delay(1000);
    baseservo.write(startpos);
    delay(1000);
  }
   if (niks >= 250){

    baseservo.write(startpos);
    delay(1000);
    rolservo.write(startpos);
    secondservo.write(startpos);
    delay(1000);
  }

  delay(300);
}
