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
    char *s = (char *)malloc(sizeof(char) * (strlen(a) + strlen(b) + strlen(c) + 1));
    sprintf(s, "%s %f %f %f", a, b, c, c);
    free(s);

    // generate a string from the generated string
    char *str = (char *)malloc(sizeof(char) * (strlen(s) + 1));
    strcpy(str, s);
    free(s);

    // print the string
    printf("%s\n", str);

    // free the string
    free(str);

    // free the generated string
    free(s);

    return 0;
}
