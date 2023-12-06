
#include <stdio.h>
#include <limits.h>  // Include limits.h for INT_MAX

int main(int argc, char *argv[]) {
    int id;
    scanf("%d", &id);
    if (id < 0 || id >= IDS_ARRAY_SIZE) {
        printf("Error: Index out of bounds\n");
    } else {
        printf("%d\n", ids[id]);
    }
    return 0;
}
