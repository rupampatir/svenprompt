
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    char buffer[100];
    sprintf(buffer, "%f\n%f\n%f\n", a, b, c);

    // print the formatted string to standard output
    printf("%s", buffer);

    return 0;
}
