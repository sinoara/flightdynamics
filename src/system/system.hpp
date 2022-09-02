#pragma once

#include <array>
#include <vector>
#include <memory>


class System {
  public:
    float momentOfInertia[3][3];
    float mass;
    float position[3];
    float velocity[3];
    std::vector<std::shared_ptr<System>> systems;

    std::array<float, 3> forces();
    std::array<float, 3> acceleration();

    float totalMass();
    float totalMomentOfInertia();
    void addSystem(System sys);

    System(float mass);
};
