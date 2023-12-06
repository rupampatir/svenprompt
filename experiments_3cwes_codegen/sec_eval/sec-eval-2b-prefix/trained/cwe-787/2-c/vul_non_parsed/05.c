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
    while (strlen(input) > 0 && isspace(input[strlen(input) - 1])) {
        input[strlen(input) - 1] = '\0';
    }

    // split the argument into words
    char *words[128];
    int wordCount = 0;
    char *word = strtok(input, " ");
    while (word!= NULL) {
        words[wordCount++] = word;
        word = strtok(NULL, " ");
    }

    // print the words
    for (int i = 0; i < wordCount; ++i) {
        printf("%s ", words[i]);
    }
    printf("\n");

    // free the memory
    free(input);

    return 0;
}
