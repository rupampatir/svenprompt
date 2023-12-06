#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char *argv[]) {
    // generate a random integer larger than 1000
    int i = rand() % 1000;

    // convert the integer to a string
    char buf[LONG_STRING];
    snprintf(buf, sizeof(buf), "%d", i);

    // convert the string to an integer
    int j = atoi(buf);

    // convert the integer to a string
    char buf2[LONG_STRING];
    snprintf(buf2, sizeof(buf2), "%d", j);

    // convert the string to an integer
    int k = atoi(buf2);

    // convert the integer to a string
    char buf3[LONG_STRING];
    snprintf(buf3, sizeof(buf3), "%d", k);

    // convert the string to an integer
    int l = atoi(buf3);

    // convert the integer to a string
    char buf4[LONG_STRING];
    snprintf(buf4, sizeof(buf4), "%d", l);

    // convert the string to an integer
    int m = atoi(buf4);

    // convert the integer to a string
    char buf5[LONG_STRING];
    snprintf(buf5, sizeof(buf5), "%d", m);
}
