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
    char *a_string = itoa((int)a);
    char *b_string = itoa((int)b);
    char *c_string = itoa((int)c);

    // print the strings
    printf("a = %s, b = %s, c = %s\n", a_string, b_string, c_string);

    // free the memory allocated for the strings
    free(a_string);
    free(b_string);
    free(c_string);

    return 0;
}
