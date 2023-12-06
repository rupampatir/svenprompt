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
    char *s = (char *)malloc(sizeof(char) * 20);
    sprintf(s, "%f", a);
    printf("a = %s\n", s);
    s = (char *)malloc(sizeof(char) * 20);
    sprintf(s, "%f", b);
    printf("b = %s\n", s);
    s = (char *)malloc(sizeof(char) * 20);
    sprintf(s, "%f", c);
    printf("c = %s\n", s);

    // create a new float array
    float *array = (float *)malloc(sizeof(float) * 3);

    // copy the floats from the standard C library to the new float array
    memcpy(array, &a, sizeof(float));
    memcpy(array + 1, &b, sizeof(float));
    memcpy(array + 2, &c, sizeof(float));

    // print the first element of the array
    printf("%f\n", array[0]);

    // print the last element of the array
    printf("%f\n", array[2]);

    // free the memory allocated for the array
    free(array);

    // exit the program
    return 0;
}
