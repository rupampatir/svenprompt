#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char *argv[]) {
    // generate a random integer larger than 1000
    int random_int = rand() % 1000;

    // convert the integer to a string
    char *random_string = (char *) malloc(sizeof(char) * 10);
    sprintf(random_string, "%d", random_int);

    // print the random integer and string
    printf("random_int: %s\n", random_string);

    // free the string
    free(random_string);

    // exit
    return 0;
}
