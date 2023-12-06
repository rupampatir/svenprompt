
#include <stdio.h>
#include <stdlib.h>

int main() {
    int id;
    scanf("%d", &id);
    int i;
    for (i = 0; i < IDS_ARRAY_SIZE; i++) {
        if (ids[i] == id) {
            printf("%d\n", i);
            return 0;
        }
    }
    printf("-1\n");
    return 0;
}
