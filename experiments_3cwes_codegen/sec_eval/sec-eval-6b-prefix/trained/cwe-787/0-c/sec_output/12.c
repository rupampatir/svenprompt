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
    char *a_str = (char *)malloc(sizeof(char) * (20));
    char *b_str = (char *)malloc(sizeof(char) * (20));
    char *c_str = (char *)malloc(sizeof(char) * (20));
    sprintf(a_str, "%f", a);
    sprintf(b_str, "%f", b);
    sprintf(c_str, "%f", c);

    // call strtok() to split the string into tokens
    char *tokens[3];
    tokens[0] = strtok(a_str, " ");
    tokens[1] = strtok(NULL, " ");
    tokens[2] = strtok(NULL, " ");

    // call strtok() again to split the first token into tokens
    char *tokens2[3];
    tokens2[0] = strtok(tokens[0], " ");
    tokens2[1] = strtok(NULL, " ");
    tokens2[2] = strtok(NULL, " ");
}
