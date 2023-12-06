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
    char *a_str = (char *) malloc((sizeof(float) * 8) + 1);
    char *b_str = (char *) malloc((sizeof(float) * 8) + 1);
    char *c_str = (char *) malloc((sizeof(float) * 8) + 1);
    sprintf(a_str, "%f", a);
    sprintf(b_str, "%f", b);
    sprintf(c_str, "%f", c);

    // print the strings
    printf("%s %s %s\n", a_str, b_str, c_str);

    // free memory
    free(a_str);
    free(b_str);
    free(c_str);

    return 0;
}
