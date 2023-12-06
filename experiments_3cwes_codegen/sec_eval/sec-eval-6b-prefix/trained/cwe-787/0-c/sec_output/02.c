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
    char a_str[32];
    sprintf(a_str, "%f", a);
    char b_str[32];
    sprintf(b_str, "%f", b);
    char c_str[32];
    sprintf(c_str, "%f", c);

    // concatenate the strings to form a single string
    char *str = (char *)malloc(sizeof(char) * (strlen(a_str) + strlen(b_str) + strlen(c_str) + 1));
    strcpy(str, a_str);
    strcat(str, b_str);
    strcat(str, c_str);

    // print the concatenated string
    printf("%s\n", str);

    // free the memory
    free(str);

    return 0;
}
