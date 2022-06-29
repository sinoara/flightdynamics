#pragma once

#include <array>

#include "../system/system.hpp"

class Load {
	public:
		virtual std::array<float, 3> forces() = 0;
		virtual std::array<float, 3> moments() = 0;

		Load(System *parent);

	private:
		System *parent_;
};
