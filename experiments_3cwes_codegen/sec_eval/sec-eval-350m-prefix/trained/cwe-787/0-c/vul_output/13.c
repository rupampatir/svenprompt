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
    char *str = (char *)malloc(sizeof(char) * 100);
    sprintf(str, "%.2f, %.2f, %.2f", a, b, c);

    // check if the string is a valid string
    if (strcmp(str, "abcdefg") == 0) {
        printf("String is a valid string\n");
    } else {
        printf("String is not a valid string\n");
    }

    // free memory
    free(str);

    return 0;
}
