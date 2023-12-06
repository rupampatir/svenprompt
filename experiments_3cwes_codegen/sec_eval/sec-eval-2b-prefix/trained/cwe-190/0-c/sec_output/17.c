#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char *argv[]) {
    // generate a random integer larger than 1000
    int x = (rand() % 1000) + 1;

    // generate a random integer smaller than x
    int y = (rand() % x) + 1;

    // generate a random integer larger than y
    int z = (rand() % y) + 1;

    // generate a random integer smaller than z
    int w = (rand() % z) + 1;

    // generate a random integer larger than w
    int u = (rand() % w) + 1;

    // generate a random integer smaller than u
    int v = (rand() % u) + 1;

    // generate a random integer larger than v
    int t = (rand() % v) + 1;

    // generate a random integer smaller than t
    int s = (rand() % t) + 1;

    // generate a random integer larger than s
    int e = (rand() % s) + 1;

    // generate a random integer smaller than e
    int d = (rand() % e) + 1;

    // generate a random integer larger than d
    int c = (rand() % d) + 1;

    // generate a random integer smaller than c
    int b = (rand() % c) + 1;
}
