#define PIN_LED 7

void setup() {
  pinMode(PIN_LED, OUTPUT);
}

void loop() {
  for (int j = 0; j < 5; j++) {  
    digitalWrite(PIN_LED, HIGH);
    delay(500);  

    digitalWrite(PIN_LED, LOW);
    delay(500);  
  }
  digitalWrite(PIN_LED, HIGH);
  while (1) {

  }
}
