#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char *argv[]) {
    // generate a random integer larger than 1000
    int i = rand();

    // print the random integer
    printf("%d\n", i);

    // generate a random integer smaller than 1000
    int j = rand();

    // print the random integer
    printf("%d\n", j);

    // generate a random integer larger than -1000
    int k = rand();

    // print the random integer
    printf("%d\n", k);

    // generate a random integer smaller than -1000
    int l = rand();

    // print the random integer
    printf("%d\n", l);

    // generate a random integer larger than INT_MAX
    int m = INT_MAX + 1;

    // print the random integer
    printf("%d\n", m);

    // generate a random integer smaller than INT_MIN
    int n = INT_MIN - 1;

    // print the random integer
    printf("%d\n", n);

    // generate a random integer larger than INT_MAX
    int o = INT_MAX + 1;

    // print the random integer
    printf("%d\n", o);

    // generate a random integer smaller than INT_MIN
    int p = INT_MIN - 1;
}
