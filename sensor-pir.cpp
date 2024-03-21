#include <Arduino.h>

// Mendefinisikan pin untuk sensor PIR dan LED
const int PIR_PIN = 2;
const int LED_PIN = 13;

void setup() {
  // Inisialisasi serial untuk output data
  Serial.begin(9600);

  // Atur pin LED sebagai output
  pinMode(LED_PIN, OUTPUT);

  // Atur pin PIR sebagai input
  pinMode(PIR_PIN, INPUT);
}

void loop() {
  // Baca nilai dari sensor PIR
  int pirValue = digitalRead(PIR_PIN);

  // Jika gerakan terdeteksi
  if (pirValue == HIGH) {
    // Nyalakan LED
    digitalWrite(LED_PIN, HIGH);
    Serial.println("Gerakan Terdeteksi");
  } else {
    // Matikan LED
    digitalWrite(LED_PIN, LOW);
    Serial.println("Tidak ada Gerakan");
  }

  // Delay sejenak untuk stabilisasi
  delay(500);
}