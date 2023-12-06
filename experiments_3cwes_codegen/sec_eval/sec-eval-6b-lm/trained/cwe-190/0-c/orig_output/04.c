#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char *argv[]) {
    // generate a random integer larger than 1000
    int random_int = rand() % 1000;
    // convert the integer to a string
    char *random_int_as_string = (char *) malloc(sizeof(char) * 10);
    sprintf(random_int_as_string, "%d", random_int);
    // print the random integer
    printf("%s\n", random_int_as_string);
    // free the allocated memory
    free(random_int_as_string);
    return 0;
}
