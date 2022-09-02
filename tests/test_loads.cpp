#include <array>

#include "gtest/gtest.h"
#include "gmock/gmock.h"

#include "../src/loads/weight.hpp"
#include "../src/constants.hpp"


TEST(LoadsTest, WeightForcesValueTest){
    // map with system masses and expected values to be tested
    std::map<float, std::array<float, 3>> testValues {
        {0.0, std::array<float, 3> {0.0, 0.0, 0.0}},
            {1.0, std::array<float, 3> {0.0, 0.0, constants::g*1.0f}},
            {3.5, std::array<float, 3> {0.0, 0.0, constants::g*3.5f}},
    };

    // loop through map and test values
    for (auto const& [input, expected] : testValues) {
        System system(input);
        Weight weight(&system);

        ASSERT_EQ(expected, weight.forces());
    }
}

TEST(LoadsTest, WeigthMomentsTest){
    // map with system masses and expected values to be tested
    std::array<float, 3> zeroArray =  {0.0, 0.0, 0.0};
    std::map<float, std::array<float, 3>> testValues {
        {0.0, zeroArray},
            {1.0, zeroArray},
            {3.5, zeroArray},
    };

    // loop through map and test values
    for (auto const& [input, expected] : testValues) {
        System system(input);
        Weight weight(&system);

        ASSERT_EQ(expected, weight.moments());
    }
}
