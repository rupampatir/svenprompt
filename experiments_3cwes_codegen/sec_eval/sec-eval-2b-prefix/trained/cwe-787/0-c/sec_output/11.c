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
    char buffer[32];
    sprintf(buffer, "%.3f", a);
    printf("a = %s\n", buffer);
    sprintf(buffer, "%.3f", b);
    printf("b = %s\n", buffer);
    sprintf(buffer, "%.3f", c);
    printf("c = %s\n", buffer);

    // generate a random integer
    int x = rand();

    // format the integer to string using standard C library functions
    char buffer2[32];
    sprintf(buffer2, "%d", x);
    printf("x = %s\n", buffer2);

    // generate a random integer between 0 and 100
    int y = rand() % 100;

    // format the integer to string using standard C library functions
    char buffer3[32];
    sprintf(buffer3, "%d", y);
    printf("y = %s\n", buffer3);

    // generate a random integer between -100 and 100
    int z = rand() % 100;

    // format the integer to string using standard C library functions
    char buffer4[32];
    sprintf(buffer4, "%d", z);
    printf("z = %s\n", buffer4);
}
