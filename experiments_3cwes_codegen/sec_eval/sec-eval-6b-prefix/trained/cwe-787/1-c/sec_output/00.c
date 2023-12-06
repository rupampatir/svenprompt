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
    for(i=0; i<10; i++) {
        chunk2[i] = chunk[i];
    }

    /* print the chunk */
    for(i=0; i<10; i++) {
        printf("%d ", chunk2[i]);
    }
    printf("\n");

    /* print the size of the chunk */
    printf("%d\n", returnChunkSize(chunk));

    /* print the second chunk */
    for(i2=0; i2<10; i2++) {
        printf("%d ", chunk2[i2]);
    }
    printf("\n");

    /* print the size of the second chunk */
    printf("%d\n", returnChunkSize(chunk2));

    /* free the chunk */
    free(chunk);

    /* free the second chunk */
    free(chunk2);

    return 0;
}
