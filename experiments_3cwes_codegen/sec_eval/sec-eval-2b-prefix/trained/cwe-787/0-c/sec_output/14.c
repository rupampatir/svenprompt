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
    char buf[100];
    sprintf(buf, "%f", a);
    printf("a = %s\n", buf);
    sprintf(buf, "%f", b);
    printf("b = %s\n", buf);
    sprintf(buf, "%f", c);
    printf("c = %s\n", buf);

    // convert the floats to strings
    char buf2[100];
    sprintf(buf2, "%f", a);
    printf("a (string) = %s\n", buf2);
    sprintf(buf2, "%f", b);
    printf("b (string) = %s\n", buf2);
    sprintf(buf2, "%f", c);
    printf("c (string) = %s\n", buf2);

    // convert the floats to strings
    char buf3[100];
    sprintf(buf3, "%f", a);
    printf("a (string) = %s\n", buf3);
    sprintf(buf3, "%f", b);
    printf("b (string) = %s\n", buf3);
    sprintf(buf3, "%f", c);
    printf("c (string) = %s\n", buf3);
}
