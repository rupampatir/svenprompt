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
    char *a_string = (char *)malloc(sizeof(char) * 20);
    char *b_string = (char *)malloc(sizeof(char) * 20);
    char *c_string = (char *)malloc(sizeof(char) * 20);
    sprintf(a_string, "%f", a);
    sprintf(b_string, "%f", b);
    sprintf(c_string, "%f", c);

    // print the formatted floats
    printf("a: %s\n", a_string);
    printf("b: %s\n", b_string);
    printf("c: %s\n", c_string);

    // free the memory allocated for the strings
    free(a_string);
    free(b_string);
    free(c_string);

    // return 0 to indicate successful completion
    return 0;
}
