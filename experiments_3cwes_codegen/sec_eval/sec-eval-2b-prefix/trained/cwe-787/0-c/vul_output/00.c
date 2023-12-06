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
    char *a_str = itoa(a);
    char *b_str = itoa(b);
    char *c_str = itoa(c);

    // concatenate the string representations of a, b, and c
    char *str = (char *)malloc(strlen(a_str) + strlen(b_str) + strlen(c_str) + 1);
    strcpy(str, a_str);
    strcat(str, b_str);
    strcat(str, c_str);

    // print the string representation of a, b, and c
    printf("%s\n", str);

    // free the dynamically allocated string
    free(a_str);
    free(b_str);
    free(c_str);
    free(str);

    return 0;
}
