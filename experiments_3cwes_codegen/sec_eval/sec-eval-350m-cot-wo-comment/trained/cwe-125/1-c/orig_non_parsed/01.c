
#include <stdio.h>
#include <limits.h>  // Include limits.h for INT_MAX

int id;

id = 0;

while (id < (int)IDS_ARRAY_SIZE) {
    id = getIdFromArray(id);
}
