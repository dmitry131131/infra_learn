#include "input.hpp"
#include "solve.hpp"
#include "output.hpp"

int main() {
    InputData input_data;
    input_data.input();

    RootsData roots_data{input_data};
    roots_data.solve(input_data);

    output(roots_data);

    return 0;
}