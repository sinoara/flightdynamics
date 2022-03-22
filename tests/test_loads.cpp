#include <array>

#include "gtest/gtest.h"
#include "gmock/gmock.h"

#include "../src/loads/weight.hpp"
#include "../src/constants.hpp"


TEST(LoadsTest, WeightForcesValueTest){
	std::map<float, std::array<float, 3>> testValues {
	  	{0.0, std::array<float, 3> {0.0, 0.0, 0.0}},
	  	{1.0, std::array<float, 3> {0.0, 0.0, constants::g*1.0}},
	  	{3.5, std::array<float, 3> {0.0, 0.0, constants::g*3.5}},
	};

	for (auto const& [input, expected] : testValues) {
		System system(input);
		Weight weight(&system);
		
		ASSERT_EQ(expected, weight.forces());
	}
}

TEST(LoadsTest, MomentTest){
	System system(1.0);

	Weight weight(&system);
	std::array<float, 3> expected {0.0, 0.0, 0.0};
    ASSERT_EQ(expected, weight.forces());
}
