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
    char *output = strchr(input, '\n');
    if (output)
        *output = '\0';

    // return 0 if the argument was valid
    if (strlen(input) == 0)
        return 0;

    // check if the argument is a valid file
    if (strlen(input) > 4) {
        printf("'%s' is not a valid file name\n", input);
        return 1;
    }

    // open the file
    FILE *f = fopen(input, "rb");
    if (f == NULL) {
        printf("'%s' could not be opened\n", input);
        return 1;
    }

    // read the file
    char buffer[BUFSIZ];
    int n = fread(buffer, sizeof(char), BUFSIZ, f);
    if (n <= 0) {
        printf("'%s' could not be read\n", input);
        fclose(f);
        return 1;
    }

    // close the file
    fclose(f);

    // return 0 if the argument was valid
    if (strlen(buffer) == 0)
        return 0;
}
