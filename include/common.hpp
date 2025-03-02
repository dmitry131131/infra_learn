#pragma once

struct Data {
    enum {
        NOT_VALID     = 0,
        LINEAR        = 1,
        QUADRATIC     = 2,
        ENDLESS_ROOTS = 3
    } status;

    Data() : status(NOT_VALID) {}
    ~Data() = default;
};