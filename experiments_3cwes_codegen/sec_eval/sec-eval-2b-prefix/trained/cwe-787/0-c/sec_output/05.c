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
    char a_string[100];
    sprintf(a_string, "%.3f", a);
    char b_string[100];
    sprintf(b_string, "%.3f", b);
    char c_string[100];
    sprintf(c_string, "%.3f", c);

    // print the floats
    printf("%s\n", a_string);
    printf("%s\n", b_string);
    printf("%s\n", c_string);

    // create a string to hold the result
    char result[100];

    // format the floats to string using standard C library functions
    sprintf(result, "%.3f", a+b);

    // print the result
    printf("%.3f\n", a+b);

    // return 0 on success
    return 0;
}
