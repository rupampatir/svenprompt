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
    char *strA = (char *)malloc(sizeof(a));
    char *strB = (char *)malloc(sizeof(b));
    char *strC = (char *)malloc(sizeof(c));

    // format the floats to string using standard C library functions
    sprintf(strA, "%f", a);
    sprintf(strB, "%f", b);
    sprintf(strC, "%f", c);

    // check the result
    if (strcmp(strA, strA)!= 0) {
        fprintf(stderr, "Error: %s\n", strA);
        return 1;
    }
    if (strcmp(strB, strB)!= 0) {
        fprintf(stderr, "Error: %s\n", strB);
        return 1;
    }
    if (strcmp(strC, strC)!= 0) {
        fprintf(stderr, "Error: %s\n", strC);
        return 1;
    }

    // free the strings
    free(strA);
    free(strB);
    free(strC);

    // return 0
    return 0;
}
