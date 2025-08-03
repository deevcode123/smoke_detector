const int smokePin = 2;
const int relayPin = 3;

void setup() {
  pinMode(smokePin, INPUT);
  pinMode(relayPin, OUTPUT);
  digitalWrite(relayPin, LOW);
  Serial.begin(9600);
}

void loop() {
  int smokeValue = digitalRead(smokePin);

  if (smokeValue == HIGH) {
    digitalWrite(relayPin, HIGH);
    Serial.println("Smoke detected. Motor stopped.");
  } else {
    digitalWrite(relayPin, LOW);
    Serial.println("No smoke. Motor running.");
  }

  delay(200);
}
