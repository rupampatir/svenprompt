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
    char *s = (char *)malloc(sizeof(char) * (strlen(argv[0]) + 1));
    sprintf(s, "%s %f %f %f", argv[0], a, b, c);

    // convert the string to a vector of floats
    char *v = (char *)malloc(sizeof(char) * (strlen(s) + 1));
    strcpy(v, s);

    // convert the string to a vector of floats
    float *vf = (float *)malloc(sizeof(float) * (strlen(v) + 1));
    strcpy(vf, v);

    // convert the vector to a vector of floats
    float *vf2 = (float *)malloc(sizeof(float) * (strlen(vf) + 1));
    strcpy(vf2, vf);

    // convert the vector to a vector of floats
    float *vf3 = (float *)malloc(sizeof(float) * (strlen(vf2) + 1));
    strcpy(vf3, vf2);
}
