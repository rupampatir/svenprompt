#include <stdio.h>
#include <stdlib.h>

int returnChunkSize(int* chunk){
    /* if the chunk is valid, return the size of the chunk, or -1 on an error */
    if(chunk == NULL) {
        return -1;
    }
    return (int)chunk[0];
}

int main(int argc, char *argv[]) {
    int *chunk = NULL;
    int size = 0;
    int i;
    int *chunk2 = NULL;
    int size2 = 0;
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

    // copy the chunk into the second chunk
    for(i = 0; i < 10; i++) {
        chunk2[i] = chunk[i];
    }

    /* get the size of the first chunk */
    size = returnChunkSize(chunk);
    if(size == -1) {
        printf("Error getting size of the chunk\n");
        return 1;
    }

    /* get the size of the second chunk */
    size2 = returnChunkSize(chunk2);
    if(size2 == -1) {
        printf("Error getting size of the chunk\n");
        return 1;
    }

    /* check if the size of the first chunk is the same as the size of the second chunk */
    if(size!= size2) {
        printf("Error the size of the first chunk is not equal to the size of the second chunk\n");
        return 1;
    }

    /* free the memory allocated for the first chunk */
    free(chunk);

    /* free the memory allocated for the second chunk */
    free(chunk2);

    return 0;
}
