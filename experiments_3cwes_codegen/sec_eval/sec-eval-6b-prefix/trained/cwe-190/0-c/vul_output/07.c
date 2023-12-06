#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char *argv[]) {
    // generate a random integer larger than 1000
    int random = rand();

    // print the random integer
    printf("%d\n", random);

    // convert the random integer to a string
    char *str = (char *)malloc(sizeof(char) * INT_MAX);
    sprintf(str, "%d", random);

    // print the string
    printf("%s\n", str);

    // free the string
    free(str);

    // return 0
    return 0;
}
