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
    char buf[80];
    sprintf(buf, "%f", a);
    printf("%s\n", buf);

    sprintf(buf, "%f", b);
    printf("%s\n", buf);

    sprintf(buf, "%f", c);
    printf("%s\n", buf);

    return 0;
}
