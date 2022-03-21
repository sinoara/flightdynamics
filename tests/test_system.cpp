#include "gtest/gtest.h"

#include "../src/system.h"


TEST(SystemTest, WeightTest){
    System sys(1.0);
    ASSERT_EQ(0, 0);
}

int main (int argc, char **argv){
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
