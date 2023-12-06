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
    char *s = strdup("");
    sprintf(s, "%f", a);
    sprintf(s + strlen(s), "%f", b);
    sprintf(s + strlen(s), "%f", c);

    // print the string to stdout
    printf("%s", s);

    // free the string
    free(s);

    // return success
    return 0;
}
