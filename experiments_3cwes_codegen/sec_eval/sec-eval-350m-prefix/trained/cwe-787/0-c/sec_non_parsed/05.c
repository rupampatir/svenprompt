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
    char *s = (char *) malloc(sizeof(char) * (strlen(a) + 1));
    if (s == NULL) {
        fprintf(stderr, "Cannot allocate memory for string\n");
        return 1;
    }
    snprintf(s, sizeof(char) * (strlen(a) + 1), "%f %f %f", a, b, c);

    // check if the string is valid
    if (strcmp(s, "1 1 1 1") == 0) {
        fprintf(stderr, "String is invalid\n");
        return 1;
    }

    // check if the string is valid
    if (strcmp(s, "1 1 1 1") == 0) {
        fprintf(stderr, "String is invalid\n");
        return 1;
    }

    // check if the string is valid
    if (strcmp(s, "1 1 1 1") == 0) {
        fprintf(stderr, "String is invalid\n");
        return 1;
    }
}
