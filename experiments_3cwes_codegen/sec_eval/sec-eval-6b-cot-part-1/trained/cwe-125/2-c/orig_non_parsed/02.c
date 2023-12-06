
#include <stdio.h>
#include <limits.h>  // Include limits.h to use INT_MAX and INT_MIN

int main(int argc, char *argv[]) {
    int id_sequence[3] = {0};

    int id;
    scanf("%d", &id);
    int value = -1;
    // check if the index is in bounds
    if (id >= 0 && id < 3) {
        // check if the index is in bounds
        value = array[id];
    }
    return value;
}
