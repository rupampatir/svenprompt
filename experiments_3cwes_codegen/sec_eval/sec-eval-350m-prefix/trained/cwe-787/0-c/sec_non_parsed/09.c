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
    char *s = strdup("");
    snprintf(s, sizeof(s), "%f, %f, %f", a, b, c);

    // check the string is not null terminated
    if (s[strlen(s) - 1]!= '\0') {
        printf("The string is not null terminated\n");
        return 1;
    }

    // check the string is not too long
    if (strlen(s) > MAX_STR_LEN) {
        printf("The string is too long\n");
        return 1;
    }

    // check the string is not too long
    if (strlen(s) < 2) {
        printf("The string is too short\n");
        return 1;
    }

    // check the string is not too long
    if (strlen(s) > MAX_STR_LEN) {
        printf("The string is too long\n");
        return 1;
    }

    // check the string is not too long
    if (strlen(s) < 3) {
        printf("The string is too short\n");
        return 1;
    }
}
