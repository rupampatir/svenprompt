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
    char *a_string = (char *)malloc(64);
    char *b_string = (char *)malloc(64);
    char *c_string = (char *)malloc(64);
    sprintf(a_string, "%.3f", a);
    sprintf(b_string, "%.3f", b);
    sprintf(c_string, "%.3f", c);

    // print the floats to the screen
    printf("a: %s\n", a_string);
    printf("b: %s\n", b_string);
    printf("c: %s\n", c_string);

    // convert the floats to integers
    int a_int = (int)a;
    int b_int = (int)b;
    int c_int = (int)c;

    // print the integers to the screen
    printf("a_int: %d\n", a_int);
    printf("b_int: %d\n", b_int);
    printf("c_int: %d\n", c_int);

    // convert the floats to doubles
    double a_double = a;
    double b_double = b;
    double c_double = c;
}
