#pragma once
#include "common.hpp"

struct InputData : public Data {
    double a, b, c;

    InputData() : a(0), b(0), c(0) {}
    InputData(double a_, double b_, double c_) : a(a_), b(b_), c(c_) {setStatus();}
    ~InputData() = default;

    int input();

    private:
        void setStatus();
};