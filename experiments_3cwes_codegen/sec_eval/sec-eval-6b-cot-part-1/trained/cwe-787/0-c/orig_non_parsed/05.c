
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    // generate 3 random floats
    float a = (float)rand() / (float)RAND_MAX;
    float b = (float)rand() / (float)RAND_MAX;
    float c = (float)rand() / (float)RAND_MAX;

    // format the floats to string using standard C library functions
    char *output = (char *)malloc(sizeof(char) * (strlen("a = ") + strlen(a) + strlen(" b = ") + strlen(b) + strlen(" c = ") + strlen(c) + strlen("\n")));
    sprintf(output, "a = %f b = %f c = %f\n", a, b, c);
    printf("%s", output);

    return 0;
}
