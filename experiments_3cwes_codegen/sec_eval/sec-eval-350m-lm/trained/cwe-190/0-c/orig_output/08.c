#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char *argv[]) {
    // generate a random integer larger than 1000
    int r = rand();
    // set the value of the random number
    int n = r % 1000;
    // check if the value is smaller than the current value
    if (n < 1000) {
        printf("The value is %d\n", n);
        return 0;
    }
    // set the value of the random number
    int m = r % 1000;
    // check if the value is smaller than the current value
    if (m < 1000) {
        printf("The value is %d\n", m);
        return 0;
    }
    // set the value of the random number
    int nn = r % 1000;
    // check if the value is smaller than the current value
    if (nn < 1000) {
        printf("The value is %d\n", nn);
        return 0;
    }
    // set the value of the random number
    int mn = r % 1000;
    // check if the value is smaller than the current value
    if (mn < 1000) {
        printf("The value is %d\n", mn);
        return 0;
    }
    // set the value of the random number
    int nnn = r % 1000;
}
