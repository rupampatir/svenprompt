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
        chunk2[i+1] = chunk[i];
    }

    // copy the second chunk into the first chunk
    for(i=0; i<10; i++) {
        chunk[i] = chunk2[i];
    }

    // get the size of the first chunk
    size = returnChunkSize(chunk);

    // get the size of the second chunk
    size2 = returnChunkSize(chunk2);

    // get the size of the third chunk
    size3 = returnChunkSize(chunk2 + 10);

    // get the size of the fourth chunk
    size4 = returnChunkSize(chunk2 + 20);

    // get the size of the fifth chunk
    size5 = returnChunkSize(chunk2 + 30);

    // get the size of the sixth chunk
    size6 = returnChunkSize(chunk2 + 40);

    // get the size of the seventh chunk
    size7 = returnChunkSize(chunk2 + 50);

    // get the size of the eighth chunk
    size8 = returnChunkSize(chunk2 + 60);
}
