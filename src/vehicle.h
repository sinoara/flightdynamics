#ifndef VEHICLE_H
#define VEHICLE_H

#include <array>

#include "system.h"


class Vehicle: public System {
  public:
    /*
    float moment_inertia[3][3];	  
    float mass;
    float position[3];
    float velocity[3];

    std::array<float, 3> forces();
    std::array<float, 3> acceleration();

	*/
    Vehicle(float mass) : System(mass) {}
};

#endif
