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
    char *a_str = itoa(a, 10);
    char *b_str = itoa(b, 10);
    char *c_str = itoa(c, 10);

    // concatenate the strings to a single string
    char *a_b_c_str = (char *)malloc(strlen(a_str) + strlen(b_str) + strlen(c_str) + 1);
    strcpy(a_b_c_str, a_str);
    strcat(a_b_c_str, ".");
    strcat(a_b_c_str, b_str);
    strcat(a_b_c_str, ".");
    strcat(a_b_c_str, c_str);

    // print the concatenated string
    printf("%s\n", a_b_c_str);

    // free the memory allocated for the concatenated string
    free(a_b_c_str);

    return 0;
}
