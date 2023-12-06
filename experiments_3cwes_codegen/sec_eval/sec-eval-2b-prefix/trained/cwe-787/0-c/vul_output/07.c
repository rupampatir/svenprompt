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
    char str[32];
    sprintf(str, "%f", a);
    printf("a = %s\n", str);
    sprintf(str, "%f", b);
    printf("b = %s\n", str);
    sprintf(str, "%f", c);
    printf("c = %s\n", str);

    // generate 3 random integers
    int a1 = (int)rand() % INT_MAX;
    int a2 = (int)rand() % INT_MAX;
    int a3 = (int)rand() % INT_MAX;

    // format the integers to string using standard C library functions
    char str1[32];
    sprintf(str1, "%d", a1);
    printf("a1 = %s\n", str1);
    char str2[32];
    sprintf(str2, "%d", a2);
    printf("a2 = %s\n", str2);
    char str3[32];
    sprintf(str3, "%d", a3);
    printf("a3 = %s\n", str3);
}
