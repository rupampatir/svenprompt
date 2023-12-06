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
    char b_str[100];
    char c_str[100];
    sprintf(a_str, "%.3f", a);
    sprintf(b_str, "%.3f", b);
    sprintf(c_str, "%.3f", c);

    // concatenate the strings
    char concat_str[100];
    strcpy(concat_str, a_str);
    strcat(concat_str, " ");
    strcat(concat_str, b_str);
    strcat(concat_str, " ");
    strcat(concat_str, c_str);

    // print the concatenated string
    printf("%s\n", concat_str);

    // exit with 0
    return 0;
}
