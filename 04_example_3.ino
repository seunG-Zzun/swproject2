#define PIN_LED 13
unsigned int count;
bool toggle;

void setup() {
  pinMode(PIN_LED, OUTPUT);
  Serial.begin(115200);
  while (!Serial) {
    ;
  }
  Serial.println("Hello World!");
  count = 0;
  toggle = false;
  digitalWrite(PIN_LED, toggle);
}

void loop() {
  Serial.println(++count);
  toggle = !toggle;
  digitalWrite(PIN_LED, toggle);
  delay(1000);
}
