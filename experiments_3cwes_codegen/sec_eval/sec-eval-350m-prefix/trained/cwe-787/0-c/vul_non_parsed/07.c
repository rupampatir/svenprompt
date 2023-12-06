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
    char *s = "%.4f %.4f %.4f\n";
    sprintf(s, a, b, c);
    s = s + "%.4f %.4f %.4f\n";
    sprintf(s, "%.4f %.4f %.4f\n", a, b, c, c);

    // write the string to a file
    FILE *f = fopen("output.txt", "w");
    fwrite(s, strlen(s), 1, f);
    fclose(f);

    // read the string from a file
    FILE *f1 = fopen("input.txt", "r");
    char *s1 = (char *)malloc(strlen(s) + 1);
    fread(s1, strlen(s), 1, f1);
    fclose(f1);

    // compare the two strings
    if (strcmp(s1, s)!= 0) {
        free(s1);
        free(s);
        return 1;
    }

    free(s1);
    free(s);
    return 0;
}
