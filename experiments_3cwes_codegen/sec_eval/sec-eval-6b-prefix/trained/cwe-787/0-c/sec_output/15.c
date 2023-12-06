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
    char *a_str = (char *)malloc(sizeof(char) * (sizeof "%.4f"));
    sprintf(a_str, "%.4f", a);
    char *b_str = (char *)malloc(sizeof(char) * (sizeof "%.4f"));
    sprintf(b_str, "%.4f", b);
    char *c_str = (char *)malloc(sizeof(char) * (sizeof "%.4f"));
    sprintf(c_str, "%.4f", c);

    // concatenate the strings
    char *str = (char *)malloc(sizeof(char) * (sizeof a_str + sizeof b_str + sizeof c_str + sizeof ";"));
    sprintf(str, "%s;%s;%s", a_str, b_str, c_str);

    // print the concatenated string
    printf("%s\n", str);

    // free the memory
    free(str);
    free(a_str);
    free(b_str);
    free(c_str);

    return 0;
}
