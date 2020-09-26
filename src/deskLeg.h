#ifndef ADJUSTABLESTANDINGDESK_DESKLEG_H
#define ADJUSTABLESTANDINGDESK_DESKLEG_H

#include "Arduino.h"
#include "HCSR04.h"

class deskLeg {
    const HCSR04 distanceSensor;
    int direction = 0;
    float height;
    float actualHeight;

    void move();
public:
    float getActualHeight() const;

    float getHeight() const;

    void setHeight(float height);

    deskLeg(int trigPinNumber, int echoPinNumber);
};


#endif //ADJUSTABLESTANDINGDESK_DESKLEG_H
