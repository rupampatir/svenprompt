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
    char b_string[100];
    char c_string[100];
    sprintf(a_string, "%.2f", a);
    sprintf(b_string, "%.2f", b);
    sprintf(c_string, "%.2f", c);

    // print the formatted floats
    printf("a = %s\n", a_string);
    printf("b = %s\n", b_string);
    printf("c = %s\n", c_string);

    // calculate the absolute value of the difference between the two floats
    float a_diff = fabs(a - b);
    float b_diff = fabs(b - c);
    float c_diff = fabs(c - a);

    // print the absolute value of the difference
    printf("a - b = %f\n", a_diff);
    printf("b - c = %f\n", b_diff);
    printf("c - a = %f\n", c_diff);

    // calculate the difference between the two floats
    float diff = a_diff + b_diff + c_diff;

    // print the difference
    printf("a + b + c = %f\n", diff);
}
