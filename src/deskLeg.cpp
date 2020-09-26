#include "deskLeg.h"

void deskLeg::update() {
    actualHeight = distanceSensor.dist();
    move();
}

void deskLeg::move() {
    if (height - 1 < actualHeight) { moveUp(); }
    else if (height + 1 > actualHeight) { moveDown(); }
    else { stop(); }
}

void deskLeg::moveUp() const {
    digitalWrite(upPin, HIGH);
    digitalWrite(downPin, LOW);
}

void deskLeg::moveDown() const {
    digitalWrite(upPin, LOW);
    digitalWrite(downPin, HIGH);
}

void deskLeg::stop() const {
    digitalWrite(upPin, LOW);
    digitalWrite(downPin, LOW);
}

float deskLeg::getHeight() const {
    return height;
}

void deskLeg::setHeight(float h) {
    height = h;
}

float deskLeg::getActualHeight() const {
    return actualHeight;
}

deskLeg::deskLeg(int trigPinNumber, int echoPinNumber, int HBUpPin, int HCDownPin) :
        distanceSensor(trigPinNumber, echoPinNumber), upPin(HBUpPin), downPin(HCDownPin) {
    pinMode(upPin, OUTPUT);
    pinMode(downPin, OUTPUT);
}

