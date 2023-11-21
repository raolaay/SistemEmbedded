const int ledPin = 5;  // Pin LED pada Arduino
unsigned long previousMillis = 0;
const long interval = 1000; // Interval 1 detik

void setup() {
  pinMode(ledPin, OUTPUT); // Mengatur pin LED sebagai OUTPUT
}

void loop() {
  unsigned long currentMillis = millis();

  if (currentMillis - previousMillis >= interval) {
    previousMillis = currentMillis;

    // Mengubah status LED (nyala menjadi mati atau sebaliknya)
    if (digitalRead(ledPin) == LOW) {
      digitalWrite(ledPin, HIGH);
    } else {
      digitalWrite(ledPin, LOW);
    }
  }
}
