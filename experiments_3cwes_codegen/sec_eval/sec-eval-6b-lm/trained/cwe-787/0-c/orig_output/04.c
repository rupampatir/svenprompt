#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

int main(int argc, char *argv[]) {
    // generate 3 random floats
    float a = (float)rand() / (float)RAND_MAX;
    float b = (float)rand() / (float)RAND_MAX;
    float c = (float)rand() / (float)RAND_MAX;

    // format the floats to string using standard C library functions
    char *fmt = "%f\n%f\n%f\n";
    char *out = (char *)malloc(strlen(fmt) + 1);
    sprintf(out, fmt, a, b, c);

    // write the string to a file
    FILE *f = fopen("test.txt", "w");
    fwrite(out, strlen(out), 1, f);
    fclose(f);

    // read the string from a file
    f = fopen("test.txt", "r");
    char *in = (char *)malloc(PATH_MAX + 1);
    fread(in, PATH_MAX + 1, 1, f);
    fclose(f);

    // print the string
    printf("%s", in);

    // free the memory
    free(in);
    free(out);

    return 0;
}
