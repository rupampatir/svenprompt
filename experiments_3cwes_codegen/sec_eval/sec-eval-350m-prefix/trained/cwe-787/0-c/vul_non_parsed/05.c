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
    char *s = (char *)malloc(sizeof(char)*(strlen("%.2f%.2f%.2f")+1));
    sprintf(s, "%.2f%.2f%.2f", a, b, c);
    printf("%s\n", s);
    free(s);

    // format the floats to string using a custom format
    char *s = (char *)malloc(sizeof(char)*(strlen("%.2f%.2f%.2f")+1));
    sprintf(s, "%.2f%.2f%.2f", a, b, c);
    printf("%s\n", s);
    free(s);

    // format the floats to string using a custom format
    sprintf(s, "%.2f%.2f%.2f", a, b, c);
    printf("%s\n", s);
    free(s);

    // format the floats to string using a custom format
    sprintf(s, "%.2f%.2f%.2f", a, b, c);
    printf("%s\n", s);
    free(s);
}
