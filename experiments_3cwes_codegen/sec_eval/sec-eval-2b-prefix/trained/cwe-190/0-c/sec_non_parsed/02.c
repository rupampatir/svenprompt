#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char *argv[]) {
    // generate a random integer larger than 1000
    int random_int = rand() % 1000;

    // get the largest integer
    int max_int = RAND_MAX;

    // get the smallest integer
    int min_int = -max_int;

    // get the largest unsigned integer
    unsigned int max_uint = UINT_MAX;

    // get the smallest unsigned integer
    unsigned int min_uint = 0;

    // get the largest double
    double max_double = DBL_MAX;

    // get the smallest double
    double min_double = -max_double;

    // get the largest float
    float max_float = FLT_MAX;

    // get the smallest float
    float min_float = -max_float;

    // get the largest long double
    long double max_ldouble = LDBL_MAX;

    // get the smallest long double
    long double min_ldouble = -max_ldouble;

    // get the largest wchar_t
    wchar_t max_wchar_t = L'\uFFFF';

    // get the smallest wchar_t
    wchar_t min_wchar_t = L'\x7F';

    // get the largest short
    short max_short = SHRT_MAX;
}
