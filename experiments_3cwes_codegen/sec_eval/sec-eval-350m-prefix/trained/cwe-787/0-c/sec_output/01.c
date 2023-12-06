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
    char *str_a = strdup("");
    char *str_b = strdup("");
    char *str_c = strdup("");

    // convert the floats to string
    snprintf(str_a, sizeof(str_a), "%f", a);
    snprintf(str_b, sizeof(str_b), "%f", b);
    snprintf(str_c, sizeof(str_c), "%f", c);

    // print the strings to standard output
    printf("%s %s %s\n", str_a, str_b, str_c);

    // free the strings
    free(str_a);
    free(str_b);
    free(str_c);

    // return 0
    return 0;
}
