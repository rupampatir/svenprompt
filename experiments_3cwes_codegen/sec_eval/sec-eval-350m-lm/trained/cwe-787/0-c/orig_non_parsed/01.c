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
    char *str = (char *)malloc(sizeof(char) * (strlen(a) + strlen(b) + strlen(c) + 1));
    sprintf(str, "%f %f %f", a, b, c);

    // create the string
    char *string = (char *)malloc(sizeof(char) * (strlen(str) + 1));
    strcpy(string, str);

    // create the string
    char *string2 = (char *)malloc(sizeof(char) * (strlen(string) + 1));
    strcpy(string2, string);

    // create the string
    char *string3 = (char *)malloc(sizeof(char) * (strlen(string2) + 1));
    strcpy(string3, string2);

    // create the string
    char *string4 = (char *)malloc(sizeof(char) * (strlen(string3) + 1));
    strcpy(string4, string3);

    // create the string
    char *string5 = (char *)malloc(sizeof(char) * (strlen(string4) + 1));
    strcpy(string5, string4);
}
