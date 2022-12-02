/*
 * US_0 ECH: (Blue) 22
* US_0 TRI: (Purple) 23
* US_1 ECH: (Blue) 24
* US_1 TRI: (Purple) 25
* US_2 ECH: (Blue) 26
* US_2 TRI: (Purple) 27
 */

 #define US0_ECH 22
 #define US0_TRI 23
 #define US1_ECH 24
 #define US1_TRI 25
 #define US2_ECH 26
 #define US2_TRI 27
 

void setup() {
  Serial.begin(9600);
  pinMode(US0_TRI, OUTPUT);
  pinMode(US0_ECH, INPUT);
  pinMode(US1_TRI, OUTPUT);
  pinMode(US1_ECH, INPUT);
  pinMode(US2_TRI, OUTPUT);
  pinMode(US2_ECH, INPUT);
}

void loop() {
  Serial.println("=====================");
  digitalWrite(US0_TRI, LOW);
  delayMicroseconds(2);
  digitalWrite(US0_TRI, HIGH);
  delayMicroseconds(10);
  digitalWrite(US0_TRI, LOW);
  long dis0 = pulseIn(US0_ECH, HIGH)/58.2;

  Serial.print("Sensor0 = ");
  Serial.println(dis0);

  digitalWrite(US1_TRI, LOW);
  delayMicroseconds(2);
  digitalWrite(US1_TRI, HIGH);
  delayMicroseconds(10);
  digitalWrite(US1_TRI, LOW);
  long dis1 = pulseIn(US1_ECH, HIGH)/58.2;

  Serial.print("Sensor1 = ");
  Serial.println(dis1);
  
  digitalWrite(US2_TRI, LOW);
  delayMicroseconds(2);
  digitalWrite(US2_TRI, HIGH);
  delayMicroseconds(10);
  digitalWrite(US2_TRI, LOW);
  long dis2 = pulseIn(US2_ECH, HIGH)/58.2;

  Serial.print("Sensor2 = ");
  Serial.println(dis2);

  delay(1000);
}
