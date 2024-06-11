const int g1 = 3; 
const int y1 = 2; 
const int r1 = 13; 
const int g2 = 6; 
const int y2 = 5; 
const int r2 = 4; 
const int g3 = 9; 
const int y3 = 8; 
const int r3 = 7; 
const int g4 = 12; 
const int y4 = 11; 
const int r4 = 10; 
const int s4 = A5; 
const int s3 = A4;
const int s2 = A3;
const int s1 = A2; 

int currentPriority = 0;

void setup() {
  pinMode(g1, OUTPUT);
  pinMode(y1, OUTPUT);
  pinMode(r1, OUTPUT);
  pinMode(s1, INPUT);
  pinMode(y2, OUTPUT);
  pinMode(r2, OUTPUT);
  pinMode(s2, INPUT);
  pinMode(g3, OUTPUT);
  pinMode(y3, OUTPUT);
  pinMode(r3, OUTPUT);
  pinMode(s3, INPUT);
  pinMode(g4, OUTPUT);
  pinMode(y4, OUTPUT);
  pinMode(r4, OUTPUT);
  pinMode(s4, INPUT);
  Serial.begin(9600); // Initialization of serial communication at 9600 baud rate
}

void loop() {
  int sensorValue1 = analogRead(s1);
  int sensorValue2 = analogRead(s2);
  int sensorValue3 = analogRead(s3);
  int sensorValue4 = analogRead(s4);

   if ((sensorValue1 == 1023) && (sensorValue3 == 1023) && (sensorValue4 == 1023)){
    // sensor1, sensor3 and sensor4 detects motion
    if (currentPriority == 1) {
      digitalWrite(g2, LOW);
      digitalWrite(g3, LOW);
      digitalWrite(g1, HIGH);
      digitalWrite(g4, LOW);
    }
   else if (currentPriority == 3) {
      digitalWrite(g1, LOW);
      digitalWrite(g2, LOW);
      digitalWrite(g3, HIGH);
      digitalWrite(g4, LOW);
    }
    else if (currentPriority == 4) {
      digitalWrite(g1, LOW);
      digitalWrite(g2, LOW);
      digitalWrite(g3, LOW);
      digitalWrite(g4, HIGH);
    } else {
      currentPriority = 0;
    }}if ((sensorValue1 == 1023) && (sensorValue2 == 1023) && (sensorValue4 == 1023)){
    // sensor1, sensor2 and sensor4 detects motion
    if (currentPriority == 1) {
      digitalWrite(g2, LOW);
      digitalWrite(g3, LOW);
      digitalWrite(g1, HIGH);
      digitalWrite(g4, LOW);
    }
   else if (currentPriority == 2) {
      digitalWrite(g1, LOW);
      digitalWrite(g3, LOW);
      digitalWrite(g2, HIGH);
      digitalWrite(g4, LOW);
    }
    else if (currentPriority == 4) {
      digitalWrite(g1, LOW);
      digitalWrite(g2, LOW);
      digitalWrite(g3, LOW);
      digitalWrite(g4, HIGH);
    }
    else {
      currentPriority = 0;
    }} if ((sensorValue1 == 1023) && (sensorValue2 == 1023) && (sensorValue3 == 1023)){
    // sensor1, sensor2 and sensor3 detects motion
    if (currentPriority == 1) {
      digitalWrite(g2, LOW);
      digitalWrite(g3, LOW);
      digitalWrite(g1, HIGH);
      digitalWrite(g4, LOW);
    }
   else if (currentPriority == 2) {
      digitalWrite(g1, LOW);
      digitalWrite(g3, LOW);
      digitalWrite(g2, HIGH);
      digitalWrite(g4, LOW);
    }
    else if (currentPriority == 3) {
      digitalWrite(g1, LOW);
      digitalWrite(g2, LOW);
      digitalWrite(g4, LOW);
      digitalWrite(g3, HIGH);
    } else {
      currentPriority = 0;
    }
  } else if ((sensorValue2 == 1023) && (sensorValue3 == 1023) && (sensorValue4 == 1023)){
    // sensor2, sensor3 and sensor4 detects motion
    if (currentPriority == 2) {
      digitalWrite(g1, LOW);
      digitalWrite(g3, LOW);
      digitalWrite(g2, HIGH);
      digitalWrite(g4, LOW);
    }
   else if (currentPriority == 3) {
      digitalWrite(g1, LOW);
      digitalWrite(g2, LOW);
      digitalWrite(g3, HIGH);
      digitalWrite(g4, LOW);
    }
    else if (currentPriority == 4) {
      digitalWrite(g1, LOW);
      digitalWrite(g2, LOW);
      digitalWrite(g3, LOW);
      digitalWrite(g4, HIGH);
    }
    else {
      currentPriority = 0;
    }
  } else if ((sensorValue1 == 1023) && (sensorValue4 == 1023)){
    // sensor1 and sensor4 detects motion
   if (currentPriority == 1) {
      digitalWrite(g3, LOW);
      digitalWrite(g2, LOW);
      digitalWrite(g1, HIGH);
      digitalWrite(g4, LOW);
    }
    else if (currentPriority == 4) {
      digitalWrite(g1, LOW);
      digitalWrite(g2, LOW);
      digitalWrite(g3, LOW);
      digitalWrite(g4, HIGH);
    }
  } else if ((sensorValue1 == 1023) && (sensorValue3 == 1023)){
    // sensor1 and sensor3 detects motion
   if (currentPriority == 1) {
      digitalWrite(g3, LOW);
      digitalWrite(g2, LOW);
      digitalWrite(g1, HIGH);
      digitalWrite(g4, LOW);
    }
    else if (currentPriority == 3) {
      digitalWrite(g1, LOW);
      digitalWrite(g2, LOW);
      digitalWrite(g4, LOW);
      digitalWrite(g3, HIGH);
    }
  } else if ((sensorValue1 == 1023) && (sensorValue2 == 1023)){
    // sensor1 and sensor2 detects motion
   if (currentPriority == 1) {
      digitalWrite(g3, LOW);
      digitalWrite(g2, LOW);
      digitalWrite(g1, HIGH);
      digitalWrite(g4, LOW);
    }
    else if (currentPriority == 2) {
      digitalWrite(g1, LOW);
      digitalWrite(g3, LOW);
      digitalWrite(g4, LOW);
      digitalWrite(g2, HIGH);
    }
  } else if ((sensorValue3 == 1023) && (sensorValue4 == 1023)){
    // sensor3 and sensor4 detects motion
   if (currentPriority == 3) {
      digitalWrite(g1, LOW);
      digitalWrite(g2, LOW);
      digitalWrite(g3, HIGH);
      digitalWrite(g4, LOW);
    }
    else if (currentPriority == 4) {
      digitalWrite(g1, LOW);
      digitalWrite(g2, LOW);
      digitalWrite(g3, LOW);
      digitalWrite(g4, HIGH);
    }
  } else if ((sensorValue2 == 1023) && (sensorValue3 == 1023)){
    // sensor2 and sensor3 detects motion
   if (currentPriority == 2) {
      digitalWrite(g1, LOW);
      digitalWrite(g2, HIGH);
      digitalWrite(g3, LOW);
      digitalWrite(g4, LOW);
    }
    else if (currentPriority == 3) {
      digitalWrite(g1, LOW);
      digitalWrite(g2, LOW);
      digitalWrite(g4, LOW);
      digitalWrite(g3, HIGH);
    }
  } else if ((sensorValue2 == 1023) && (sensorValue4 == 1023)){
    // sensor2 and sensor4 detects motion
   if (currentPriority == 2) {
      digitalWrite(g1, LOW);
      digitalWrite(g2, HIGH);
      digitalWrite(g3, LOW);
      digitalWrite(g4, LOW);
    }
    else if (currentPriority == 4) {
      digitalWrite(g1, LOW);
      digitalWrite(g2, LOW);
      digitalWrite(g3, LOW);
      digitalWrite(g4, HIGH);
    }
  } else if(sensorValue4 == 1023) {
    // if sensor4 detects motion
    if (currentPriority != 4) {
      currentPriority = 4;
      digitalWrite(y4, HIGH);
      delay(2000);
      digitalWrite(y4, LOW);
    }
    digitalWrite(g4, HIGH);
    digitalWrite(g3, LOW);
    digitalWrite(g2, LOW);
    digitalWrite(g1, LOW);
    digitalWrite(r1, HIGH);
    digitalWrite(r2, HIGH);
    digitalWrite(r3, HIGH);
    digitalWrite(r4, LOW);
  } else if (sensorValue3 == 1023) {
    // if sensor3 detects motion
    if (currentPriority != 3) {
      currentPriority = 3;
      digitalWrite(y3, HIGH);
      delay(2000);
      digitalWrite(y3, LOW);
    }
    digitalWrite(g3, HIGH);
    digitalWrite(g4, LOW);
    digitalWrite(g2, LOW);
    digitalWrite(g1, LOW);
    digitalWrite(r1, HIGH);
    digitalWrite(r2, HIGH);
    digitalWrite(r4, HIGH);
    digitalWrite(r3, LOW);
  } else if(sensorValue2 == 1023) {
    // if sensor2 detects motion
    if (currentPriority != 2) {
      currentPriority = 2;
      digitalWrite(y2, HIGH);
      delay(2000);
      digitalWrite(y2, LOW);
    }
    digitalWrite(g1, LOW);
    digitalWrite(g2, HIGH);
    digitalWrite(g3, LOW);
    digitalWrite(g4, LOW);
    digitalWrite(r1, HIGH);
    digitalWrite(r2, LOW);
    digitalWrite(r3, HIGH);
    digitalWrite(r4, HIGH);
  }else if(sensorValue1 == 1023) {
    // if sensor1 detects motion
    if (currentPriority != 1) {
      currentPriority = 1;
      digitalWrite(y1, HIGH);
      delay(2000);
      digitalWrite(y1, LOW);
    }
    digitalWrite(g2, LOW);
    digitalWrite(g1, HIGH);
    digitalWrite(g3, LOW);
    digitalWrite(g4, LOW);
    digitalWrite(r2, HIGH);
    digitalWrite(r1, LOW);
    digitalWrite(r3, HIGH);
    digitalWrite(r4, HIGH);
  } else {
    // If no sensor detects motion
    currentPriority = 0;
    digitalWrite(g4, LOW);
    digitalWrite(y4, LOW);
    digitalWrite(r4, HIGH);
    digitalWrite(g3, LOW);
    digitalWrite(y3, LOW);
    digitalWrite(r3, HIGH);
    digitalWrite(g2, LOW);
    digitalWrite(y2, LOW);
    digitalWrite(r2, HIGH);
    digitalWrite(g1, LOW);
    digitalWrite(y1, LOW);
    digitalWrite(r1, HIGH);
  }
  Serial.print("Sensor value 1: ");
  Serial.println(sensorValue1);
  Serial.print("Sensor value 2: ");
  Serial.println(sensorValue2);
  Serial.print("Sensor value 3: ");
  Serial.println(sensorValue3);
  Serial.print("Sensor value 4: ");
  Serial.println(sensorValue4);
 

  delay(1000);
}
