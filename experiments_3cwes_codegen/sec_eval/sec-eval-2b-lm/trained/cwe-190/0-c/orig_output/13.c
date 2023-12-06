#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char *argv[]) {
    // generate a random integer larger than 1000
    int random_int = rand() % 1000;

    // get the string representation of the random integer
    char *random_string = (char *) malloc(sizeof(char) * 10);
    sprintf(random_string, "%d", random_int);

    // print the string representation of the random integer
    printf("The random integer is: %s\n", random_string);

    // free the memory allocated for the string
    free(random_string);

    return 0;
}
