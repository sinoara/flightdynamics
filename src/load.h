#ifndef LOAD_H
#define LOAD_H

#include <array>

#include "system.h"

class Load {
	public:
		System* parent_;

		virtual std::array<float, 3> forces() = 0;
		virtual std::array<float, 3> moments() = 0;

		Load(System *parent);
};


#endif
