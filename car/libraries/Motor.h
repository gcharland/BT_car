#ifndef Motor_h
#define Motor_h

#include "Arduino.h"

class Motor
{
  public:
    Motor(int fwd_pin, int bck_pin);
    void forward(int spd);
    void backward(int spd);
	void brake();
  private:
    int _fwd;
    int _bck;
};

#endif