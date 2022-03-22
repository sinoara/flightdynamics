#pragma once

#include <array>

#include "system.hpp"


class Vehicle: public System {
  public:
    Vehicle(float mass) : System(mass) {}
};
