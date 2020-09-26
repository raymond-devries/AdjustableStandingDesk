#include "deskLeg.h"

void deskLeg::move() {

}

float deskLeg::getHeight() const {
    return height;
}

void deskLeg::setHeight(float height) {
    deskLeg::height = height;
}

float deskLeg::getActualHeight() const {
    return actualHeight;
}

deskLeg::deskLeg(const int trigPinNumber, const int echoPinNumber) :
    distanceSensor(trigPinNumber, echoPinNumber) {}

