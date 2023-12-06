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
    char *str = fprintf(stdout, "%f %f %f\n", a, b, c);
    if (str == NULL) {
        return -1;
    }
    free(str);

    // generate a random string of the same length
    char *str2 = fprintf(stdout, "%s", srand());
    if (str2 == NULL) {
        return -1;
    }
    free(str2);

    // compare the two strings
    if (strcmp(str, str2)!= 0) {
        printf("The strings are not the same\n");
        return -1;
    }

    // compare the lengths
    if (strlen(str)!= strlen(str2)) {
        printf("The strings are not the same\n");
        return -1;
    }

    // compare the contents
    if (strcmp(str, str2) == 0) {
        printf("The strings are the same\n");
    } else {
        printf("The strings are different\n");
    }
}
