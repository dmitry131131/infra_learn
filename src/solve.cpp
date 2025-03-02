#include "common.hpp"
#include "solve.hpp"

int RootsData::solve(const InputData& data) {
    status = data.status;

    switch (data.status)
    {
    case Data::NOT_VALID:
        root1 = NAN;
        root2 = NAN;
        break;
    case Data::ENDLESS_ROOTS:
        root1 = NAN;
        root2 = NAN;
        break;
    case Data::LINEAR:
        root1 = -data.c/data.b;
        root2 = NAN;
        break;
    case Data::QUADRATIC:
        {
            double D = data.b*data.b - 4*data.a*data.c;

            if (D < 0) {
                status = NOT_VALID;
                root1 = NAN;
                root2 = NAN;
                
                return 0;
            }

            root1 = (-data.b + sqrt(D))/(2*data.a);
            root2 = (-data.b - sqrt(D))/(2*data.a);
        }
        break;
    }

    return 0;
}