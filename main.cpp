#include "WString.h"
#include <Arduino.h>

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(115200);
  Serial.println("Hello World!");
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000);
  digitalWrite(LED_BUILTIN, LOW);
}

void loop() {
  // write serial
  uint8_t buffer[64] = {0};
  if (Serial.peek() != -1) {
    Serial.readBytes(buffer, 256);
  }
  if (Serial.availableForWrite())
    Serial.write(buffer, 256);
}
