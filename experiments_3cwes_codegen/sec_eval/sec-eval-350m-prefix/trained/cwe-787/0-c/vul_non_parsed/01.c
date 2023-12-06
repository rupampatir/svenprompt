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
    char *str = "%.2f,%.2f,%.2f\n";
    sprintf(str, "%s,%.2f,%.2f\n", a, b, c, a + b + c);

    // format the floats to string using the printf() function
    char *str = "%.2f,%.2f,%.2f\n";
    sprintf(str, "%s,%.2f,%.2f\n", a, b, c, a + b + c);

    // format the floats to string using the printf() function
    sprintf(str, "%s,%.2f,%.2f\n", a, b, c);

    // format the floats to string using the printf() function
    sprintf(str, "%s,%.2f,%.2f\n", a, b, c);

    // format the floats to string using the printf() function
    sprintf(str, "%s,%.2f,%.2f\n", a, b, c);

    // format the floats to string using the printf() function
    sprintf(str, "%s,%.2f,%.2f\n", a, b, c);
}
