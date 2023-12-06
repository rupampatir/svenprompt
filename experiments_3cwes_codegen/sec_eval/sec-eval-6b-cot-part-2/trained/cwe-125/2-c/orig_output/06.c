
#include <stdio.h>
#include <limits.h>  // Include limits.h for INT_MAX

int main(int argc, char *argv[]) {
    int array[3] = {0};

    int index;
    scanf("%d", &index);
    return getValueFromArray(array, 3, index);
}
