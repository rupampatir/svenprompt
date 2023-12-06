
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
    char *result = (char *)malloc(sizeof(char) * (20 + strlen(a) + strlen(b) + strlen(c)));
    sprintf(result, "%s, %s, %s", a, b, c);
    printf("%s\n", result);

    return 0;
}
