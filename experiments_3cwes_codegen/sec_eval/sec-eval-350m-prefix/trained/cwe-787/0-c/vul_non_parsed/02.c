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
    char *s = (char *)malloc(sizeof(char)*(strlen(a)+strlen(b)+strlen(c)+1));
    sprintf(s,"%.6f %.6f %.6f",a,b,c);

    // format the string to stdout
    printf("%.6f\n",s);

    // free memory allocated by malloc
    free(s);

    // return 0
    return 0;
}
