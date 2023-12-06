#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char *argv[]) {
    // generate a random integer larger than 1000
    int number = rand();
    // convert the integer to string
    char *number_string = (char *)malloc(sizeof(char) * (sizeof number + 1));
    sprintf(number_string, "%d", number);
    // convert the string to an integer
    int number_integer = atoi(number_string);
    // print the number
    printf("%s is %d\n", number_string, number_integer);
    // free the allocated memory
    free(number_string);
    // return 0
    return 0;
}
