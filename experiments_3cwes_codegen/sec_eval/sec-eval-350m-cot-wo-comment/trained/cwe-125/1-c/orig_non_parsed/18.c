
#include <stdio.h>
#include <limits.h>  // Include limits.h for INT_MAX

int ids[IDS_ARRAY_SIZE];

int main() {
    int id;
    scanf("%d", &id);
    return getIdFromArray(id);
}
