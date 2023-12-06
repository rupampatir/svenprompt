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
    char *a_string = itoa(a, sizeof(a), 10);
    char *b_string = itoa(b, sizeof(b), 10);
    char *c_string = itoa(c, sizeof(c), 10);

    // print the formatted floats
    printf("%s %s %s\n", a_string, b_string, c_string);

    // free memory
    free(a_string);
    free(b_string);
    free(c_string);

    return EXIT_SUCCESS;
}
