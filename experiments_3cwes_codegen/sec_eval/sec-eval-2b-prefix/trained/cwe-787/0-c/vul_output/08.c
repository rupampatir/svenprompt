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
    char *cstr_a = itoa((int)a, NULL, 10);
    char *cstr_b = itoa((int)b, NULL, 10);
    char *cstr_c = itoa((int)c, NULL, 10);

    // concatenate the strings together
    char *cstr = malloc(strlen(cstr_a) + strlen(cstr_b) + strlen(cstr_c) + 1);
    strcpy(cstr, cstr_a);
    strcat(cstr, cstr_b);
    strcat(cstr, cstr_c);

    // print the concatenated string
    printf("%s\n", cstr);

    // free the memory allocated for the concatenated string
    free(cstr);

    return EXIT_SUCCESS;
}
