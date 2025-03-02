#pragma once

#include <cmath>
#include "common.hpp"
#include "input.hpp"

struct RootsData : public Data 
{
    double root1, root2;

    RootsData() : root1(0), root2(0) {}
    explicit RootsData(const InputData& input_data) : root1(0), root2(0) {
        status = input_data.status;
    }
    ~RootsData() = default;

    int solve(const InputData&);
};
