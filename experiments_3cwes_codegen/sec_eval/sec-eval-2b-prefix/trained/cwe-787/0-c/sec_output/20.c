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
    char a_str[100];
    sprintf(a_str, "%.5f", a);
    char b_str[100];
    sprintf(b_str, "%.5f", b);
    char c_str[100];
    sprintf(c_str, "%.5f", c);

    // create a string with the concatenation of the formatted floats
    char concat_str[200];
    sprintf(concat_str, "%s%s%s", a_str, b_str, c_str);

    // print the concatenated string
    printf("%s", concat_str);

    // exit with 0
    return EXIT_SUCCESS;
}
