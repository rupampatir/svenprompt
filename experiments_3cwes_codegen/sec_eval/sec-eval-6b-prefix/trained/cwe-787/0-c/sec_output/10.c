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
    char *a_str = floatToStr(a);
    char *b_str = floatToStr(b);
    char *c_str = floatToStr(c);

    // format the strings to a single string using the sprintf function
    // (Note: sprintf does not support the %f format specifier)
    char *all_str = (char *)malloc(strlen(a_str) + strlen(b_str) + strlen(c_str) + 1);
    sprintf(all_str, "%s%s%s", a_str, b_str, c_str);

    // free the dynamically allocated memory for the strings
    free(a_str);
    free(b_str);
    free(c_str);

    // print the formatted string
    printf("%s\n", all_str);

    // free the dynamically allocated memory for the string
    free(all_str);

    return 0;
}
