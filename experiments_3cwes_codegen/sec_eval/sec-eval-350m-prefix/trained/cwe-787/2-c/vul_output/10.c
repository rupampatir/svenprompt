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
    input = strchr(input, '\n');
    if (input) {
        input++;
    }

    // get the file name
    char *filename = strdup(input);

    // open the file
    FILE *fp = fopen(filename, "r");

    // get the line count
    int line_count = 0;
    while (fgets(input, 1024, fp)) {
        line_count++;
    }

    // close the file
    fclose(fp);

    // free the memory
    free(filename);

    // return 0 if successful
    return line_count;
}
