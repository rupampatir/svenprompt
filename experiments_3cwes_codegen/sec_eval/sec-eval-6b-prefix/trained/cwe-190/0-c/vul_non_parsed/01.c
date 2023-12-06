#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char *argv[]) {
    // generate a random integer larger than 1000
    int n = 1000;
    int *a = (int *) malloc(n * sizeof(int));
    int *b = (int *) malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        a[i] = rand() % n;
        b[i] = a[i];
    }

    int *c = (int *) malloc(n * sizeof(int));
    int *d = (int *) malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        c[i] = a[i];
        d[i] = b[i];
    }

    int *e = (int *) malloc(n * sizeof(int));
    int *f = (int *) malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        e[i] = c[i];
        f[i] = d[i];
    }

    int *g = (int *) malloc(n * sizeof(int));
    int *h = (int *) malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        g[i] = e[
