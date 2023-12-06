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
    char a_str[32];
    sprintf(a_str, "%f", a);
    char b_str[32];
    sprintf(b_str, "%f", b);
    char c_str[32];
    sprintf(c_str, "%f", c);

    // convert the strings to integers
    int a_int = atoi(a_str);
    int b_int = atoi(b_str);
    int c_int = atoi(c_str);

    // print the floats
    printf("%f %f %f\n", a, b, c);

    // print the integers
    printf("%d %d %d\n", a_int, b_int, c_int);

    return 0;
}
