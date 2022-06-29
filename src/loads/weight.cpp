#include "weight.hpp"
#include "../constants.hpp"

std::array<float, 3> Weight::forces() {
	// force in earth axis and on the CG
	float mass = parent_->mass;
	return std::array<float, 3> {0.0, 0.0, constants::g*mass};
};

std::array<float, 3> Weight::moments() {
	// moment in earth axis and on the CG
	// always zero
	return std::array<float, 3> {0.0, 0.0, 0.0};
};
