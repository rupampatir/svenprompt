#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char *argv[]) {
    // generate a random integer larger than 1000
    int i = rand() % 1000 + 1;

    // print the integer
    printf("%d\n", i);

    // print the integer to a file
    FILE *fp = fopen("myfile.txt", "w");
    fprintf(fp, "%d", i);
    fclose(fp);

    return 0;
}
