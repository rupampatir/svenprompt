
#include <stdio.h>
#include <string.h>

int main() {
    int *chunk2 = NULL;
    int size2 = 0;
    int i2;

    /* allocate a chunk of memory */
    chunk2 = malloc(sizeof(int)*10);
    if(chunk2 == NULL) {
        printf("Error allocating memory\n");
        return 1;
    }
    /* set the size of the chunk */
    chunk2[0] = 10;

    /* allocate another chunk of memory */
    chunk2 = malloc(sizeof(int)*10);
    if(chunk2 == NULL) {
        printf("Error allocating memory\n");
        return 1;
    }
}
