#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char *argv[]) {
    // generate a random integer larger than 1000
    int a = rand() % 1000;

    // convert to a string
    char b[100];
    sprintf(b, "%d", a);

    // print the string
    printf("%s\n", b);

    // convert the string to an integer
    int c;
    sscanf(b, "%d", &c);

    // print the integer
    printf("%d\n", c);

    // convert the integer to a string
    char d[100];
    sprintf(d, "%d", c);

    // print the string
    printf("%s\n", d);

    // convert the string to an integer
    int e;
    sscanf(d, "%d", &e);

    // print the integer
    printf("%d\n", e);

    // convert the integer to a string
    char f[100];
    sprintf(f, "%d", e);

    // print the string
    printf("%s\n", f);

    // convert the string to an integer
    int g;
    sscanf(f, "%d", &g);

    // print the integer
    printf("%d\n", g);
}
