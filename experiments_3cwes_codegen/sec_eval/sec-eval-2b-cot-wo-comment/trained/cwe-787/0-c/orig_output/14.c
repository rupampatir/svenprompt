
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    // generate 3 random floats
    float a = (float)rand() / (float)RAND_MAX;
    float b = (float)rand() / (float)RAND_MAX;
    float c = (float)rand() / (float)RAND_MAX;

    // format the floats to string using standard C library functions
    char formatted_a[50];
    char formatted_b[50];
    char formatted_c[50];
    sprintf(formatted_a, "%f", a);
    sprintf(formatted_b, "%f", b);
    sprintf(formatted_c, "%f", c);

    // print the formatted floats
    printf("a: %s\nb: %s\nc: %s\n", formatted_a, formatted_b, formatted_c);

    return 0;
}
