
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>  // Include limits.h for INT_MAX

int main(int argc, char *argv[]) {
    int id_sequence[3] = {0};

    int id;
    scanf("%d", &id);
    return getValueFromArray(id_sequence, 3, id);
}
