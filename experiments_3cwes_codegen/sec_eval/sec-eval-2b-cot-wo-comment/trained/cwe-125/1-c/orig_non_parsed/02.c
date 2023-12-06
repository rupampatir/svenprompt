
#include <stdio.h>
#include <limits.h>  // Include limits.h to use INT_MAX and INT_MIN

int main() {
    int ids[IDS_ARRAY_SIZE];
    int id;
    scanf("%d", &id);
    return getIdFromArray(id);
}
