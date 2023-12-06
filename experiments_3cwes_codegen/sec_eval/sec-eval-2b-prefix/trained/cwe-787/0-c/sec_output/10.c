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
    sprintf(a_string, "%.2f", a);
    char b_string[100];
    sprintf(b_string, "%.2f", b);
    char c_string[100];
    sprintf(c_string, "%.2f", c);

    // print the floats using printf
    printf("%.2f %.2f %.2f\n", a, b, c);

    // print the floats using scanf
    scanf("%f%f%f", &a, &b, &c);

    // format the floats to string using standard C library functions
    char a_string_scanf[100];
    sprintf(a_string_scanf, "%.2f", a);
    char b_string_scanf[100];
    sprintf(b_string_scanf, "%.2f", b);
    char c_string_scanf[100];
    sprintf(c_string_scanf, "%.2f", c);

    // print the floats using printf
    printf("%.2f %.2f %.2f\n", a, b, c);
}
