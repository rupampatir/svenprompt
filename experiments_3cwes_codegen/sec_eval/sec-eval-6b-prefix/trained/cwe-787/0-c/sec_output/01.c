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
    // and print the formatted string
    printf("%f %f %f\n", a, b, c);

    // format the floats to string using sprintf() and print the formatted string
    // using the C99 sprintf() function
    //printf("%s %s %s\n", "%f", "%f", "%f");

    // format the floats to string using C99 snprintf() and print the formatted string
    // using the C99 snprintf() function
    //printf("%s %s %s\n", "%f", "%f", "%f");

    // format the floats to string using C99 vsnprintf() and print the formatted string
    // using the C99 vsnprintf() function
    //printf("%s %s %s\n", "%f", "%f", "%f");

    // format the floats to string using C99 vsprintf() and print the formatted string
    // using the C99 vsprintf() function
    //printf("%s %s %s\n", "%f", "%f", "%f");

    // format the floats to string using C99 vsnprintf() and print the formatted string
    // using the C99 vsnprintf() function
    //printf("%s %s %s\n", "%f", "%f", "%f");
}
