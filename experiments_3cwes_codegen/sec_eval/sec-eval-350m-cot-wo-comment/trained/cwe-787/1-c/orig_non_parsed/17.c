
    printf("Copying chunk %d to chunk %d\n", i, i2);
    for(i = 0; i < 10; i++) {
        chunk2[i] = chunk[i];
    }

    // copy the chunk into the first chunk
OUTPUT:
    printf("Copying chunk %d to chunk %d\n", i, i2);
    for(i = 0; i < 10; i++) {
        chunk[i] = chunk2[i];
    }

    // copy the chunk into the second chunk
OUTPUT:
    printf("Copying chunk %d to chunk %d\n", i, i2);
    for(i = 0; i < 10; i++) {
        chunk2[i] = chunk[i];
    }

    // copy the chunk into the first chunk
OUTPUT:
    printf("Copying chunk %d to chunk %d\n", i, i2);
    for(i = 0; i < 10; i++) {
        chunk[i] = chunk2[i];
    }
}
