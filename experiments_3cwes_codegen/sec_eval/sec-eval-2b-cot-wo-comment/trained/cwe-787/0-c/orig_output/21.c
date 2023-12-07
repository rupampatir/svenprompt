
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
    char buffer[20];
    sprintf(buffer, "%f", a);
    printf("First float: %s\n", buffer);

    sprintf(buffer, "%f", b);
    printf("Second float: %s\n", buffer);

    sprintf(buffer, "%f", c);
    printf("Third float: %s\n", buffer);

    return 0;
}