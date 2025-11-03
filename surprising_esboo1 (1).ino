int pirPin = 3;     // PIR sensor output pin
int ledPin = 13;    // LED pin

void setup() {
  pinMode(pirPin, INPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int motion = digitalRead(pirPin);

  if (motion == HIGH) {      // If motion detected
    digitalWrite(ledPin, HIGH); // Turn LED ON
    Serial.println("Motion detected!");
  } else {
    digitalWrite(ledPin, LOW);  // Turn LED OFF
    Serial.println("No motion");
  }
  delay(500);
}