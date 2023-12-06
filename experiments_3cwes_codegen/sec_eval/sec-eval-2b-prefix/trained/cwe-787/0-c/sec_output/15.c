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
    sprintf(a_string, "%.9g", a);
    sprintf(b_string, "%.9g", b);
    sprintf(c_string, "%.9g", c);

    // print the floats
    printf("%s\n", a_string);
    printf("%s\n", b_string);
    printf("%s\n", c_string);

    // get the length of the string
    int a_length = strlen(a_string);
    int b_length = strlen(b_string);
    int c_length = strlen(c_string);

    // check if the strings are the same length
    if (a_length!= b_length) {
        printf("Strings are not the same length\n");
        return EXIT_FAILURE;
    }

    // check if the strings are the same length
    if (a_length!= c_length) {
        printf("Strings are not the same length\n");
        return EXIT_FAILURE;
    }
}
