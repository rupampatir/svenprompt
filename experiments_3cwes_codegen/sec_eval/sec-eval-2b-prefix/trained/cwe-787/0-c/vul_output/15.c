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
    char *a_str = itoa(a);
    char *b_str = itoa(b);
    char *c_str = itoa(c);

    // print the floats to standard output
    printf("%f\n", a);
    printf("%f\n", b);
    printf("%f\n", c);

    // print the strings to standard output
    printf("%s\n", a_str);
    printf("%s\n", b_str);
    printf("%s\n", c_str);

    // free memory allocated for strings
    free(a_str);
    free(b_str);
    free(c_str);

    return EXIT_SUCCESS;
}
