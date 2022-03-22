#pragma once

#include <array>

#include "../system/system.hpp"

class Load {
	public:
		// forces caused by Load in earth axis
		virtual std::array<float, 3> forces() = 0;
		// moments caused by Load in earth axis
		virtual std::array<float, 3> moments() = 0;

		Load(System *parent);

	private:
		// parent System of the Load
		System *parent_;
};
