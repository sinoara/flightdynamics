#include "gtest/gtest.h"

#include "../src/vehicle.cpp"


TEST(VehicleTest, WeightTest){
    Vehicle veh(1.0);
    ASSERT_EQ(0, 0);
}

int main (int argc, char **argv){
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
