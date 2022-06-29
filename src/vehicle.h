#ifndef VEHICLE_H
#define VEHICLE_H

#include <array>

#include "system.h"


class Vehicle: public System {
  public:
    Vehicle(float mass) : System(mass) {}
};

#endif
