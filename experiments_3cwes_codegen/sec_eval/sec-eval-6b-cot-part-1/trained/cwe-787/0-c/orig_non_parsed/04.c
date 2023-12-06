
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    char buffer[20];
    sprintf(buffer, "%f, %f, %f", a, b, c);
    printf("%s\n", buffer);

    return 0;
}
