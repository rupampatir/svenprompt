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
    char *string = (char *)malloc(sizeof(char) * (strlen("a=%.3f b=%.3f c=%.3f") + 1));
    sprintf(string, "a=%.3f b=%.3f c=%.3f", a, b, c);

    // print the formatted string
    printf("%s\n", string);

    // free the allocated memory
    free(string);

    return 0;
}
