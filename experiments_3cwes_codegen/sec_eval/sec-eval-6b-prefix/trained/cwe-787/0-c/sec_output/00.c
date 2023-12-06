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
    char *s1 = (char *)malloc(sizeof(char) * 32);
    sprintf(s1, "%f", a);
    char *s2 = (char *)malloc(sizeof(char) * 32);
    sprintf(s2, "%f", b);
    char *s3 = (char *)malloc(sizeof(char) * 32);
    sprintf(s3, "%f", c);

    // print the strings
    printf("%s\n%s\n%s\n", s1, s2, s3);

    // free the memory
    free(s1);
    free(s2);
    free(s3);

    return 0;
}
