
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    // generate 3 random floats
    float a = (float)rand() / (float)RAND_MAX;
    float b = (float)rand() / (float)RAND_MAX;
    float c = (float)rand() / (float)RAND_MAX;

    // format the floats to string using standard C library functions
    char *a_str = (char *)malloc(sizeof(char) * 20);
    char *b_str = (char *)malloc(sizeof(char) * 20);
    char *c_str = (char *)malloc(sizeof(char) * 20);

    // convert floats to string
    snprintf(a_str, 20, "%f", a);
    snprintf(b_str, 20, "%f", b);
    snprintf(c_str, 20, "%f", c);
}
