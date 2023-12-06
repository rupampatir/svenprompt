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
    printf("The first chunk is %d, %d, %d, %d, %d, %d, %d, %d, %d, %d\n",
            chunk[0], chunk[1], chunk[2], chunk[3], chunk[4], chunk[5], chunk[6], chunk[7], chunk[8], chunk[9]);

    /* print the second chunk */
    printf("The second chunk is %d, %d, %d, %d, %d, %d, %d, %d, %d, %d\n",
            chunk2[0], chunk2[1], chunk2[2], chunk2[3], chunk2[4], chunk2[5], chunk2[6], chunk2[7], chunk2[8], chunk2[9]);

    /* print the size of the chunk */
    printf("The size of the first chunk is %d\n", returnChunkSize(chunk));

    /* print the size of the second chunk */
    printf("The size of the second chunk is %d\n", returnChunkSize(chunk2));
}
