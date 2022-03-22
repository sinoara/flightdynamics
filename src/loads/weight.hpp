#pragma once

#include "load.hpp"

class Weight : public Load {
	public:
		std::array<float, 3> forces() override;
		std::array<float, 3> moments() override;

		Weight(System *parent) : Load(parent) {};
};
