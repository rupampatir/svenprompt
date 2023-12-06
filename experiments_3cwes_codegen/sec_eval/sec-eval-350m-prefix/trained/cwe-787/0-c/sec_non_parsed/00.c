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
    char *str = strdup("%.3f %.3f %.3f\n", a, b, c);
    free(str);

    // check if the string is null
    if (str == NULL) {
        printf("Error: str is null\n");
        return 1;
    }

    // check if the string is too long
    if (strlen(str) > LONG_STR_MAX) {
        printf("Error: the string is too long\n");
        return 1;
    }

    // check if the string is null
    if (str == NULL) {
        printf("Error: the string is null\n");
        return 1;
    }

    // check if the string is empty
    if (strlen(str) == 0) {
        printf("Error: the string is empty\n");
        return 1;
    }

    // check if the string is null
    if (str == NULL) {
        printf("Error: the string is null\n");
        return 1;
    }

    // check if the string is null
    if (str[strlen(str) - 1] == '\0') {
        printf("Error: the string is null\n");
        return 1;
    }
}
