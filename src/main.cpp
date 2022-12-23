#include <Arduino.h>
#include <Servo.h>

Servo myservo;

int maxAngle = 90;

void setup() {
    Serial.begin(9600);
    myservo.attach(9);
}

void loop() {
    for (int pos = 0; pos <= maxAngle; pos++) {
        myservo.write(pos);
        delay(15);
    }

    for (int pos = maxAngle; pos >= 0; pos--) {
        myservo.write(pos);
        delay(15);
    }
}