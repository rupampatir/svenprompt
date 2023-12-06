
#include <stdio.h>
#include <string.h>

int main() {
    int *chunk3 = NULL;
    int size3 = 0;
    int i3;

    /* allocate a chunk of memory */
    chunk3 = malloc(sizeof(int)*10);
    if(chunk3 == NULL) {
        printf("Error allocating memory\n");
        return 1;
    }
    /* set the size of the chunk */
    chunk3[0] = 10;

    /* copy the chunk into the second chunk */
OUTPUT:
#include <stdio.h>
#include <string.h>

int main() {
    int *chunk4 = NULL;
    int size4 = 0;
    int i4;

    /* allocate a chunk of memory */
    chunk4 = malloc(sizeof(int)*10);
    if(chunk4 == NULL) {
        printf("Error allocating memory\n");
        return 1;
    }
    /* set the size of the chunk */
    chunk4[0] = 10;
}
