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
    char str1[100];
    sprintf(str1, "%f", a);
    char str2[100];
    sprintf(str2, "%f", b);
    char str3[100];
    sprintf(str3, "%f", c);

    // check if the strings are equal
    if (strcmp(str1, str2) == 0) {
        printf("%s is equal to %s\n", str1, str2);
    } else {
        printf("%s is not equal to %s\n", str1, str2);
    }

    // check if the strings are not equal
    if (strcmp(str1, str3)!= 0) {
        printf("%s is not equal to %s\n", str1, str3);
    } else {
        printf("%s is equal to %s\n", str1, str3);
    }

    return EXIT_SUCCESS;
}
