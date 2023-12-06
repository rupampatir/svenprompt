#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char *argv[]) {
    // generate a random integer larger than 1000
    int a = (rand() % 1000) + 1;
    // generate a random integer smaller than a
    int b = (rand() % a) + 1;
    // generate a random integer between a and b
    int c = (rand() % (b - a)) + a;
    // generate a random integer between 0 and INT_MAX
    int d = (rand() % INT_MAX) + 0;
    // generate a random integer between 0 and INT_MAX
    int e = (rand() % INT_MAX) + 0;
    // generate a random integer between 0 and INT_MAX
    int f = (rand() % INT_MAX) + 0;
    // generate a random integer between 0 and INT_MAX
    int g = (rand() % INT_MAX) + 0;
    // generate a random integer between 0 and INT_MAX
    int h = (rand() % INT_MAX) + 0;
    // generate a random integer between 0 and INT_MAX
    int i = (rand() % INT_MAX) + 0;
    // generate a random integer between 0 and INT_MAX
    int j = (rand() % INT_MAX) + 0;
}
