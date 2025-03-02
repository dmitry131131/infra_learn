#include "gtest/gtest.h"
#include "solve.hpp"
#include "input.hpp"

TEST(SolveTest, LinearTest) {
    InputData input_data(0, 1, -2);
    RootsData roots_data;

    roots_data.solve(input_data);

    //std::cout << roots_data.root1 << std::endl;

    EXPECT_EQ(roots_data.root1,  2);
    EXPECT_TRUE(std::isnan(roots_data.root2));
    EXPECT_EQ(roots_data.status, Data::LINEAR);
}