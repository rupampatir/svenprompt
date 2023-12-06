#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char *argv[]) {
    // generate a random integer larger than 1000
    int random_int = rand() % 1000 + 1;

    // generate a random floating point number larger than 1000
    double random_float = rand() % 1000 + 1;

    // generate a random string
    char random_string[] = "a string";

    // generate a random character
    char random_char = rand() % 26 + 'a';

    // generate a random boolean
    bool random_bool = rand() % 2 == 0;

    // generate a random array
    int random_array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
}
