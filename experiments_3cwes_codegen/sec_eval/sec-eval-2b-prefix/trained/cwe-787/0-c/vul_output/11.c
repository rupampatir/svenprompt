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
    char *a_string = itoa(a, NULL, 10);
    char *b_string = itoa(b, NULL, 10);
    char *c_string = itoa(c, NULL, 10);

    // concatenate the strings together
    char *result = (char *)malloc(strlen(a_string) + strlen(b_string) + strlen(c_string) + 1);
    strcpy(result, a_string);
    strcat(result, b_string);
    strcat(result, c_string);

    // free memory
    free(a_string);
    free(b_string);
    free(c_string);

    // print the result
    printf("%s\n", result);

    // free memory
    free(result);

    return 0;
}
