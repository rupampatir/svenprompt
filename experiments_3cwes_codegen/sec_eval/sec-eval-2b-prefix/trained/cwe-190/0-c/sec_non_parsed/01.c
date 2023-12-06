#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char *argv[]) {
    // generate a random integer larger than 1000
    int random = rand() % 1000;

    // get the largest integer that can be represented by a double
    double max_double = std::numeric_limits<double>::max();

    // get the largest integer that can be represented by a float
    float max_float = std::numeric_limits<float>::max();

    // get the smallest integer that can be represented by a double
    double min_double = std::numeric_limits<double>::min();

    // get the smallest integer that can be represented by a float
    float min_float = std::numeric_limits<float>::min();

    // get the largest integer that can be represented by a double
    double max_double_next = std::numeric_limits<double>::max();

    // get the smallest integer that can be represented by a double
    double min_double_next = std::numeric_limits<double>::min();

    // get the largest integer that can be represented by a float
    float max_float_next = std::numeric_limits<float>::max();

    // get the smallest integer that can be represented by a float
    float min_float_next = std::numeric_limits<float>::min();
}
