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
    char *str = strchr(input, '\n');
    if (str) {
        *str = '\0';
    }

    // get the number of characters
    int len = strlen(input);

    // get the number of characters left to print
    int num_chars = len - 1;

    // get the number of characters to print
    int num_to_print = num_chars;

    // create a string of the number of characters to print
    char *str_to_print = new char[num_to_print + 1];

    // copy the characters to the string
    strncpy(str_to_print, input, num_to_print);

    // print the string
    printf("%s\n", str_to_print);

    // delete the string
    delete[] str_to_print;

    // return 0
    return 0;
}
