#include <Servo.h>

Servo doorServo;

const int trigPin = 7;
const int echoPin = 8;
const int servoPin = 9;

void setup() {
  doorServo.attach(servoPin);

  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  doorServo.write(0);

  Serial.begin(9600);
}

void loop() {
  long duration;
  int distance;

  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);

  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);

  distance = duration * 0.0343 / 2;

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  if (distance > 0 && distance <= 30) {
    doorServo.write(90);
  }
  else {
    doorServo.write(0);
  }

  delay(100);
}
