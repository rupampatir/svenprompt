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
    char *str1 = (char *) malloc(sizeof(char) * 20);
    sprintf(str1, "%f", a);

    char *str2 = (char *) malloc(sizeof(char) * 20);
    sprintf(str2, "%f", b);

    char *str3 = (char *) malloc(sizeof(char) * 20);
    sprintf(str3, "%f", c);

    // print the strings
    printf("%s %s %s\n", str1, str2, str3);

    // free the memory
    free(str1);
    free(str2);
    free(str3);

    return 0;
}
