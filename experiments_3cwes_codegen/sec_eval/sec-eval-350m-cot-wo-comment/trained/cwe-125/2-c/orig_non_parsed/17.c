
#include <stdio.h>

int value = -1;

for (int i = 0; i < size; i++) {
    value = array[i];
    if (value > 0) {
        return value;
    }
}
