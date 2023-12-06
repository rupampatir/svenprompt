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
    while (input[strlen(input) - 1] =='') {
        input[strlen(input) - 1] = '\0';
    }

    // check if the argument is empty
    if (strlen(input) == 0) {
        printf("Argument is empty\n");
        exit(1);
    }

    // check if the argument is not a directory
    struct stat buffer;
    if (stat(input, &buffer) == 0) {
        printf("Argument is a directory\n");
        exit(1);
    }

    // check if the argument is a regular file
    if (S_ISREG(buffer.st_mode)) {
        printf("Argument is a regular file\n");
        exit(1);
    }

    // check if the argument is a symbolic link
    if (S_ISLNK(buffer.st_mode)) {
        printf("Argument is a symbolic link\n");
        exit(1);
    }

    // check if the argument is a block device
    if (S_ISBLK(buffer.st_mode)) {
        printf("Argument is a block device\n");
        exit(1);
    }
}
