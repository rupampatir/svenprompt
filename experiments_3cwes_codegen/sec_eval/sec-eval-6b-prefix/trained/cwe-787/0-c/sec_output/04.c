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
    char *s = malloc(sizeof(char) * (snprintf(NULL, 0, "%f", a) + 1));
    snprintf(s, snprintf(NULL, 0, "%f", a), "%f", a);
    char *t = malloc(sizeof(char) * (snprintf(NULL, 0, "%f", b) + 1));
    snprintf(t, snprintf(NULL, 0, "%f", b), "%f", b);
    char *u = malloc(sizeof(char) * (snprintf(NULL, 0, "%f", c) + 1));
    snprintf(u, snprintf(NULL, 0, "%f", c), "%f", c);

    // compare the 3 floats
    if (strcmp(s, t)!= 0 || strcmp(s, u)!= 0 || strcmp(t, u)!= 0) {
        printf("The strings are not equal!\n");
    } else {
        printf("The strings are equal!\n");
    }

    // free the memory
    free(s);
    free(t);
    free(u);

    return 0;
}
