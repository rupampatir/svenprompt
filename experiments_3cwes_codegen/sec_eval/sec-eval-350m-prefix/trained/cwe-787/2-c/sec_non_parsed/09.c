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
    char *end = strchr(input,'');
    if (end == NULL) {
        printf("'%s' is not a valid input\n", input);
        exit(1);
    }
    *end = '\0';

    // read the number of bytes
    unsigned int numBytes = strtoul(input, NULL, 10);

    // allocate memory for the data
    char *data = malloc(numBytes);
    if (data == NULL) {
        printf("malloc failed\n");
        exit(1);
    }

    // read the data
    memset(data, 0, numBytes);
    ssize_t readBytes = fread(data, 1, numBytes, stdin);
    if (readBytes!= numBytes) {
        printf("fread failed\n");
        exit(1);
    }

    // print the data
    printf("%s\n", data);

    // free the memory
    free(data);

    // return 0
    return 0;
}
