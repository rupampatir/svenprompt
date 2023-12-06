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
    char *a_str = (char *)malloc(sizeof(char) * 50);
    char *b_str = (char *)malloc(sizeof(char) * 50);
    char *c_str = (char *)malloc(sizeof(char) * 50);
    sprintf(a_str, "%f", a);
    sprintf(b_str, "%f", b);
    sprintf(c_str, "%f", c);

    // print the floats to standard output
    printf("%s\n%s\n%s\n", a_str, b_str, c_str);

    // free the memory allocated by the C library
    free(a_str);
    free(b_str);
    free(c_str);

    return 0;
}
