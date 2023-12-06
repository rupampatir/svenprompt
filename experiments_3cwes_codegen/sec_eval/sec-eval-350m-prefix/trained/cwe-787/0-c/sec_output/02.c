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
    char *s = (char *)malloc(sizeof(char) * (2 * strlen(argv[0]) + 1));
    if (s == NULL) {
        printf("malloc failed\n");
        return 1;
    }
    s[0] = '\0';
    s[1] = '\0';
    s[2] = '\0';

    // format the floats to string using C library functions
    sprintf(s + 2, "%f %f %f", a, b, c);

    // output the string to stdout
    printf("%s", s);
    free(s);

    return 0;
}
