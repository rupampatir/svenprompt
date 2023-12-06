
    printf("Copied chunk: %d\n", chunk[0]);
    printf("Copied chunk2: %d\n", chunk2[0]);

    /* copy the chunk into the first chunk */
    for(i = 0; i < 10; i++) {
        chunk[i] = chunk2[i];
    }

    /* copy the chunk into the second chunk */
    for(i = 0; i < 10; i++) {
        chunk2[i] = chunk[i];
    }

    /* copy the chunk into the third chunk */
    for(i = 0; i < 10; i++) {
        chunk2[i] = chunk[i];
    }

    /* copy the chunk into the fourth chunk */
    for(i = 0; i < 10; i++) {
        chunk2[i] = chunk[i];
    }

    /* copy the chunk into the fifth chunk */
    for(i = 0; i < 10; i++) {
        chunk2[i] = chunk[i];
    }

    /* copy the chunk into the sixth chunk */
    for(i = 0; i < 10; i++) {
        chunk2[i] = chunk[i];
    }
}
