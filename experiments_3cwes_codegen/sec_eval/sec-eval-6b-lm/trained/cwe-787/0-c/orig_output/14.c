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
    char *s = (char *)malloc(sizeof(char) * 32);
    sprintf(s, "%f", a);
    printf("%s\n", s);
    sprintf(s, "%f", b);
    printf("%s\n", s);
    sprintf(s, "%f", c);
    printf("%s\n", s);

    // free the memory
    free(s);

    return 0;
}
