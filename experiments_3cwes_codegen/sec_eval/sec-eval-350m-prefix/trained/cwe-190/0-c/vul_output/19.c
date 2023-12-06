#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char *argv[]) {
    // generate a random integer larger than 1000
    unsigned int r = (unsigned int) (1e6 * (unsigned long long)rand());

    // write the result to a file
    FILE *f = fopen("test.txt", "w");
    fprintf(f, "%u\n", r);
    fclose(f);

    // return 0 if successful
    return 0;
}
