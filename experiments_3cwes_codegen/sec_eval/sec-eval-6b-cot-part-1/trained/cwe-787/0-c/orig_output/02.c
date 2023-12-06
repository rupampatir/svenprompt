
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    // generate 3 random floats
    float a = (float)rand() / (float)RAND_MAX;
    float b = (float)rand() / (float)RAND_MAX;
    float c = (float)rand() / (float)RAND_MAX;

    // format the floats to string using standard C library functions
    char* result = NULL;
    size_t result_size = 0;
    result = (char*)malloc(result_size);
    snprintf(result, result_size, "%f, %f, %f", a, b, c);

    printf("%s\n", result);

    return 0;
}
