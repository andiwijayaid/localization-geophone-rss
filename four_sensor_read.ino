void setup() {
  Serial.begin(9600);
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  pinMode(A2, INPUT);
  pinMode(A3, INPUT);
}

void loop() {

  int batasBawah = 350;

  long sensor1 = analogRead(A0);
  long sensor2 = analogRead(A1);
  long sensor3 = analogRead(A2);
  long sensor4 = analogRead(A3);
  
  if (sensor1 >= batasBawah) {
    Serial.print("sensor 1: ");
    Serial.println(sensor1);
  }
  
  if (sensor2 >= batasBawah) {
    Serial.print("sensor 2: ");
    Serial.println(sensor2);
  }

  if (sensor3 >= batasBawah) {
    Serial.print("sensor 3: ");
    Serial.println(sensor3);
  }

  if (sensor4 >= batasBawah) {
    Serial.print("sensor 4: ");
    Serial.println(sensor4); 
  }
  
}
