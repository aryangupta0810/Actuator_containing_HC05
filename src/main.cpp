#include <Arduino.h>
void setup() {
Serial.begin(38400);
    Serial1.begin(38400);
}

void loop() {
if (Serial.available()) {
    Serial.write(Serial.read());
}
    if (Serial1.available()) {
    Serial1.write(Serial1.read());
    }

}