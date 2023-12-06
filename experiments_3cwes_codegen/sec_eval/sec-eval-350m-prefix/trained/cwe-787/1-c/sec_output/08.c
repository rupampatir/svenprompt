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
    chunk2[1] = chunk[1];
    chunk2[2] = chunk[2];
    chunk2[3] = chunk[3];
    chunk2[4] = chunk[4];
    chunk2[5] = chunk[5];
    chunk2[6] = chunk[6];
    chunk2[7] = chunk[7];
    chunk2[8] = chunk[8];
    chunk2[9] = chunk[9];

    /* set the chunk sizes */
    size = returnChunkSize(&chunk2);
    size2 = returnChunkSize(&chunk);
    if(size!= size2) {
        printf("Error: sizes do not match\n");
        return 1;
    }

    /* print the chunk sizes */
    for(i = 0; i < 10; i++) {
        printf("%d ", size2);
    }
    printf("\n");

    /* print the chunk contents */
    for(i = 0; i < 10; i++) {
        printf("%d |", chunk2[i]);
    }
    printf("\n");
}
