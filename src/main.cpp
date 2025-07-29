#include <Arduino.h>

void setup() {
    int i=0;
    Serial.begin(115200);  // now you can use Serial
    Serial.println("Hello. TEST COM10 UPLOAD.");

    Serial.println(i++);
    Serial.println(i++);
    Serial.println(i++);
}
void loop() {
    Serial.println(".");
}