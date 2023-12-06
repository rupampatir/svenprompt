
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int index;
    scanf("%d", &index);
    if (index < 0 || index >= IDS_ARRAY_SIZE) {
        return -1;
    } else {
        return ids[index];
    }
}
