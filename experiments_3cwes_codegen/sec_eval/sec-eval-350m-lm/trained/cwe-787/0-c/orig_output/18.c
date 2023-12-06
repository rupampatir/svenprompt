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
    sprintf(str, "%f %f %f", a, b, c);

    // print the string
    printf("%s", str);

    // free the memory
    free(str);

    // exit
    return 0;
}
