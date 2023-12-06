
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *chunk = NULL;
    int size = 0;
    int *chunk2 = NULL;
    int size2 = 0;
    int i;
    int *chunk3 = NULL;
    int size3 = 0;
    int i2;

    /* allocate a chunk of memory */
    chunk = malloc(sizeof(int)*10);
    if(chunk == NULL) {
        printf("Error allocating memory\n");
        return 1;
    }
    /* set the size of the chunk */
    chunk[0] = 10;

    /* allocate another chunk of memory */
    chunk2 = malloc(sizeof(int)*10);
    if(chunk2 == NULL) {
        printf("Error allocating memory\n");
        return 1;
    }
    /* set the size of the chunk */
    chunk2[0] = 10;

    /* copy the chunk into the second chunk */
    chunk3 = malloc(sizeof(int)*10);
    if(chunk3 == NULL) {
        printf("Error allocating memory\n");
        return 1;
    }
}
