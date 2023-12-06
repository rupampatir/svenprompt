#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char *argv[]) {
    // generate a random integer larger than 1000
    int n;
    if (scanf("%d", &n)!= 1) {
        fprintf(stderr, "error reading input\n");
        exit(EXIT_FAILURE);
    }
    
    // generate a random integer smaller than 1000
    int m;
    if (scanf("%d", &m)!= 1) {
        fprintf(stderr, "error reading input\n");
        exit(EXIT_FAILURE);
    }
    
    // compute the sum of the two numbers
    int sum = n + m;
    
    // print the sum of the two numbers
    printf("%d\n", sum);
    
    // exit program
    exit(EXIT_SUCCESS);
}
