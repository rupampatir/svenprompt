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
    char *sa = (char *)malloc(sizeof(char) * 20);
    char *sb = (char *)malloc(sizeof(char) * 20);
    char *sc = (char *)malloc(sizeof(char) * 20);
    sprintf(sa, "%f", a);
    sprintf(sb, "%f", b);
    sprintf(sc, "%f", c);

    // print the floats
    printf("%s %s %s\n", sa, sb, sc);

    // free the memory
    free(sa);
    free(sb);
    free(sc);

    return EXIT_SUCCESS;
}
