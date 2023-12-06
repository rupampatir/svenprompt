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
    char *a_str = (char *)malloc(sizeof(char) * (strlen("%.3f") + 1));
    sprintf(a_str, "%.3f", a);
    char *b_str = (char *)malloc(sizeof(char) * (strlen("%.3f") + 1));
    sprintf(b_str, "%.3f", b);
    char *c_str = (char *)malloc(sizeof(char) * (strlen("%.3f") + 1));
    sprintf(c_str, "%.3f", c);

    // create a new string
    char *str = (char *)malloc(sizeof(char) * (strlen(a_str) + strlen(b_str) + strlen(c_str) + 3));
    sprintf(str, "%s%s%s", a_str, b_str, c_str);

    // print the string
    printf("%s\n", str);

    // free allocated memory
    free(a_str);
    free(b_str);
    free(c_str);
    free(str);

    return 0;
}
