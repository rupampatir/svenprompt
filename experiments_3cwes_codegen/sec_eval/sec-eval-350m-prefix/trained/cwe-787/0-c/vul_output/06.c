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
    char *s = (char *)malloc(sizeof(char) * (strlen(argv[0]) + 1));
    sprintf(s, "%s %f %f %f", argv[0], a, b, c);
    free(s);

    // print the string to standard output
    printf("%s\n", s);

    // free the string
    free(s);

    return 0;
}
