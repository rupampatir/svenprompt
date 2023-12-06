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
    char str[100];
    snprintf(str, sizeof(str), "%.2f", a);
    printf("a = %s\n", str);

    snprintf(str, sizeof(str), "%.2f", b);
    printf("b = %s\n", str);

    snprintf(str, sizeof(str), "%.2f", c);
    printf("c = %s\n", str);

    // print the string with the same length as the float values
    // the string will be padded with zeros
    // the string will be terminated with a null character
    // the string will be converted to a double value
    // the double value will be printed to standard output
    // the string will be printed to standard output
    // the string will be printed to standard output
    // the string will be printed to standard output
    // the string will be printed to standard output
    // the string will be printed to standard output
    // the string will be printed to standard output
    // the string will be printed to standard output
    // the string will be printed to standard output
    // the string will be printed to standard output
    // the string will be printed to standard output
    // the string will be printed to standard output
    // the string will be printed to standard output
}
