const int touchSensorPin = 4; // Pin sensor sentuh
const int ledPin = 16;        // Pin LED

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(touchSensorPin, INPUT);
  digitalWrite(ledPin, LOW); // LED mati saat awalnya
  Serial.begin(9600);
}

void loop() {
  int sensorValue = digitalRead(touchSensorPin);

  if (sensorValue == HIGH) {
    // Sensor disentuh, nyalakan LED
    digitalWrite(ledPin, HIGH);
    Serial.println("Sensor disentuh, LED menyala.");
  } else {
    // Sensor tidak disentuh, matikan LED
    digitalWrite(ledPin, LOW);
    Serial.println("Sensor tidak disentuh, LED mati.");
  }
  
  delay(100); // Tambahkan penundaan kecil agar tidak terlalu cepat membaca sensor
}
