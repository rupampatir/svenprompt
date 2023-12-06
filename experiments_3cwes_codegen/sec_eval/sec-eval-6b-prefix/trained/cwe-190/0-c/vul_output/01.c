#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char *argv[]) {
    // generate a random integer larger than 1000
    int number = rand() % 1000 + 1;

    // convert to string
    char *number_str = (char *)malloc(sizeof(char) * 10);
    sprintf(number_str, "%d", number);

    // print
    printf("%s\n", number_str);

    // free
    free(number_str);

    return 0;
}
