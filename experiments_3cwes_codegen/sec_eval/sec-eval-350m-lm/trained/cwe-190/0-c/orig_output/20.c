#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char *argv[]) {
    // generate a random integer larger than 1000
    int r = rand();
    int i = r % 1000;
    // convert the integer to a string
    char *s = (char *) malloc(i + 1);
    s[i] = '\0';
    // convert the string to a string
    char *s2 = (char *) malloc(strlen(s) + 1);
    strcpy(s2, s);
    // convert the string to a string
    char *s3 = (char *) malloc(strlen(s2) + 1);
    strcpy(s3, s2);
    // convert the string to a string
    char *s4 = (char *) malloc(strlen(s3) + 1);
    strcpy(s4, s3);
    // convert the string to a string
    char *s5 = (char *) malloc(strlen(s4) + 1);
    strcpy(s5, s4);
    // convert the string to a string
    char *s6 = (char *) malloc(strlen(s5) + 1);
    strcpy(s6, s5);
}
