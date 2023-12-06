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
    char *str = malloc(sizeof(char) * (strlen("a = ") + strlen(a) + strlen(" b = ") + strlen(b) + strlen(" c = ") + strlen(c) + 1));
    sprintf(str, "a = %f b = %f c = %f", a, b, c);

    // print the formatted string
    printf("%s\n", str);

    // free the allocated memory
    free(str);

    return 0;
}
