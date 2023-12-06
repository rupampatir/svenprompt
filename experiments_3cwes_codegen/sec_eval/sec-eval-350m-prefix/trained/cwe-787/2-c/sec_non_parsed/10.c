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
    char *p = strchr(input, '\0');
    if (p == NULL) {
        printf("%s is not a valid argument\n", input);
        exit(1);
    }
    *p = '\0;';

    // remove the argument from the string
    char *p1 = strchr(input, '\0');
    if (p1 == NULL) {
        printf("%s is not a valid argument\n", input);
        exit(1);
    }
    *p1 = '\0;';

    // get the number of characters in the argument
    int n = strlen(input);

    // copy the argument to a new string
    char *p2 = new char[n+1];
    strncpy(p2, input, n);
    p2[n] = '\0;';

    // copy the result of the copy
    char *p3 = new char[n+1];
    strncpy(p3, p2, n);
    p3[n] = '\0;';

    // free the new string
    delete[] p2;
    delete[] p3;

    // return the result
    return 0;
}
