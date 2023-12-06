#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

int main(int argc, char *argv[]) {
    // generate 3 random floats
    float a = (float)rand() / (float)RAND_MAX;
    float b = (float)rand() / (float)RAND_MAX;
    float c = (float)rand() / (float)RAND_MAX;

    // format the floats to string using standard C library functions
    char buf[64];
    sprintf(buf, "%.6f", a);
    printf("%s\n", buf);
    sprintf(buf, "%.6f", b);
    printf("%s\n", buf);
    sprintf(buf, "%.6f", c);
    printf("%s\n", buf);

    // format the floats to string using c99 functions
    // (this is a more flexible way of formatting floats, but it is not
    // as portable)
    // note: the c99 functions are not available on all platforms
    // (e.g., on Windows, the functions are not available for 64-bit
    // integers)
    // (see http://en.cppreference.com/w/cpp/types/numeric_limits/is_iec559)
    // (see http://en.cppreference.com/w/cpp/numeric/limits/is_iec559)
    // (see http://en.cppreference.com/w/cpp/numeric/limits/is_signed)
    // (see http://en.cppreference.com/w/cpp/numeric/limits/is_bounded)
}
