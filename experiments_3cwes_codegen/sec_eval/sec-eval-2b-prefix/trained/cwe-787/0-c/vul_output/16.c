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
    char *a_string = itoa(a);
    char *b_string = itoa(b);
    char *c_string = itoa(c);

    // concatenate the strings together
    char *final_string = malloc(strlen(a_string) + strlen(b_string) + strlen(c_string) + 1);
    strcpy(final_string, a_string);
    strcat(final_string, b_string);
    strcat(final_string, c_string);

    // print the concatenated string
    printf("%s\n", final_string);

    // free the memory
    free(a_string);
    free(b_string);
    free(c_string);
    free(final_string);

    return 0;
}
