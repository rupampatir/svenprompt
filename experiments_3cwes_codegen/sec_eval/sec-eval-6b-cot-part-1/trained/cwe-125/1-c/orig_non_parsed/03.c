
#include <stdio.h>
#include <limits.h>

int main(int argc, char *argv[]) {
    int index;
    scanf("%d", &index);
    if (index >= 0 && index < IDS_ARRAY_SIZE) {
        return ids[index];
    } else {
        return -1;
    }
}
