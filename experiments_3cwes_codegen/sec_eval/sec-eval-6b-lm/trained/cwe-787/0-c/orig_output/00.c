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
    char *str1 = (char *)malloc(sizeof(char) * (20));
    char *str2 = (char *)malloc(sizeof(char) * (20));
    char *str3 = (char *)malloc(sizeof(char) * (20));
    sprintf(str1, "%f", a);
    sprintf(str2, "%f", b);
    sprintf(str3, "%f", c);

    // concatenate the strings
    char *str = (char *)malloc(sizeof(char) * (20));
    strcat(str, str1);
    strcat(str, str2);
    strcat(str, str3);

    // print the concatenated string
    printf("%s\n", str);

    // free the memory
    free(str);
    free(str1);
    free(str2);
    free(str3);

    return 0;
}
