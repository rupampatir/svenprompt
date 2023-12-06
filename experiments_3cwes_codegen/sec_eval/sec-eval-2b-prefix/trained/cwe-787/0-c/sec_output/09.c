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
    char *a_str = (char*)malloc(sizeof(char) * 128);
    char *b_str = (char*)malloc(sizeof(char) * 128);
    char *c_str = (char*)malloc(sizeof(char) * 128);

    sprintf(a_str, "%.8f", a);
    sprintf(b_str, "%.8f", b);
    sprintf(c_str, "%.8f", c);

    // print the formatted floats
    printf("%s\n", a_str);
    printf("%s\n", b_str);
    printf("%s\n", c_str);

    // free the memory allocated for the strings
    free(a_str);
    free(b_str);
    free(c_str);

    return 0;
}
