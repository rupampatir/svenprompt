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
    // (snprintf is not available on Windows)
    char buffer[32];
    snprintf(buffer, sizeof(buffer), "%f %f %f", a, b, c);

    // parse the floats from the string
    float d[3];
    char *ptr = buffer;
    int i = 0;
    while (*ptr!= '\0') {
        // parse the floats using strtod
        d[i] = strtod(ptr, &ptr);
        if (*ptr =='' || *ptr == '\0') {
            i++;
            ptr++;
        }
    }

    // compare the floats
    int fail = 0;
    if (a!= d[0]) {
        printf("FAIL: a!= d[0]\n");
        fail++;
    }
    if (b!= d[1]) {
        printf("FAIL: b!= d[1]\n");
        fail++;
    }
    if (c!= d[2]) {
        printf("FAIL: c!= d[2]\n");
        fail++;
    }
}
