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
    char *s = (char *)malloc(sizeof(char)*100);
    sprintf(s, "%.2f %.2f %.2f\n", a, b, c);
    free(s);

    // print the floats to stdout
    printf("%.2f %.2f %.2f\n", a, b, c);

    // free memory
    free(s);

    return 0;
}
