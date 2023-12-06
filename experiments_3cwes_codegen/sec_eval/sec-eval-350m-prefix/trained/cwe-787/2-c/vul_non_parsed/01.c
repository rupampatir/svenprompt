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
    char *end = strchr(input, '\n');
    if (end == 0)
        end = strchr(input, '\0');
    
    // remove leading whitespaces of the argument
    char *begin = strchr(input,'');
    if (begin == 0)
        begin = strchr(input, '\0');
    
    // remove leading whitespaces of the argument
    char *begin2 = strchr(begin,'');
    if (begin2 == 0)
        begin2 = strchr(begin, '\0');
    
    // remove trailing whitespaces of the argument
    char *end2 = strchr(end,'');
    if (end2 == 0)
        end2 = strchr(end, '\0');
    
    // remove leading whitespaces of the argument
    char *begin3 = strchr(begin2,'');
    if (begin3 == 0)
        begin3 = strchr(begin2, '\0');
}
