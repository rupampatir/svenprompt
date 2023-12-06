#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char *argv[]) {
    // generate a random integer larger than 1000
    int random_number = rand() % 1000 + 1;

    // generate a random string
    char *random_string = (char *)malloc(sizeof(char) * 10);
    sprintf(random_string, "%d", random_number);

    // generate a random floating point number
    float random_float = rand() % 1000;

    // generate a random double
    double random_double = rand() % 1000;

    // generate a random boolean
    bool random_boolean = rand() % 2;

    printf("random_number = %d\n", random_number);
    printf("random_string = %s\n", random_string);
    printf("random_float = %f\n", random_float);
    printf("random_double = %f\n", random_double);
    printf("random_boolean = %d\n", random_boolean);

    return 0;
}
