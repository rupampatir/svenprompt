#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char *argv[]) {
    // generate a random integer larger than 1000
    int i, n;
    srand(time(NULL));
    n = rand() % 1000 + 1;

    // convert the integer to a string
    char str[n];
    for (i = 0; i < n; i++) {
        str[i] = rand() % 256;
    }
    str[n-1] = '\0';

    // print the string
    printf("%s\n", str);
    return 0;
}
