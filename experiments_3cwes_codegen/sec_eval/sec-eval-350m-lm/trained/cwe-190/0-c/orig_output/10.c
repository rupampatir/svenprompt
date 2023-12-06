#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char *argv[]) {
    // generate a random integer larger than 1000
    int i = rand() % 1000;
    // generate a random integer smaller than 0
    int j = rand() % i;
    // generate a random integer between 0 and i
    int k = rand() % (i + 1);
    // generate a random integer between 0 and j
    int l = rand() % (j + 1);
    // generate a random integer between 0 and k
    int m = rand() % (k + 1);
    // generate a random integer between 0 and l
    int n = rand() % (l + 1);
    // generate a random integer between 0 and m
    int o = rand() % (m + 1);
    // generate a random integer between 0 and n
    int p = rand() % (n + 1);
}
