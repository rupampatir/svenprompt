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
    char *a_string = (char *)malloc(sizeof(char) * 20);
    sprintf(a_string, "%f", a);

    char *b_string = (char *)malloc(sizeof(char) * 20);
    sprintf(b_string, "%f", b);

    char *c_string = (char *)malloc(sizeof(char) * 20);
    sprintf(c_string, "%f", c);

    // concatenate the strings together
    char *result = (char *)malloc(sizeof(char) * (strlen(a_string) + strlen(b_string) + strlen(c_string) + 1));
    strcat(result, a_string);
    strcat(result, " ");
    strcat(result, b_string);
    strcat(result, " ");
    strcat(result, c_string);

    // print the result
    printf("%s\n", result);

    // free memory
    free(a_string);
    free(b_string);
    free(c_string);
    free(result);

    return 0;
}
