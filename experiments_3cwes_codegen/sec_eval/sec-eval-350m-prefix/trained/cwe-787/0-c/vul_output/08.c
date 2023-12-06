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
    char *strA = (char *)malloc(sizeof(a));
    char *strB = (char *)malloc(sizeof(b));
    char *strC = (char *)malloc(sizeof(c));

    sprintf(strA, "%f", a);
    sprintf(strB, "%f", b);
    sprintf(strC, "%f", c);

    // convert the string to a float
    float fA = atof(strA);
    float fB = atof(strB);
    float fC = atof(strC);

    // convert the float to a string
    char *strF = (char *)malloc(sizeof(fA));
    sprintf(strF, "%f", fA);

    // convert the string to a float
    float fF = atof(strF);

    // convert the float to a string
    char *strF2 = (char *)malloc(sizeof(fF));
    sprintf(strF2, "%f", fF);

    // convert the string to a float
    float fF2 = atof(strF2);
}
