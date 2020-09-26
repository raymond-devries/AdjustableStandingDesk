#ifndef ADJUSTABLESTANDINGDESK_DESKLEG_H
#define ADJUSTABLESTANDINGDESK_DESKLEG_H

#include "Arduino.h"
#include "HCSR04.h"

class deskLeg {
    const HCSR04 distanceSensor;
    const int upPin;
    const int downPin;
    float height = 29.5;
    float actualHeight = distanceSensor.dist();

    void move();

    void moveUp() const;

    void moveDown() const;

    void stop() const;

public:
    void update();

    float getActualHeight() const;

    float getHeight() const;

    void setHeight(float h);

    deskLeg(int trigPinNumber, int echoPinNumber, int HBUpPin , int HBDownPin);
};


#endif //ADJUSTABLESTANDINGDESK_DESKLEG_H
