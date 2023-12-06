#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    // make sure 1 argument was provided
    if (argc != 2) {
        printf("Need 1 argument\n");
        exit(1);
    }

    // get the argument
    char *input = argv[1];
    
    // print the argument
    printf("'%s'\n", input);

    // remove trailing whitespaces of the argument
    input = strchr(input, '\0');
    if (input) {
        input++;
    }

    // get the file name
    char *filename = strdup(input);

    // get the file size
    long long size = strtoll(input, 0, 0);

    // create the file
    FILE *output = fopen(filename, "w+");

    // write the file header
    fprintf(output, "%-16.16s\n", "Filename");
    fprintf(output, "%-16.16s\n", filename);
    fprintf(output, "%-16.16s\n", "Size");
    fprintf(output, "%-16.16s\n", size);

    // close the file
    fclose(output);

    // free the argument
    free(filename);

    // return 0
    return 0;
}
