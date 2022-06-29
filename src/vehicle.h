#pragma once

#include <array>

#include "system.h"


class Vehicle: public System {
  public:
    Vehicle(float mass) : System(mass) {}
};
