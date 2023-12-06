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
    char *str_a = (char *)malloc(sizeof(char) * 10);
    char *str_b = (char *)malloc(sizeof(char) * 10);
    char *str_c = (char *)malloc(sizeof(char) * 10);
    sprintf(str_a, "%f", a);
    sprintf(str_b, "%f", b);
    sprintf(str_c, "%f", c);

    // convert the floats to strings
    char *str_a_cpy = strdup(str_a);
    char *str_b_cpy = strdup(str_b);
    char *str_c_cpy = strdup(str_c);

    // print the strings
    printf("%s\n", str_a_cpy);
    printf("%s\n", str_b_cpy);
    printf("%s\n", str_c_cpy);

    // free the strings
    free(str_a_cpy);
    free(str_b_cpy);
    free(str_c_cpy);

    return 0;
}
