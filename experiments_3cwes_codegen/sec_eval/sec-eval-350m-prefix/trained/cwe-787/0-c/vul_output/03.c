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
    char *str = cstrdup(cstr());
    char *str2 = cstrdup(str);
    cstrfree(str);
    cstrfree(str2);

    // print the floats
    printf("a = %f, b = %f, c = %f\n", a, b, c);

    // free the strings
    cstrfree(str);
    cstrfree(str2);

    // return 0
    return 0;
}
