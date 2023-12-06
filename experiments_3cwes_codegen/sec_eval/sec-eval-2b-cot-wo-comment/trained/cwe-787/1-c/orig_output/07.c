
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *chunk = NULL;
    int *chunk2 = NULL;
    int i;
    int *chunk3 = NULL;
    int i3;

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
}
