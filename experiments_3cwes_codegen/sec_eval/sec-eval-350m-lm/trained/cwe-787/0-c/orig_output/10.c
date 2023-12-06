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
    char *str = (char *)malloc(sizeof(a));
    sprintf(str, "%f", a);
    char *str2 = (char *)malloc(sizeof(b));
    sprintf(str2, "%f", b);
    char *str3 = (char *)malloc(sizeof(c));
    sprintf(str3, "%f", c);

    // print the floats
    printf("%s\n", str);
    printf("%s\n", str2);
    printf("%s\n", str3);

    // free the strings
    free(str);
    free(str2);
    free(str3);

    return 0;
}
