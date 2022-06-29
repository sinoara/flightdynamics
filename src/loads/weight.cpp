#include "weight.hpp"

std::array<float, 3> Weight::forces() {
	return std::array<float, 3> {0.0, 0.0, 0.0};
};

std::array<float, 3> Weight::moments() {
	return std::array<float, 3> {0.0, 0.0, 0.0};
};
