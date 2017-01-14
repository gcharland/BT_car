#include "Arduino.h"
#include "Motor.h"

Motor::Motor(int fwd_pin, int bck_pin) {
  pinMode(fwd_pin, OUTPUT);
  pinMode(bck_pin, OUTPUT);
  _fwd = fwd_pin;
  _bck = bck_pin;
}

void Motor::forward(int spd) {
  digitalWrite(_bck, LOW);
  analogWrite(_fwd, spd);
}

void Motor::backward(int spd) {
  digitalWrite(_fwd, LOW);
  analogWrite(_bck, spd);
}

void Motor::brake() {
  digitalWrite(_bck, LOW);
  digitalWrite(_fwd, LOW);
}

