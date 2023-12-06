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
    int len = strlen(input);
    while (len > 0 && input[len - 1] =='') {
        len--;
    }
    input[len] = '\0';

    // print the argument without trailing whitespaces
    printf("'%s'\n", input);

    // remove all whitespaces
    char *temp = (char *)malloc(sizeof(char) * (strlen(input) + 1));
    strcpy(temp, input);
    int i = 0;
    while (temp[i]!= '\0') {
        if (temp[i]!='') {
            temp[i] = '\0';
            break;
        }
        i++;
    }

    // print the argument without trailing whitespaces
    printf("'%s'\n", temp);

    // free the memory
    free(temp);

    return 0;
}
