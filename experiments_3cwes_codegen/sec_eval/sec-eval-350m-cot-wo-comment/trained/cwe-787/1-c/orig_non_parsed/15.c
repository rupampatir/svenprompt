
    size2 = returnChunkSize(chunk2);
    if(size2 == -1) {
        printf("Error: Not enough space to copy chunk\n");
        return 1;
    }

    /* copy the chunk into the first chunk */
    for(i = 0; i < size2; i++) {
        chunk[i] = chunk2[i];
    }

    // copy the second chunk into the first chunk
OUTPUT:
    size = returnChunkSize(chunk);
    if(size == -1) {
        printf("Error: Not enough space to copy chunk\n");
        return 1;
    }
}
