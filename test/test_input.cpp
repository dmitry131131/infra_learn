#include "gtest/gtest.h"
#include "input.hpp"

TEST(InputTest, ConstructTest) {
    InputData input_data;
    double ref_a = 0, ref_b = 0, ref_c = 0;

    EXPECT_EQ(input_data.a, ref_a);
    EXPECT_EQ(input_data.b, ref_b);
    EXPECT_EQ(input_data.c, ref_c);
}

TEST(InputTest, DoubleConstructTest) {
    InputData input_data{0, 1, -2};

    EXPECT_EQ(input_data.a, 0);
    EXPECT_EQ(input_data.b, 1);
    EXPECT_EQ(input_data.c, -2);
    EXPECT_EQ(input_data.status, Data::LINEAR);
}