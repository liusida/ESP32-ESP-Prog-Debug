#include <Arduino.h>

void setup() {
    int i=0;
    Serial.begin(115200);  // now you can use Serial
    Serial.println("Hello,");
    Serial.println("World.");
}
void loop() {}