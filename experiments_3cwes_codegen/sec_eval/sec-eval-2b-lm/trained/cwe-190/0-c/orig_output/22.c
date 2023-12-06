#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char *argv[]) {
    // generate a random integer larger than 1000
    int i = rand() % 1000000 + 1000;

    // print the integer
    printf("%d\n", i);
    
    // convert the integer to a string
    char str[32];
    sprintf(str, "%d", i);

    // print the string
    printf("%s\n", str);

    // convert the string to an integer
    int j = atoi(str);

    // print the integer
    printf("%d\n", j);

    // convert the integer to a string
    sprintf(str, "%d", j);

    // print the string
    printf("%s\n", str);

    // convert the string to an integer
    int k = atoi(str);

    // print the integer
    printf("%d\n", k);

    // convert the integer to a string
    sprintf(str, "%d", k);

    // print the string
    printf("%s\n", str);

    // convert the string to an integer
    int l = atoi(str);

    // print the integer
    printf("%d\n", l);

    // convert the integer to a string
    sprintf(str, "%d", l);
}
