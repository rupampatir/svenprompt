#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char *argv[]) {
    // generate a random integer larger than 1000
    int x = rand() % 1000 + 1;
    // convert the integer to a string
    char s[100];
    sprintf(s, "%d", x);

    // convert the string to a double
    double d = atof(s);

    // print the result
    printf("%s = %f\n", s, d);

    // exit
    exit(0);
}
