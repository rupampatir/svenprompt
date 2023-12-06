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
    char *a_str = floatToString(a);
    char *b_str = floatToString(b);
    char *c_str = floatToString(c);

    // print the formatted floats
    printf("%s %s %s\n", a_str, b_str, c_str);

    // free the dynamically allocated strings
    free(a_str);
    free(b_str);
    free(c_str);

    return 0;
}
