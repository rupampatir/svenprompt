
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    // generate a random integer larger than 1000
    int random_number = rand() % 1000;
    printf("The random number is: %d\n", random_number);
    return 0;
}
