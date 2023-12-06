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
    char *str_a = (char*)malloc(sizeof(char)*32);
    char *str_b = (char*)malloc(sizeof(char)*32);
    char *str_c = (char*)malloc(sizeof(char)*32);

    sprintf(str_a, "%.8f", a);
    sprintf(str_b, "%.8f", b);
    sprintf(str_c, "%.8f", c);

    // print the floats to the console
    printf("%s %s %s\n", str_a, str_b, str_c);

    // free the memory allocated for the strings
    free(str_a);
    free(str_b);
    free(str_c);

    return 0;
}
