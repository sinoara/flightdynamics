#ifndef SYSTEM_H
#define SYSTEM_H

#include <array>

#define g 9.81

class System {
  public:
    float moment_inertia[3][3];	  
    float mass;
    float position[3];
    float velocity[3];

    std::array<float, 3> forces();
    std::array<float, 3> acceleration();

    System(float mass);
}

#endif
