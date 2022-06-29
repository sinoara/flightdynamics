#include "gtest/gtest.h"
#include "gmock/gmock.h"

#include "../src/loads/weight.hpp"


TEST(LoadsTest, WeightTest){
	System system(1.0);

	Weight weight(&system);
    ASSERT_EQ(0, 0);
}
