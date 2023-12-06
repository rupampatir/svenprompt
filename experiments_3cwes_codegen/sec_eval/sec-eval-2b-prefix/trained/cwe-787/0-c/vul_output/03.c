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
    char *a_str = itoa(a, NULL, 10);
    char *b_str = itoa(b, NULL, 10);
    char *c_str = itoa(c, NULL, 10);

    // print the formatted floats
    printf("a = %s, b = %s, c = %s\n", a_str, b_str, c_str);

    // free memory allocated by itoa
    free(a_str);
    free(b_str);
    free(c_str);

    return EXIT_SUCCESS;
}
