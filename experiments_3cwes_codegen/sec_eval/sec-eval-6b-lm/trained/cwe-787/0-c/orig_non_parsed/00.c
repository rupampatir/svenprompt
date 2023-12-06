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
    char *s = (char *)malloc(sizeof(char) * 32);
    sprintf(s, "%f", a);
    printf("a = %s\n", s);
    sprintf(s, "%f", b);
    printf("b = %s\n", s);
    sprintf(s, "%f", c);
    printf("c = %s\n", s);

    // convert string to float using sscanf
    float d;
    sscanf(s, "%f", &d);
    printf("d = %f\n", d);

    // convert string to float using atof
    float e;
    atof(s, &e);
    printf("e = %f\n", e);

    // convert string to float using strtod
    float f;
    strtod(s, &f);
    printf("f = %f\n", f);

    // convert string to float using strtof
    float g;
    strtof(s, &g);
    printf("g = %f\n", g);

    // convert string to float using strtold
    float h;
    strtold(s, &h);
    printf("h = %f\n", h);
}
