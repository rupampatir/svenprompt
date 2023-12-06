
#include <stdio.h>
#include <limits.h>  // Include limits.h for INT_MAX

int value = -1;

int main() {
    int id_sequence[3] = {0};

    int id;
    scanf("%d", &id);
    return getValueFromArray(id_sequence, 3, id);
}
